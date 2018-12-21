[ ] use "..\..\Common Libraries ADS\MasterUseStmtsADS.inc"
[ ] 
[ ] // Generates a test summary based on the passed in booleans
[+] STRING GenerateTestSummary(STRING sampleID, STRING fileName, BOOLEAN analyte, BOOLEAN probeCheck)
	[ ] STRING filePath
	[ ] 
	[ ] ASK.SetActive()
	[ ] 
	[ ] Filter_By_SampleID(sampleID) // filter tests by passed-in sample ID @link SearchFilter.inc
	[ ] ASK.Web.Browser.TestTable_selectChec.Check() // checks the first row
	[ ] print("Generating Test Summary...")
	[ ] ASK.Web.Browser.GenerateTestSummary.Click() // clicks Generate Test Summary button
	[-] if analyte && probeCheck // if both booleans are true
		[ ] ASK.Web.Browser.AnalyteResultData.Check() // check both boxes
		[ ] ASK.Web.Browser.ProbeCheckData.Check()
		[ ] filePath = PATH + "Test Summary - {fileName}.csv" // set filePath
	[-] if analyte && !probeCheck // if analyte boolean is true AND probe check boolean is false
		[ ] ASK.Web.Browser.AnalyteResultData.Check() // check analyte 
		[ ] ASK.Web.Browser.ProbeCheckData.Uncheck() // uncheck probe check 
		[ ] filePath = PATH + "Test Summary - {fileName}.csv" // set filePath
	[-] if !analyte && probeCheck // if analyte boolean is false AND probe check boolean is true
		[ ] ASK.Web.Browser.AnalyteResultData.Uncheck() // uncheck analyte 
		[ ] ASK.Web.Browser.ProbeCheckData.Check() // check probe check 
		[ ] filePath = PATH + "Test Summary - {fileName}.csv" // set filePath
	[-] if !analyte && !probeCheck // if analyte boolean is FALSE && probe check boolean is FALSE
		[ ] ASK.Web.Browser.AnalyteResultData.Uncheck()
		[ ] ASK.Web.Browser.ProbeCheckData.Uncheck()
		[ ] filePath = PATH + "Test Summary - {fileName}.csv" // set filePath
	[ ] ASK.Web.Browser.OkButton.Click() // click Ok
	[ ] print("Test Summary generated")
	[ ] print("Saving Test Summary...")
	[ ] ASK.SaveAs.TextField.SetText(filePath) // set the file name as FileName
	[ ] ASK.SaveAs.TextField.TypeKeys("<Enter>") // Enter
	[-] if ASK.ConfirmSaveAs.Yes.exists() // if overwrite popup appears
		[ ] ASK.ConfirmSaveAs.Yes.Click() // select yes to overwrite
	[ ] Desktop.WaitForObject("//BUTTON[@id='ok']", 60) // wait for ok button
	[ ] ASK.Web.Browser.OkButton.Click() // click ok
	[ ] print("{filePath} saved")
	[ ] print()
	[ ] 
	[ ] return fileName
[ ] 
[ ] // Generates a curve_fit test summary based on the passed-in booleans
[+] STRING GenerateTestSummaryCurveFit(STRING sampleID, BOOLEAN curveFit)
	[ ] STRING fileName
	[ ] 
	[ ] ASK.SetActive()
	[ ] 
	[ ] Filter_By_SampleID(sampleID) // filter tests by passed-in sample id @link SearchFilter.inc
	[ ] ASK.Web.Browser.TestTable_selectChec.Check() // check checkbox of the first row
	[ ] print("Generating Test Summary...")
	[ ] ASK.Web.Browser.GenerateTestSummary.Click() // click generate test summary button
	[-] if curveFit // if curveFit boolean is true
		[ ] ASK.Web.Browser.AnalyteResultData.Uncheck() // uncheck analyte
		[ ] ASK.Web.Browser.ProbeCheckData.Uncheck() // uncheck probe check
		[ ] ASK.Web.Browser.CurveFitBackground.Check() // check curve fit
		[ ] fileName = PATH + "Test Summary - Curve Fit.csv" // set fileName
	[-] else // curveFit boolean is false
		[ ] // no need to check any boxes, leave as default
		[ ] fileName = PATH + "Test Summary - Analyte and Probe Check.csv" // set fileName
	[ ] ASK.Web.Browser.OkButton.Click() // click ok
	[ ] print("Test Summary generated")
	[ ] print("Saving Test Summary...")
	[ ] ASK.SaveAs.TextField.SetText(fileName) // set save file name as fileName
	[ ] ASK.SaveAs.TextField.TypeKeys("<Enter>") // enter
	[-] if ASK.ConfirmSaveAs.Yes.exists() // if overwrite popup appears
		[ ] ASK.ConfirmSaveAs.Yes.Click() // select yes to overwrite
	[ ] Desktop.WaitForObject("//BUTTON[@id='ok']", 60) // wait for ok
	[ ] ASK.Web.Browser.OkButton.Click() // click ok
	[ ] print("{fileName} saved")
	[ ] print()
	[ ] 
	[ ] return fileName
[ ] 
[ ] // Puts every line from a Test Summary into a list
[+] LIST TestSummaryGetContent(STRING fileName)
	[ ] STRING sLine
	[ ] LIST OF STRING fileContents = {...}
	[ ] 
	[ ] HFILE thisFile = Sys_FileOpen(fileName, FM_READ)
	[-] while (Sys_FileReadLine(thisFile, sLine))
		[ ] ListAppend(fileContents, sLine)
	[ ] Sys_FileClose(thisFile)
	[ ] return fileContents
[ ] 
[ ] // Gets the content headers from the Test Summary
[+] LIST TestSummaryGetContentHeaders(STRING fileName)
	[ ] INT i = 1
	[ ] LIST OF STRING headers = {...}
	[ ] LIST OF STRING fileContents = TestSummaryGetContent(fileName)
	[ ] STRING toAppend
	[ ] 
	[-] while (i < Len(fileContents[8]))
		[ ] toAppend = GetField(fileContents[8], ",", i)
		[-] if toAppend == ""
			[ ] break
		[ ] ListAppend(headers, toAppend)
		[ ] i++
	[ ] return headers
[ ] 
[ ] // Gets the number of columns in the Test Summary
[+] INT TestSummaryGetColumnCount(STRING fileName)
	[ ] LIST OF STRING headers = TestSummaryGetContentHeaders(fileName)
	[ ] return ListCount(headers)
[ ] 
[+] INT TestSummaryGetColumnPos(STRING fileName, STRING pattern)
	[ ] LIST OF STRING headers = TestSummaryGetContentHeaders(fileName)
	[ ] return ListFind(headers, pattern)
[ ] 
[+] STRING TestSummaryGetField(STRING fileName, INT lineNumber, INT column)
	[ ] STRING sLine // String to hold the specified line
	[ ] STRING sField // String to hold the found field
	[ ] LIST OF STRING fileContents = TestSummaryGetContent(fileName)
	[ ] sField = GetField((fileContents[lineNumber]),",",column) // Get the field of the Test Summary export, based on the passed-in parameters
	[ ] return sField
[ ] 
[+] TestSummaryMatchField(STRING fileName, STRING pattern, INT lineNumber, int column)
	[ ] STRING sField = TestSummaryGetField(fileName, lineNumber, column)
	[ ] BOOLEAN bFound = MatchStr(pattern, sField) // Does the expected pattern match the actual Summary Summary export field?
	[-] if (bFound) // they match
		[ ] print(pattern + " is in the Test Summary!")
	[-] else // they do not match
		[ ] LogError(pattern + " is not in the Test Summary!")
[ ] 
[ ] // Determines whether the file's content headers match with the passed-in headers list
[+] TestSummaryHeaders(STRING fileName, LIST lListName)
	[ ] STRING sLine // String to hold the specified line
	[ ] STRING sField // String to hold the found field
	[ ] STRING sHeader // String to hold lListNames headers
	[ ] BOOLEAN bFound // Boolean to determine whether the headers are found
	[ ] INT i = 1 // integer i, used for looping
	[ ] INT iCount = ListCount(lListName) + 1 // INT of the number of headers from the passed-in LIST
	[ ] LIST OF STRING FileContents = {...} // List of Strings to hold all lines
	[ ] 
	[ ] HFILE thisFile = Sys_FileOpen (fileName, FM_READ) // Handle for the passed-in file as READ-ONLY
	[-] while(Sys_FileReadLine(thisFile, sLine)) // while there are lines in the file (not EOF)
		[ ] ListAppend(FileContents, Trim(sLine)) // add the next line to the List of Strings
	[ ] Sys_FileClose(thisFile) // close the file
	[-] while (i < iCount) // while i is less than size of list + 1
		[ ] sField = GetField((FileContents[8]),",",i) // Get the field of the Test Summary export from line 8, column i
		[ ] //sHeader = lListName[i] // sHeader gets initialized to the element (column) of the passed-in list
		[ ] //bFound = MatchStr(sHeader, sField) // Does the expected pattern match the actual  Summary export field?
		[ ] INT iPos = ListFind(lListName, sField)
		[-] if (iPos != 0) // they match
			[ ] print(sField + " is in the Test Summary!")
		[-] else // they do not match
			[ ] LogError(sField + " is not in the Test Summary!")
		[ ] i++
	[ ] 
[ ] 
[ ] // Software Information Verification
[-] SoftwareNameVerification(STRING fileName) // Determine whether "GeneXpert Assay Support Kit" is in the first line in the 2nd column
	[ ] TestSummaryMatchField(fileName, "Assay Support Kit", 1, 2)
[-] SoftwareVersionVerification(STRING fileName) // Determine whether "Software Version" is in the 2nd line in the 1st column
	[ ] TestSummaryMatchField(fileName, "Software Version", 2, 1) 
[-] SystemNameVerification(STRING fileName) // Determine whether "System Name" is in the 3rd line in the 1st column
	[ ] TestSummaryMatchField(fileName, "System Name", 3, 1)
[-] ExportedDateVerification(STRING fileName) // Determine whether "Exported Date" is in the 4th line in the 1st column
	[ ] TestSummaryMatchField(fileName, "Exported Date", 4, 1)
[-] ReportUserNameVerification(STRING fileName) // Determine whether "Report User Name" is in the 5th line in the 1st column
	[ ] TestSummaryMatchField(fileName, "Report User Name", 5, 1)
[ ] 
[ ] // Content Verification
[ ] // Gets the proper headers based on the export filter, and sends the list to TestSummaryHeaders function
[+] TestSummaryHeadersVerification(STRING fileName, BOOLEAN analyte, BOOLEAN probeCheck)
	[ ] LIST lListName // delcare LIST to hold headers
	[ ] STRING message // declare message to hold print message
	[ ] 
	[ ] ListMerge(lListName, UniversalBegin)
	[ ] ListMerge(lListName, UniversalEnd)
	[ ] 
	[-] if analyte && probeCheck // if analyte AND probe check are set to true
		[ ] ListMerge(lListName, AnalyteAndProbeCheckHeaders, 13)
		[ ] message = "Analyte and Probe Check" // set message
	[-] if analyte && !probeCheck // if analyte is true AND probe check is false
		[ ] ListMerge(lListName, AnalyteResultHeaders, 13)
		[ ] message = "Analyte Result" // set message
	[-] if !analyte && probeCheck // if analyte is false AND probe check is true
		[ ] ListMerge(lListName, ProbeCheckHeaders, 13)
		[ ] message = "Probe Check" // set message
	[-] if !analyte && !probeCheck
		[ ] message = "Error"
	[ ] 
	[ ] print()
	[ ] print("Checking if {message} Test Summary contains the proper data...")
	[ ] TestSummaryHeaders(fileName, lListName) // run TestSummaryHeaders function with  headers list
	[ ] print()
[ ] 
[ ] // Gets the proper headers based on curve_fit export filter, and sends the list to TestSummaryHeaders function
[+] TestSummaryHeadersVerificationCurveFit(STRING fileName, BOOLEAN curveFit)
	[ ] List lListName // delcare LIST to hold headers
	[ ] STRING message // declare message to hold print message
	[ ] 
	[ ] ListMerge(lListName, UniversalBegin)
	[ ] ListMerge(lListName, UniversalEnd)
	[ ] 
	[-] if curveFit // if curveFit boolean is true
		[ ] ListMerge(lListName, CurveFitAndBackgroundHeaders, 13)
		[ ] message = "Curve Fit" // set message
	[ ] 
	[ ] print()
	[ ] print("Checking if {message} Test Summary contains the proper data...")
	[ ] TestSummaryHeaders(fileName, lListName) // run TestSummaryHeaders function with list of headers
	[ ] print("{message} Test Summary contains the proper data!")
	[ ] print()
[ ] 
[ ] // Converts each individual test error into list elements
[+] LIST TestSummaryErrorsToList(STRING file)
	[ ] LIST OF STRING errors
	[ ] 
	[ ] INT i = 0
	[ ] INT errorPos = TestSummaryGetColumnPos(file, "Error") // gets the position of the error column
	[ ] STRING sError = TestSummaryGetField(file, 10, errorPos) // gets the field from the test error column
	[ ] 
	[-] for i = 1 to 20 step 1 // loop 20 times
		[ ] STRING sSegment = GetField(sError, "|", i) // sSegment = the field between index i and "|"
		[ ] ListAppend(errors, sSegment) // append that field to LIST errors
	[ ] return errors // return the list after for loop completes
[ ] 
[ ] // Verifies the 'summaryCalc' runtime parameter fields performs as it's supposed to
[+] SummaryCalcVerification(STRING preCalc, STRING summaryCalc)
	[ ] LIST summaryCalcHeaders	= TestSummaryGetContentHeaders(summaryCalc)
	[ ] INT preCalcColumnCount	= TestSummaryGetColumnCount(preCalc)
	[ ] INT i = 1
	[ ] 
	[ ] print("'summaryCalc' runtime parameter verification:")
	[ ] print()
	[-] for i = 1 to preCalcColumnCount step 1 // loop through each Test Summary column
		[ ] STRING pField = TestSummaryGetField(preCalc, 10, i) // field before summaryCalc
		[ ] STRING sField = TestSummaryGetField(summaryCalc, 10, i) // field after summaryCalc
		[ ] 
		[ ] print("Before 'summaryCalc' field {summaryCalcHeaders[i]} was : {pField}")
		[ ] print("After  'summaryCalc' field {summaryCalcHeaders[i]} is  : {sField}")
		[ ] print()
		[ ] BOOLEAN bFound = MatchStr(pField, sField) // boolean set to true if they are the same, false if they are not
		[-] if !bFound // if they are not the same
			[ ] LogWarning("DIFFERENCE")
			[ ] print()
	[ ] print("================================================================")
[ ] 
[ ] // Verifies the 'summaryCalc RecalculateWithOriginal' runtime parameter performs as it's supposed to
[+] SummaryCalcRecalcVerification(STRING preCalc, STRING summaryCalcRecalc)
	[ ] LIST summaryCalcRecalcHeaders	= TestSummaryGetContentHeaders(summaryCalcRecalc)
	[ ] INT preCalcColumnCount			= TestSummaryGetColumnCount(preCalc)
	[ ] INT i = 1
	[ ] 
	[ ] print()
	[ ] print("'summaryCalc RecalculateWithOriginal' runtime parameter verification:")
	[ ] print()
	[-] for i = 1 to preCalcColumnCount step 1 // loop through each Test Summary column
		[ ] STRING pField2 = TestSummaryGetField(preCalc, 10, i) // field before summaryCalc RecalculateWithOriginal
		[ ] STRING sField2 = TestSummaryGetField(summaryCalcRecalc, 10, i) // field before summaryCalc RecalculateWithOriginal
		[ ] 
		[ ] print("Before 'summaryCalc WithRecalculateOriginal' field {summaryCalcRecalcHeaders[i]} was : {pField2}")
		[ ] print("After  'summaryCalc WithRecalculateOriginal' field {summaryCalcRecalcHeaders[i]} is  : {sField2}")
		[ ] print()
		[ ] BOOLEAN bFound2 = MatchStr(pField2, sField2) // boolean set to true if they are the same, false if they are not
		[-] if !bFound2
			[ ] LogWarning("DIFFERENCE")
			[ ] print()
	[ ] 
	[ ] print("================================================================")
	[ ] print()
[ ] 
[ ] // Verifies the 'engr' runtime parameter performs as it's supposed to
[+] EngrVerification(STRING engr)
	[ ] LIST engrHeaders
	[ ] 
	[ ] print("'Engr' runtime parameter verification:")
	[ ] print()
	[ ] ListMerge(engrHeaders, UniversalBegin)
	[ ] ListMerge(engrHeaders, AnalyteAndProbeCheckHeaders)
	[ ] ListMerge(engrHeaders, UniversalEnd)
	[ ] ListMerge(engrHeaders, Engr)
	[ ] 
	[ ] TestSummaryHeaders(engr, engrHeaders)
	[ ] 
	[ ] print()
	[ ] print("================================================================")
	[ ] print()
[ ] 
[ ] // Verifies the 'resCorrOutput' runtime parameter performs as it's supposed to
[+] ResCorrOutputVerification(STRING resCorrOutput)
	[ ] print("'resCorrOutput' runtime parameter verification:")
	[ ] print()
	[ ] HFILE resCorrOutputFile
	[ ] resCorrOutputFile = FileOpen(resCorrOutput, FM_READ) // attempts to open the resCorrOutput file
	[ ] 
	[ ] print("If no error is thrown, resCorrOutput file was generated properly")
	[ ] print()
	[ ] print("================================================================")
	[ ] print()
[ ] 
[ ] // Verifies the 'show_target_quantitative_values' runtime parameter performs as it's supposed to
[+] show_target_quantitative_valuesVerification(STRING target_quant)
	[ ] LIST target_quantHeaders
	[ ] 
	[ ] print("'show_target_quantitative_values' runtime parameter verification:")
	[ ] print()
	[ ] ListMerge(target_quantHeaders, UniversalBegin)
	[ ] ListMerge(target_quantHeaders, AnalyteAndProbeCheckHeaders)
	[ ] ListMerge(target_quantHeaders, show_target_quant_values)
	[ ] ListMerge(target_quantHeaders, UniversalEnd)
	[ ]  
	[ ] TestSummaryHeaders(target_quant, target_quantHeaders)
[ ] 
