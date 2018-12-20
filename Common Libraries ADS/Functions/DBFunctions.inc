[ ] // Gets all the SQLHEADERS that are the same as the Test Summary headers
[ ] // ALLHEADERS and SQLHEADERS correspond, so the position of an element from ALLHEADERS, will be the same position of an element from SQLHEADERS
[ ] // Steps:
[ ] // 		1. Get the ALLHEADERS position of a Test Summary Header
[ ] //		2. Use that position to get the position of the SQLHEADERS element
[ ] //		3. Translate the SQLHEADER element, to replace "sID" with the actual sID
[ ] //		4. Use ListFind to see if that SQLHEADER element is already in the list of SQLStatements. Store that number
[ ] //		5. Append the newest SQLHEADER element to SQLStatements
[ ] //		6. If step 4 finds that the element is already in the list, delete the element, translate the OFFSET statement to get the 2nd row, and insert that translation to SQLStatements
[ ] //		7. Do this for as many tsHeaders there are. Return the SQLStatements LIST
[-] LIST SQLStatements(STRING fileName, STRING sID)
	[ ] LIST OF STRING tsHeaders = TestSummaryGetContentHeaders(fileName) // Gets all Test Summary Headers
	[ ] LIST OF STRING SQLStatements // Declare list of string
	[ ] INT i = 1 // variable for looping
	[ ] INT offset = 0
	[ ] INT iPos // variable to hold position of tsHeaders within ALLHEADERS
	[ ] 
	[-] while i <= ListCount(tsHeaders) // while i is less than or equal to the number of headers in the Test Summary report
		[ ] iPos = ListFind(ALLHEADERS, tsHeaders[i]) // position of the tsHeader element in ALLHEADERS
		[-] if iPos != 0 // if tsHeaders element exists in ALLHEADERS
			[ ] STRING replaced = StrTran(SQLHEADERS[iPos], "sID", sID) // replaced is set to the translating SQLHEADER at the same position 
			[-] if replaced != ""
				[ ] INT x = ListFind(SQLStatements, replaced) // get the position {x} if replaced is already in the SQLStatements list
			[ ] ListAppend(SQLStatements, replaced) // append the corresponding SQLHEADER with the same position as in the ALLHEADERS
			[-] if x != 0 && x != 16 // if x does not equal 0, replaced is already in SQLStatements
				[-] if x == 13
					[ ] offset++
				[ ] ListDelete(SQLStatements, i)
				[ ] STRING sOffset = StrTran(replaced, "OFFSET 0 ROWS", "OFFSET {offset} ROWS")
				[ ] ListAppend(SQLStatements, sOffset) // insert the translated string of replaced, but with OFFSET 1 ROWS, into position x
		[ ] i++ // increment loop
		[ ] x = 0
	[ ] return SQLStatements // return SQLStatements LIST
[ ] 
[ ] // Translates DB output into Test Summary output for certain columns that do not match
[ ] // TODO: Add more as needed
[-] LIST DBTranslations(LIST dbFields, STRING file)
	[ ] LIST tsHeaders = TestSummaryGetContentHeaders(file)
	[ ] INT i = 1 // variable for looping 
	[ ] STRING properField // variable to hold the correct output
	[ ] LIST properFields // list to hold all the correct outputs
	[-] while i <= ListCount(tsHeaders) // while i is less than or equal to the number of headers
		[-] switch(tsHeaders[i])
			[+] case "Reagent Lot ID" // Reagent lots are either 00XXX or XXX
				[ ] INT column = TestSummaryGetColumnPos(file, "Reagent Lot ID")
				[ ] STRING tsField = TestSummaryGetField(file, 10, column)
				[-] if SubStr(tsField, 1, 1) == "0"
					[ ] properField = SubStr(dbFields[i], 1) // set properField to the substring of dbFields element with leading 0s
				[-] else
					[ ] properField = SubStr(dbFields[i], 3) // set properField to the substring of dbFields element without leading 0s
				[ ] ListAppend(properFields, properField) // append to list of properFields
				[ ] break
			[+] case "Test Type" // Test Types in the DB are digits, change them to words
				[-] switch(dbFields[i])
					[-] case "0"
						[ ] properField = "Specimen"
						[ ] break
					[-] case "1"
						[ ] properField = "" // TODO:
						[ ] break
					[-] case "2"
						[ ] properField = "" // TODO:
						[ ] break
				[ ] ListAppend(properFields, properField)
				[ ] break
			[+] case "Status" // Status in the DB are digits, change them to words
				[+] switch(dbFields[i])
					[-] case "0"
						[ ] properField = "" // TODO:
						[ ] break
					[-] case "1"
						[ ] properField = "" // TODO:
						[ ] break
					[-] case "2"
						[ ] properField = "Done"
						[ ] break
				[ ] ListAppend(properFields, properField)
			[+] case "Test Result" // Test Results in the DB are @labels, change them to WORDS
				[-] switch(dbFields[i])
					[-] case "@label_result_negative"
						[ ] properField = "NEGATIVE"
						[ ] break
					[-] case "@label_result_positive"
						[ ] properField = "POSITIVE"
						[ ] break
					[-] case "@label_result_invalid"
						[ ] properField = "INVALID"
						[ ] break
					[-] case "@label_result_error"
						[ ] properField = "ERROR"
						[ ] break
					[-] case "@lable_result_no_result"
						[ ] properField = "NO RESULT"
						[ ] break
					[-] case "MRSA @label_result_negative|SA @label_result_negative"
						[ ] properField = "MRSA NEGATIVE;SA NEGATIVE"
						[ ] break
				[ ] ListAppend(properFields, properField)
				[ ] break
			[+] case "Patient ID" // Patient IDs are frequently NULL, change them to empty strings
				[-] if dbFields[i] == NULL
					[ ] properField = ""
				[ ] ListAppend(properFields, properField)
				[ ] break
			[+] case "Usage" // Usage in the DB are digits, change them to words
				[-] switch(dbFields[i])
					[-] case "0"
						[ ] properField = "Target"
						[ ] break
					[-] case "1"
						[ ] properField = "" // TODO:
						[ ] break
					[-] case "2"
						[ ] properField = "" // TODO:
						[ ] break
					[-] case "3"
						[ ] properField = "EC"
						[ ] break
				[ ] ListAppend(properFields, properField)
			[-] case "Target #" // Target # is a hexadecimal value in DB, change them to decimal
				[ ] properField = ConvertHex2Dec(dbFields[i]) // {@link DBFunctions.inc#ConvertHex2Dec(STRING)}
				[ ] ListAppend(properFields, properField)
			[+] default
				[ ] properField = dbFields[i]
				[ ] ListAppend(properFields, properField)
				[ ] break
		[ ] i++
	[ ] return properFields
[ ] 
[ ] // Converts a hexadecimal string to a decimal string
[-] STRING ConvertHex2Dec (STRING sHex)
	[ ] int iDec = 0
	[ ] // Convert the hex string to lower case
	[ ] sHex = lower(sHex)
	[ ] // remove an 0x from the start if it exists
	[-] if substr(sHex, 1, 2) == "0x"
		[ ] sHex = substr(sHex, 3)
	[ ] int iLen = len(sHex)
	[ ] int iAsc, i
	[ ] // Now loop through each charater from the end backwards adding it the sum
	[-] for (i = iLen; i > 0; i--)
		[ ] iAsc = Asc(sHex[i])
		[-] if (iAsc > 96)
			[ ] iAsc = iAsc - 87 // "f" => 102 - 87 = 15
		[-] else
			[ ] iAsc = Val(sHex[i]) // This must be a regular 0-9 digit
		[ ] INT iHex2Dec = (iAsc * (16**(iLen-i))) // Now convert the hexvalue+position to decimal
		[ ] iDec = iDec + iHex2Dec
	[ ] return "{iDec}"
[ ] 
[-] INT CountAnalytes(HANDLE hInfoDB)
	[ ] INT analyteCount = 1
	[-] while DB_FetchNext(hInfoDB) 
		[ ] analyteCount++
	[ ] return analyteCount
