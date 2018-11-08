[ ] 
[ ] 
[ ] use "..\..\Common Libraries\MasterUseStmts.inc"
[ ] use "..\..\Common Libraries\types\Verification Types.inc"
[ ] use "..\..\Common Libraries\constants\Constants.inc"
[ ] 
[ ] 
[ ] // START OF UPDATES ON NOV 10 2014 2 PM----------------------------------------------------------------------------------------
[ ] 
[ ] 
[ ] 
[ ] const STRING COMMA_ESCAPED="&COMMA"
[ ] 
[ ] 
[ ] // This function will select the given Sample ID from the View Another Test dialog and make it active in the View Results screen
[-]  SelectTest (STRING sSampleID)
	[ ] 
	[ ] print ("Finding test with SID {sSampleID}")
	[ ] 
	[ ] 
	[ ] // GeneXpertDx.SelectTestToBeViewed.OK.Select()
	[ ] 
	[ ] GeneXpertDx.SetActive( )
	[ ] sleep (1)
	[ ] GeneXpertDx.ViewResultsToggleButton.Toggle()
	[ ] sleep (1)
	[ ] GeneXpertDx.ViewResultsWorkspace.ViewTestButton.Click()
	[ ] 
	[-] do
		[ ] sleep(2)
		[ ] // The following line was changed for UI in Dx5.1 EG
		[ ] // TABLECELL tcCell=GeneXpertDx.SelectTestToBeViewed.TestPanel2.FindCell(sSampleID) // was
		[ ] TABLECELL tcCell=GeneXpertDx.SelectTestToBeViewed.SelectTestj2.FindCell(sSampleID) // updated
		[ ] 
		[ ] // The following line was changed for UI in Dx5.1 EG
		[ ] // GeneXpertDx.SelectTestToBeViewed.TestPanel2.SelectRow(tcCell.Row)  //was
		[ ] GeneXpertDx.SelectTestToBeViewed.SelectTestj2.SelectRow(tcCell.Row)  // current
		[ ] sleep(2)
		[ ] GeneXpertDx.SelectTestToBeViewed.OKButton.Click()
		[ ] sleep(2)
		[ ] 
		[ ] GeneXpertDx.SetActive( )
	[-] except
		[ ] LogError("Could Not Find Test {sSampleID}")
		[ ] // GeneXpertDx.SelectTestToBeViewed.TestPanel2.ClickCell(1,1)  // updated for Dx5.1 EG
		[ ] GeneXpertDx.SelectTestToBeViewed.SelectTestj2.ClickCell(1,1)
		[ ] 
		[ ] sleep(2)
		[ ] GeneXpertDx.SelectTestToBeViewed.OKButton.Click()
		[ ] sleep(2)
		[ ] 
		[ ] 
	[ ] 
[ ] 
[ ] 
[ ] 
[+] VerifyErrorStatus(REC_RESULT rExpected)
	[ ] //Error Status
	[ ] REC_RESULT rActual
	[-] if rExpected.sErrorStatus != NOTAPPLICABLE
		[ ] GeneXpertDx.ViewResultsWorkspace.ErrorsTab.Select(SUPPORT_TAB)
		[ ] // GeneXpertDxSystem.TabbedPane.Select("Test Result")
		[ ] rActual.sErrorStatus = GeneXpertDx.ViewResultsWorkspace.ErrorStatusTextField.GetText()
		[-] if rExpected.sErrorStatus != rActual.sErrorStatus
			[ ] LogError("Error Status is not valid for sample: {rExpected.sSampleID}")
		[ ] print("Expected Error Status: " + rExpected.sErrorStatus)
		[ ] print("Actual Error Status: " + rActual.sErrorStatus)
		[ ] print ()
		[ ] STRING sReagentLotID=""//GeneXpertDx.Support.ReagentLotID.GetText()
		[-] if LEN(sReagentLotID)==0
			[ ] sReagentLotID="<BLANK>"
		[ ] print("When checking the error status, we can get the reagent lot ID. This lot is {sReagentLotID}")
		[ ] print ()
		[ ] 
		[ ] 
		[ ] 
		[ ] GeneXpertDx.ViewResultsWorkspace.TestResultTab.Select(TEST_RESULT_TAB)
	[ ] 
[ ] 
[ ] 
[ ] 
[ ] 
[+] VerifyTestDisclaimer(REC_RESULT rExpected)
	[ ] 
	[ ] 
	[-] if (rExpected.sDisclaimer != SKIP_STRING_VERIFICATION_FLAG ) 
		[ ] // Variable declarations
		[ ] //
		[ ] STRING sActualDisclaimer =  Space(0)
		[ ] STRING sExpectedDisclaimer =  Space(0)
		[ ] INTEGER iTestDisclaimerFontSize = 0
		[ ] 
		[ ] // BOOLEAN bCanEditDisclaimer = GeneXpertDx.ViewResultsWorkspace.DisclaimerTextField.Editable()
		[ ] 
		[ ] 
		[ ] sActualDisclaimer=GeneXpertDx.ViewResultsWorkspace.DisclaimerTextField.GetText()
		[ ] 
		[-] if rExpected.sDisclaimer != NOTAPPLICABLE
			[ ] sExpectedDisclaimer = rExpected.sDisclaimer
			[ ] 
		[-] else
			[ ] sExpectedDisclaimer=GeneXpertDx.ViewResultsWorkspace.DisclaimerTextField.GetText()
		[ ] 
		[ ] 
		[ ] // Add a space to the end of the concatenated string of disclaimers if the string is less than 256 characters
		[-] if LEN(sExpectedDisclaimer) < DISCLAIMER_MAX_LENGTH
			[ ] sExpectedDisclaimer = sExpectedDisclaimer + Space(1)
		[ ] 
		[ ] //Trim to max allowed length
		[ ] sExpectedDisclaimer=Left(sExpectedDisclaimer, DISCLAIMER_MAX_LENGTH)
		[ ] sActualDisclaimer=  Left(sActualDisclaimer, DISCLAIMER_MAX_LENGTH)
		[ ] 
		[ ] 
		[-] if (sActualDisclaimer!=sExpectedDisclaimer)
			[ ] LogError("Test Disclaimer is not valid for sample: {rExpected.sSampleID}")
		[ ] print("Expected Test Disclaimer:'{sExpectedDisclaimer}'")//Left(sExpectedDisclaimer,DISCLAIMER_MAX_LENGTH
		[ ] print("  Actual Test Disclaimer:'{sActualDisclaimer}'")
		[ ] print()
		[ ] 
		[-] // if bCanEditDisclaimer
			[ ] // LogError("The text area for disclaimer may be edited by the user for test with SID {}")
		[-] // else
			[ ] // print("The test disclaimer may not be edited, as expected.")
		[ ] // print()
		[ ] 
		[ ] // iTestDisclaimerFontSize = GeneXpertDx.ViewResultsWorkspace.DisclaimerTextField.GetFontSize()
		[ ] 
		[ ] // print("Actual Test Disclaimer Font Size: {iTestDisclaimerFontSize}")
	[ ] 
	[ ] 
[ ] 
[ ] 
[ ] 
[ ] 
[ ] // This function parses the HTML from the main result text 
[-] FindTestResultTextInHTML(STRING sExpectedResultText,LIST of STRING lsHTMLTestResult,out INTEGER iResultTextRowNumber, out STRING sActualResultColor, out STRING sActualFontColor, out STRING sRowClassForCSS optional)
	[ ] iResultTextRowNumber=0
	[ ] sActualResultColor="<NOT FOUND!!>"
	[ ] sActualFontColor="<NOT FOUND!!>"
	[ ] sRowClassForCSS="<NOT FOUND!!>"
	[ ] LIST of STRING lsTableRowStrings= {}
	[ ] LIST of STRING lsCSSRowStrings= {}
	[ ] 
	[ ] STRING sAsSingleString="", sIndividualString
	[-] for each sIndividualString in lsHTMLTestResult
		[ ] sAsSingleString=sAsSingleString+LTRIM(sIndividualString)
		[ ] //note down individual strings that had table row tag
		[-] if MatchSTr("*<tr class=*",LTRIM(sIndividualString))
			[ ] ListAppend( lsTableRowStrings, (LTRIM(sIndividualString)))
		[ ] //note down individual strings containing css data
		[-] if MatchSTr("tr.*",LTRIM(sIndividualString))
			[ ] ListAppend(lsCSSRowStrings, sIndividualString)
	[ ] 
	[ ] print("Searching for '{sExpectedResultText}' in the following:")
	[ ] print(sAsSingleString)
	[ ] print()
	[ ] INTEGER iTableCellNo=1
	[ ] INTEGER iNumberOfNonBlank=0
	[ ] BOOLEAN bFoundResultText=false
	[ ] 
	[ ] 
	[-] while GetField(sAsSingleString,"<td>",iTableCellNo)!="" && !bFoundResultText
		[ ] iTableCellNo++
		[ ] STRING sTableCellString=GetField(sAsSingleString,"<td>",iTableCellNo)
		[ ] sTableCellString=SubStr(sTableCellString,1,StrPos("</td>",sTableCellString)-1)
		[ ] 
		[ ] // Handle chars that were excaped for the html
		[ ] sTableCellString=StrTran(sTableCellString,"&lt;","<")
		[ ] sTableCellString=StrTran(sTableCellString,"&gt;",">")
		[ ] 
		[ ] 
		[ ] sTableCellString=Trim(sTableCellString)
		[ ] 
		[-] //while MatchStr(" * ",sTableCellString)
			[ ] //StrTran(sTableCellString," "+" "," ")
		[ ] 
		[-] if sTableCellString!=""
			[ ] iNumberOfNonBlank++
		[ ] 
		[-] if (sTableCellString==sExpectedResultText)
			[ ] iResultTextRowNumber=iNumberOfNonBlank
			[ ] //print(lsTableRowStrings[iResultTextRowNumber])
			[ ] sRowClassForCSS=lsTableRowStrings[iResultTextRowNumber]
			[ ] sRowClassForCSS=SubStr(sRowClassForCSS,StrPos('"',sRowClassForCSS)-1)
			[ ] sRowClassForCSS=StrTran(sRowClassForCSS,'<tr class','')
			[ ] sRowClassForCSS=StrTran(sRowClassForCSS,'>','')
			[ ] sRowClassForCSS=StrTran(sRowClassForCSS,'"','')
			[ ] sRowClassForCSS=StrTran(sRowClassForCSS,'=','')
			[ ] print("The table cell was found in a row with a CSS class called '{sRowClassForCSS}'")
			[ ] print ("Table row #{iResultTextRowNumber} contains '{sTableCellString}'")
			[ ] print()
			[ ] print("Expected Result Text: '{sExpectedResultText}'")
			[ ] print("Actual Result Text:   '{sTableCellString}'")
			[ ] print ()
			[ ] bFoundResultText=true
			[ ] 
		[ ] 
		[ ] 
	[ ] // Check colors
	[ ] STRING sCSSRowString
	[-] for each sCSSRowString in lsCSSRowStrings
		[ ] //print(sCSSRowString)
		[ ] //print ("*tr.{sRowClassForCSS} "+CHR(123)+"*")
		[ ] //print (sCSSRowString)
		[-] if MatchSTr("*tr.{sRowClassForCSS} "+CHR(123)+"*",(sCSSRowString))
			[ ] 
			[ ] 
			[ ] print ("Examining {sCSSRowString}")
			[ ] //Look for the background-color
			[ ] INTEGER iBGColorPosInRow=StrPos(BACKGROUNDCOLOR,sCSSRowString)
			[ ] //DEBUG COMMENT:
			[ ] // print ('The BG color is found at position {iBGColorPosInRow} in the string for this row')
			[ ] //Extract the 6 character hex color representation 
			[ ] //                         String with style ,start at just after background-color: #, take 6 chars
			[ ] sActualResultColor=SubStr(sCSSRowString, iBGColorPosInRow+LEN(BACKGROUNDCOLOR),6)
			[ ] //print (sActualResultColor)
			[ ] 
			[ ] INTEGER iFontColorPosInRow=StrPos(FONTCOLOR,sCSSRowString)
			[ ] //DEBUG COMMENT:
			[ ] // print ('The font color is found at position {iFontColorPosInRow} in the string for this row')
			[ ] //Extract the 6 character hex color representation 
			[ ] //                         String with style ,start at just after color: #, take 6 chars
			[ ] sActualFontColor= SubStr(sCSSRowString, iFontColorPosInRow+LEN(FONTCOLOR),6)
			[ ] //print (sActualFontColor)
	[ ] 
	[ ] 
	[ ] 
	[ ] 
[ ] 
[ ] 
[ ] 
[ ] 
[ ] // New Verify Result Main adapted from the Dx 4.7 common libs Nov 10 2014
[-] VerifyTestResultMain (REC_RESULT rExpected)
	[ ] //
	[ ] // Variable declarations
	[ ] //
	[ ] LIST OF STRING lsHTMLTestResult
	[ ] STRING sHTMLString = ' '
	[ ] INTEGER iPos = 0
	[ ] REC_RESULT rActual
	[ ] BOOLEAN bStyleNotFound = true
	[ ] STRING sRow = ''
	[ ] 
	[ ] print()
	[ ] print("Verifing main test result... ")
	[ ] //Make sure we are viewing the correct tab
	[ ] GeneXpertDx.ViewResultsWorkspace.TestResultTab.Select(TEST_RESULT_TAB)
	[ ] 
	[ ] print()
	[ ] // Verify Sample ID
	[-] if rExpected.sSampleID != NOTAPPLICABLE
		[ ] rActual.sSampleID = GeneXpertDx.ViewResultsWorkspace.SampleIDTextField.getText()
		[-] if rExpected.sSampleID != rActual.sSampleID
			[ ] LogError("Sample ID is not valid")
		[ ] print("Expected Sample ID: " + rExpected.sSampleID)
		[ ] print("Actual Sample ID: " + rActual.sSampleID)
		[ ] print ()
	[ ] 
	[ ] //Verify assay name
	[-] if rExpected.sAssayName != NOTAPPLICABLE
		[ ] rActual.sAssayName = GeneXpertDx.ViewResultsWorkspace.AssayNameTextField.GetText()
		[-] if rExpected.sAssayName != rActual.sAssayName
			[ ] LogError("Assay name is not valid for sample: {rExpected.sSampleID}")
		[ ] print("Expected Assay Name: " + rExpected.sAssayName)
		[ ] print("Actual Assay Name: " + rActual.sAssayName)
		[ ] print ()
	[ ] 
	[ ] print("When checking the assay name, we can get the version. This assay version is '{GeneXpertDx.ViewResultsWorkspace.VersionNumberTextField.GetText()}'.")
	[ ] print ()
	[ ] 
	[ ] //Status
	[-] if rExpected.sStatus != NOTAPPLICABLE
		[ ] rActual.sStatus = GeneXpertDx.ViewResultsWorkspace.TestStatusTextField.GetText()
		[-] if rExpected.sStatus != rActual.sStatus
			[ ] LogError("Error Status is not valid for sample: {rExpected.sSampleID}")
		[ ] print("Expected Status: " + rExpected.sStatus)
		[ ] print("Actual Status: " + rActual.sStatus)
		[ ] print ()
		[ ] 
	[ ] 
	[ ] // Main test result
	[ ] lsHTMLTestResult = GeneXpertDx.ViewResultsWorkspace.TestResultTextField.GetMultiText()
	[ ] //ListPrint(lsHTMLTestResult)
	[ ] 
	[ ] 
	[ ] // If the expected result has been defined in the data spreadsheet...
	[-] if rExpected.sResultText != NULL
		[ ] // Several space characters must be prepended to align the expected result with the html
		[ ] STRING sExpectedResultTextPadded = PAD + rExpected.sResultText 
		[ ] 
		[ ] // iPos tells us which row in the extracted HTML strings contains the expected result text
		[ ] STRING sCSSRowClassName
		[ ] STRING sActualFontColor
		[ ] STRING sActualResultColor
		[ ] 
		[ ] FindTestResultTextInHTML(rExpected.sResultText,lsHTMLTestResult,iPos, sActualResultColor, sActualFontColor, sCSSRowClassName)
		[ ] // The last parameter is optional; it is currently used to verify position.
		[ ] //FindTestResultTextInHTML(rExpected.sResultText,lsHTMLTestResult,iPos, sActualResultColor, sActualFontColor)
		[ ] 
		[ ] //if iPos was returned as 0, this means it was not found, so...
		[-] if iPos == 0
			[ ] //Is the Sample ID even correct?
			[-] if GeneXpertDx.ViewResultsWorkspace.SampleIDTextField.getText() ==rExpected.sSampleID
				[ ] print()
				[ ] print("_____________________________")
				[ ] print(GeneXpertDx.ViewResultsWorkspace.SampleIDTextField.getText())
				[ ] print("_____________________________")
				[ ] print()
				[ ] LogError("Result text is not valid for sample: {rExpected.sSampleID}")
				[ ] print("Expected Result Text: '{rExpected.sResultText}'")
				[ ] print("Actual Result Text:  <NOT FOUND IN GUI>")
				[ ] print ()
				[ ] ListPrint(lsHTMLTestResult)
				[ ] print ()
			[-] else
				[ ] LogError("Could not verify result text for sample '{rExpected.sSampleID}'")
				[ ] print("Expected Result Text: " + rExpected.sResultText)
				[ ] print ("Note that the currently selected test in the GUI has sample ID of '{GeneXpertDx.ViewResultsWorkspace.SampleIDTextField.GetText()}'")
				[ ] print ()
			[ ] //Else, if text of result is found....
		[-] else
			[ ] // Expected and actual are printed by the find function
			[ ] print('Actual Result Color:     {sActualResultColor}')
			[ ] print('Expected Result Color:   {rExpected.sResultColor}')
			[ ] //If they do not match, log an error
			[-] if sActualResultColor!=rExpected.sResultColor
				[ ] LogError('Result Color is incorrect for result {rExpected.sResultText} in test with SID of {rExpected.sSampleID}' )
			[ ] print()
			[ ] 
			[ ] // Show both the actual and expected result font colors:
			[ ] print('Actual Font Color:     {sActualFontColor}')
			[ ] print('Expected Font Color:   {rExpected.sResultFont}')
			[ ] //Log error if they don't match
			[-] if sActualFontColor!=rExpected.sResultFont
				[ ] LogError('Result Text Color is incorrect for result {rExpected.sResultText} in test with SID of {rExpected.sSampleID}' )
			[ ] 
			[ ] print()
			[ ] // Note that in rare cases the class will not exactly match this assumption;  Most silk
			[ ] // data files with this have the expected position value altered to compensate
			[-] if sCSSRowClassName!='row'+Str(rExpected.iPosition - 1)
				[ ] LogError('The test result line was found an incorrect position')
				[ ] print('The test result line was found in with the class {sCSSRowClassName}, expected with a class of row'+Str(rExpected.iPosition - 1))
			[ ] 
		[ ] 
		[ ] 
		[ ] 
		[ ] 
	[ ] //If the expected result was NULL  (this is unchanged from old function
	[-] else
		[ ] print("Expected Result Text: NULL")
		[ ] iPos = ListFind(lsHTMLTestResult, ENDTABLETAG)
		[-] if iPos != 0
			[ ] LogError("Result text is not valid for sample: {rExpected.sSampleID}")
			[ ] ListPrint(lsHTMLTestResult)
		[ ] 
		[ ] print("Actual Result Text: NULL")
		[ ] print ()
[ ] 
[ ] 
[ ] 
[ ] // 
[+] // VerifyErrorMessages(STRING gsDSNConnectExpectedErrors, STRING sExpectedErrorsExcelSheetName)
	[ ] // // Variable declarations
	[ ] // //       
	[ ] // 
	[ ] // // handle to database
	[ ] // handle hDB,  hErrors
	[ ] // REC_TEST_ERROR_MESSAGE rExpectedError
	[ ] // 
	[ ] // 
	[ ] // 
	[ ] // // Verify Errors with an approach similar to that used to verify result text
	[ ] // print ("Verifying Errors...")
	[ ] // //Connect to Excel and get expected results spreadsheet
	[ ] // hDB = DB_Connect (gsDSNConnectExpectedErrors)
	[ ] // //Select from the appropriate tab of the spreadsheet
	[ ] // hErrors= DB_ExecuteSQL(hDB, "Select * from`{sExpectedErrorsExcelSheetName}$`")
	[ ] // STRING sPrev=""
	[-] // while (DB_FetchNext (hErrors, rExpectedError))
		[-] // if (sPrev!=rExpectedError.sSampleID)
			[ ] // // Select the test only if it is new
			[ ] // SelectTest(rExpectedError.sSampleID)  
			[ ] // sPrev=rExpectedError.sSampleID
		[ ] // 
		[ ] // 
		[ ] // // GeneXpertDx.CartridgeComboBox.Select( rExpectedError.sCartridge )
		[ ] // VerifyError(rExpectedError,FALSE)
		[ ] // // GeneXpertDx.CartridgeComboBox.Select( "Overall" )
		[ ] // // VerifyError(rExpectedError,FALSE)
		[ ] // //GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.TestResult.Select( TEST_RESULT_TAB)
		[ ] // 
	[ ] // //Close connection to errors spreadsheet
	[ ] // DB_FinishSQL(hErrors)
	[ ] // DB_Disconnect(hDB)
[ ] 
[ ] 
[ ] 
[ ] 
[ ] // The following function is used to find an analyte when both the name and cartridge must match
[+] // FindAnalyteRowMultiCart(STRING sAnalyteName, STRING sCart, STRING sSampleID, out INTEGER iAnalytePos)
	[ ] // iAnalytePos = 0
	[ ] // 
	[ ] // INTEGER iTotalRows= (GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetRowCount())
	[ ] // INTEGER i = 1
	[ ] // 
	[ ] // print ("There are a total of {iTotalRows} for cart {sCart}, started looking at {i}")
	[-] // for (i = 1; i<= iTotalRows ; i++)
		[ ] // BOOLEAN bNamesMatch = (sAnalyteName == GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(i, 1))
		[ ] // BOOLEAN bCartsMatch = (sCart == GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(i, 2))
		[-] // if bNamesMatch && bCartsMatch
			[ ] // iAnalytePos = i
			[ ] // print(iAnalytePos)
			[ ] // break
			[ ] // 
	[-] // if iAnalytePos == 0
		[ ] // LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] // print("Expected Analyte Name: " + sAnalyteName)
		[-] // print('No match found for this analyte name in View Results for this sample ID')
			[ ] // 
	[ ] // 
[ ] 
[ ] 
[ ] 
[ ] //This function is called to check for individual error messages
[+] // VerifyError (REC_TEST_ERROR_MESSAGE rExpectedError, BOOLEAN bCheckPos optional ) 
	[ ] // sleep (2) 
	[ ] // 
	[ ] // // The code in the top of this if statement has proven unreliable in x64 Xpertise 6.121
	[ ] // // Silk 15.0 x86 sometimes hangs after selecting the ERRORS tab
	[ ] // // the code in the else statement performs a DB query as an alternative
	[-] // if MatchStr("*Error 1007*",rExpectedError.sDetails)
		[ ] // sleep(5)
		[ ] // Agent.SetOption(OPT_SYNC_TIMEOUT, 0)
		[-] // if GeneXpertDx.ViewResultsWorkspace.ErrorsTab.SelectedTab!=ERRORS_TAB
			[-] // do
				[ ] // GeneXpertDx.ViewResultsWorkspace.ErrorsTab.Select(ERRORS_TAB)
				[ ] // // GeneXpertDx.TestResult.Click()
			[-] // except
				[ ] // LogError("Silk had difficulty selecting the errors tab")
		[ ] // Agent.SetOption(OPT_SYNC_TIMEOUT, 300)
		[ ] // sleep(5)
		[ ] // 
		[-] // if bCheckPos==null
			[ ] // bCheckPos=false
			[ ] // 
		[-] // print('Looking for error and verify pos={bCheckPos} >>>>{rExpectedError.sDetails}')
			[ ] // 
			[ ] // INTEGER iErrorPos = 0
			[ ] // INTEGER i
			[ ] // 
			[ ] // 
			[ ] // LIST of List of String llsTableStrings
			[ ] // llsTableStrings= GeneXpertDx.ErrorsTable.AllCellTexts
			[-] // for ( i = 1; i<= GeneXpertDx.ErrorsTable.GetRowCount(); i++)
				[-] // if  llsTableStrings[i][4] ==  rExpectedError.sDetails
					[ ] // iErrorPos = i
					[ ] // break
			[ ] // 
			[ ] // 
			[-] // if iErrorPos == 0
				[ ] // LogError("For test with Sample ID {rExpectedError.sSampleID}, could not find error: {rExpectedError.sDetails}")
			[ ] // 
			[ ] // 
			[-] // else
				[ ] // // If the error has been found...
				[ ] // 
				[ ] // Print ("For test with Sample ID {rExpectedError.sSampleID}, in cart {rExpectedError.sCartridge} found the following expected error: '{rExpectedError.sDetails}'")
				[ ] // 
				[ ] // // Report any issues with the description or position of the error
				[ ] // 
				[ ] // String s=llsTableStrings[i][1]
				[ ] // 
				[-] // if s !=  SubStr(rExpectedError.sPos, 1, StrPos(DEC, rExpectedError.sPos) -1) && bCheckPos
					[ ] // LogError("Error for test with Sample ID {rExpectedError.sSampleID} was not found at the expected position {s}")
				[ ] // STRING sC=llsTableStrings[i][2]
				[-] // if sC !=  rExpectedError.sCartridge && "NA" !=  rExpectedError.sCartridge 
					[ ] // LogError("Error for test with Sample ID {rExpectedError.sSampleID} was found in the cartridge {sC}, not {rExpectedError.sCartridge}")
				[-] // if llsTableStrings[i][3] != rExpectedError.sDescription
					[ ] // LogError("Error description for test with Sample ID {rExpectedError.sSampleID} did not match the expected: {rExpectedError.sDescription}")
					[ ] // 
			[ ] // 
			[ ] // print()
			[ ] // sleep (6) 
			[ ] // Agent.SetOption(OPT_SYNC_TIMEOUT, 5)
			[ ] // GeneXpertDx.ViewResultsWorkspace.DetailTab.Select(DETAIL_TAB)
			[ ] // Agent.SetOption(OPT_SYNC_TIMEOUT, 300)
	[ ] // 
	[-] // else
		[ ] // Handle hGXDB=DB_Connect ("DSN=gx_assay;UID=sa;PWD=c9P40hD89#")
		[ ] // INTEGER iAssayID, iTestID, iAssayCartID, iTestRunID
		[ ] // STRING sDetails
		[ ] // DB_FetchNext(DB_ExecuteSql (hGXDB, "select assay_id from test where sample_id='{rExpectedError.sSampleID}'"),iAssayID)
		[ ] // DB_FetchNext(DB_ExecuteSql (hGXDB, "select test_id from test where sample_id='{rExpectedError.sSampleID}'"),iTestID)
		[ ] // 
		[ ] // 
		[ ] // STRING sCartName="Cart-1"
		[-] // if rExpectedError.sCartridge  !=  "NA"
			[ ] // sCartName =  SubStr(rExpectedError.sCartridge,3)
			[ ] // 
		[ ] // 
		[ ] // DB_FetchNext(DB_ExecuteSql (hGXDB, "select assay_cartridge_id from assay_cartridge where assay_ID={iAssayID} and name='{sCartName}'"),iAssayCartID)
		[ ] // DB_FetchNext(DB_ExecuteSql (hGXDB, "select test_run_id from test_run where test_id={iTestID} and assay_cartridge_id={iAssayCartID}"),iTestRunID)
		[ ] // 
		[ ] // BOOLEAN bFoundTheError=false
		[ ] // sDetails=""
		[ ] // 
		[ ] // HANDLE hErrorDetails= DB_ExecuteSQL (hGXDB, "select details from test_pc_error where test_run_id={iTestRunID}")
		[-] // while (DB_FetchNext (hErrorDetails, sDetails))
			[-] // if rExpectedError.sDetails==sDetails
				[ ] // 
				[ ] // bFoundTheError=true
			[ ] // 
			[ ] // //print(sDetails)
			[ ] // 
		[-] // if !bFoundTheError
			[ ] // LogError("Failed to find the error message '{rExpectedError.sDetails}' for test with sample Id {rExpectedError.sSampleID}}")
		[-] // else 
			[ ] // Print("Found the error message '{rExpectedError.sDetails}' for test with sample Id {rExpectedError.sSampleID}}")
		[-] // if rExpectedError.sCartridge  !=  "NA"
			[ ] // print("and cartridge {sCartName}")
			[ ] // 
		[ ] // print()
[ ] 
[ ] 
[ ] 
[+] FindAnalyteRowInTable(STRING sAnalyteName, STRING sSampleID,  inout  INTEGER iAnalyteFoundPosition)
	[ ] INTEGER iOldPos= iAnalyteFoundPosition // Check the old position first
	[ ] iAnalyteFoundPosition = 0 //assume the analyte has not been found
	[ ] INTEGER iTotalRows= (GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetRowCount())
	[ ] //Consider if the old position value was even valid
	[-] if iOldPos>iTotalRows || iOldPos<1
		[ ] iOldPos=1
	[ ] // First try looking at old position
	[ ] INTEGER i = 0
	[-] for ( i = iOldPos; i<=  iTotalRows; i++)
		[-] if sAnalyteName ==  GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(i, 1)
			[ ] iAnalyteFoundPosition = i
			[ ] break
	[ ] // if not found, consider a spot before the last known location
	[-] if iAnalyteFoundPosition == 0
		[-] for ( i = 1 ; i<  iOldPos; i++)
			[-] if sAnalyteName ==  GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(i, 1)
				[ ] iAnalyteFoundPosition = i
				[ ] break
[ ] 
[ ] // Select analyte result tab and then determine which row the analyte appears on
[+] FindAnalyteRow(STRING sAnalyteName, STRING sSampleID,  inout  INTEGER iAnalyteFoundPosition)
	[ ] // Make sure the correct tab is selected
	[ ] GeneXpertDx.ViewResultsWorkspace.AnalyteResultTab.Select(ANALYTE_RESULT_TAB)
	[ ] FindAnalyteRowInTable(sAnalyteName, sSampleID, iAnalyteFoundPosition)
	[ ] // If still not found, report an error
	[-] if iAnalyteFoundPosition == 0
		[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + sAnalyteName)
		[ ] print('No match found for this analyte name in the Analyte Results tab of View Results for this sample ID')
[ ] 
[ ] // Select analyte detail tab and then determine which row the analyte appears on
[+] FindAnalyteRowOnDetail(STRING sAnalyteName, STRING sSampleID, inout INTEGER iAnalyteFoundPosition)
	[ ] GeneXpertDx.ViewResultsWorkspace.DetailTab.Select(DETAIL_TAB)
	[ ] FindAnalyteRowInTable(sAnalyteName, sSampleID, iAnalyteFoundPosition)
	[-] if iAnalyteFoundPosition == 0
		[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + sAnalyteName)
		[ ] print('No match found for this analyte name in the details tab of View Results for this sample ID')
[ ] 
[ ] 
[+] FindAnalyteOnMeltTab(STRING sAnalyteName, STRING sMeltPeakTemp, STRING sSampleID,  inout INTEGER iAnalytePos)
	[ ] INTEGER iOldPos= iAnalytePos // Check the old position first
	[ ] iAnalytePos = 0 //assume the analyte has not been found
	[ ] INTEGER i = 0
	[ ] 
	[ ] GeneXpertDx.ViewResultsWorkspace.MeltPeaksTab.Select(MELT_PEAKS_TAB)
	[ ] 
	[ ] INTEGER iTotalRows= (GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetRowCount())
	[ ] 
	[ ] 
	[ ] 
	[-] if iOldPos>iTotalRows || iOldPos<1
		[ ] iOldPos=1
	[ ] 
	[ ] 
	[-] if  sMeltPeakTemp== VERIFICATION_NUMERICAL_NULL_VALUE
		[ ] sMeltPeakTemp=""
	[ ] 
	[-] for ( i = 1; i<=  iTotalRows; i++)
		[ ] BOOLEAN bNameMatch = (sAnalyteName ==  GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(i, 1))
		[ ] BOOLEAN bPeakMatch = (SubStr(sMeltPeakTemp, 1, StrPos(DEC, sMeltPeakTemp) +1) ==  GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(i, 3))
		[ ] 
		[-] if bNameMatch && bPeakMatch
			[ ] iAnalytePos = i
			[ ] //print(iAnalytePos)
			[ ] break
			[ ] 
	[ ] 
	[ ] // if not found, consider a spot before the last known location
	[-] if iAnalytePos == 0
		[-] for ( i = 1 ; i<  iOldPos; i++)
			[ ] bNameMatch = (sAnalyteName ==  GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(i, 1))
			[ ] bPeakMatch = (SubStr(sMeltPeakTemp, 1, StrPos(DEC, sMeltPeakTemp) +1) ==  GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(i, 3))
			[ ] 
			[-] if bNameMatch && bPeakMatch
				[ ] iAnalytePos = i
				[ ] //print(iAnalytePos)
				[ ] break
				[ ] 
	[ ] 
	[-] if iAnalytePos == 0
		[ ] LogError("Analyte name and/or peak temp is not valid for sample: {sSampleID}")
		[ ] print("Expected Name: '" + sAnalyteName+ "' with a peak of " + sMeltPeakTemp)
		[-] print('No match found for this analyte name in the Melt Peaks tab of View Results for this sample ID')
			[ ] 
	[ ] 
[ ] 
[ ] 
[ ] 
[+] VerifyLDATotal(REC_LDA_TOTAL rLDA)
	[ ] print ("Verify LDA total for category '{rLDA.sCategoryName}' of test with SID='{rLDA.sSampleID}'")
	[ ] 
	[ ] // Switch to the LDA Totals tab of the View Results workspace
	[ ] GeneXpertDx.ViewResultsWorkspace.ErrorsTab.Select(LDA_TAB)
	[ ] 
	[ ] INTEGER iAnalytePos=1
	[ ] INTEGER iTotalRows= (GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetRowCount())
	[ ] INTEGER i
	[ ] 
	[-] for (  i  = 1; i<=  iTotalRows; i++)
		[-] if (TRIM(rLDA.sCategoryName) == GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(i, 1))
			[ ] iAnalytePos=i
			[ ] break
	[ ] 
	[ ] 
	[ ] 
	[ ] 
	[ ] 
	[-] if (TRIM(rLDA.sCategoryName) != GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 1))
		[ ] LogError("Category name is not valid for sample: {rLDA.sSampleID}")
	[ ] print("Expected Category Name: '" + rLDA.sCategoryName+"'")
	[ ] print("  Actual Category Name: '" + GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 1)+"'")
	[ ] print ()
	[ ] 
	[-] if (TRIM(rLDA.sValidMin) != (GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 2) ))
		[ ] LogError("Valid min value is not valid for sample: {rLDA.sSampleID}")
	[ ] print("Expected Valid Min: '" + rLDA.sValidMin+"'")
	[ ] print("  Actual Valid Min: '" + (GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 2))+"'")
	[ ] print ()
	[ ] 
	[ ] 
	[-] if (TRIM(rLDA.sCutoff) != (GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 3)))
		[ ] LogError("Cutoff value is not valid for sample: {rLDA.sSampleID}")
	[ ] print("Expected Cutoff: '" + rLDA.sCutoff+"'")
	[ ] print("  Actual Cutoff: '" + (GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 3))+"'")
	[ ] print ()
	[ ] 
	[-] if (TRIM(rLDA.sMaxValid) != (GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 4)))
		[ ] LogError("Valid max value is not valid for sample: {rLDA.sSampleID}")
	[ ] print("Expected Valid Max: '" + rLDA.sMaxValid+"'")
	[ ] print("  Actual Valid Max: '" + (GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 4))+"'")
	[ ] print ()
	[ ] 
	[ ] 
	[-] if (TRIM(rLDA.sTotal))=='NOT_CALCULATED'
		[ ] rLDA.sTotal=''
	[ ] 
	[-] if (TRIM(rLDA.sTotal) != (GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 5)))
		[ ] LogError("LDA total value is not valid for sample: {rLDA.sSampleID}")
	[ ] print("Expected LDA Total: '" + rLDA.sTotal+"'")
	[ ] print("  Actual LDA Total: '" + (GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 5))+"'")
	[ ] print ()
	[ ] 
	[ ] 
	[ ] 
[ ] 
[ ] 
[ ] //UPDATED ANALYTE VERIFICATION FUNCTIONS Nov 10 2014
[-] VerifyAnalyteResult (REC_DETAIL rDetail, STRING sSampleID, INTEGER iAnalytePos)
	[-] if (iAnalytePos<1)
		[ ] LogError("Could not verify results for analyte {rDetail.sAnalyteName} because it was not found for test with SID of {sSampleID}")
	[-] else
		[ ] // Variables
		[ ] //
		[ ] STRING sCt = ' '
		[ ] STRING sEndPt = ' '
		[ ] INTEGER iPos = 0
		[ ] INTEGER i = 0
		[ ] STRING sTargetDeltaCt = ' '
		[ ] 
		[ ] SetPrecision (1)
		[ ] print("*****************")
		[ ] print(rDetail.sAnalyteName)
		[ ] print("*****************")
		[ ] // Verify that the expected and actual Analyte Names match
		[-] if rDetail.sAnalyteName != NOTAPPLICABLE
			[-] if (TRIM(rDetail.sAnalyteName) != GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 1))
				[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
			[ ] print("Expected Analyte Name: '{rDetail.sAnalyteName}'")
			[ ] print(  "Actual Analyte Name: '"+(GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 1))+"'")
			[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Cartridge match
		[-] if rDetail.sCartridge != NOTAPPLICABLE
			[-] if (rDetail.sCartridge != GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 2))
				[ ] LogError("Cartridge is not valid for sample: {sSampleID}")
			[ ] print("Expected Cartridge: '" + rDetail.sCartridge+"'")
			[ ] print("  Actual Cartridge: '" + GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 2)+"'")
			[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Ct values match
		[-] if rDetail.sCt != NOTAPPLICABLE
			[ ] iPos = StrPos(DEC, rDetail.sCt)
			[ ] sCt = SubStr(rDetail.sCt, 1, iPos +1)
			[ ] //StuffComma(sCt)
			[-] if (sCt  != GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 3))
				[ ] LogError("Ct value is not valid for sample: {sSampleID}")
			[ ] print("Expected Ct value: '{sCt}'")
			[ ] print("  Actual Ct value: '"+ GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 3)+"'")
			[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual EndPt values match
		[-] if rDetail.sEndPt != NOTAPPLICABLE
			[ ] iPos = StrPos(DEC, rDetail.sEndPt)
			[ ] sEndPt = SubStr(rDetail.sEndPt, 1, iPos -1)
			[ ] // StuffComma(sCt)
			[-] if (sEndPt != GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 4))
				[ ] LogError("EndPt value is not valid for sample: {sSampleID}")
			[ ] print("Expected EndPt value: '{sEndPt}'")
			[ ] print("  Actual EndPt value: '" + GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 4)+"'")
			[ ] print ()
		[ ] 
		[ ] 
		[ ] // Verify that the expected and actual Interpretation Result match
		[-] if rDetail.sInterpretationResult != NOTAPPLICABLE
			[-] if (TRIM(rDetail.sInterpretationResult) != GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 5))
				[ ] LogError("Interpretation Result is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
			[ ] print("Expected Interpretation Result: '" + rDetail.sInterpretationResult+"'")
			[ ] print("  Actual Interpretation Result: '" + GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 5)+"'")
			[ ] print ()
		[ ] 
		[ ] 
		[ ] // Verify that the expected and actual Reason match
		[-] if rDetail.sReason != NOTAPPLICABLE
			[-] if (TRIM(rDetail.sReason) != GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 6))
				[ ] LogError("Reason is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
			[ ] print("Expected Reason: '" + rDetail.sReason+"'")
			[ ] print("  Actual Reason: '" + GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 6)+"'")
			[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Analyte Results match
		[-] if rDetail.sAnalyteResult != NOTAPPLICABLE1 && rDetail.sAnalyteResult != "NOT_SHOWN"
			[-] if (TRIM(rDetail.sAnalyteResult) != GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 7))
				[ ] LogError("Analyte Result is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
			[ ] print("Expected Analyte Result: '" + rDetail.sAnalyteResult+"'")
			[ ] print("  Actual Analyte Result: '" + GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 7)+"'")
			[ ] print ()
			[ ] 
		[ ] 
		[-] if rDetail.sAnalyteResult == "NOT_SHOWN"
			[ ] STRING sColName=''
			[ ] INTEGER iColWidth=9999
			[ ] INTEGER n=1
			[-] for (n=1 ; n< GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetColumnCount() ; n++)
				[ ] sColName=GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetColumnName(n)
				[ ] sColName=StrTran(sColName,CHR(10)," ")
				[ ] 
				[-] if sColName=='Analyte Result'
					[ ] iColWidth=GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.DynamicInvokeMethods({"getColumnModel","getColumn","getWidth"},{{},{n-1},{}})
					[-] if iColWidth > 0
						[ ] LogError("The analyte result column was {iColWidth} px wide; expected 0 px")
					[-] else
						[ ] Print ("The analyte result column was {iColWidth} px wide as expected.")
		[ ] 
		[ ] 
		[ ] // Verify that the expected and actual Probe Check Results match
		[-] if rDetail.sPrbChkResult != DBNULLVALUE
			[-] if (TRIM(rDetail.sPrbChkResult) != GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 8))
				[ ] LogError("Probe Check Result is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
			[ ] print("Expected Probe Check Result: '" + rDetail.sPrbChkResult+"'")
			[ ] print("  Actual Probe Check Result: '" + GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 8)+"'")
			[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Target Delta Ct values match
		[-] if rDetail.sTargetDeltaCt != DBNULLVALUE
			[-] if rDetail.sTargetDeltaCt == "0.000000"
				[ ] sTargetDeltaCt = "0.0"
			[-] else
				[ ] iPos = StrPos(DEC, rDetail.sTargetDeltaCt)
				[ ] sTargetDeltaCt = SubStr(rDetail.sTargetDeltaCt, 1, iPos +1)
			[-] if (sTargetDeltaCt != GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 9))
				[ ] LogError("Target Delta Ct is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
			[ ] print("Expected Target Delta Ct: '" + sTargetDeltaCt+"'")
			[ ] print("  Actual Target Delta Ct: '" + GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 9)+"'")
			[ ] print ()
		[ ] 
	[ ] 
	[ ] 
[ ] 
[+] VerifyDetailTab (REC_DETAIL rDetail, STRING sSampleID, INTEGER iAnalytePos)
	[-] if (iAnalytePos<1)
		[ ] LogError("Could not verify details for analyte {rDetail.sAnalyteName} because it was not found for test with SID of {sSampleID}")
	[-] else
		[ ] // 
		[ ] // Variables
		[ ] //
		[ ] INTEGER iPos = 0
		[ ] INTEGER i = 0
		[ ] STRING sPrbChk = ' '
		[ ] STRING sSecDerivPkHt = ' '
		[ ] 
		[ ] SetPrecision (1)
		[ ] 
		[ ] // First verify that the expected and actual Analyte Names match
		[-] if rDetail.sAnalyteName != NOTAPPLICABLE
			[-] if (TRIM(rDetail.sAnalyteName) != GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 1))
				[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
			[ ] print("Expected Analyte Name: '" + rDetail.sAnalyteName+"'")
			[ ] print("  Actual Analyte Name: '" + GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 1)+"'")
			[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Cartridge match
		[-] if rDetail.sCartridge != NOTAPPLICABLE
			[-] if (rDetail.sCartridge != GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 2))
				[ ] LogError("Cartridge is not valid for sample: {sSampleID}")
			[ ] print("Expected Cartridge: '" + rDetail.sCartridge+"'")
			[ ] print("  Actual Cartridge: '" + GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 2)+"'")
			[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Probe Check 1 values match
		[-] if rDetail.sPrbChk1 != NOTAPPLICABLE
			[ ] iPos = StrPos(DEC, rDetail.sPrbChk1)
			[ ] sPrbChk = SubStr(rDetail.sPrbChk1, 1, iPos-1)
			[-] if (sPrbChk  != (GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 3)))
				[ ] LogError("Probe Check 1 value is not valid for sample: {sSampleID}")
			[ ] print("Expected Probe Check 1 value: '{sPrbChk}'")
			[ ] print("  Actual Probe Check 1 value: '" + (GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 3))+"'")
			[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Probe Check 2 values match
		[-] if rDetail.sPrbChk2 != NOTAPPLICABLE
			[ ] iPos = StrPos(DEC, rDetail.sPrbChk2)
			[ ] sPrbChk = SubStr(rDetail.sPrbChk2, 1, iPos -1)
			[-] if (sPrbChk  != (GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 4)))
				[ ] LogError("Probe Check 2 value is not valid for sample: {sSampleID}")
			[ ] print("Expected Probe Check 2 value: '{sPrbChk}'")
			[ ] print("  Actual Probe Check 2 value: '" + (GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 4))+"'")
			[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Probe Check 3 values match
		[-] if rDetail.sPrbChk3 != NOTAPPLICABLE
			[ ] iPos = StrPos(DEC, rDetail.sPrbChk3)
			[ ] sPrbChk = SubStr(rDetail.sPrbChk3, 1, iPos -1)
			[-] if (sPrbChk  != (GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 5)))
				[ ] LogError("Probe Check 3 value is not valid for sample: {sSampleID}")
			[ ] print("Expected Probe Check 3 value: '{sPrbChk}'")
			[ ] print("  Actual Probe Check 3 value: '" + (GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 5))+"'")
			[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Probe Check Result values match
		[-] if rDetail.sPrbChkResult != DBNULLVALUE
			[-] if (TRIM(rDetail.sPrbChkResult)  != GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 6))
				[ ] LogError("Probe Check Result is not valid for sample: {sSampleID}")
			[ ] print("Expected Probe Check Result: '{rDetail.sPrbChkResult}'")
			[ ] print("  Actual Probe Check Result: '" + GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 6)+"'")
			[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual 2nd Derivative Peak Height values match
		[-] if false//rDetail.sSecDerivPeakHght != DBNULLVALUE 
			[ ] iPos = StrPos(DEC, rDetail.sSecDerivPeakHght)
			[ ] sSecDerivPkHt = SubStr(rDetail.sSecDerivPeakHght, 1, iPos +1)
			[-] if (sSecDerivPkHt  != GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 7))
				[ ] LogError("2nd Derivative Peak Height is not valid for sample: {sSampleID}")
			[ ] print("Expected 2nd Derivative Peak Height: '{sSecDerivPkHt}'")
			[ ] print("  Actual 2nd Derivative Peak Height: '" + GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 7)+"'")
			[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Curve Fit values match
		[-] if rDetail.sCurveFit != DBNULLVALUE
			[-] if (TRIM(rDetail.sCurveFit)  != GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 8))
				[ ] LogError("Curve Fit is not valid for sample: {sSampleID}")
			[ ] print("Expected Curve Fit result: '{rDetail.sCurveFit}'")
			[ ] print("  Actual Curve Fit result: '" + GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 8)+"'")
			[ ] print ()
		[ ] 
[ ] 
[+] VerifyMeltTab (ANYTYPE rExpectedMeltResults, STRING sSampleID, INTEGER iAnalytePos)
	[-] if (iAnalytePos<1)
		[ ] LogError("Could not verify an analyte on the melt tab because it was not found for test with SID of {sSampleID} ")
	[-] else
		[ ] 
		[-] do
			[ ] REC_DETAIL rDetail
			[ ] rDetail.sAnalyteName=rExpectedMeltResults.sAnalyteName
			[ ] rDetail.sCartridge=rExpectedMeltResults.sCartridge
			[ ] rDetail.sMeltPeakTemp=rExpectedMeltResults.sMeltPeakTemp
			[ ] rDetail.sMeltPeakHght=rExpectedMeltResults.sMeltPeakHght
			[ ] 
			[ ] // Assumes at MELT PEAKS TAB
			[ ] // Variables
			[ ] //
			[ ] INTEGER iPos = 0
			[ ] INTEGER i = 0
			[ ] STRING  sMeltPeakTemp = ' '
			[ ] STRING  sMeltPeakHght = ' '
			[ ] 
			[ ] SetPrecision (1)
			[ ] 
			[ ] // First verify that the expected and actual Analyte Names match
			[-] if (rDetail.sAnalyteName != GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 1))
				[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
			[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
			[ ] print("Actual Analyte Name: " + GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 1))
			[ ] print ()
			[ ] 
			[ ] // Verify that the expected and actual Cartridge match
			[-] if rDetail.sCartridge != NOTAPPLICABLE
				[-] if (rDetail.sCartridge != GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 2))
					[ ] LogError("Cartridge is not valid for sample: {sSampleID}")
				[ ] print("Expected Cartridge: " + rDetail.sCartridge)
				[ ] print("Actual Cartridge: " + GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 2))
				[ ] print ()
			[ ] 
			[ ] // Blank entries are allowed for melt table
			[-] if  rDetail.sMeltPeakTemp== VERIFICATION_NUMERICAL_NULL_VALUE
				[ ] rDetail.sMeltPeakTemp=""
				[ ] rDetail.sMeltPeakHght=""
			[ ] 
			[ ] 
			[ ] 
			[ ] // Verify that the expected and actual Melt Peak Temperature values match
			[-] if rDetail.sMeltPeakTemp != NOTAPPLICABLE
				[ ] iPos = StrPos(DEC, rDetail.sMeltPeakTemp)
				[ ] sMeltPeakTemp = SubStr(rDetail.sMeltPeakTemp, 1, iPos +1)
				[-] if (sMeltPeakTemp  != GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 3) )
					[ ] LogError("Melt Peak Temperature value is not valid for sample: {sSampleID}")
				[ ] print("Expected Melt Peak Temperature value: {sMeltPeakTemp}")
				[ ] print("Actual Melt Peak Temperature value: " + GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 3))
				[ ] print ()
			[ ] 
			[ ] // Verify that the expected and actual Melt Peak Height values match
			[-] if rDetail.sMeltPeakHght != NOTAPPLICABLE
				[ ] iPos = StrPos(DEC, rDetail.sMeltPeakHght)
				[ ] sMeltPeakHght = SubStr(rDetail.sMeltPeakHght, 1, iPos +1)
				[ ] // Changed to pull information from the correct column; changed {iAnalytePos, 3} to {iAnalytePos, 4}
				[-] if (sMeltPeakHght  != GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 4)  )
					[ ] LogError("Melt Peak Height value is not valid for sample: {sSampleID}")
				[ ] print("Expected Melt Peak Height value: {sMeltPeakHght}")
				[ ] // Changed to pull information from the correct column; changed {iAnalytePos, 3} to {iAnalytePos, 4}
				[ ] print("Actual Melt Peak Height value: " + GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.ResultsTable.GetCellText(iAnalytePos, 4))
				[ ] print ()
			[-] 
				[ ] 
			[ ] 
		[-] except
			[ ] print ("Attempted to use an invalid record type to verify melt data for test with sample ID: {sSampleID}")
	[ ] 
[ ] 
[ ] 
[ ] 
[ ] 
[ ] 
[ ] 
[ ] 
[+] FindCellInCSVFile(STRING sFileName, STRING sStringToFind, out INTEGER iRow, out INTEGER iCol)
	[ ] iRow=-1
	[ ] iCol=-1
	[ ] 
	[ ] STRING sLineBeingRead
	[ ] BOOLEAN bFound=false
	[ ] // Filemode FM_READ
	[ ] HANDLE hCSVFile = SYS_FileOpen (sFileName, FM_READ)
	[ ] INTEGER iLineNumber=0
	[ ] print()
	[ ] 
	[ ] print ("----------------------------------------------------------------------------------------------")
	[ ] print ("   File: '{sFileName}'")
	[ ] print ("   Cell to find: '{sStringToFind}'")
	[ ] 
	[-] if MatchStr("*,*",sStringToFind)
		[ ] print ("The string being searched for has comma(s), now surrounding it with quotes to match CSV file format")
		[ ] sStringToFind='"'+sStringToFind+'"'
		[ ] print(sStringToFind)
		[ ] print()
	[ ] 
	[-] while (SYS_FileReadLine(hCSVFile, sLineBeingRead) && !bFound)
		[ ] iLineNumber++
		[ ] // Handle escaping of commas
		[ ] EscapeCommasForSearchingCSV(sLineBeingRead,sLineBeingRead)
		[ ] INTEGER iColumn=1
		[-] while (GetField(sLineBeingRead,",",iColumn) != "" )
			[ ] STRING split=GetField(sLineBeingRead,",",iColumn)
			[ ] split= StrTran (split,COMMA_ESCAPED, ',')
			[-] if  split== sStringToFind
				[ ] bFound=true
				[ ] print ("Found the text '"+split+"'")
				[ ] iRow=iLineNumber
				[ ] iCol=iColumn
				[ ] print ("in column {iColumn} on line {iLineNumber} in the file {sFileName}" )
				[ ] print()
			[ ] iColumn++
	[ ] SYS_FileClose(hCSVFile)
	[ ] 
	[-] if !bFound
		[ ] LogError("Could not find '{sStringToFind}' in the file {sFileName}")
		[ ] print()
	[ ] 
[ ] 
[ ] 
[ ] // Find rows in file and compare them to expected
[ ] // Generates html report in export folder
[+] FindRowsInCSVFile(HANDLE hDB, STRING sFileName)
	[ ] 
	[ ] 
	[ ] INTEGER iColumnNumber=-1, iRowsFound=-1, iTotalRowsToFind=0
	[ ] STRING sLineBeingRead, sStringToFind
	[ ] BOOLEAN bFoundFirstRow=false
	[ ] HANDLE hCSVFile = SYS_FileOpen (sFileName, FM_READ)
	[ ] INTEGER iLineNumber=0
	[ ] print()
	[ ] 
	[ ] List of STRING lsExcpectedCols, lsActualCols, lsReport
	[ ] 
	[ ] ListAppend(lsReport,"Verification of {sFileName} at {TimeStr ( )} <BR><html><table cellspacing=0>")
	[ ] ListAppend(lsReport,"<tr><td bgcolor='#ffcccc'><font color='#440606'>Mismatch (Actual)</font></td>")
	[ ] ListAppend(lsReport,"<td bgcolor='#aaCCff'><font color='#000044'>Match (Actual)</font></td></tr>")
	[ ] ListAppend(lsReport,"<tr><td bgcolor='#ffFFcc'><font color='#774406'>Mismatch (Expected)</font></td>")
	[ ] ListAppend(lsReport,"<td bgcolor='#99CC99'><font color='#000044'>Match (Expected)</font></td></tr></table></html><HR>")
	[ ] ListAppend(lsReport,"<html><table cellspacing=0>")
	[ ] 
	[-] while (DB_FetchNext (hDB, lsExcpectedCols))
		[ ] iTotalRowsToFind++
		[-] do
			[ ] 
		[-] except
			[ ] ListPrint (lsExcpectedCols)
	[ ] while (DB_FetchPrev (hDB, lsExcpectedCols))
	[ ] 
	[ ] 
	[ ] 
	[ ] 
	[ ] // Get first line to look for
	[ ] 
	[ ] DB_FetchNext (hDB, lsExcpectedCols)
	[ ] 
	[ ] STRING sFormattedLikeCSV=""
	[ ] 
	[-] for (iColumnNumber=1; iColumnNumber <= ListCount (lsExcpectedCols) ; iColumnNumber++)
		[-] if lsExcpectedCols[iColumnNumber] == NULL
			[ ] lsExcpectedCols[iColumnNumber]=""
		[ ] sFormattedLikeCSV=sFormattedLikeCSV+lsExcpectedCols[iColumnNumber]+","
	[ ] sStringToFind= sFormattedLikeCSV
	[ ] 
	[ ] 
	[ ] 
	[ ] 
	[ ] print ("----------------------------------------------------------------------------------------------")
	[ ] print ("  Checking Export File: '{sFileName}'")
	[ ] print("   Looking for a total of {iTotalRowsToFind} rows to match")
	[ ] print()
	[ ] 
	[-] while (SYS_FileReadLine(hCSVFile, sLineBeingRead) && iRowsFound < iTotalRowsToFind  )
		[ ] iLineNumber++
		[ ] //print (sLineBeingRead)
		[ ] EscapeCommasForSearchingCSV(sLineBeingRead,sLineBeingRead)
		[ ] INTEGER iColumn=1
		[ ] lsActualCols= {}
		[ ] //split by commas until there are at least enough to compare against expected
		[-] while (iColumn<=ListCount(lsExcpectedCols))//GetField(sLineBeingRead,",",iColumn) != "" 
			[ ] STRING split=GetField(sLineBeingRead,",",iColumn)
			[ ] split= StrTran (split,COMMA_ESCAPED, ',')
			[ ] ListAppend (lsActualCols,split)
			[ ] iColumn++
		[ ] 
		[ ] 
		[ ] 
		[ ] // Compare each column after the first row has been IDed
		[-] if (bFoundFirstRow)
			[ ] 
			[ ] BOOLEAN bAnyMismatches=false, bExpectingBlankRow=true
			[ ] STRING sPartialMatches="COL#:"+CHR(9)+CHR(9)+"VALUE:"
			[ ] STRING sReport='<tr>'
			[ ] 
			[ ] // Go through each expected column
			[-] for (iColumnNumber=1; iColumnNumber <= ListCount (lsExcpectedCols) ; iColumnNumber++)
				[ ] // Consider NULLs to be blank strings
				[-] if lsExcpectedCols[iColumnNumber] == NULL
					[ ] lsExcpectedCols[iColumnNumber]=""
				[ ] 
				[ ] 
				[ ] // Attempt to compare against each column of the actual file
				[-] do
					[-] if lsActualCols[iColumnNumber]!=lsExcpectedCols[iColumnNumber]
						[ ] print()
						[ ] LogError ("Column {iColumnNumber} of line {iLineNumber} in the file {sFileName} does not match the expected value:")
						[ ] print(CHR(9)+"ACTUAL:  '{lsActualCols[iColumnNumber]}'")
						[ ] print(CHR(9)+"EXCEPTED:'{lsExcpectedCols[iColumnNumber]}'")
						[ ] print()
						[ ] bAnyMismatches=true
						[ ] sReport=sReport+"<td bgcolor='#ffcccc'><font color='#440606'>"+lsActualCols[iColumnNumber]+"</td>"
						[ ] sReport=sReport+"<td bgcolor='#ffFFcc'><font color='#774406'>"+lsExcpectedCols[iColumnNumber]+"</td>"
						[ ] 
					[-] else 
						[ ] sPartialMatches=sPartialMatches+CHR(10)+STR(iColumnNumber)+CHR(9)+CHR(9)+CHR(9)+lsActualCols[iColumnNumber]
						[ ] //found
						[ ] sReport=sReport+"<td bgcolor='#aaCCff'><font color='#000044'>"+lsActualCols[iColumnNumber]+"</td>"
						[ ] sReport=sReport+"<td bgcolor='#99CC99'><font color='#000044'>"+lsExcpectedCols[iColumnNumber]+"</td>"
				[-] except
					[ ] // DEBUG CODE, should only arrive here if something has gone terribly wrong
					[ ] LogError("There is a significant mismatch on line {iLineNumber} and/or expected row # {iRowsFound} in the file {sFileName}")
					[ ] print (sLineBeingRead)
					[ ] print("Act # of cols {ListCount(lsActualCols)}"+" Expected {ListCount(lsExcpectedCols)}")
					[ ] print("Actual:")
					[ ] ListPrint(lsActualCols)
					[ ] print("Expect:")
					[ ] ListPrint(lsExcpectedCols)
					[ ] print ()
					[ ] 
			[ ] 
			[ ] 
			[ ] 
			[ ] 
			[ ] 
			[ ] sReport=sReport+"</tr>"
			[ ] ListAppend(lsReport,sReport)
			[ ] // If there are no mismatches, show that the entire row was found to be correct:
			[-] if !bAnyMismatches
				[ ] print ("Found expected row # {iRowsFound+1} on line {iLineNumber}:{Chr(9)}"+sLineBeingRead+"")
			[+] else
				[ ] print ("There were some mismatches on line # {iLineNumber} of the file, but the following columns of that line matched those of the expected row:")
				[ ] print (sPartialMatches)
				[ ] print()
			[ ] iRowsFound++
			[ ] DB_FetchNext (hDB, lsExcpectedCols)
			[+] if (iRowsFound == iTotalRowsToFind )
				[ ] print("All rows have been found.")
		[ ] 
		[ ] 
		[ ] //Find the first line
		[-] if  MatchStr(sLineBeingRead+",*",sStringToFind)  && !bFoundFirstRow
			[ ] bFoundFirstRow=true
			[ ] ListAppend(lsReport,"<tr>")
			[ ] 
			[ ] INTEGER iXYZ= 1
			[-] while GetField(sLineBeingRead,",",iXYZ) != "" 
				[ ] STRING splitHeader=GetField(sLineBeingRead,",",iXYZ)
				[ ] splitHeader= StrTran (splitHeader,COMMA_ESCAPED, ',')
				[ ] ListAppend(lsReport,"<td colspan=2 style='border: 1px solid black;'>{splitHeader}</td>")
				[ ] iXYZ++
			[ ] ListAppend(lsReport,"</tr>")
			[ ] 
			[ ] print ("Found the following expected first row on line {iLineNumber}:{Chr(9)}"+sLineBeingRead+"")
			[ ] DB_FetchNext (hDB, lsExcpectedCols)
			[ ] iRowsFound=1
			[ ] 
	[ ] 
	[ ] 
	[ ] ListAppend(lsReport,"</table><BR><BR></html>")
	[ ] 
	[ ] 
	[ ] HFILE FileHandle
	[ ] // Open file, append line, and close
	[ ] STRING s=StrTran(sFileName,".csv"," Export File")
	[ ] s=SubStr(s,StrPos("\",s,true)+1)
	[ ] FileHandle = FileOpen(sPATH+"Verification of {s}.html", FM_APPEND )
	[-] for each sReport in lsReport
		[ ] FileWriteLine(FileHandle, sReport)
	[ ] FileClose(FileHandle)
	[ ] Print()
	[ ] print("See '"+sPATH+"Verification of {s}.html' for details of comparison.")
	[ ] Print()
	[ ] 
	[ ] 
	[ ] //Warn if we've reached the end of the file yet still have rows that are expected
	[-] if (iRowsFound != iTotalRowsToFind )
		[ ] LogError("Reached the end of the file '{sFileName}', but some expected rows were not found:")
		[ ] DB_FetchPrev (hDB, lsExcpectedCols)
		[-] while (DB_FetchNext (hDB, lsExcpectedCols))
			[ ] STRING sRowNotFound=""
			[-] for (iColumnNumber=1; iColumnNumber <= ListCount (lsExcpectedCols) ; iColumnNumber++)
				[-] if lsExcpectedCols[iColumnNumber] == NULL
					[ ] lsExcpectedCols[iColumnNumber]=""
				[ ] sRowNotFound=sRowNotFound+lsExcpectedCols[iColumnNumber]+","
			[ ] print (sRowNotFound)
	[ ] 
	[ ] 
	[ ] 
	[ ] SYS_FileClose(hCSVFile)
	[ ] DB_FinishSQL(hDB)
	[-] if !bFoundFirstRow
		[ ] LogError ("Could not find an exact match for the first expected line in the file {sFileName}")
		[ ] print ("Expected: '{sStringToFind}'")
	[ ] 
	[ ] 
	[ ] print ("----------------------------------------------------------------------------------------------")
[ ] 
[ ] 
[ ] 
[ ] 
[ ] 
[ ] 
[ ] // For CSV files, prevents commas in cells from being interpreted as delimiters
[+] EscapeCommasForSearchingCSV(STRING sIn, out STRING sOut)
	[-] sOut=sIn
		[-] if (MatchStr('*"*,*"*',sIn))
			[ ] //print ("The following line must be esaped:")
			[ ] //print(sIn)
			[ ] //sLineBeingRead= StrTran (sLineBeingRead, ',', "&COMMA")
			[ ] boolean bOpenQuoteFound=false
			[ ] 
			[ ] String sEscp=''
			[ ] INTEGER iCharN=1
			[ ] String cEsp=''
			[ ] 
			[-] for (iCharN=1 ; iCharN < LEN(sIn) ; iCharN++)
				[-] if substr(sIn,iCharN,1)=='"'
					[-] if bOpenQuoteFound
						[ ] bOpenQuoteFound=false
						[ ] //print ("Open quote")
					[-] else  
						[ ] bOpenQuoteFound=true
						[ ] //print ("Close quote")
				[-] if substr(sIn,iCharN,1)==','
					[-] if bOpenQuoteFound
						[ ] //must escape
						[ ] cEsp=COMMA_ESCAPED
					[-] else
						[ ] //stay the course
						[ ] cEsp=substr(sIn,iCharN,1)
				[-] else
					[ ] cEsp=substr(sIn,iCharN,1)
				[ ] sEscp = sEscp +cEsp
			[ ] 
			[ ] sOut=sEscp
			[ ] //print (sOut)
			[ ] //print ()
	[ ] 
[ ] 
[ ] 
[ ] 
[ ] 
[ ] 
[+] FindLineOfTextInFile(STRING sFileName, STRING sLineToFind)
	[ ] 
	[ ] STRING sLineBeingRead
	[ ] BOOLEAN bFound=false
	[ ] // Filemode FM_READ
	[ ] HANDLE hCSVFile = SYS_FileOpen (sFileName, FM_READ)
	[ ] INTEGER iLineNumber=0
	[ ] 
	[ ] 
	[-] while (SYS_FileReadLine(hCSVFile, sLineBeingRead) )
		[ ] iLineNumber++
		[ ] //print(sLineBeingRead)
		[-] if sLineBeingRead == sLineToFind
			[ ] bFound=true
			[ ] print ("Found the text '"+sLineBeingRead+"' on line {iLineNumber} in the file {sFileName}" )
		[ ] 
	[ ] SYS_FileClose(hCSVFile)
	[-] if !bFound
		[ ] LogError("Could not find '{sLineToFind}' in the file {sFileName}")
	[ ] 
[ ] 
[ ] 
[ ] // Added by Steve 10/18/2016 to retrieve a series of archives (GXX files) into GX Dx
[-] RetrieveTests (STRING sExcelFileName, String sTabName)
	[ ] 
	[ ] print ("Reading {sTabName} tab of the spreadsheet {sExcelFileName} ")
	[ ] 
	[ ] // Variables
	[ ] handle hdbc, hArchive
	[ ] STRING sArchiveFileName
	[ ] INTEGER iArchiveID=NULL
	[ ] 
	[ ] hdbc = DB_Connect ("DSN=Silk DDA Excel;DBQ={sExcelFileName};UID=;PWD=;")
	[ ] hArchive = DB_ExecuteSQL(hdbc, "Select * from`{sTabName}$`")
	[-] while (DB_FetchNext (hArchive,sArchiveFileName))
		[-] if sArchiveFileName == NULL
			[ ] break
		[ ] 
		[ ] print("----------------------------------")
		[-] if sArchiveFileName!=NULL
			[ ] print ("Retrieving an archive named: {sArchiveFileName}")
			[ ] 
			[ ] // If archive file name is specified in excel sheet...
			[-] if sArchiveFileName!=NULL
				[ ] Print("Archive file name has been provided:")
				[ ] print("{sArchiveFileName}")
			[ ] // Otherwise, build a file name based on assay name and version..
			[ ] 
			[ ] // CALL TO ATTEMPT TO RETRIEVE A GIVEN FILENAME
			[-] RetrieveArchiveFile(sArchiveFileName)
				[ ] 
			[ ] 
		[-] else
			[ ] LogError("Tried to load an archive without a name specified in {sExcelFileName}")
[ ] 
[ ] // Added by Steve 10/18/2016 to retrieve a series of archives (GXX files) into GX Dx
[ ] // This function will take as input a filename (optionally with the .gxx 
[ ] // extension and/or  path) and import this assay into the GX database
[-] RetrieveArchiveFile(STRING sArchiveFileName)
	[ ] 
	[ ] // Select the Data Management -> Retrieve Tests menu option
	[ ] GeneXpertDx.DataManagementMenu.RetrieveTest.Select()
	[ ] 
	[-] if GeneXpertDx.Open.Exists(3)
		[ ] GeneXpertDx.Open.FileNameTextField.TypeKeys(sArchiveFileName)
		[ ] GeneXpertDx.Open.OpenButton.Click()
	[ ] 
	[ ] //Wait to see if the file is not found
	[-] if GeneXpertDx.SelectFile.Exists(2)
		[ ] LogError('Could not find or read the file "{sArchiveFileName}"!')
		[ ] GeneXpertDx.SelectFile.OKButton.Click()
		[ ] GeneXpertDx.Open.CancelButton.Click()
	[ ] 
	[ ] 
	[ ] // Verify that the Retrieve Tests (Duplicates) dialog is displayed then dismis it
	[-] if GeneXpertDx.RetrieveTestDuplicates.Exists(5)
		[ ] GeneXpertDx.RetrieveTestDuplicates.OKButton.Click()
	[ ] 
	[-] if GeneXpertDx.SelectTestSToBeRetrievedWorkspace.SelectAllButton.Exists(5)
		[ ] GeneXpertDx.SelectTestSToBeRetrievedWorkspace.SelectAllButton.Click()
		[ ] GeneXpertDx.SelectTestSToBeRetrievedWorkspace.OKButton.Click()
		[-] if GeneXpertDx.RetrieveTestConfirmation.ProceedButton.Exists(10)
			[ ] GeneXpertDx.RetrieveTestConfirmation.ProceedButton.Click()
			[-] if GeneXpertDx.RetrieveTestSuccessfulWorkspace.OKButton.Exists(10)
				[ ] GeneXpertDx.RetrieveTestSuccessfulWorkspace.OKButton.Click()
	[ ] 
[ ] 
[ ] 
[ ] 
[ ] // Verify Error Message on the Errors tab
[-] VerifyErrorMessage(STRING sErrorMessage)
	[ ] 
	[ ] GeneXpertDx.ViewResultsWorkspace.ErrorsTab.Select(ERRORS_TAB)
	[ ] // print("Looking for '{sErrorMessage}'")
	[ ] TABLECELL  tc = GeneXpertDx.ViewResultsWorkspace.ErrorsTab.ErrorsTable.FindCell(sErrorMessage) 
	[ ] // print("Got tablecell '{tc}'")
	[-] if tc.Row ==  NULL && tc.Col == NULL
		[ ] LogError("Error not found: {sErrorMessage}")
	[-] else
		[ ] print("Expected Error is found:  {sErrorMessage}")
	[ ] 
