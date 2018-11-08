[ ] use "..\..\Common Libraries\MasterUseStmts.inc"
[ ] 
[ ] // *** DSN ***
[ ] STRING sDSNConnect = "DSN=Silk DDA Excel;DBQ=C:\Silk Data Files\D8382 Genotyping-Based Test Results\DefineAssaysForGenotyping.xls;UID=;PWD=;"
[ ] 
[+] VerifyAnalyteResultDeltaCt (DETAIL_DELTACT rDetail, STRING sSampleID)
	[ ] // 
	[ ] // Variables
	[ ] //
	[ ] INTEGER iAnalytePos = 0
	[ ] STRING sCt = ' '
	[ ] STRING sEndPt = ' '
	[ ] STRING sTargetDeltaCt = ' '
	[ ] INTEGER iPos = 0
	[ ] 
	[ ] SetPrecision (1)
	[ ] 
	[ ] // Verification for the analyte name
	[-] if rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({3, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({4, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({5, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({6, 1})
		[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1}))
		[ ] print ()
	[-] else
		[ ] 
		[-] if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1})
			[ ] iAnalytePos = 1
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1})
			[ ] iAnalytePos = 2
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({3, 1})
			[ ] iAnalytePos = 3
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({4, 1})
			[ ] iAnalytePos = 4
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({5, 1})
			[ ] iAnalytePos = 5
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({6, 1})
			[ ] iAnalytePos = 6
			[ ] 
		[ ] // First verify that the expected and actual Analyte Names match
		[-] if (rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
			[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Ct values match
		[-] if rDetail.sCt == "0.000000"
			[ ] sCt = "0.0"
		[-] else
			[ ] iPos = StrPos(DEC, rDetail.sCt)
			[ ] sCt = SubStr(rDetail.sCt, 1, iPos +1)
		[-] if (sCt  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
			[ ] LogError("Ct value is not valid for sample: {sSampleID}")
		[ ] print("Expected Ct value: {sCt}")
		[ ] print("Actual Ct value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual EndPt values match
		[-] if rDetail.sEndPt == "0.000000"
			[ ] sEndPt = "0.0"
		[-] else
			[ ] iPos = StrPos(DEC, rDetail.sEndPt)
			[ ] sEndPt = SubStr(rDetail.sEndPt, 1, iPos +1)
		[-] if (sEndPt != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
			[ ] LogError("EndPt value is not valid for sample: {sSampleID}")
		[ ] print("Expected EndPt value: {sEndPt}")
		[ ] print("Actual EndPt value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Analyte Results match
		[-] if (rDetail.sAnalyteResult != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
			[ ] LogError("Analyte Result is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
		[ ] print("Expected Analyte Result: " + rDetail.sAnalyteResult)
		[ ] print("Actual Analyte Result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
		[ ] print ()
	[-] 
		[ ] // Verify that the expected and actual Target Delta Ct values match
		[-] if rDetail.sTargetDeltaCt == DBNULLVALUE //&& GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}) == NULL
			[ ] print("Expected Target Delta Ct: ")
			[ ] print("Actual Target Delta Ct: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}))
		[-] else
			[-] if rDetail.sTargetDeltaCt == "0.000000"
				[ ] sTargetDeltaCt = "0.0"
			[-] else
				[ ] iPos = StrPos(DEC, rDetail.sTargetDeltaCt)
				[ ] sTargetDeltaCt = SubStr(rDetail.sTargetDeltaCt, 1, iPos +1)
			[-] if (sTargetDeltaCt != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}))
				[ ] LogError("Target Delta Ct is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
			[ ] print("Expected Target Delta Ct: " + sTargetDeltaCt)
			[ ] print("Actual Target Delta Ct: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}))
			[ ] print ()
[ ] 
[ ] // This function takes the expected values for Sample ID, Status, Assay Name (Right and Left panel verifications), 
[ ] // Test Result Text, Test Result Color & Test Result Font Color and verifies them against the GUI 
[+] VerifyTestResultMain (REC_6ANALYTES_DR rExpected)
	[ ] //
	[ ] // Variable declarations
	[ ] //
	[ ] LIST OF STRING lsHTMLTestResult
	[ ] STRING sHTMLString = ' '
	[ ] INTEGER iPos = 0
	[ ] REC_6ANALYTES_DR rActual
	[ ] BOOLEAN bStyleNotFound = true
	[ ] 
	[ ] // Verify Sample ID
	[ ] GeneXpert®DxSystem.UserNone.SampleID.SetPosition( 1, 3 )
	[ ] rActual.sSampleID = GeneXpert®DxSystem.UserNone.SampleID.GetText()
	[-] if rExpected.sSampleID != rActual.sSampleID
		[ ] LogError("Sample ID is not valid")
	[ ] print("Expected Sample ID: " + rExpected.sSampleID)
	[ ] print("Actual Sample ID: " + rActual.sSampleID)
	[ ] print ()
	[ ] 
	[ ] // Verify information on the left panel i.e. Status and Assay Name
	[ ] rActual.sAssayNameLeftPanel = GeneXpert®DxSystem.UserNone.Assay.GetText()
	[-] if rExpected.sAssayNameLeftPanel != rActual.sAssayNameLeftPanel
		[ ] LogError("Assay name on the left panel is not valid for sample: {rExpected.sSampleID}")
	[ ] print("Expected Assay Name on left panel: " + rExpected.sAssayNameLeftPanel)
	[ ] print("Actual Assay Name on left panel: " + rActual.sAssayNameLeftPanel)
	[ ] print ()
	[ ] 
	[ ] rActual.sStatus = GeneXpert®DxSystem.UserNone.Status.GetText()
	[-] if rExpected.sStatus != rActual.sStatus
		[ ] LogError("Status on the left panel is not valid for sample: {rExpected.sSampleID}")
	[ ] print("Expected Status: " + rExpected.sStatus)
	[ ] print("Actual Status: " + rActual.sStatus)
	[ ] print ()
	[ ] 
	[ ] // Verify information on the Test Result tab i.e. Assay Name, Result Text & Result color
	[ ] rActual.sAssayNameRightPanel = GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.TestResult.AssayName.GetText()
	[-] if rExpected.sAssayNameRightPanel != rActual.sAssayNameRightPanel
		[ ] LogError("Assay name on the right panel is not valid for sample: {rExpected.sSampleID}")
	[ ] print("Expected Assay Name on right panel: " + rExpected.sAssayNameRightPanel)
	[ ] print("Actual Assay Name on right panel: " + rActual.sAssayNameRightPanel)
	[ ] print ()
	[ ] 
	[ ] // Result Text and Result Color are part of a series of html tags.
	[ ] // HTML tag that contains the result color and the result font color looks like below
	[ ] // e.g.    tr.row0 { color: #FFFFFF; background-color: #00E600 }
	[ ] lsHTMLTestResult = GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.TestResult.JavaxSwingJEditorPane.GetMultiText()
	[ ] // ListPrint(lsHTMLTestResult)
	[ ] // print()
	[ ] 
	[-] if rExpected.sResultText != NULL
		[ ] rExpected.sResultText = PAD + rExpected.sResultText 
		[ ] iPos = ListFind(lsHTMLTestResult, rExpected.sResultText)
		[-] if iPos == 0
			[ ] LogError("Result text is not valid for sample: {rExpected.sSampleID}")
			[ ] print("Expected Result Text: " + rExpected.sResultText)
			[ ] print("Actual Result Text:  <Not Valid>")
			[ ] print ()
		[-] else
			[ ] print("Expected Result Text: " + rExpected.sResultText)
			[ ] print("Actual Result Text: " + lsHTMLTestResult[iPos])
			[ ] print ()
		[ ] 
		[ ] bStyleNotFound = true
		[-] for each sHTMLString in lsHTMLTestResult
			[ ] // Verify the font color for the font color and  the background color for the test result1 
			[ ] iPos = StrPos(ROW0, sHTMLString)
			[-] if  iPos != 0
				[ ] bStyleNotFound = false
				[ ] iPos = StrPos(BACKGROUNDCOLOR, sHTMLString)
				[-] if (rExpected.sResultColor != SubStr(sHTMLString, iPos + LEN(BACKGROUNDCOLOR), 6))
					[ ] LogError("Result color is not valid for sample: {rExpected.sSampleID}")
					[ ] print("The value of the iPos is: {iPos}")
				[ ] print("Expected Result Color: " + rExpected.sResultColor)
				[ ] print("Actual Result Color: {SubStr(sHTMLString, iPos + LEN(BACKGROUNDCOLOR), 6)}")
				[ ] print ()
				[ ] 
				[ ] // Verify the background color for the test result 
				[ ] iPos = StrPos(FONTCOLOR, sHTMLString)
				[-] if  iPos != 0
					[-] if (rExpected.sResultFont != SubStr(sHTMLString, iPos + LEN(FONTCOLOR), 6))
						[ ] LogError("Result font coloris not valid for sample: {rExpected.sSampleID}")
					[ ] print("Expected Result Font Color: " + rExpected.sResultFont)
					[ ] print("Actual Result Font Color: {SubStr(sHTMLString, iPos + LEN(FONTCOLOR), 6)}")
					[ ] print ()
		[-] if bStyleNotFound
			[ ] LogError("Result font and background color are not found for sample: {rExpected.sSampleID}")
			[ ] print("Expected Result Background Color: " + rExpected.sResultColor)
			[ ] print("Expected Result Font Color: " + rExpected.sResultFont)
			[ ] print("Actual Result Background and Font Colors are not found in the GUI")
			[ ] print ()
	[-] else
		[ ] iPos = ListFind(lsHTMLTestResult, ENDTABLETAG)
		[-] if iPos != 0
			[ ] LogError("Result text is not valid for sample: {rExpected.sSampleID}")
			[ ] ListPrint(lsHTMLTestResult)
		[ ] print("Expected Result Text: NULL")
		[ ] print("Actual Result Text: NULL")
		[ ] print ()
		[ ] 
[ ] 
[ ] // This function takes the expected values for Error Status and verifies it against the GUI. 
[ ] // User must be on Support tab prior to calling this function
[+] VerifyErrorStatus (REC_6ANALYTES_DR rExpected)
	[ ] //
	[ ] // Variable declarations
	[ ] //
	[ ] REC_6ANALYTES_DR rActual
	[ ] 
	[ ] // Verification for the Error Status
	[ ] rActual.sErrorStatus = GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Support.ErrorStatus.GetText()
	[-] if (rExpected.sErrorStatus != rActual.sErrorStatus)
		[ ] LogError("Error Status is not valid for sample: {rExpected.sSampleID}")
	[ ] print("Expected Error Status: " + rExpected.sErrorStatus)
	[ ] print("Actual Error Status: " + rActual.sErrorStatus)
[ ] 
[ ] // This function will verify all of the values on the Analyte Result tab of View Results against the expected values that are passed into the function
[ ] // Used for assays that have 6 analytes
[ ] // For error log records the Sample ID is also passed into the function
[+] VerifyAnalyteResult (REC_DETAIL rDetail, STRING sSampleID)
	[ ] // 
	[ ] // Variables
	[ ] //
	[ ] INTEGER iAnalytePos = 0
	[ ] STRING sCt = ' '
	[ ] STRING sEndPt = ' '
	[ ] INTEGER iPos = 0
	[ ] 
	[ ] SetPrecision (1)
	[ ] 
	[ ] // Verification for the analyte name
	[-] if rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({3, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({4, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({5, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({6, 1})
		[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: <Not Found>")
		[ ] print ()
	[-] else
		[ ] 
		[-] if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1})
			[ ] iAnalytePos = 1
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1})
			[ ] iAnalytePos = 2
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({3, 1})
			[ ] iAnalytePos = 3
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({4, 1})
			[ ] iAnalytePos = 4
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({5, 1})
			[ ] iAnalytePos = 5
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({6, 1})
			[ ] iAnalytePos = 6
		[ ] 
		[ ] // First verify that the expected and actual Analyte Names match
		[-] if (rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
			[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Ct values match
		[ ] iPos = StrPos(DEC, rDetail.sCt)
		[ ] sCt = SubStr(rDetail.sCt, 1, iPos +1)
		[ ] // StuffComma(sCt)
		[-] if (sCt  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
			[ ] LogError("Ct value is not valid for sample: {sSampleID}")
		[ ] print("Expected Ct value: {sCt}")
		[ ] print("Actual Ct value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual EndPt values match
		[ ] iPos = StrPos(DEC, rDetail.sEndPt)
		[ ] sEndPt = SubStr(rDetail.sEndPt, 1, iPos +1)
		[ ] // StuffComma(sCt)
		[-] if (sEndPt != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
			[ ] LogError("EndPt value is not valid for sample: {sSampleID}")
		[ ] print("Expected EndPt value: {sEndPt}")
		[ ] print("Actual EndPt value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Analyte Results match
		[-] if (rDetail.sAnalyteResult != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
			[ ] LogError("Analyte Result is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
		[ ] print("Expected Analyte Result: " + rDetail.sAnalyteResult)
		[ ] print("Actual Analyte Result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
		[ ] print ()
	[ ] 
[ ] 
[ ] // This function will verify all of the values on the Detail tab of View Results against the expected values that are passed into the function
[ ] // Used for assays that have 6 analytes
[ ] // For error log records the Sample ID is also passed into the function
[+] VerifyDetailTab (REC_DETAIL rDetail, STRING sSampleID)
	[ ] // 
	[ ] // Variables
	[ ] //
	[ ] INTEGER iAnalytePos = 0
	[ ] STRING sPrbChk = ' '
	[ ] STRING sSecDerivPkHt = ' '
	[ ] STRING sMeltPeak = ' '
	[ ] INTEGER iPos = 0
	[ ] 
	[ ] SetPrecision (1)
	[ ] 
	[ ] // Verification for the analyte name
	[-] if rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({1, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({2, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({3, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({4, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({5, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({6, 1})
		[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: <Not Found>")
		[ ] print ()
	[-] else
		[ ] 
		[-] if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({1, 1})
			[ ] iAnalytePos = 1
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({2, 1})
			[ ] iAnalytePos = 2
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({3, 1})
			[ ] iAnalytePos = 3
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({4, 1})
			[ ] iAnalytePos = 4
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({5, 1})
			[ ] iAnalytePos = 5
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({6, 1})
			[ ] iAnalytePos = 6
		[ ] 
		[ ] // First verify that the expected and actual Analyte Names match
		[-] if (rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
			[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Probe Check 1 values match
		[ ] iPos = StrPos(DEC, rDetail.sPrbChk1)
		[ ] sPrbChk = SubStr(rDetail.sPrbChk1, 1, iPos +1)
		[-] if (sPrbChk  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
			[ ] LogError("Probe Check 1 value is not valid for sample: {sSampleID}")
		[ ] print("Expected Probe Check 1 value: {sPrbChk}")
		[ ] print("Actual Probe Check 1 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Probe Check 2 values match
		[ ] iPos = StrPos(DEC, rDetail.sPrbChk2)
		[ ] sPrbChk = SubStr(rDetail.sPrbChk2, 1, iPos +1)
		[-] if (sPrbChk  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
			[ ] LogError("Probe Check 2 value is not valid for sample: {sSampleID}")
		[ ] print("Expected Probe Check 2 value: {sPrbChk}")
		[ ] print("Actual Probe Check 2 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Probe Check 3 values match
		[ ] iPos = StrPos(DEC, rDetail.sPrbChk3)
		[ ] sPrbChk = SubStr(rDetail.sPrbChk3, 1, iPos +1)
		[-] if (sPrbChk  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
			[ ] LogError("Probe Check 3 value is not valid for sample: {sSampleID}")
		[ ] print("Expected Probe Check 3 value: {sPrbChk}")
		[ ] print("Actual Probe Check 3 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Probe Check Result values match
		[-] if (rDetail.sPrbChkResult  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 5}))
			[ ] LogError("Probe Check Result is not valid for sample: {sSampleID}")
		[ ] print("Expected Probe Check Result: {rDetail.sPrbChkResult}")
		[ ] print("Actual Probe Check Result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 5}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual 2nd Derivative Peak Height values match
		[ ] iPos = StrPos(DEC, rDetail.sSecDerivPeakHght)
		[ ] sSecDerivPkHt = SubStr(rDetail.sSecDerivPeakHght, 1, iPos +1)
		[-] if (sSecDerivPkHt  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}))
			[ ] LogError("2nd Derivative Peak Height is not valid for sample: {sSampleID}")
		[ ] print("Expected 2nd Derivative Peak Height: {sSecDerivPkHt}")
		[ ] print("Actual 2nd Derivative Peak Height: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Melt Peak 1 values match
		[-] if rDetail.sMeltPeak1 != NOTAPPLICABLE
			[ ] iPos = StrPos(DEC, rDetail.sMeltPeak1)
			[ ] sMeltPeak = SubStr(rDetail.sMeltPeak1, 1, iPos +1)
			[-] if (sMeltPeak  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 7}))
				[ ] LogError("Melt Peak 1 is not valid for sample: {sSampleID}")
			[ ] print("Expected Melt Peak 1 value: {sMeltPeak}")
			[ ] print("Actual Melt Peak 1 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 7}))
			[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Melt Peak 2 values match
		[-] if rDetail.sMeltPeak2 != NOTAPPLICABLE
			[ ] iPos = StrPos(DEC, rDetail.sMeltPeak2)
			[ ] sMeltPeak = SubStr(rDetail.sMeltPeak2, 1, iPos +1)
			[-] if (sMeltPeak  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 8}))
				[ ] LogError("Melt Peak 2 is not valid for sample: {sSampleID}")
			[ ] print("Expected Melt Peak 2 value: {sMeltPeak}")
			[ ] print("Actual Melt Peak 2 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 8}))
			[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Melt Peak 3 values match
		[-] if rDetail.sMeltPeak3 != NOTAPPLICABLE
			[ ] iPos = StrPos(DEC, rDetail.sMeltPeak3)
			[ ] sMeltPeak = SubStr(rDetail.sMeltPeak3, 1, iPos +1)
			[-] if (sMeltPeak  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 9}))
				[ ] LogError("Melt Peak 3 is not valid for sample: {sSampleID}")
			[ ] print("Expected Melt Peak 3 value: {sMeltPeak}")
			[ ] print("Actual Melt Peak 3 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 9}))
			[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Curve Fit values match
		[-] if (rDetail.sCurveFit  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 10}))
			[ ] LogError("Curve Fit is not valid for sample: {sSampleID}")
		[ ] print("Expected Curve Fit result: {rDetail.sCurveFit}")
		[ ] print("Actual Curve Fit result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 10}))
		[ ] print ()
		[ ] 
		[ ] 
[ ] 
[ ] // This function will verify all of the values on the Analyte Result tab of View Results against the expected values that are passed into the function
[ ] // Used for assays that have 6 analytes
[ ] // For error log records the Sample ID is also passed into the function
[+] // VerifyAnalyteResultCurveFit (REC_DETAIL_CURVE_FIT rDetail, STRING sSampleID)
	[ ] // // 
	[ ] // // Variables
	[ ] // //
	[ ] // INTEGER iAnalytePos = 0
	[ ] // STRING sCt = ' '
	[ ] // STRING sEndPt = ' '
	[ ] // INTEGER iPos = 0
	[ ] // 
	[ ] // SetPrecision (1)
	[ ] // 
	[ ] // // Verification for the analyte name
	[-] // if rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1}) &&
    // rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1}) &&
    // rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({3, 1}) &&
    // rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({4, 1}) &&
    // rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({5, 1}) &&
    // rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({6, 1})
		[ ] // LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] // print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] // print("Actual Analyte Name: <Not Found>")
		[ ] // print ()
	[-] // else
		[ ] // 
		[-] // if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1})
			[ ] // iAnalytePos = 1
		[-] // else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1})
			[ ] // iAnalytePos = 2
		[-] // else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({3, 1})
			[ ] // iAnalytePos = 3
		[-] // else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({4, 1})
			[ ] // iAnalytePos = 4
		[-] // else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({5, 1})
			[ ] // iAnalytePos = 5
		[-] // else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({6, 1})
			[ ] // iAnalytePos = 6
		[ ] // 
		[ ] // // First verify that the expected and actual Analyte Names match
		[-] // if (rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
			[ ] // LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] // print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] // print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
		[ ] // print ()
		[ ] // 
		[ ] // // Verify that the expected and actual Ct values match
		[ ] // iPos = StrPos(DEC, rDetail.sCt)
		[ ] // sCt = SubStr(rDetail.sCt, 1, iPos +1)
		[ ] // // StuffComma(sCt)
		[-] // if (sCt  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
			[ ] // LogError("Ct value is not valid for sample: {sSampleID}")
		[ ] // print("Expected Ct value: {sCt}")
		[ ] // print("Actual Ct value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
		[ ] // print ()
		[ ] // 
		[ ] // // Verify that the expected and actual EndPt values match
		[ ] // iPos = StrPos(DEC, rDetail.sEndPt)
		[ ] // sEndPt = SubStr(rDetail.sEndPt, 1, iPos +1)
		[ ] // // StuffComma(sEndPt)
		[-] // if (sEndPt != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
			[ ] // LogError("EndPt value is not valid for sample: {sSampleID}")
		[ ] // print("Expected EndPt value: {sEndPt}")
		[ ] // print("Actual EndPt value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
		[ ] // print ()
		[ ] // 
		[ ] // // Verify that the expected and actual Analyte Results match
		[-] // if (rDetail.sAnalyteResult != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
			[ ] // LogError("Analyte Result is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
		[ ] // print("Expected Analyte Result: " + rDetail.sAnalyteResult)
		[ ] // print("Actual Analyte Result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
		[ ] // print ()
	[ ] 
[+] VerifyAnalyteResultCurveFit (REC_DETAIL_CURVE_FIT rDetail, STRING sSampleID)
	[ ] // 
	[ ] // Variables
	[ ] //
	[ ] INTEGER iAnalytePos = 0
	[ ] STRING sCt = ' '
	[ ] STRING sEndPt = ' '
	[ ] INTEGER iPos = 0
	[ ] 
	[ ] SetPrecision (1)
	[ ] 
	[ ] // Verification for the analyte name
	[-] if rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({3, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({4, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({5, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({6, 1})
		[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: <Not Found>")
		[ ] print ()
	[-] else
		[ ] 
		[-] if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1})
			[ ] iAnalytePos = 1
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1})
			[ ] iAnalytePos = 2
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({3, 1})
			[ ] iAnalytePos = 3
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({4, 1})
			[ ] iAnalytePos = 4
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({5, 1})
			[ ] iAnalytePos = 5
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({6, 1})
			[ ] iAnalytePos = 6
		[ ] 
		[ ] // First verify that the expected and actual Analyte Names match
		[-] if (rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
			[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Ct values match
		[-] if rDetail.sCt == "0"
			[ ] sCt = "0.0"
		[-] else
			[ ] iPos = StrPos(DEC, rDetail.sCt)
			[ ] sCt = SubStr(rDetail.sCt, 1, iPos +1)
		[ ] // StuffComma(sCt)
		[-] if (sCt  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
			[ ] LogError("Ct value is not valid for sample: {sSampleID}")
		[ ] print("Expected Ct value: {sCt}")
		[ ] print("Actual Ct value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual EndPt values match
		[ ] iPos = StrPos(DEC, rDetail.sEndPt)
		[ ] sEndPt = SubStr(rDetail.sEndPt, 1, iPos +1)
		[ ] // StuffComma(sEndPt)
		[-] if (sEndPt != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
			[ ] LogError("EndPt value is not valid for sample: {sSampleID}")
		[ ] print("Expected EndPt value: {sEndPt}")
		[ ] print("Actual EndPt value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Analyte Results match
		[-] if (rDetail.sAnalyteResult != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
			[ ] LogError("Analyte Result is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
		[ ] print("Expected Analyte Result: " + rDetail.sAnalyteResult)
		[ ] print("Actual Analyte Result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
		[ ] print ()
	[ ] 
[ ] 
[ ] // This function will verify only the Curve Fit values on the Detail tab of View Results against the expected values that are passed into the function
[ ] // Used for assays that have 6 analytes
[ ] // For error log records the Sample ID is also passed into the function
[+] // VerifyDetailTabCurveFit (REC_DETAIL_CURVE_FIT rDetail, STRING sSampleID)
	[ ] // // 
	[ ] // // Variables
	[ ] // //
	[ ] // INTEGER iAnalytePos = 0
	[ ] // STRING sPrbChk = ' '
	[ ] // STRING sSecDerivPkHt = ' '
	[ ] // STRING sMeltPeak = ' '
	[ ] // INTEGER iPos = 0
	[ ] // 
	[ ] // SetPrecision (1)
	[ ] // 
	[ ] // // Verification for the analyte name
	[-] // if rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({1, 1}) &&
    // rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({2, 1}) &&
    // rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({3, 1}) &&
    // rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({4, 1}) &&
    // rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({5, 1}) &&
    // rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({6, 1})
		[ ] // LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] // print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] // print("Actual Analyte Name: <Not Found>")
		[ ] // print ()
	[-] // else
		[ ] // 
		[-] // if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({1, 1})
			[ ] // iAnalytePos = 1
		[-] // else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({2, 1})
			[ ] // iAnalytePos = 2
		[-] // else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({3, 1})
			[ ] // iAnalytePos = 3
		[-] // else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({4, 1})
			[ ] // iAnalytePos = 4
		[-] // else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({5, 1})
			[ ] // iAnalytePos = 5
		[-] // else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({6, 1})
			[ ] // iAnalytePos = 6
		[ ] // 
		[ ] // // First verify that the expected and actual Analyte Names match
		[-] // if (rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
			[ ] // LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] // print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] // print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
		[ ] // print ()
		[ ] // 
		[ ] // // Verify that the expected and actual Curve Fit values match
		[-] // if (rDetail.sCurveFit  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 10}))
			[ ] // LogError("Curve Fit is not valid for sample: {sSampleID}")
		[ ] // print("Expected Curve Fit result: {rDetail.sCurveFit}")
		[ ] // print("Actual Curve Fit result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 10}))
		[ ] // print ()
		[ ] // 
		[ ] // 
[+] VerifyDetailTabCurveFit (REC_DETAIL_CURVE_FIT rDetail, STRING sSampleID)
	[ ] // 
	[ ] // Variables
	[ ] //
	[ ] INTEGER iAnalytePos = 0
	[ ] STRING sPrbChk = ' '
	[ ] STRING sSecDerivPkHt = ' '
	[ ] STRING sMeltPeak = ' '
	[ ] INTEGER iPos = 0
	[ ] 
	[ ] SetPrecision (1)
	[ ] 
	[ ] // Verification for the analyte name
	[-] if rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({1, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({2, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({3, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({4, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({5, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({6, 1})
		[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: <Not Found>")
		[ ] print ()
	[-] else
		[ ] 
		[-] if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({1, 1})
			[ ] iAnalytePos = 1
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({2, 1})
			[ ] iAnalytePos = 2
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({3, 1})
			[ ] iAnalytePos = 3
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({4, 1})
			[ ] iAnalytePos = 4
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({5, 1})
			[ ] iAnalytePos = 5
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({6, 1})
			[ ] iAnalytePos = 6
		[ ] 
		[ ] // First verify that the expected and actual Analyte Names match
		[-] if (rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
			[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Curve Fit values match
		[-] if (rDetail.sCurveFit  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 10}))
			[ ] LogError("Curve Fit is not valid for sample: {sSampleID}")
		[ ] print("Expected Curve Fit result: {rDetail.sCurveFit}")
		[ ] print("Actual Curve Fit result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 10}))
		[ ] print ()
		[ ] 
		[ ] 
[ ] 
[ ] // This function will verify all of the values on the Result Table tab of View Results against the expected values that are passed into the function
[ ] // Used for assays that have 4 analytes
[ ] // For error log records the Sample ID is also passed into the function
[+] VerifyAnalyteResult4Analytes (REC_DETAIL rDetail, STRING sSampleID)
	[ ] // 
	[ ] // Variables
	[ ] //
	[ ] INTEGER iAnalytePos = 0
	[ ] STRING sCt = ' '
	[ ] STRING sEndPt = ' '
	[ ] INTEGER iPos = 0
	[ ] 
	[ ] SetPrecision (1)
	[ ] 
	[ ] // Verification for the analyte name
	[-] if rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({3, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({4, 1})
		[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: <Not Found>")
		[ ] print ()
	[-] else
		[ ] 
		[-] if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1})
			[ ] iAnalytePos = 1
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1})
			[ ] iAnalytePos = 2
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({3, 1})
			[ ] iAnalytePos = 3
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({4, 1})
			[ ] iAnalytePos = 4
		[ ] 
		[ ] // First verify that the expected and actual Analyte Names match
		[-] if (rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
			[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Ct values match
		[ ] iPos = StrPos(DEC, rDetail.sCt)
		[ ] sCt = SubStr(rDetail.sCt, 1, iPos +1)
		[ ] // StuffComma(sCt)
		[-] if (sCt  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
			[ ] LogError("Ct value is not valid for sample: {sSampleID}")
		[ ] print("Expected Ct value: {sCt}")
		[ ] print("Actual Ct value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual EndPt values match
		[ ] iPos = StrPos(DEC, rDetail.sEndPt)
		[ ] sEndPt = SubStr(rDetail.sEndPt, 1, iPos +1)
		[ ] // StuffComma(sEndPt)
		[-] if (sEndPt != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
			[ ] LogError("EndPt value is not valid for sample: {sSampleID}")
		[ ] print("Expected EndPt value: {sEndPt}")
		[ ] print("Actual EndPt value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Analyte Results match
		[-] if (rDetail.sAnalyteResult != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
			[ ] LogError("Analyte Result is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
		[ ] print("Expected Analyte Result: " + rDetail.sAnalyteResult)
		[ ] print("Actual Analyte Result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
		[ ] print ()
	[ ] 
[ ] 
[ ] // This function will verify all of the values on the Detail tab of View Results against the expected values that are passed into the function
[ ] // Used for assays that have 6 analytes
[ ] // For error log records the Sample ID is also passed into the function
[+] VerifyDetailTab4Analytes (REC_DETAIL rDetail, STRING sSampleID)
	[ ] // 
	[ ] // Variables
	[ ] //
	[ ] INTEGER iAnalytePos = 0
	[ ] STRING sPrbChk = ' '
	[ ] STRING sSecDerivPkHt = ' '
	[ ] STRING sMeltPeak = ' '
	[ ] INTEGER iPos = 0
	[ ] 
	[ ] SetPrecision (1)
	[ ] 
	[ ] // Verification for the analyte name
	[-] if rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({1, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({2, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({3, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({4, 1})
		[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: <Not Found>")
		[ ] print ()
	[-] else
		[ ] 
		[-] if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({1, 1})
			[ ] iAnalytePos = 1
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({2, 1})
			[ ] iAnalytePos = 2
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({3, 1})
			[ ] iAnalytePos = 3
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({4, 1})
			[ ] iAnalytePos = 4
		[ ] 
		[ ] // First verify that the expected and actual Analyte Names match
		[-] if (rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
			[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Probe Check 1 values match
		[ ] iPos = StrPos(DEC, rDetail.sPrbChk1)
		[ ] sPrbChk = SubStr(rDetail.sPrbChk1, 1, iPos +1)
		[-] if (sPrbChk  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
			[ ] LogError("Probe Check 1 value is not valid for sample: {sSampleID}")
		[ ] print("Expected Probe Check 1 value: {sPrbChk}")
		[ ] print("Actual Probe Check 1 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Probe Check 2 values match
		[ ] iPos = StrPos(DEC, rDetail.sPrbChk2)
		[ ] sPrbChk = SubStr(rDetail.sPrbChk2, 1, iPos +1)
		[-] if (sPrbChk  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
			[ ] LogError("Probe Check 2 value is not valid for sample: {sSampleID}")
		[ ] print("Expected Probe Check 2 value: {sPrbChk}")
		[ ] print("Actual Probe Check 2 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Probe Check 3 values match
		[ ] iPos = StrPos(DEC, rDetail.sPrbChk3)
		[ ] sPrbChk = SubStr(rDetail.sPrbChk3, 1, iPos +1)
		[-] if (sPrbChk  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
			[ ] LogError("Probe Check 3 value is not valid for sample: {sSampleID}")
		[ ] print("Expected Probe Check 3 value: {sPrbChk}")
		[ ] print("Actual Probe Check 3 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Probe Check Result values match
		[-] if (rDetail.sPrbChkResult  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 5}))
			[ ] LogError("Probe Check Result is not valid for sample: {sSampleID}")
		[ ] print("Expected Probe Check Result: {rDetail.sPrbChkResult}")
		[ ] print("Actual Probe Check Result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 5}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual 2nd Derivative Peak Height values match
		[ ] iPos = StrPos(DEC, rDetail.sSecDerivPeakHght)
		[ ] sSecDerivPkHt = SubStr(rDetail.sSecDerivPeakHght, 1, iPos +1)
		[-] if (sSecDerivPkHt  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}))
			[ ] LogError("2nd Derivative Peak Height is not valid for sample: {sSampleID}")
		[ ] print("Expected 2nd Derivative Peak Height: {sSecDerivPkHt}")
		[ ] print("Actual 2nd Derivative Peak Height: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Melt Peak 1 values match
		[-] if rDetail.sMeltPeak1 != NOTAPPLICABLE
			[ ] iPos = StrPos(DEC, rDetail.sMeltPeak1)
			[ ] sMeltPeak = SubStr(rDetail.sMeltPeak1, 1, iPos +1)
			[-] if (sMeltPeak  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 7}))
				[ ] LogError("Melt Peak 1 is not valid for sample: {sSampleID}")
			[ ] print("Expected Melt Peak 1 value: {sMeltPeak}")
			[ ] print("Actual Melt Peak 1 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 7}))
			[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Melt Peak 2 values match
		[-] if rDetail.sMeltPeak2 != NOTAPPLICABLE
			[ ] iPos = StrPos(DEC, rDetail.sMeltPeak2)
			[ ] sMeltPeak = SubStr(rDetail.sMeltPeak2, 1, iPos +1)
			[-] if (sMeltPeak  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 8}))
				[ ] LogError("Melt Peak 2 is not valid for sample: {sSampleID}")
			[ ] print("Expected Melt Peak 2 value: {sMeltPeak}")
			[ ] print("Actual Melt Peak 2 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 8}))
			[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Melt Peak 3 values match
		[-] if rDetail.sMeltPeak3 != NOTAPPLICABLE
			[ ] iPos = StrPos(DEC, rDetail.sMeltPeak3)
			[ ] sMeltPeak = SubStr(rDetail.sMeltPeak3, 1, iPos +1)
			[-] if (sMeltPeak  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 9}))
				[ ] LogError("Melt Peak 3 is not valid for sample: {sSampleID}")
			[ ] print("Expected Melt Peak 3 value: {sMeltPeak}")
			[ ] print("Actual Melt Peak 3 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 9}))
			[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Curve Fit values match
		[-] if (rDetail.sCurveFit  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 10}))
			[ ] LogError("Curve Fit is not valid for sample: {sSampleID}")
		[ ] print("Expected Curve Fit result: {rDetail.sCurveFit}")
		[ ] print("Actual Curve Fit result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 10}))
		[ ] print ()
		[ ] 
		[ ] 
[ ] 
[ ] // This function will verify all of the values on the Analyte Result tab of View Results against the expected values that are passed into the function
[ ] // For error log records the Sample ID is also passed into the function
[+] VerifyAnalyteResultAR (DETAIL_AR1_4 rDetail, STRING sSampleID)
	[ ] // 
	[ ] // Variables
	[ ] //
	[ ] INTEGER iAnalytePos = 0
	[ ] STRING sCt = ' '
	[ ] STRING sEndPt = ' '
	[ ] INTEGER iPos = 0
	[ ] 
	[ ] SetPrecision (1)
	[ ] 
	[ ] // Verification for the analyte name
	[-] if rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1})
		[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1}))
		[ ] print ()
	[-] else
		[ ] 
		[-] if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1})
			[ ] iAnalytePos = 1
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1})
			[ ] iAnalytePos = 2
		[ ] 
		[ ] // First verify that the expected and actual Analyte Names match
		[-] if (rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
			[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Ct values match
		[-] if rDetail.sCt == "0.000000"
			[ ] sCt = "0.0"
		[-] else
			[ ] iPos = StrPos(DEC, rDetail.sCt)
			[ ] sCt = SubStr(rDetail.sCt, 1, iPos +1)
			[ ] // StuffComma(sCt)
		[-] if (sCt  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
			[ ] LogError("Ct value is not valid for sample: {sSampleID}")
		[ ] print("Expected Ct value: {sCt}")
		[ ] print("Actual Ct value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual EndPt values match
		[-] if rDetail.sEndPt == "0.000000"
			[ ] sEndPt = "0.0"
		[-] else
			[ ] iPos = StrPos(DEC, rDetail.sEndPt)
			[ ] sEndPt = SubStr(rDetail.sEndPt, 1, iPos +1)
			[ ] // StuffComma(sEndPt)
		[-] if (sEndPt != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
			[ ] LogError("EndPt value is not valid for sample: {sSampleID}")
		[ ] print("Expected EndPt value: {sEndPt}")
		[ ] print("Actual EndPt value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Analyte Results match
		[-] if (rDetail.sAnalyteResult != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
			[ ] LogError("Analyte Result is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
		[ ] print("Expected Analyte Result: " + rDetail.sAnalyteResult)
		[ ] print("Actual Analyte Result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
		[ ] print ()
	[ ] 
[ ] 
[ ] // This function will verify all of the values on the Detail tab of View Results against the expected values that are passed into the function
[ ] // For error log records the Sample ID is also passed into the function
[ ] // For this version of the function only the 2nd Deriv. Peak Height is verified
[+] VerifyDetailTabAR (DETAIL_AR1_4 rDetail, STRING sSampleID)
	[ ] // 
	[ ] // Variables
	[ ] //
	[ ] INTEGER iAnalytePos = 0
	[ ] STRING sPrbChk = ' '
	[ ] STRING sSecDerivPkHt = ' '
	[ ] STRING sMeltPeak = ' '
	[ ] INTEGER iPos = 0
	[ ] 
	[ ] SetPrecision (1)
	[ ] 
	[ ] // Verification for the analyte name
	[-] if rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({1, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({2, 1}) 
		[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({1, 1}))
		[ ] print ()
	[-] else
		[ ] 
		[-] if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({1, 1})
			[ ] iAnalytePos = 1
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({2, 1})
			[ ] iAnalytePos = 2
		[ ] 
		[ ] // First verify that the expected and actual Analyte Names match
		[-] if (rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
			[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual 2nd Derivative Peak Height values match
		[-] if rDetail.sSecDerivPeakHght == "0.000000"
			[ ] sSecDerivPkHt = "0.0"
		[-] else
			[ ] iPos = StrPos(DEC, rDetail.sSecDerivPeakHght)
			[ ] sSecDerivPkHt = SubStr(rDetail.sSecDerivPeakHght, 1, iPos +1)
		[-] if (sSecDerivPkHt  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}))
			[ ] LogError("2nd Derivative Peak Height is not valid for sample: {sSampleID}")
		[ ] print("Expected 2nd Derivative Peak Height: {sSecDerivPkHt}")
		[ ] print("Actual 2nd Derivative Peak Height: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}))
		[ ] print ()
		[ ] 
[ ] 
[+] VerifyAnalyteResult2 (DETAIL_AR2_3_5 rDetail, STRING sSampleID)
	[ ] // 
	[ ] // Variables
	[ ] //
	[ ] INTEGER iAnalytePos = 0
	[ ] STRING sCt = ' '
	[ ] STRING sEndPt = ' '
	[ ] INTEGER iPos = 0
	[ ] 
	[ ] SetPrecision (1)
	[ ] 
	[ ] // Verification for the analyte name
	[-] if rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({3, 1})
		[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1}))
		[ ] print ()
	[-] else
		[ ] 
		[-] if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1})
			[ ] iAnalytePos = 1
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1})
			[ ] iAnalytePos = 2
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({3, 1})
			[ ] iAnalytePos = 3
			[ ] 
		[ ] // First verify that the expected and actual Analyte Names match
		[-] if (rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
			[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Ct values match
		[-] if rDetail.sCt == "0.000000"
			[ ] sCt = "0.0"
		[-] else
			[ ] iPos = StrPos(DEC, rDetail.sCt)
			[ ] sCt = SubStr(rDetail.sCt, 1, iPos +1)
			[ ] // StuffComma(sCt)
		[-] if (sCt  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
			[ ] LogError("Ct value is not valid for sample: {sSampleID}")
		[ ] print("Expected Ct value: {sCt}")
		[ ] print("Actual Ct value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual EndPt values match
		[-] if rDetail.sEndPt == "0.000000"
			[ ] sEndPt = "0.0"
		[-] else
			[ ] iPos = StrPos(DEC, rDetail.sEndPt)
			[ ] sEndPt = SubStr(rDetail.sEndPt, 1, iPos +1)
			[ ] // StuffComma(sEndPt)
		[-] if (sEndPt != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
			[ ] LogError("EndPt value is not valid for sample: {sSampleID}")
		[ ] print("Expected EndPt value: {sEndPt}")
		[ ] print("Actual EndPt value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Analyte Results match
		[-] if (rDetail.sAnalyteResult != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
			[ ] LogError("Analyte Result is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
		[ ] print("Expected Analyte Result: " + rDetail.sAnalyteResult)
		[ ] print("Actual Analyte Result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
		[ ] print ()
	[ ] 
[ ] 
[+] VerifyAnalyteResult3 (DETAIL_AR7 rDetail, STRING sSampleID)
	[ ] // 
	[ ] // Variables
	[ ] //
	[ ] INTEGER iAnalytePos = 0
	[ ] STRING sCt = ' '
	[ ] STRING sEndPt = ' '
	[ ] STRING sTargetDeltaCt = ' '
	[ ] INTEGER iPos = 0
	[ ] 
	[ ] SetPrecision (1)
	[ ] 
	[ ] // Verification for the analyte name
	[-] if rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({3, 1})
		[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1}))
		[ ] print ()
	[-] else
		[ ] 
		[-] if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1})
			[ ] iAnalytePos = 1
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1})
			[ ] iAnalytePos = 2
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({3, 1})
			[ ] iAnalytePos = 3
			[ ] 
		[ ] // First verify that the expected and actual Analyte Names match
		[-] if (rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
			[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Ct values match
		[-] if rDetail.sCt == "0.000000"
			[ ] sCt = "0.0"
		[-] else
			[ ] iPos = StrPos(DEC, rDetail.sCt)
			[ ] sCt = SubStr(rDetail.sCt, 1, iPos +1)
			[ ] // StuffComma(sCt)
		[-] if (sCt  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
			[ ] LogError("Ct value is not valid for sample: {sSampleID}")
		[ ] print("Expected Ct value: {sCt}")
		[ ] print("Actual Ct value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual EndPt values match
		[-] if rDetail.sEndPt == "0.000000"
			[ ] sEndPt = "0.0"
		[-] else
			[ ] iPos = StrPos(DEC, rDetail.sEndPt)
			[ ] sEndPt = SubStr(rDetail.sEndPt, 1, iPos +1)
			[ ] // StuffComma(sEndPt)
		[-] if (sEndPt != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
			[ ] LogError("EndPt value is not valid for sample: {sSampleID}")
		[ ] print("Expected EndPt value: {sEndPt}")
		[ ] print("Actual EndPt value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Analyte Results match
		[-] if (rDetail.sAnalyteResult != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
			[ ] LogError("Analyte Result is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
		[ ] print("Expected Analyte Result: " + rDetail.sAnalyteResult)
		[ ] print("Actual Analyte Result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
		[ ] print ()
	[-] 
		[ ] // Verify that the expected and actual Target Delta Ct values match
		[-] if rDetail.sTargetDeltaCt == DBNULLVALUE //&& GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}) == NULL
			[ ] print("Expected Target Delta Ct: ")
			[ ] print("Actual Target Delta Ct: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}))
		[-] else
			[ ] iPos = StrPos(DEC, rDetail.sTargetDeltaCt)
			[ ] sTargetDeltaCt = SubStr(rDetail.sTargetDeltaCt, 1, iPos +1)
			[-] if (sTargetDeltaCt != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}))
				[ ] LogError("Target Delta Ct is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
			[ ] print("Expected Target Delta Ct: " + sTargetDeltaCt)
			[ ] print("Actual Target Delta Ct: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}))
			[ ] print ()
[ ] 
[+] VerifyAnalyteResult4Analyte (DETAIL_ER_1 rDetail, STRING sSampleID)
	[ ] // 
	[ ] // Variables
	[ ] //
	[ ] INTEGER iAnalytePos = 0
	[ ] STRING sCt = ' '
	[ ] STRING sEndPt = ' '
	[ ] INTEGER iPos = 0
	[ ] 
	[ ] SetPrecision (1)
	[ ] 
	[ ] // Verification for the analyte name
	[-] if rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({3, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({4, 1})
		[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1}))
		[ ] print ()
	[-] else
		[ ] 
		[-] if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1})
			[ ] iAnalytePos = 1
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1})
			[ ] iAnalytePos = 2
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({3, 1})
			[ ] iAnalytePos = 3
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({4, 1})
			[ ] iAnalytePos = 4
		[ ] 
		[ ] // First verify that the expected and actual Analyte Names match
		[-] if (rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
			[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Ct values match
		[-] if rDetail.sCt == "0.000000"
			[ ] sCt = "0.0"
		[-] else
			[ ] iPos = StrPos(DEC, rDetail.sCt)
			[ ] sCt = SubStr(rDetail.sCt, 1, iPos +1)
			[ ] // StuffComma(sCt)
		[-] if (sCt  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
			[ ] LogError("Ct value is not valid for sample: {sSampleID}")
		[ ] print("Expected Ct value: {sCt}")
		[ ] print("Actual Ct value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual EndPt values match
		[-] if rDetail.sEndPt == "0.000000"
			[ ] sEndPt = "0.0"
		[-] else
			[ ] iPos = StrPos(DEC, rDetail.sEndPt)
			[ ] sEndPt = SubStr(rDetail.sEndPt, 1, iPos +1)
			[ ] // StuffComma(sEndPt)
		[-] if (sEndPt != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
			[ ] LogError("EndPt value is not valid for sample: {sSampleID}")
		[ ] print("Expected EndPt value: {sEndPt}")
		[ ] print("Actual EndPt value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Analyte Results match
		[-] if (rDetail.sAnalyteResult != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
			[ ] LogError("Analyte Result is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
		[ ] print("Expected Analyte Result: " + rDetail.sAnalyteResult)
		[ ] print("Actual Analyte Result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
		[ ] print ()
	[ ] 
[ ] 
[ ] // This function will accept the number of analytes in the assay and the analyte name. This function verifies that the analyte name is valid 
[ ] // and then it returns the row of the analyte which is used by the other functions
[+] FindAnalyteRow(INTEGER iNumAnalytes, STRING sAnalyteName, STRING sSampleID, out INTEGER iAnalytePos)
	[ ] iAnalytePos = 0
	[ ] 
	[-] switch iNumAnalytes
		[-] case 1
			[-] if sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1})
				[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
				[ ] print("Expected Analyte Name: " + sAnalyteName)
				[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1}))
				[ ] print ()
			[-] else
				[-] if sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1})
					[ ] iAnalytePos = 1
		[-] case 2
			[-] if sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1}) &&
    sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1})
				[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
				[ ] print("Expected Analyte Name: " + sAnalyteName)
				[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1}))
				[ ] print ()
			[-] else
				[-] if sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1})
					[ ] iAnalytePos = 1
				[-] else if sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1})
					[ ] iAnalytePos = 2
		[-] case 3
			[-] if sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1}) &&
    sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1}) &&
    sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({3, 1}) 
				[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
				[ ] print("Expected Analyte Name: " + sAnalyteName)
				[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1}))
				[ ] print ()
			[-] else
				[-] if sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1})
					[ ] iAnalytePos = 1
				[-] else if sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1})
					[ ] iAnalytePos = 2
				[-] if sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({3, 1})
					[ ] iAnalytePos = 3
		[-] case 4
			[-] if sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1}) &&
    sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1}) &&
    sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({3, 1}) &&
    sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({4, 1}) 
				[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
				[ ] print("Expected Analyte Name: " + sAnalyteName)
				[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1}))
				[ ] print ()
			[-] else
				[-] if sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1})
					[ ] iAnalytePos = 1
				[-] else if sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1})
					[ ] iAnalytePos = 2
				[-] if sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({3, 1})
					[ ] iAnalytePos = 3
				[-] else if sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({4, 1})
					[ ] iAnalytePos = 4
		[-] case 5
			[-] if sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1}) &&
    sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1}) &&
    sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({3, 1}) &&
    sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({4, 1}) &&
    sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({5, 1}) 
				[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
				[ ] print("Expected Analyte Name: " + sAnalyteName)
				[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1}))
				[ ] print ()
			[-] else
				[-] if sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1})
					[ ] iAnalytePos = 1
				[-] else if sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1})
					[ ] iAnalytePos = 2
				[-] if sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({3, 1})
					[ ] iAnalytePos = 3
				[-] else if sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({4, 1})
					[ ] iAnalytePos = 4
				[-] if sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({5, 1})
					[ ] iAnalytePos = 5
		[-] case 6
			[-] if sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1}) &&
    sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1}) &&
    sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({3, 1}) &&
    sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({4, 1}) &&
    sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({5, 1}) &&
    sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({6, 1}) 
				[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
				[ ] print("Expected Analyte Name: " + sAnalyteName)
				[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1}))
				[ ] print ()
			[-] else
				[-] if sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1})
					[ ] iAnalytePos = 1
				[-] else if sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1})
					[ ] iAnalytePos = 2
				[-] if sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({3, 1})
					[ ] iAnalytePos = 3
				[-] else if sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({4, 1})
					[ ] iAnalytePos = 4
				[-] if sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({5, 1})
					[ ] iAnalytePos = 5
				[-] else if sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({6, 1})
					[ ] iAnalytePos = 6
		[-] default
			[ ] LogError("Passed parameter for number of Analytes of {iNumAnalytes} is invalid")
			[ ] 
	[ ] 
[ ] 
[ ] // This function will verify all of the values on the Analyte Result tab of View Results against the expected values that are passed into the function
[ ] // For error log records the Sample ID is also passed into the function
[+] VerifyAnalyteResultPrbChk (DETAIL_PRB_CHK rDetail, STRING sSampleID, INTEGER iAnalytePos)
	[ ] // 
	[ ] // Variables
	[ ] //
	[ ] STRING sCt = ' '
	[ ] STRING sEndPt = ' '
	[ ] INTEGER iPos = 0
	[ ] 
	[ ] SetPrecision (1)
	[ ] // First verify that the expected and actual Analyte Names match
	[-] if (rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
		[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
	[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
	[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
	[ ] print ()
	[ ] 
	[ ] // Verify that the expected and actual Ct values match
	[-] if rDetail.sCt == "0.000000"
		[ ] sCt = "0.0"
	[-] else
		[ ] iPos = StrPos(DEC, rDetail.sCt)
		[ ] sCt = SubStr(rDetail.sCt, 1, iPos +1)
	[-] if (sCt  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
		[ ] LogError("Ct value is not valid for sample: {sSampleID}")
	[ ] print("Expected Ct value: {sCt}")
	[ ] print("Actual Ct value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
	[ ] print ()
	[ ] 
	[ ] // Verify that the expected and actual EndPt values match
	[-] if rDetail.sEndPt == "0.000000"
		[ ] sEndPt = "0.0"
	[-] else
		[ ] iPos = StrPos(DEC, rDetail.sEndPt)
		[ ] sEndPt = SubStr(rDetail.sEndPt, 1, iPos +1)
	[-] if (sEndPt != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
		[ ] LogError("EndPt value is not valid for sample: {sSampleID}")
	[ ] print("Expected EndPt value: {sEndPt}")
	[ ] print("Actual EndPt value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
	[ ] print ()
	[ ] 
	[ ] // Verify that the expected and actual Analyte Results match
	[-] if (rDetail.sAnalyteResult != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
		[ ] LogError("Analyte Result is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
	[ ] print("Expected Analyte Result: " + rDetail.sAnalyteResult)
	[ ] print("Actual Analyte Result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
	[ ] print ()
	[ ] 
	[ ] // Verify that the expected and actual Probe Check Results match
	[-] if (rDetail.sPrbChkResult != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 5}))
		[ ] LogError("Probe Check Result is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
	[ ] print("Expected Probe Check Result: " + rDetail.sPrbChkResult)
	[ ] print("Actual Probe Check Result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 5}))
	[ ] print ()
	[ ] 
[ ] 
[ ] // This function will verify all of the values on the Detail tab of View Results against the expected values that are passed into the function
[ ] // For this version of the function only the 2nd Deriv. Peak Height is verified
[+] VerifyDetailSecondDeriv (DETAIL_SECOND_DERIV rDetail, STRING sSampleID, INTEGER iAnalytePos)
	[ ] // 
	[ ] // Variables
	[ ] //
	[ ] STRING sPrbChk = ' '
	[ ] STRING sSecDerivPkHt = ' '
	[ ] INTEGER iPos = 0
	[ ] 
	[ ] SetPrecision (1)
	[-] 
		[ ] // First verify that the expected and actual Analyte Names match
		[-] if (rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
			[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual 2nd Derivative Peak Height values match
		[-] if rDetail.sSecDerivPeakHght != NOTAPPLICABLE
			[-] if rDetail.sSecDerivPeakHght == "0.000000"
				[ ] sSecDerivPkHt = "0.0"
			[-] else
				[ ] iPos = StrPos(DEC, rDetail.sSecDerivPeakHght)
				[ ] sSecDerivPkHt = SubStr(rDetail.sSecDerivPeakHght, 1, iPos +1)
				[ ] // StuffComma(sSecDerivPkHt)
			[-] if (sSecDerivPkHt  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}))
				[ ] LogError("2nd Derivative Peak Height is not valid for sample: {sSampleID}")
			[ ] print("Expected 2nd Derivative Peak Height: {sSecDerivPkHt}")
			[ ] print("Actual 2nd Derivative Peak Height: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}))
			[ ] print ()
			[ ] 
		[ ] 
[ ] 
[ ] // This function will verify all of the values on the Detail tab of View Results against the expected values that are passed into the function
[+] VerifyAnalyteResultCA (DETAIL_SECOND_DERIV rDetail, STRING sSampleID, INTEGER iAnalytePos)
	[ ] // 
	[ ] // Variables
	[ ] //
	[ ] STRING sCt = ' '
	[ ] STRING sEndPt = ' '
	[ ] INTEGER iPos = 0
	[ ] 
	[ ] SetPrecision (1)
	[-] 
		[ ] // First verify that the expected and actual Analyte Names match
		[-] if (rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
			[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Ct values match
		[-] if rDetail.sCt == "0.000000"
			[ ] sCt = "0.0"
		[-] else
			[ ] iPos = StrPos(DEC, rDetail.sCt)
			[ ] sCt = SubStr(rDetail.sCt, 1, iPos +1)
			[ ] // StuffComma(sCt)
		[-] if (sCt  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
			[ ] LogError("Ct value is not valid for sample: {sSampleID}")
		[ ] print("Expected Ct value: {sCt}")
		[ ] print("Actual Ct value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual EndPt values match
		[-] if rDetail.sEndPt == "0.000000"
			[ ] sEndPt = "0.0"
		[-] else
			[ ] iPos = StrPos(DEC, rDetail.sEndPt)
			[ ] sEndPt = SubStr(rDetail.sEndPt, 1, iPos +1)
			[ ] // StuffComma(sEndPt)
			[ ] print("This is the converted EndPt: {sEndPt}")
		[-] if (sEndPt != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
			[ ] LogError("EndPt value is not valid for sample: {sSampleID}")
		[ ] print("Expected EndPt value: {sEndPt}")
		[ ] print("Actual EndPt value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Analyte Results match
		[-] if (rDetail.sAnalyteResult != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
			[ ] LogError("Analyte Result is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
		[ ] print("Expected Analyte Result: " + rDetail.sAnalyteResult)
		[ ] print("Actual Analyte Result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
		[ ] print ()
	[ ] 
[ ] 
[ ] // This function takes the expected values for Sample ID, Status, Assay Name 
[ ] // (Left panel verifications) and verifies them against the GUI 
[+] VerifyTestResultMainOR (REC_TEST_RESULT rExpected)
	[ ] //
	[ ] // Variable declarations
	[ ] //
	[ ] LIST OF STRING lsHTMLTestResult
	[ ] STRING sHTMLString = ' '
	[ ] INTEGER iPos = 0
	[ ] REC_TEST_EXCEL rActual
	[ ] BOOLEAN bStyleNotFound = true
	[ ] 
	[ ] // Verify Sample ID
	[ ] GeneXpert®DxSystem.UserNone.SampleID.SetPosition( 1, 3 )
	[ ] rActual.sSampleID = GeneXpert®DxSystem.UserNone.SampleID.GetText()
	[-] if rExpected.sSampleID != rActual.sSampleID
		[ ] LogError("Sample ID is not valid")
	[ ] print("Expected Sample ID: " + rExpected.sSampleID)
	[ ] print("Actual Sample ID: " + rActual.sSampleID)
	[ ] print ()
	[ ] 
	[ ] // Verify information on the left panel i.e. Status and Assay Name
	[ ] rActual.sAssayNameLeftPanel = GeneXpert®DxSystem.UserNone.Assay.GetText()
	[-] if rExpected.sAssayNameLeftPanel != rActual.sAssayNameLeftPanel
		[ ] LogError("Assay name on the left panel is not valid for sample: {rExpected.sSampleID}")
	[ ] print("Expected Assay Name on left panel: " + rExpected.sAssayNameLeftPanel)
	[ ] print("Actual Assay Name on left panel: " + rActual.sAssayNameLeftPanel)
	[ ] print ()
	[ ] 
	[ ] rActual.sStatus = GeneXpert®DxSystem.UserNone.Status.GetText()
	[-] if rExpected.sStatus != rActual.sStatus
		[ ] LogError("Status on the left panel is not valid for sample: {rExpected.sSampleID}")
	[ ] print("Expected Status: " + rExpected.sStatus)
	[ ] print("Actual Status: " + rActual.sStatus)
	[ ] print ()
	[ ] 
	[ ] 
[ ] 
[ ] // This function takes the expected values for Assay Name (Right panel verifications), Test Result Text, 
[ ] // Test Result Color & Test Result Font Color and verifies them against the GUI for all test results for a given sample
[+] VerifyTestResultAndColor (REC_TEST_RESULT rExpected)
	[ ] //
	[ ] // Variable declarations
	[ ] //
	[ ] LIST OF STRING lsHTMLTestResult
	[ ] STRING sHTMLString = ' '
	[ ] INTEGER iPos = 0
	[ ] REC_TEST_RESULT rActual
	[ ] BOOLEAN bStyleNotFound = true
	[ ] TEST_RESULT lsTestResult
	[ ] STRING sRow = ' '
	[ ] 
	[ ] // Verify information on the Test Result tab i.e. Assay Name, Result Text & Result color
	[ ] rActual.sAssayNameRightPanel = GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.TestResult.AssayName.GetText()
	[-] if rExpected.sAssayNameRightPanel != rActual.sAssayNameRightPanel
		[ ] LogError("Assay name on the right panel is not valid for sample: {rExpected.sSampleID}")
	[ ] print("Expected Assay Name on right panel: " + rExpected.sAssayNameRightPanel)
	[ ] print("Actual Assay Name on right panel: " + rActual.sAssayNameRightPanel)
	[ ] print ()
	[ ] 
	[ ] // Result Text and Result Color are part of a series of html tags.
	[ ] // HTML tag that contains the result color and the result font color looks like below
	[ ] // e.g.    tr.row0 { color: #FFFFFF; background-color: #00E600 }
	[ ] lsHTMLTestResult = GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.TestResult.JavaxSwingJEditorPane.GetMultiText()
	[ ] ListPrint(lsHTMLTestResult)
	[ ] print()
	[ ] 
	[-] for each lsTestResult in rExpected.lsTestResult
		[-] if lsTestResult.sResultText != NOTAPPLICABLE
			[-] switch lsTestResult.iPosition
				[-] case 1
					[ ] sRow = ROW1_OR
				[-] case 2
					[ ] sRow = ROW2
				[-] case 3
					[ ] sRow = ROW3
				[-] case 4
					[ ] sRow = ROW4
				[-] case 5
					[ ] sRow = ROW5
				[-] case 6
					[ ] sRow = ROW6
				[-] case 7
					[ ] sRow = ROW7
				[-] case 8
					[ ] sRow = ROW8
				[-] case 9
					[ ] sRow = ROW9
				[-] case 10
					[ ] sRow = ROW10
				[-] case 11
					[ ] sRow = ROW11
				[-] case 12
					[ ] sRow = ROW12
				[-] default 
					[ ] sRow =  ' '
			[ ] 
			[-] if lsTestResult.sResultText == null
				[ ] print("The test result for sample: {rExpected.sSampleID} is blank")
				[ ] print()
			[-] else
				[ ] lsTestResult.sResultText = PAD + lsTestResult.sResultText 
				[ ] iPos = ListFind(lsHTMLTestResult, lsTestResult.sResultText)
				[-] if iPos == 0
					[ ] LogError("Result text is not valid for sample: {rExpected.sSampleID}")
					[ ] print("Expected Result Text: " + lsTestResult.sResultText)
					[ ] print("Actual Result Text:  <Not Valid>")
					[ ] print ()
				[-] else
					[ ] print("Expected Result Text: " + lsTestResult.sResultText)
					[ ] print("Actual Result Text: " + lsHTMLTestResult[iPos])
					[ ] print ()
			[ ] 
			[-] if lsTestResult.sResultText != null
				[ ] bStyleNotFound = true
				[-] for each sHTMLString in lsHTMLTestResult
					[ ] // Verify the font color for the font color and  the background color for the test result1 
					[ ] iPos = StrPos(sRow, sHTMLString)
					[-] if  iPos != 0
						[ ] bStyleNotFound = false
						[ ] iPos = StrPos(BACKGROUNDCOLOR, sHTMLString)
						[-] if (lsTestResult.sResultColor != SubStr(sHTMLString, iPos + LEN(BACKGROUNDCOLOR), 6))
							[ ] LogError("Result color is not valid for sample: {rExpected.sSampleID}")
							[ ] print("The value of the iPos is: {iPos}")
						[ ] print("Expected Result Color: " + lsTestResult.sResultColor)
						[ ] print("Actual Result Color: {SubStr(sHTMLString, iPos + LEN(BACKGROUNDCOLOR), 6)}")
						[ ] print ()
						[ ] 
						[ ] // Verify the background color for the test result 
						[ ] iPos = StrPos(FONTCOLOR, sHTMLString)
						[-] if  iPos != 0
							[-] if (lsTestResult.sResultFont != SubStr(sHTMLString, iPos + LEN(FONTCOLOR), 6))
								[ ] LogError("Result font color is not valid for sample: {rExpected.sSampleID}")
							[ ] print("Expected Result Font Color: " + lsTestResult.sResultFont)
							[ ] print("Actual Result Font Color: {SubStr(sHTMLString, iPos + LEN(FONTCOLOR), 6)}")
							[ ] print ()
				[-] if bStyleNotFound
					[ ] LogError("Result font and background color are not found for sample: {rExpected.sSampleID}")
					[ ] print("Expected Result Background Color: " + lsTestResult.sResultColor)
					[ ] print("Expected Result Font Color: " + lsTestResult.sResultFont)
					[ ] print("Actual Result Background and Font Colors are not found in the GUI")
					[ ] print ()
[ ] 
[ ] // This function takes the expected values for Error Status and verifies it against the GUI. 
[ ] // User must be on Support tab prior to calling this function
[+] VerifyErrorStatusOR (REC_TEST_RESULT rExpected)
	[ ] //
	[ ] // Variable declarations
	[ ] //
	[ ] REC_TEST_RESULT rActual
	[ ] 
	[ ] // Verification for the Error Status
	[ ] rActual.sErrorStatus = GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Support.ErrorStatus.GetText()
	[-] if (rExpected.sErrorStatus != rActual.sErrorStatus)
		[ ] LogError("Error Status is not valid for sample: {rExpected.sSampleID}")
	[ ] print("Expected Error Status: " + rExpected.sErrorStatus)
	[ ] print("Actual Error Status: " + rActual.sErrorStatus)
[ ] 
[ ] // This function will verify all of the values on the Detail tab of View Results against the expected values that are passed into the function
[+] VerifyAnalyteResultOR ( REC_DETAILCOMBO rDetail, STRING sSampleID, INTEGER iAnalytePos)
	[ ] // 
	[ ] // Variables
	[ ] //
	[ ] STRING sCt = ' '
	[ ] STRING sEndPt = ' '
	[ ] INTEGER iPos = 0
	[ ] 
	[ ] SetPrecision (1)
	[-] 
		[ ] // First verify that the expected and actual Analyte Names match
		[-] if (rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
			[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Ct values match
		[-] if rDetail.sCt != NOTAPPLICABLE
			[-] if rDetail.sCt == "0.000000"
				[ ] sCt = "0.0"
			[-] else
				[ ] iPos = StrPos(DEC, rDetail.sCt)
				[ ] sCt = SubStr(rDetail.sCt, 1, iPos +1)
				[ ] // StuffComma(sCt)
			[-] if (sCt  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
				[ ] LogError("Ct value is not valid for sample: {sSampleID}")
			[ ] print("Expected Ct value: {sCt}")
			[ ] print("Actual Ct value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
			[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual EndPt values match
		[-] if subStr(sSampleID, 1, 6) != ORT34
			[-] if rDetail.sEndPt != NOTAPPLICABLE
				[-] if rDetail.sEndPt == "0.000000"
					[ ] sEndPt = "0.0"
				[-] else
					[ ] iPos = StrPos(DEC, rDetail.sEndPt)
					[ ] sEndPt = SubStr(rDetail.sEndPt, 1, iPos +1)
					[ ] // StuffComma(sEndPt)
				[-] if (sEndPt != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
					[ ] LogError("EndPt value is not valid for sample: {sSampleID}")
				[ ] print("Expected EndPt value: {sEndPt}")
				[ ] print("Actual EndPt value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
				[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Analyte Results match
		[-] if (rDetail.sAnalyteResult != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
			[ ] LogError("Analyte Result is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
		[ ] print("Expected Analyte Result: " + rDetail.sAnalyteResult)
		[ ] print("Actual Analyte Result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
		[ ] print ()
	[ ] 
[ ] 
[ ] // This is a helper function that moves the corresponding values from the expected data structure to the test result data structure. 
[ ] // This is done so that not all 6 expected results need to be carried around if less than six are used. The test result data type uses
[ ] // a list of test results rather than hardcoding all 9 as the REC_TEST_EXCEL must do since it reads the information from the excel
[+] MoveExpectedToResult(REC_TEST_EXCEL rExpected, inout REC_TEST_RESULT rResult)
	[ ] 
	[ ] TEST_RESULT rTestResult
	[ ] INTEGER i = 0
	[ ] 
	[-] // for ( i = 1; i <= ListCount(rResult.lsTestResult); i++)
		[ ] // ListDelete (rResult.lsTestResult, i)
	[ ] rResult.lsTestResult = {}
	[ ] 
	[ ] rResult.sSampleID = rExpected.sSampleID
	[ ] rResult.sStatus = rExpected.sStatus
	[ ] rResult.sErrorStatus = rExpected.sErrorStatus
	[ ] rResult.sAssayNameLeftPanel = rExpected.sAssayNameLeftPanel
	[ ] rResult.sAssayNameRightPanel = rExpected.sAssayNameRightPanel
	[ ] 
	[+] if rExpected.sResultText1 != NO_ENTRY
		[ ] rTestResult.iPosition = rExpected.iPosition1
		[ ] rTestResult.sResultText = rExpected.sResultText1
		[ ] rTestResult.sResultColor = rExpected.sResultColor1
		[ ] rTestResult.sResultFont = rExpected.sResultFont1 
		[ ] ListAppend(rResult.lsTestResult, rTestResult)
	[+] if rExpected.sResultText2 != NO_ENTRY
		[ ] rTestResult.iPosition = rExpected.iPosition2
		[ ] rTestResult.sResultText = rExpected.sResultText2
		[ ] rTestResult.sResultColor = rExpected.sResultColor2
		[ ] rTestResult.sResultFont = rExpected.sResultFont2 
		[ ] ListAppend(rResult.lsTestResult, rTestResult)
	[+] if rExpected.sResultText3 != NO_ENTRY
		[ ] rTestResult.iPosition = rExpected.iPosition3
		[ ] rTestResult.sResultText = rExpected.sResultText3
		[ ] rTestResult.sResultColor = rExpected.sResultColor3
		[ ] rTestResult.sResultFont = rExpected.sResultFont3 
		[ ] ListAppend(rResult.lsTestResult, rTestResult)
	[+] if rExpected.sResultText4 != NO_ENTRY
		[ ] rTestResult.iPosition = rExpected.iPosition4
		[ ] rTestResult.sResultText = rExpected.sResultText4
		[ ] rTestResult.sResultColor = rExpected.sResultColor4
		[ ] rTestResult.sResultFont = rExpected.sResultFont4 
		[ ] ListAppend(rResult.lsTestResult, rTestResult)
	[+] if rExpected.sResultText5 != NO_ENTRY
		[ ] rTestResult.iPosition = rExpected.iPosition5
		[ ] rTestResult.sResultText = rExpected.sResultText5
		[ ] rTestResult.sResultColor = rExpected.sResultColor5
		[ ] rTestResult.sResultFont = rExpected.sResultFont5 
		[ ] ListAppend(rResult.lsTestResult, rTestResult)
	[+] if rExpected.sResultText6 != NO_ENTRY
		[ ] rTestResult.iPosition = rExpected.iPosition6
		[ ] rTestResult.sResultText = rExpected.sResultText6
		[ ] rTestResult.sResultColor = rExpected.sResultColor6
		[ ] rTestResult.sResultFont = rExpected.sResultFont6 
		[ ] ListAppend(rResult.lsTestResult, rTestResult)
	[+] if rExpected.sResultText7 != NO_ENTRY
		[ ] rTestResult.iPosition = rExpected.iPosition7
		[ ] rTestResult.sResultText = rExpected.sResultText7
		[ ] rTestResult.sResultColor = rExpected.sResultColor7
		[ ] rTestResult.sResultFont = rExpected.sResultFont7 
		[ ] ListAppend(rResult.lsTestResult, rTestResult)
	[+] if rExpected.sResultText8 != NO_ENTRY
		[ ] rTestResult.iPosition = rExpected.iPosition8
		[ ] rTestResult.sResultText = rExpected.sResultText8
		[ ] rTestResult.sResultColor = rExpected.sResultColor8
		[ ] rTestResult.sResultFont = rExpected.sResultFont8 
		[ ] ListAppend(rResult.lsTestResult, rTestResult)
	[+] if rExpected.sResultText9 != NO_ENTRY
		[ ] rTestResult.iPosition = rExpected.iPosition9
		[ ] rTestResult.sResultText = rExpected.sResultText9
		[ ] rTestResult.sResultColor = rExpected.sResultColor9
		[ ] rTestResult.sResultFont = rExpected.sResultFont9 
		[ ] ListAppend(rResult.lsTestResult, rTestResult)
	[+] if rExpected.sResultText10 != NO_ENTRY
		[ ] rTestResult.iPosition = rExpected.iPosition10
		[ ] rTestResult.sResultText = rExpected.sResultText10
		[ ] rTestResult.sResultColor = rExpected.sResultColor10
		[ ] rTestResult.sResultFont = rExpected.sResultFont10 
		[ ] ListAppend(rResult.lsTestResult, rTestResult)
	[+] if rExpected.sResultText11 != NO_ENTRY
		[ ] rTestResult.iPosition = rExpected.iPosition11
		[ ] rTestResult.sResultText = rExpected.sResultText11
		[ ] rTestResult.sResultColor = rExpected.sResultColor11
		[ ] rTestResult.sResultFont = rExpected.sResultFont11 
		[ ] ListAppend(rResult.lsTestResult, rTestResult)
	[+] if rExpected.sResultText12 != NO_ENTRY
		[ ] rTestResult.iPosition = rExpected.iPosition12
		[ ] rTestResult.sResultText = rExpected.sResultText12
		[ ] rTestResult.sResultColor = rExpected.sResultColor12
		[ ] rTestResult.sResultFont = rExpected.sResultFont12 
		[ ] ListAppend(rResult.lsTestResult, rTestResult)
[ ] 
[ ] // This function takes the expected values for the test disclaimer and verifies it against the GUI. 
[ ] // User must be on the Test Result tab prior to calling this function
[ ] // Added on 1/28/2011 by Steve. Now tests for the font size of the Test Disclaimer. Default Font Size = 12
[+] VerifyTestDisclaimer (STRING sSampleID, STRING sTestDisclaimer)
	[ ] //
	[ ] // Variable declarations
	[ ] //
	[ ] STRING sActualDisclaimer
	[ ] INTEGER iTestDisclaimerFontSize = 0
	[ ] 
	[ ] // Verification for the Error Status
	[ ] sActualDisclaimer = GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.TestResult.TestResult.GetText()
	[-] if (sActualDisclaimer != sTestDisclaimer)
		[ ] LogError("Test Disclaimer is not valid for sample: {sSampleID}")
	[ ] print("Expected Test Disclaimer: {sTestDisclaimer} ")
	[ ] print("Actual Test Disclaimer: {sActualDisclaimer}")
	[ ] print()
	[ ] 
	[ ] // Get the Font Size from the Test Disclaimer text box. Added by Steve on 1/28/2011
	[ ] iTestDisclaimerFontSize = JavaMainWin("GeneXpert® Dx System").CustomWin("[javax.swing.JSplitPane]User <None>").
    CustomWin("[javax.swing.JSplitPane]Sample ID").CustomWin("[javax.swing.JSplitPane]#1").
    JavaJFCPageList("Views").JavaJFCTextField("Test Result").invokeMethods({"getFont", "getSize"},{{},{}})
	[ ] 
	[-] if iTestDisclaimerFontSize != TEST_DISCLAIMER_FONT_SIZE_DETAIL
		[ ] LogError("Test Disclaimer Font Size is not valid for sample: {sSampleID}")
	[ ] print("Expected Test Disclaimer Font Size: {TEST_DISCLAIMER_FONT_SIZE_DETAIL} ")
	[ ] print("Actual Test Disclaimer Font Size: {iTestDisclaimerFontSize}")
[ ] 
[ ] // This function will verify all of the values on the Detail tab of View Results against the expected values that are passed into the function
[ ] // For this version of the function the PrbChk1, PrbChk2 and PrbChk3 are  verified
[+] VerifyDetailPrbChkCombo (REC_DETAILCOMBO rDetail, STRING sSampleID, INTEGER iAnalytePos)
	[ ] //
	[ ] // Constants
	[ ] //
	[ ] // 
	[ ] // Variables
	[ ] //
	[ ] STRING sPrbChk = ' '
	[ ] INTEGER iPos = 0
	[ ] 
	[ ] SetPrecision (1)
	[-] 
		[ ] // First verify that the expected and actual Analyte Names match
		[-] if (rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
			[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual PrkChk1 values match
		[-] if rDetail.sPrbChk1 != NOTAPPLICABLE
			[-] if rDetail.sPrbChk1 == "0.000000"
				[ ] sPrbChk = "0.0"
			[-] else
				[ ] iPos = StrPos(DEC, rDetail.sPrbChk1)
				[ ] sPrbChk = SubStr(rDetail.sPrbChk1, 1, iPos +1)
			[-] if (sPrbChk  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
				[ ] LogError("Probe Check 1 is not valid for sample: {sSampleID}")
			[ ] print("Expected Probe Check 1: {sPrbChk}")
			[ ] print("Actual Probe Check 1: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
			[ ] print ()
			[ ] 
		[ ] // Verify that the expected and actual PrkChk1 values match
		[-] if rDetail.sPrbChk2 != NOTAPPLICABLE
			[-] if rDetail.sPrbChk2 == "0.000000"
				[ ] sPrbChk = "0.0"
			[-] else
				[ ] iPos = StrPos(DEC, rDetail.sPrbChk2)
				[ ] sPrbChk = SubStr(rDetail.sPrbChk2, 1, iPos +1)
			[-] if (sPrbChk  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
				[ ] LogError("Probe Check 2 is not valid for sample: {sSampleID}")
			[ ] print("Expected Probe Check 2: {sPrbChk}")
			[ ] print("Actual Probe Check 2: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
			[ ] print ()
			[ ] 
		[ ] // Verify that the expected and actual PrkChk1 values match
		[-] if rDetail.sPrbChk3 != NOTAPPLICABLE
			[-] if rDetail.sPrbChk3 == "0.000000"
				[ ] sPrbChk = "0.0"
			[-] else
				[ ] iPos = StrPos(DEC, rDetail.sPrbChk3)
				[ ] sPrbChk = SubStr(rDetail.sPrbChk3, 1, iPos +1)
			[-] if (sPrbChk  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
				[ ] LogError("Probe Check 3 is not valid for sample: {sSampleID}")
			[ ] print("Expected Probe Check 3: {sPrbChk}")
			[ ] print("Actual Probe Check 3: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
			[ ] print ()
			[ ] 
		[ ] 
[ ] 
[ ] 
[ ] // This function will verify all of the values on the Detail tab of View Results against the expected values that are passed into the function
[+] VerifyAnalyteResultGT( REC_DETAIL rDetail, STRING sSampleID, INTEGER iAnalytePos)
	[ ] // 
	[ ] // Variables
	[ ] //
	[ ] STRING sCt = ' '
	[ ] STRING sEndPt = ' '
	[ ] INTEGER iPos = 0
	[ ] 
	[ ] SetPrecision (1)
	[-] 
		[ ] // First verify that the expected and actual Analyte Names match
		[-] if (rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
			[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Ct values match
		[-] if rDetail.sCt != NOTAPPLICABLE
			[-] if rDetail.sCt == "0.000000"
				[ ] sCt = "0.0"
			[-] else
				[ ] iPos = StrPos(DEC, rDetail.sCt)
				[ ] sCt = SubStr(rDetail.sCt, 1, iPos +1)
				[ ] // StuffComma(sCt)
			[-] if (sCt  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
				[ ] LogError("Ct value is not valid for sample: {sSampleID}")
			[ ] print("Expected Ct value: {sCt}")
			[ ] print("Actual Ct value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
			[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual EndPt values match
		[-] if rDetail.sEndPt != NOTAPPLICABLE
			[-] if rDetail.sEndPt == "0.000000"
				[ ] sEndPt = "0.0"
			[-] else
				[ ] iPos = StrPos(DEC, rDetail.sEndPt)
				[ ] sEndPt = SubStr(rDetail.sEndPt, 1, iPos +1)
				[ ] // StuffComma(sEndPt)
			[-] if (sEndPt != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
				[ ] LogError("EndPt value is not valid for sample: {sSampleID}")
			[ ] print("Expected EndPt value: {sEndPt}")
			[ ] print("Actual EndPt value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
			[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Analyte Results match
		[-] if (rDetail.sAnalyteResult != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
			[ ] LogError("Analyte Result is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
		[ ] print("Expected Analyte Result: " + rDetail.sAnalyteResult)
		[ ] print("Actual Analyte Result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
		[ ] print ()
	[ ] 
[ ] 
[ ] // This is a helper function that moves the corresponding values from the expected data structure to the test result data structure. 
[ ] // This is done so that not all 6 expected results need to be carried around if less than six are used. The test result data type uses
[ ] // a list of test results rather than hardcoding all 9 as the REC_TEST_EXCEL must do since it reads the information from the excel
[+] MoveExpectedToResultGT(REC_TEST_EXCEL_GT rExpected, inout REC_TEST_RESULT rResult)
	[ ] 
	[ ] TEST_RESULT rTestResult
	[ ] INTEGER i = 0
	[ ] 
	[-] // for ( i = 1; i <= ListCount(rResult.lsTestResult); i++)
		[ ] // ListDelete (rResult.lsTestResult, i)
	[ ] rResult.lsTestResult = {}
	[ ] 
	[ ] rResult.sSampleID = rExpected.sSampleID
	[ ] rResult.sStatus = rExpected.sStatus
	[ ] rResult.sErrorStatus = rExpected.sErrorStatus
	[ ] rResult.sAssayNameLeftPanel = rExpected.sAssayNameLeftPanel
	[ ] rResult.sAssayNameRightPanel = rExpected.sAssayNameRightPanel
	[ ] 
	[-] if rExpected.sResultText1 != NO_ENTRY
		[ ] rTestResult.iPosition = rExpected.iPosition1
		[ ] rTestResult.sResultText = rExpected.sResultText1
		[ ] rTestResult.sResultColor = rExpected.sResultColor1
		[ ] rTestResult.sResultFont = rExpected.sResultFont1 
		[ ] ListAppend(rResult.lsTestResult, rTestResult)
	[-] if rExpected.sResultText2 != NO_ENTRY
		[ ] rTestResult.iPosition = rExpected.iPosition2
		[ ] rTestResult.sResultText = rExpected.sResultText2
		[ ] rTestResult.sResultColor = rExpected.sResultColor2
		[ ] rTestResult.sResultFont = rExpected.sResultFont2 
		[ ] ListAppend(rResult.lsTestResult, rTestResult)
	[-] if rExpected.sResultText3 != NO_ENTRY
		[ ] rTestResult.iPosition = rExpected.iPosition3
		[ ] rTestResult.sResultText = rExpected.sResultText3
		[ ] rTestResult.sResultColor = rExpected.sResultColor3
		[ ] rTestResult.sResultFont = rExpected.sResultFont3 
		[ ] ListAppend(rResult.lsTestResult, rTestResult)
	[-] if rExpected.sResultText4 != NO_ENTRY
		[ ] rTestResult.iPosition = rExpected.iPosition4
		[ ] rTestResult.sResultText = rExpected.sResultText4
		[ ] rTestResult.sResultColor = rExpected.sResultColor4
		[ ] rTestResult.sResultFont = rExpected.sResultFont4 
		[ ] ListAppend(rResult.lsTestResult, rTestResult)
[ ] 
[ ] // This function takes the expected values for the test disclaimer and verifies it against the GUI. 
[ ] // User must be on the Test Result tab prior to calling this function
[+] VerifyTestDisclaimerGT(STRING sSampleID, STRING sDisclaimer1, STRING sDisclaimer2, STRING sDisclaimer3,
    STRING sDisclaimer4, STRING sDisclaimer5)
	[ ] //
	[ ] // Variable declarations
	[ ] //
	[ ] STRING sActualDisclaimer =  ' '
	[ ] STRING sExpectedDisclaimer =  ' '
	[ ] HANDLE hDB, hDisclaimer
	[ ] STRING sAssayName = Left(sSampleID, StrPos(DEC, sSampleID) - 1)
	[ ] STRING sDisclaimerTab = '`' + sAssayName + ' Disclaimers$`'
	[ ] ASSAY_DISCLAIMERS rDisclaimers
	[ ] INTEGER iTestDisclaimerFontSize = 0
	[ ] 
	[ ] hDB = DB_Connect (sDSNConnect)
	[ ] hDisclaimer = DB_ExecuteSQL(hDB, "Select * from {sDisclaimerTab}")
	[ ] DB_FetchNext(hDisclaimer, rDisclaimers)
	[ ] 
	[+] if sDisclaimer1 != NOTAPPLICABLE
		[-] switch sDisclaimer1
			[-] case ASSAY_DISCLAIMER
				[ ] sExpectedDisclaimer = rDisclaimers.sAssayDisclaimer
			[-] case LIGHT_BLUE_DISCLAIMER
				[ ] sExpectedDisclaimer = rDisclaimers.sLightBlueDisclaimer
			[-] case LIGHT_GRAY_DISCLAIMER
				[ ] sExpectedDisclaimer = rDisclaimers.sLightGrayDisclaimer
			[-] case RED_DISCLAIMER
				[ ] sExpectedDisclaimer = rDisclaimers.sRedDisclaimer
			[-] case GREEN_DISCLAIMER
				[ ] sExpectedDisclaimer = rDisclaimers.sGreenDisclaimer
			[-] case YELLOW_DISCLAIMER
				[ ] sExpectedDisclaimer = rDisclaimers.sYellowDisclaimer
			[-] case WHITE_DISCLAIMER
				[ ] sExpectedDisclaimer = rDisclaimers.sWhiteDisclaimer
			[-] default
				[ ] LogError("The first value for the disclaimer is not valid, value is: {sDisclaimer1}")
	[ ] 
	[+] if sDisclaimer2 != NOTAPPLICABLE
		[ ] sExpectedDisclaimer = sExpectedDisclaimer + ' '
		[-] switch sDisclaimer2
			[-] case ASSAY_DISCLAIMER
				[ ] sExpectedDisclaimer = sExpectedDisclaimer + rDisclaimers.sAssayDisclaimer
			[-] case LIGHT_BLUE_DISCLAIMER
				[ ] sExpectedDisclaimer = sExpectedDisclaimer + rDisclaimers.sLightBlueDisclaimer
			[-] case LIGHT_GRAY_DISCLAIMER
				[ ] sExpectedDisclaimer = sExpectedDisclaimer + rDisclaimers.sLightGrayDisclaimer
			[-] case RED_DISCLAIMER
				[ ] sExpectedDisclaimer = sExpectedDisclaimer + rDisclaimers.sRedDisclaimer
			[-] case GREEN_DISCLAIMER
				[ ] sExpectedDisclaimer = sExpectedDisclaimer + rDisclaimers.sGreenDisclaimer
			[-] case YELLOW_DISCLAIMER
				[ ] sExpectedDisclaimer = sExpectedDisclaimer + rDisclaimers.sYellowDisclaimer
			[-] case WHITE_DISCLAIMER
				[ ] sExpectedDisclaimer = sExpectedDisclaimer + rDisclaimers.sWhiteDisclaimer
			[-] default
				[ ] LogError("The second value for the disclaimer is not valid, value is: {sDisclaimer2}")
		[ ] 
	[ ] 
	[+] if sDisclaimer3 != NOTAPPLICABLE
		[ ] sExpectedDisclaimer = sExpectedDisclaimer + ' '
		[-] switch sDisclaimer3
			[-] case ASSAY_DISCLAIMER
				[ ] sExpectedDisclaimer = sExpectedDisclaimer + rDisclaimers.sAssayDisclaimer
			[-] case LIGHT_BLUE_DISCLAIMER
				[ ] sExpectedDisclaimer = sExpectedDisclaimer + rDisclaimers.sLightBlueDisclaimer
			[-] case LIGHT_GRAY_DISCLAIMER
				[ ] sExpectedDisclaimer = sExpectedDisclaimer + rDisclaimers.sLightGrayDisclaimer
			[-] case RED_DISCLAIMER
				[ ] sExpectedDisclaimer = sExpectedDisclaimer + rDisclaimers.sRedDisclaimer
			[-] case GREEN_DISCLAIMER
				[ ] sExpectedDisclaimer = sExpectedDisclaimer + rDisclaimers.sGreenDisclaimer
			[-] case YELLOW_DISCLAIMER
				[ ] sExpectedDisclaimer = sExpectedDisclaimer + rDisclaimers.sYellowDisclaimer
			[-] case WHITE_DISCLAIMER
				[ ] sExpectedDisclaimer = sExpectedDisclaimer + rDisclaimers.sWhiteDisclaimer
			[-] default
				[ ] LogError("The third value for the disclaimer is not valid, value is: {sDisclaimer3}")
	[ ] 
	[+] if sDisclaimer4 != NOTAPPLICABLE
		[ ] sExpectedDisclaimer = sExpectedDisclaimer + ' '
		[-] switch sDisclaimer4
			[-] case ASSAY_DISCLAIMER
				[ ] sExpectedDisclaimer = sExpectedDisclaimer + rDisclaimers.sAssayDisclaimer
			[-] case LIGHT_BLUE_DISCLAIMER
				[ ] sExpectedDisclaimer = sExpectedDisclaimer + rDisclaimers.sLightBlueDisclaimer
			[-] case LIGHT_GRAY_DISCLAIMER
				[ ] sExpectedDisclaimer = sExpectedDisclaimer + rDisclaimers.sLightGrayDisclaimer
			[-] case RED_DISCLAIMER
				[ ] sExpectedDisclaimer = sExpectedDisclaimer + rDisclaimers.sRedDisclaimer
			[-] case GREEN_DISCLAIMER
				[ ] sExpectedDisclaimer = sExpectedDisclaimer + rDisclaimers.sGreenDisclaimer
			[-] case YELLOW_DISCLAIMER
				[ ] sExpectedDisclaimer = sExpectedDisclaimer + rDisclaimers.sYellowDisclaimer
			[-] case WHITE_DISCLAIMER
				[ ] sExpectedDisclaimer = sExpectedDisclaimer + rDisclaimers.sWhiteDisclaimer
			[-] default
				[ ] LogError("The fourth value for the disclaimer is not valid, value is: {sDisclaimer4}")
	[ ] 
	[+] if sDisclaimer5 != NOTAPPLICABLE
		[ ] sExpectedDisclaimer = sExpectedDisclaimer + ' '
		[-] switch sDisclaimer5
			[-] case ASSAY_DISCLAIMER
				[ ] sExpectedDisclaimer = sExpectedDisclaimer + rDisclaimers.sAssayDisclaimer
			[-] case LIGHT_BLUE_DISCLAIMER
				[ ] sExpectedDisclaimer = sExpectedDisclaimer + rDisclaimers.sLightBlueDisclaimer
			[-] case LIGHT_GRAY_DISCLAIMER
				[ ] sExpectedDisclaimer = sExpectedDisclaimer + rDisclaimers.sLightGrayDisclaimer
			[-] case RED_DISCLAIMER
				[ ] sExpectedDisclaimer = sExpectedDisclaimer + rDisclaimers.sRedDisclaimer
			[-] case GREEN_DISCLAIMER
				[ ] sExpectedDisclaimer = sExpectedDisclaimer + rDisclaimers.sGreenDisclaimer
			[-] case YELLOW_DISCLAIMER
				[ ] sExpectedDisclaimer = sExpectedDisclaimer + rDisclaimers.sYellowDisclaimer
			[-] case WHITE_DISCLAIMER
				[ ] sExpectedDisclaimer = sExpectedDisclaimer + rDisclaimers.sWhiteDisclaimer
			[-] default
				[ ] LogError("The fifth value for the disclaimer is not valid, value is: {sDisclaimer5}")
	[ ] 
	[ ] // Add a space to the end of the concatenated string of disclaimers if the string is less than 256 characters
	[-] if LEN(sExpectedDisclaimer) < DISCLAIMER_MAX_LENGTH
		[ ] sExpectedDisclaimer = sExpectedDisclaimer + ' '
	[ ] 
	[ ] DB_FinishSQL(hDisclaimer)
	[ ] 
	[ ] // Verification for the test disclaimer vs. the actual disclaimer from the GUI
	[ ] 
	[ ] sActualDisclaimer = GeneXpertDxSystem.UserNone.SampleID.JavaxSwingJSplitPane1.Views.HtmlDivAlignRightTest.GetText()
	[-] if (Left(sActualDisclaimer, DISCLAIMER_MAX_LENGTH) != Left(sExpectedDisclaimer, DISCLAIMER_MAX_LENGTH))
		[ ] LogError("Test Disclaimer is not valid for sample: {sSampleID}")
	[ ] print("Expected Test Disclaimer: " + sExpectedDisclaimer)
	[ ] print("Actual Test Disclaimer: " + sActualDisclaimer)
	[ ] print()
	[ ] 
	[ ] DB_Disconnect(hDB)
	[ ] 
	[ ] // Get the Font Size from the Test Disclaimer text box. Added by Steve on 1/28/2011
	[ ] iTestDisclaimerFontSize = JavaMainWin("GeneXpert® Dx System").CustomWin("[javax.swing.JSplitPane]User <None>").
    CustomWin("[javax.swing.JSplitPane]Sample ID").CustomWin("[javax.swing.JSplitPane]#1").
    JavaJFCPageList("Views").JavaJFCTextField("<html><div align='right'>Test Result<?html>").invokeMethods({"getFont", "getSize"},{{},{}})
	[ ] 
	[-] if iTestDisclaimerFontSize != TEST_DISCLAIMER_FONT_SIZE_DETAIL
		[ ] LogError("Test Disclaimer Font Size is not valid for sample: {sSampleID}")
	[ ] print("Expected Test Disclaimer Font Size: {TEST_DISCLAIMER_FONT_SIZE_DETAIL} ")
	[ ] print("Actual Test Disclaimer Font Size: {iTestDisclaimerFontSize}")
[ ] 
[ ] // This function will verify all of the values on the Detail tab of View Results against the expected values that are passed into the function
[+] VerifyAnalyteResultCombo( REC_DETAILCOMBO rDetail, STRING sSampleID, INTEGER iAnalytePos)
	[ ] // 
	[ ] // Variables
	[ ] //
	[ ] STRING sCt = ' '
	[ ] STRING sEndPt = ' '
	[ ] INTEGER iPos = 0
	[ ] 
	[ ] SetPrecision (1)
	[-] 
		[ ] // First verify that the expected and actual Analyte Names match
		[-] if (rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
			[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Ct values match
		[-] if rDetail.sCt != NOTAPPLICABLE
			[-] if rDetail.sCt == "0.000000"
				[ ] sCt = "0.0"
			[-] else
				[ ] iPos = StrPos(DEC, rDetail.sCt)
				[ ] sCt = SubStr(rDetail.sCt, 1, iPos +1)
				[ ] // StuffComma(sCt)
			[-] if (sCt  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
				[ ] LogError("Ct value is not valid for sample: {sSampleID}")
			[ ] print("Expected Ct value: {sCt}")
			[ ] print("Actual Ct value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
			[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual EndPt values match
		[-] if rDetail.sEndPt != NOTAPPLICABLE
			[-] if rDetail.sEndPt == "0.000000"
				[ ] sEndPt = "0.0"
			[-] else
				[ ] iPos = StrPos(DEC, rDetail.sEndPt)
				[ ] sEndPt = SubStr(rDetail.sEndPt, 1, iPos +1)
				[ ] // StuffComma(sEndPt)
			[-] if (sEndPt != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
				[ ] LogError("EndPt value is not valid for sample: {sSampleID}")
			[ ] print("Expected EndPt value: {sEndPt}")
			[ ] print("Actual EndPt value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
			[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Analyte Results match
		[-] if (rDetail.sAnalyteResult != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
			[ ] LogError("Analyte Result is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
		[ ] print("Expected Analyte Result: " + rDetail.sAnalyteResult)
		[ ] print("Actual Analyte Result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
		[ ] print ()
	[ ] 
[ ] 
[ ] // Functions for D8380 PROBE CHECK project
[ ] // Verify Error Message on the Errors tab
[ ] // D8380 function
[+] VerifyErrorMessage(STRING sErrorMessage)
	[-] do
		[ ] //GeneXpert®DxSystem.UserNone.JavaxSwingJSplitPane.JavaxSwingJSplitPane1.Views.TestResult.FindCell(sErrorMessage)
		[ ] GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Errors.JavaxSwingJTable.FindCell(sErrorMessage)
		[ ] print("Expected Probe Check Error:  {sErrorMessage} is found")
	[-] except
		[ ] LogError("Error  {sErrorMessage}  is not found")
[ ] 
[ ] //Verify Error Message on the Troubleshoot output window
[ ] // D8380 function
[+] VerifyErrorMessageTroubleshoot(STRING sErrorText)
	[ ] LIST OF STRING lsTroubleShoot
	[ ] STRING sText
	[ ] STRING sText2
	[ ] lsTroubleShoot = Troubleshoot.JavaxSwingJTextArea.GetMultiText()
	[ ] sText = Troubleshoot.JavaxSwingJTextArea.GetText()
	[ ] sText2= Troubleshoot.JavaxSwingJTextArea.GetProperty("$Text")
	[ ] //print ("Error messages on the Troubleshoot tab: {sText2}")
	[-] if (MatchStr (sErrorText, sText2))
		[ ] print ("Error message:  {sErrorText} is found in the Troubleshoot tab")
	[-] else
		[ ] print ("Error message:  {sErrorText} is NOT found in the Troubleshoot tab")
	[ ] 
[ ] 
[ ] // D8380 function
[+] VerifyAnalyteResult1AnalyteER (DETAIL_ER_1PRB rDetail, STRING sSampleID)
	[ ] //
	[ ] // Constants
	[ ] //
	[ ] // const DEC = "."
	[ ] // 
	[ ] // Variables
	[ ] //
	[ ] INTEGER iAnalytePos = 0
	[ ] STRING sCt = ' '
	[ ] STRING sEndPt = ' '
	[ ] INTEGER iPos = 0
	[ ] 
	[ ] SetPrecision (1)
	[ ] 
	[ ] // Verification for the analyte name
	[-] if rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1})
		[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1}))
		[ ] print ()
	[-] else
		[ ] //  //rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1})
		[ ] iAnalytePos = 1
		[-] // else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1})
			[ ] // iAnalytePos = 2
		[-] // else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({3, 1})
			[ ] // iAnalytePos = 3
		[ ] 
		[ ] // First verify that the expected and actual Analyte Names match
	[-]  if (rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
		[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
	[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
	[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
	[ ] print ()
	[ ] 
	[ ] // Verify that the expected and actual Analyte Results match
	[-] if (rDetail.sAnalyteResult != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
		[ ] LogError("Analyte Result is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
	[ ] print("Expected Analyte Result: " + rDetail.sAnalyteResult)
	[ ] print("Actual Analyte Result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
	[ ] print ()
	[ ] // Verify that the expected and actual Probe Check Results match
	[-] if (rDetail.sProbeCheckResult != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 5}))
		[ ] LogError("Probe Check Result is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
	[ ] print("Expected Probe Check Result: " + rDetail.sProbeCheckResult)
	[ ] print("Actual Probe Check Result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 5}))
	[-] print ()
		[ ] 
[ ] // D8380 function
[+] VerifyAnalyteResult3AnalyteER (DETAIL_ER_1PRB rDetail, STRING sSampleID)
	[ ] //
	[ ] // Constants
	[ ] //
	[ ] // const DEC = "."
	[ ] // 
	[ ] // Variables
	[ ] //
	[ ] INTEGER iAnalytePos = 0
	[ ] STRING sCt = ' '
	[ ] STRING sEndPt = ' '
	[ ] INTEGER iPos = 0
	[ ] 
	[ ] SetPrecision (1)
	[ ] 
	[ ] // Verification for the analyte name
	[-] if rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({3, 1})
		[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1}))
		[ ] print ()
	[-] else
		[ ] 
		[-] if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1})
			[ ] iAnalytePos = 1
		[+] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1})
			[ ] iAnalytePos = 2
		[+] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({3, 1})
			[ ] iAnalytePos = 3
		[ ] 
		[ ] // First verify that the expected and actual Analyte Names match
		[+] if (rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
			[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Analyte Results match
		[+] if (rDetail.sAnalyteResult != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
			[ ] LogError("Analyte Result is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
		[ ] print("Expected Analyte Result: " + rDetail.sAnalyteResult)
		[ ] print("Actual Analyte Result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
		[ ] print ()
		[ ] // Verify that the expected and actual Probe Check Results match
		[+] if (rDetail.sProbeCheckResult != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 5}))
			[ ] LogError("Probe Check Result is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
		[ ] print("Expected Probe Check Result: " + rDetail.sProbeCheckResult)
		[ ] print("Actual Probe Check Result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 5}))
		[ ] print ()
		[ ] 
[ ] 
[ ] // D8380 function
[+] VerifyAnalyteResult4AnalyteER (DETAIL_ER_1PRB rDetail, STRING sSampleID)
	[ ] //
	[ ] // Constants
	[ ] //
	[ ] const DEC = "."
	[ ] // 
	[ ] // Variables
	[ ] //
	[ ] INTEGER iAnalytePos = 0
	[ ] STRING sCt = ' '
	[ ] STRING sEndPt = ' '
	[ ] INTEGER iPos = 0
	[ ] 
	[ ] SetPrecision (1)
	[ ] 
	[ ] // Verification for the analyte name
	[-] if rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({3, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({4, 1})
		[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1}))
		[ ] print ()
	[-] else
		[ ] 
		[-] if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1})
			[ ] iAnalytePos = 1
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1})
			[ ] iAnalytePos = 2
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({3, 1})
			[ ] iAnalytePos = 3
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({4, 1})
			[ ] iAnalytePos = 4
		[ ] 
		[ ] // First verify that the expected and actual Analyte Names match
		[-] if (rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
			[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
		[ ] print ()
		[ ] 
		[ ] // // Verify that the expected and actual Ct values match
		[-] // if rDetail.sCt == "0.000000"
			[ ] // sCt = "0.0"
		[-] // else
			[ ] // iPos = StrPos(DEC, rDetail.sCt)
			[ ] // sCt = SubStr(rDetail.sCt, 1, iPos +1)
		[-] // if (sCt  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
			[ ] // LogError("Ct value is not valid for sample: {sSampleID}")
		[ ] // print("Expected Ct value: {sCt}")
		[ ] // print("Actual Ct value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
		[ ] // print ()
		[ ] // 
		[ ] // // Verify that the expected and actual EndPt values match
		[-] // if rDetail.sEndPt == "0.000000"
			[ ] // sEndPt = "0.0"
		[-] // else
			[ ] // iPos = StrPos(DEC, rDetail.sEndPt)
			[ ] // sEndPt = SubStr(rDetail.sEndPt, 1, iPos +1)
		[-] // if (sEndPt != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
			[ ] // LogError("EndPt value is not valid for sample: {sSampleID}")
		[ ] // print("Expected EndPt value: {sEndPt}")
		[ ] // print("Actual EndPt value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
		[ ] // print ()
		[ ] 
		[ ] // Verify that the expected and actual Analyte Results match
		[-] if (rDetail.sAnalyteResult != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
			[ ] LogError("Analyte Result is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
		[ ] print("Expected Analyte Result: " + rDetail.sAnalyteResult)
		[ ] print("Actual Analyte Result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
		[ ] print ()
		[ ] // Verify that the expected and actual Probe Check Results match
		[-] if (rDetail.sProbeCheckResult != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 5}))
			[ ] LogError("Probe Check Result is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
		[ ] print("Expected Probe Check Result: " + rDetail.sProbeCheckResult)
		[ ] print("Actual Probe Check Result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 5}))
		[ ] print ()
		[ ] 
	[ ] 
[ ] 
[ ] // D8380 function
[+] VerifyAnalyteResult6AnalyteER (DETAIL_ER_1PRB rDetail, STRING sSampleID)
	[ ] //
	[ ] // Constants
	[ ] //
	[ ] // const DEC = "."
	[ ] // 
	[ ] // Variables
	[ ] //
	[ ] INTEGER iAnalytePos = 0
	[ ] STRING sCt = ' '
	[ ] STRING sEndPt = ' '
	[ ] INTEGER iPos = 0
	[ ] 
	[ ] SetPrecision (1)
	[ ] 
	[ ] // Verification for the analyte name
	[+] if rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({3, 1}) && 
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({4, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({5, 1}) && 
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({6, 1})
		[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1}))
		[ ] print ()
	[-] else
		[ ] 
		[-] if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1})
			[ ] iAnalytePos = 1
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1})
			[ ] iAnalytePos = 2
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({3, 1})
			[ ] iAnalytePos = 3
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({4, 1})
			[ ] iAnalytePos = 4
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({5, 1})
			[ ] iAnalytePos = 5
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({6, 1})
			[ ] iAnalytePos = 6
		[ ] 
		[ ] // First verify that the expected and actual Analyte Names match
		[-] if (rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
			[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Analyte Results match
		[-] if (rDetail.sAnalyteResult != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
			[ ] LogError("Analyte Result is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
		[ ] print("Expected Analyte Result: " + rDetail.sAnalyteResult)
		[ ] print("Actual Analyte Result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
		[ ] print ()
		[ ] // Verify that the expected and actual Probe Check Results match
		[+] if (rDetail.sProbeCheckResult != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 5}))
			[ ] LogError("Probe Check Result is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
		[ ] print("Expected Probe Check Result: " + rDetail.sProbeCheckResult)
		[ ] print("Actual Probe Check Result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 5}))
		[ ] print ()
		[ ] 
[ ] 
[ ] // D8380 function
[+] VerifyDetailTabER_1 (DETAIL_ER_1PRB rDetail, STRING sSampleID)
	[ ] //
	[ ] // Constants
	[ ] //
	[ ] // const DEC = "."
	[ ] // const NOTAPPLICABLE = 'NA'
	[ ] // 
	[ ] // Variables
	[ ] //
	[ ] INTEGER iAnalytePos = 0
	[ ] STRING sPrbChk = ' '
	[ ] STRING sSecDerivPkHt = ' '
	[ ] STRING sMeltPeak = ' '
	[ ] INTEGER iPos = 0
	[ ] 
	[ ] SetPrecision (1)
	[ ] 
	[ ] // Verification for the analyte name
	[-] if rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({1, 1}) 
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: <Not Found>")
		[ ] print ()
	[-] else
		[ ] //if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({1, 1})
		[ ] iAnalytePos = 1
		[ ] // First verify that the expected and actual Analyte Names match
		[-] if (rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
			[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Probe Check 1 values match
		[ ] iPos = StrPos(DEC, rDetail.sPrbChk1)
		[ ] sPrbChk = SubStr(rDetail.sPrbChk1, 1, iPos +1)
		[+] if (sPrbChk  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
			[ ] LogError("Probe Check 1 value is not valid for sample: {sSampleID}")
		[ ] print("Expected Probe Check 1 value: {sPrbChk}")
		[ ] print("Actual Probe Check 1 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Probe Check 2 values match
		[ ] iPos = StrPos(DEC, rDetail.sPrbChk2)
		[ ] sPrbChk = SubStr(rDetail.sPrbChk2, 1, iPos +1)
		[+] if (sPrbChk  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
			[ ] LogError("Probe Check 2 value is not valid for sample: {sSampleID}")
		[ ] print("Expected Probe Check 2 value: {sPrbChk}")
		[ ] print("Actual Probe Check 2 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Probe Check 3 values match
		[ ] iPos = StrPos(DEC, rDetail.sPrbChk3)
		[ ] sPrbChk = SubStr(rDetail.sPrbChk3, 1, iPos +1)
		[+] if (sPrbChk  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
			[ ] LogError("Probe Check 3 value is not valid for sample: {sSampleID}")
		[ ] print("Expected Probe Check 3 value: {sPrbChk}")
		[ ] print("Actual Probe Check 3 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Probe Check Result values match
		[+] if (rDetail.sProbeCheckResult  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 5}))
			[ ] LogError("Probe Check Result is not valid for sample: {sSampleID}")
		[ ] print("Expected Probe Check Result: {rDetail.sProbeCheckResult}")
		[ ] print("Actual Probe Check Result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 5}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual 2nd Derivative Peak Height values match
		[ ] iPos = StrPos(DEC, rDetail.sSecDerivPeakHght)
		[ ] sSecDerivPkHt = SubStr(rDetail.sSecDerivPeakHght, 1, iPos +1)
		[+] if (sSecDerivPkHt  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}))
			[ ] LogError("2nd Derivative Peak Height is not valid for sample: {sSampleID}")
		[ ] print("Expected 2nd Derivative Peak Height: {sSecDerivPkHt}")
		[ ] print("Actual 2nd Derivative Peak Height: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Melt Peak 1 values match
		[+] if rDetail.sMeltPeak1 != NOTAPPLICABLE
			[ ] iPos = StrPos(DEC, rDetail.sMeltPeak1)
			[ ] sMeltPeak = SubStr(rDetail.sMeltPeak1, 1, iPos +1)
			[-] if (sMeltPeak  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 7}))
				[ ] LogError("Melt Peak 1 is not valid for sample: {sSampleID}")
			[ ] print("Expected Melt Peak 1 value: {sMeltPeak}")
			[ ] print("Actual Melt Peak 1 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 7}))
			[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Melt Peak 2 values match
		[+] if rDetail.sMeltPeak2 != NOTAPPLICABLE
			[ ] iPos = StrPos(DEC, rDetail.sMeltPeak2)
			[ ] sMeltPeak = SubStr(rDetail.sMeltPeak2, 1, iPos +1)
			[-] if (sMeltPeak  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 8}))
				[ ] LogError("Melt Peak 2 is not valid for sample: {sSampleID}")
			[ ] print("Expected Melt Peak 2 value: {sMeltPeak}")
			[ ] print("Actual Melt Peak 2 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 8}))
			[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Melt Peak 3 values match
		[+] if rDetail.sMeltPeak3 != NOTAPPLICABLE
			[ ] iPos = StrPos(DEC, rDetail.sMeltPeak3)
			[ ] sMeltPeak = SubStr(rDetail.sMeltPeak3, 1, iPos +1)
			[-] if (sMeltPeak  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 9}))
				[ ] LogError("Melt Peak 3 is not valid for sample: {sSampleID}")
			[ ] print("Expected Melt Peak 3 value: {sMeltPeak}")
			[ ] print("Actual Melt Peak 3 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 9}))
			[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Curve Fit values match
		[+] if (rDetail.sCurveFit  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 10}))
			[ ] LogError("Curve Fit is not valid for sample: {sSampleID}")
		[ ] print("Expected Curve Fit result: {rDetail.sCurveFit}")
		[ ] print("Actual Curve Fit result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 10}))
		[ ] print ()
		[ ] 
[ ] 
[ ] // D8380 function
[+] VerifyDetailTabER_3 (DETAIL_ER_1PRB rDetail, STRING sSampleID)
	[ ] //
	[ ] // Constants
	[ ] //
	[ ] // const DEC = "."
	[ ] // const NOTAPPLICABLE = 'NA'
	[ ] // 
	[ ] // Variables
	[ ] //
	[ ] INTEGER iAnalytePos = 0
	[ ] STRING sPrbChk = ' '
	[ ] STRING sSecDerivPkHt = ' '
	[ ] STRING sMeltPeak = ' '
	[ ] INTEGER iPos = 0
	[ ] 
	[ ] SetPrecision (1)
	[ ] 
	[ ] // Verification for the analyte name
	[-] if rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({1, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({2, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({3, 1}) 
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: <Not Found>")
		[ ] print ()
	[-] else
		[ ] 
		[-] if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({1, 1})
			[ ] iAnalytePos = 1
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({2, 1})
			[ ] iAnalytePos = 2
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({3, 1})
			[ ] iAnalytePos = 3
		[ ] // First verify that the expected and actual Analyte Names match
		[+] if (rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
			[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Probe Check 1 values match
		[ ] iPos = StrPos(DEC, rDetail.sPrbChk1)
		[ ] sPrbChk = SubStr(rDetail.sPrbChk1, 1, iPos +1)
		[+] if (sPrbChk  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
			[ ] LogError("Probe Check 1 value is not valid for sample: {sSampleID}")
		[ ] print("Expected Probe Check 1 value: {sPrbChk}")
		[ ] print("Actual Probe Check 1 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Probe Check 2 values match
		[ ] iPos = StrPos(DEC, rDetail.sPrbChk2)
		[ ] sPrbChk = SubStr(rDetail.sPrbChk2, 1, iPos +1)
		[+] if (sPrbChk  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
			[ ] LogError("Probe Check 2 value is not valid for sample: {sSampleID}")
		[ ] print("Expected Probe Check 2 value: {sPrbChk}")
		[ ] print("Actual Probe Check 2 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Probe Check 3 values match
		[ ] iPos = StrPos(DEC, rDetail.sPrbChk3)
		[ ] sPrbChk = SubStr(rDetail.sPrbChk3, 1, iPos +1)
		[+] if (sPrbChk  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
			[ ] LogError("Probe Check 3 value is not valid for sample: {sSampleID}")
		[ ] print("Expected Probe Check 3 value: {sPrbChk}")
		[ ] print("Actual Probe Check 3 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Probe Check Result values match
		[+] if (rDetail.sProbeCheckResult  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 5}))
			[ ] LogError("Probe Check Result is not valid for sample: {sSampleID}")
		[ ] print("Expected Probe Check Result: {rDetail.sProbeCheckResult}")
		[ ] print("Actual Probe Check Result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 5}))
		[ ] print ()
		[ ] 
		[ ] // // Verify that the expected and actual 2nd Derivative Peak Height values match
		[ ] // iPos = StrPos(DEC, rDetail.sSecDerivPeakHght)
		[ ] // sSecDerivPkHt = SubStr(rDetail.sSecDerivPeakHght, 1, iPos +1)
		[-] // if (sSecDerivPkHt  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}))
			[ ] // LogError("2nd Derivative Peak Height is not valid for sample: {sSampleID}")
		[ ] // print("Expected 2nd Derivative Peak Height: {sSecDerivPkHt}")
		[ ] // print("Actual 2nd Derivative Peak Height: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}))
		[ ] // print ()
		[ ] 
		[ ] // Verify that the expected and actual Melt Peak 1 values match
		[+] if rDetail.sMeltPeak1 != NOTAPPLICABLE
			[ ] iPos = StrPos(DEC, rDetail.sMeltPeak1)
			[ ] sMeltPeak = SubStr(rDetail.sMeltPeak1, 1, iPos +1)
			[-] if (sMeltPeak  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 7}))
				[ ] LogError("Melt Peak 1 is not valid for sample: {sSampleID}")
			[ ] print("Expected Melt Peak 1 value: {sMeltPeak}")
			[ ] print("Actual Melt Peak 1 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 7}))
			[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Melt Peak 2 values match
		[+] if rDetail.sMeltPeak2 != NOTAPPLICABLE
			[ ] iPos = StrPos(DEC, rDetail.sMeltPeak2)
			[ ] sMeltPeak = SubStr(rDetail.sMeltPeak2, 1, iPos +1)
			[-] if (sMeltPeak  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 8}))
				[ ] LogError("Melt Peak 2 is not valid for sample: {sSampleID}")
			[ ] print("Expected Melt Peak 2 value: {sMeltPeak}")
			[ ] print("Actual Melt Peak 2 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 8}))
			[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Melt Peak 3 values match
		[+] if rDetail.sMeltPeak3 != NOTAPPLICABLE
			[ ] iPos = StrPos(DEC, rDetail.sMeltPeak3)
			[ ] sMeltPeak = SubStr(rDetail.sMeltPeak3, 1, iPos +1)
			[-] if (sMeltPeak  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 9}))
				[ ] LogError("Melt Peak 3 is not valid for sample: {sSampleID}")
			[ ] print("Expected Melt Peak 3 value: {sMeltPeak}")
			[ ] print("Actual Melt Peak 3 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 9}))
			[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Curve Fit values match
		[-] // if (rDetail.sCurveFit  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 10}))
			[ ] // LogError("Curve Fit is not valid for sample: {sSampleID}")
		[ ] // print("Expected Curve Fit result: {rDetail.sCurveFit}")
		[ ] // print("Actual Curve Fit result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 10}))
		[ ] // print ()
		[ ] 
		[ ] 
[ ] 
[ ] // D8380 function
[+] VerifyDetailTabER_4 (DETAIL_ER_1PRB rDetail, STRING sSampleID)
	[ ] //
	[ ] // Constants
	[ ] //
	[ ] // const DEC = "."
	[ ] // const NOTAPPLICABLE = 'NA'
	[ ] // 
	[ ] // Variables
	[ ] //
	[ ] INTEGER iAnalytePos = 0
	[ ] STRING sPrbChk = ' '
	[ ] STRING sSecDerivPkHt = ' '
	[ ] STRING sMeltPeak = ' '
	[ ] INTEGER iPos = 0
	[ ] 
	[ ] SetPrecision (1)
	[ ] 
	[ ] // Verification for the analyte name
	[-] if rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({1, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({2, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({3, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({4, 1}) 
		[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: <Not Found>")
		[ ] print ()
	[-] else
		[ ] 
		[-] if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({1, 1})
			[ ] iAnalytePos = 1
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({2, 1})
			[ ] iAnalytePos = 2
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({3, 1})
			[ ] iAnalytePos = 3
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({4, 1})
			[ ] iAnalytePos = 4
		[ ] //
		[ ] // First verify that the expected and actual Analyte Names match
		[-] if (rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
			[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Probe Check 1 values match
		[ ] iPos = StrPos(DEC, rDetail.sPrbChk1)
		[ ] sPrbChk = SubStr(rDetail.sPrbChk1, 1, iPos +1)
		[-] if (sPrbChk  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
			[ ] LogError("Probe Check 1 value is not valid for sample: {sSampleID}")
		[ ] print("Expected Probe Check 1 value: {sPrbChk}")
		[ ] print("Actual Probe Check 1 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Probe Check 2 values match
		[ ] iPos = StrPos(DEC, rDetail.sPrbChk2)
		[ ] sPrbChk = SubStr(rDetail.sPrbChk2, 1, iPos +1)
		[-] if (sPrbChk  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
			[ ] LogError("Probe Check 2 value is not valid for sample: {sSampleID}")
		[ ] print("Expected Probe Check 2 value: {sPrbChk}")
		[ ] print("Actual Probe Check 2 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Probe Check 3 values match
		[ ] iPos = StrPos(DEC, rDetail.sPrbChk3)
		[ ] sPrbChk = SubStr(rDetail.sPrbChk3, 1, iPos +1)
		[-] if (sPrbChk  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
			[ ] LogError("Probe Check 3 value is not valid for sample: {sSampleID}")
		[ ] print("Expected Probe Check 3 value: {sPrbChk}")
		[ ] print("Actual Probe Check 3 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Probe Check Result values match
		[+] if (rDetail.sProbeCheckResult  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 5}))
			[ ] LogError("Probe Check Result is not valid for sample: {sSampleID}")
		[ ] print("Expected Probe Check Result: {rDetail.sProbeCheckResult}")
		[ ] print("Actual Probe Check Result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 5}))
		[ ] print ()
		[ ] 
		[ ] // // Verify that the expected and actual 2nd Derivative Peak Height values match
		[ ] // iPos = StrPos(DEC, rDetail.sSecDerivPeakHght)
		[ ] // sSecDerivPkHt = SubStr(rDetail.sSecDerivPeakHght, 1, iPos +1)
		[-] // if (sSecDerivPkHt  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}))
			[ ] // LogError("2nd Derivative Peak Height is not valid for sample: {sSampleID}")
		[ ] // print("Expected 2nd Derivative Peak Height: {sSecDerivPkHt}")
		[ ] // print("Actual 2nd Derivative Peak Height: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}))
		[ ] // print ()
		[ ] // 
		[ ] // // Verify that the expected and actual Melt Peak 1 values match
		[-] // if rDetail.sMeltPeak1 != NOTAPPLICABLE
			[ ] // iPos = StrPos(DEC, rDetail.sMeltPeak1)
			[ ] // sMeltPeak = SubStr(rDetail.sMeltPeak1, 1, iPos +1)
			[-] // if (sMeltPeak  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 7}))
				[ ] // LogError("Melt Peak 1 is not valid for sample: {sSampleID}")
			[ ] // print("Expected Melt Peak 1 value: {sMeltPeak}")
			[ ] // print("Actual Melt Peak 1 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 7}))
			[ ] // print ()
		[ ] 
		[ ] // Verify that the expected and actual Melt Peak 2 values match
		[-] if rDetail.sMeltPeak2 != NOTAPPLICABLE
			[ ] iPos = StrPos(DEC, rDetail.sMeltPeak2)
			[ ] sMeltPeak = SubStr(rDetail.sMeltPeak2, 1, iPos +1)
			[-] if (sMeltPeak  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 8}))
				[ ] LogError("Melt Peak 2 is not valid for sample: {sSampleID}")
			[ ] print("Expected Melt Peak 2 value: {sMeltPeak}")
			[ ] print("Actual Melt Peak 2 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 8}))
			[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Melt Peak 3 values match
		[-] if rDetail.sMeltPeak3 != NOTAPPLICABLE
			[ ] iPos = StrPos(DEC, rDetail.sMeltPeak3)
			[ ] sMeltPeak = SubStr(rDetail.sMeltPeak3, 1, iPos +1)
			[-] if (sMeltPeak  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 9}))
				[ ] LogError("Melt Peak 3 is not valid for sample: {sSampleID}")
			[ ] print("Expected Melt Peak 3 value: {sMeltPeak}")
			[ ] print("Actual Melt Peak 3 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 9}))
			[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Curve Fit values match
		[-] if (rDetail.sCurveFit  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 10}))
			[ ] LogError("Curve Fit is not valid for sample: {sSampleID}")
		[ ] print("Expected Curve Fit result: {rDetail.sCurveFit}")
		[ ] print("Actual Curve Fit result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 10}))
		[ ] print ()
	[-] 
		[ ] 
[ ] 
[ ] // D8380 function
[+] VerifyDetailTabER_6 (DETAIL_ER_1PRB rDetail, STRING sSampleID)
	[ ] //
	[ ] // Constants
	[ ] //
	[ ] // const DEC = "."
	[ ] // const NOTAPPLICABLE = 'NA'
	[ ] // 
	[ ] // Variables
	[ ] //
	[ ] INTEGER iAnalytePos = 0
	[ ] INTEGER iPos = 0
	[ ] STRING sPrbChk = ' '
	[ ] STRING sSecDerivPkHt = ' '
	[ ] STRING sMeltPeak = ' '
	[ ] STRING sZERO = '0'
	[ ] STRING sLONG_ZERO = '0.0'
	[ ] //
	[ ] SetPrecision (1)
	[ ] 
	[ ] // Verification for the analyte name
	[+] if rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({1, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({2, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({3, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({4, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({5, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({6, 1})
		[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: <Not Found>")
		[ ] print ()
	[-] else
		[ ] 
		[-] if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({1, 1})
			[ ] iAnalytePos = 1
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({2, 1})
			[ ] iAnalytePos = 2
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({3, 1})
			[ ] iAnalytePos = 3
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({4, 1})
			[ ] iAnalytePos = 4
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({5, 1})
			[ ] iAnalytePos = 5
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({6, 1})
			[ ] iAnalytePos = 6
		[ ] 
		[ ] // First verify that the expected and actual Analyte Names match
		[-] if (rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
			[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Probe Check 1 values match
		[ ] iPos = StrPos(DEC, rDetail.sPrbChk1)
		[ ] sPrbChk = SubStr(rDetail.sPrbChk1, 1, iPos +1)
		[-] if rDetail.sPrbChk1 == sZERO
			[ ] sPrbChk = sLONG_ZERO
		[ ] print("sPrbChk = {sPrbChk}")
		[-] if (sPrbChk  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
			[ ] LogError("Probe Check 1 value is not valid for sample: {sSampleID}")
		[ ] print("Expected Probe Check 1 value: {sPrbChk}")
		[ ] print("Actual Probe Check 1 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Probe Check 2 values match
		[ ] iPos = StrPos(DEC, rDetail.sPrbChk2)
		[ ] sPrbChk = SubStr(rDetail.sPrbChk2, 1, iPos +1)
		[-] if rDetail.sPrbChk2 == sZERO
			[ ] sPrbChk = sLONG_ZERO
		[ ] print("sPrbChk = {sPrbChk}")
		[-] if (sPrbChk  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
			[ ] LogError("Probe Check 2 value is not valid for sample: {sSampleID}")
		[ ] print("Expected Probe Check 2 value: {sPrbChk}")
		[ ] print("Actual Probe Check 2 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Probe Check 3 values match
		[ ] iPos = StrPos(DEC, rDetail.sPrbChk3)
		[ ] sPrbChk = SubStr(rDetail.sPrbChk3, 1, iPos +1)
		[-] if rDetail.sPrbChk3 == sZERO
			[ ] sPrbChk = sLONG_ZERO
		[ ] print("sPrbChk = {sPrbChk}")
		[-] if (sPrbChk  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
			[ ] LogError("Probe Check 3 value is not valid for sample: {sSampleID}")
		[ ] print("Expected Probe Check 3 value: {sPrbChk}")
		[ ] print("Actual Probe Check 3 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Probe Check Result values match
		[+] if (rDetail.sProbeCheckResult  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 5}))
			[ ] LogError("Probe Check Result is not valid for sample: {sSampleID}")
		[ ] print("Expected Probe Check Result: {rDetail.sProbeCheckResult}")
		[ ] print("Actual Probe Check Result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 5}))
		[ ] print ()
		[ ] 
		[ ] // // Verify that the expected and actual 2nd Derivative Peak Height values match
		[ ] // iPos = StrPos(DEC, rDetail.sSecDerivPeakHght)
		[ ] // sSecDerivPkHt = SubStr(rDetail.sSecDerivPeakHght, 1, iPos +1)
		[+] // if (sSecDerivPkHt  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}))
			[ ] // LogError("2nd Derivative Peak Height is not valid for sample: {sSampleID}")
		[ ] // print("Expected 2nd Derivative Peak Height: {sSecDerivPkHt}")
		[ ] // print("Actual 2nd Derivative Peak Height: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}))
		[ ] // print ()
		[ ] 
		[ ] // Verify that the expected and actual Melt Peak 1 values match
		[-] if rDetail.sMeltPeak1 != NOTAPPLICABLE
			[ ] iPos = StrPos(DEC, rDetail.sMeltPeak1)
			[ ] sMeltPeak = SubStr(rDetail.sMeltPeak1, 1, iPos +1)
			[-] if (sMeltPeak  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 7}))
				[ ] LogError("Melt Peak 1 is not valid for sample: {sSampleID}")
			[ ] print("Expected Melt Peak 1 value: {sMeltPeak}")
			[ ] print("Actual Melt Peak 1 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 7}))
			[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Melt Peak 2 values match
		[-] if rDetail.sMeltPeak2 != NOTAPPLICABLE
			[ ] iPos = StrPos(DEC, rDetail.sMeltPeak2)
			[ ] sMeltPeak = SubStr(rDetail.sMeltPeak2, 1, iPos +1)
			[-] if (sMeltPeak  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 8}))
				[ ] LogError("Melt Peak 2 is not valid for sample: {sSampleID}")
			[ ] print("Expected Melt Peak 2 value: {sMeltPeak}")
			[ ] print("Actual Melt Peak 2 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 8}))
			[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Melt Peak 3 values match
		[-] if rDetail.sMeltPeak3 != NOTAPPLICABLE
			[ ] iPos = StrPos(DEC, rDetail.sMeltPeak3)
			[ ] sMeltPeak = SubStr(rDetail.sMeltPeak3, 1, iPos +1)
			[-] if (sMeltPeak  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 9}))
				[ ] LogError("Melt Peak 3 is not valid for sample: {sSampleID}")
			[ ] print("Expected Melt Peak 3 value: {sMeltPeak}")
			[ ] print("Actual Melt Peak 3 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 9}))
			[ ] print ()
		[ ] 
[ ] 
[ ] // D8380 function
[+] VerifyMeltAnalyteResult (DETAIL_PRB rDetail, STRING sSampleID)
	[ ] //
	[ ] // Constants
	[ ] //
	[ ] // const DEC = "."
	[ ] // const DBNULLVALUE = "-9999.000000"
	[ ] // const GUINULLVALUE = ' '
	[ ] // 
	[ ] // Variables
	[ ] //
	[ ] INTEGER iAnalytePos = 0
	[ ] STRING sCt = ' '
	[ ] STRING sEndPt = ' '
	[ ] STRING sTargetDeltaCt = ' '
	[ ] INTEGER iPos = 0
	[ ] 
	[ ] SetPrecision (1)
	[ ] 
	[ ] // Verification for the analyte name
	[-] if rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({3, 1})
		[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1}))
		[ ] print ()
	[-] else
		[ ] 
		[-] if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1})
			[ ] iAnalytePos = 1
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1})
			[ ] iAnalytePos = 2
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({3, 1})
			[ ] iAnalytePos = 3
			[ ] 
	[ ] // First verify that the expected and actual Analyte Names match
	[-] if (rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
		[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
	[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
	[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
	[ ] print ()
	[ ] 
	[ ] // Verify that the expected and actual  Probe Check Results match
	[-] if (rDetail.sProbeCheckResult != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 5}))
		[ ] LogError("Probe Check Result is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
	[ ] print("Expected Probe Check Result: " + rDetail.sProbeCheckResult)
	[ ] print("Actual Probe Check Result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 5}))
	[ ] print ()
[ ] // This function is used in D8380 Probe Check. It is used DETAIL_PRB data record that is different from DETAIL_AR2_3_5 record
[ ] // used in function erifyAnalyteResult2 (). DETAIL_PRB includes probe check results but DETAIL_AR2_3_5 includes only 
[ ] // Analyte Name, Ct, EndPt, and Analyte result.
[+] VerifyAnalyteResult2PRB (DETAIL_PRB rDetail, STRING sSampleID)
	[ ] //
	[ ] // Constants
	[ ] //
	[ ] // const DEC = "."
	[ ] // const DBNULLVALUE = "-9999.000000"
	[ ] // const GUINULLVALUE = ' '
	[ ] // 
	[ ] // Variables
	[ ] //
	[ ] INTEGER iAnalytePos = 0
	[ ] STRING sCt = ' '
	[ ] STRING sEndPt = ' '
	[ ] STRING sTargetDeltaCt = ' '
	[ ] INTEGER iPos = 0
	[ ] 
	[ ] SetPrecision (1)
	[ ] 
	[ ] // Verification for the analyte name
	[+] if rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({3, 1})
		[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1}))
		[ ] print ()
	[-] else
		[ ] 
		[+] if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1})
			[ ] iAnalytePos = 1
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1})
			[ ] iAnalytePos = 2
			[ ] 
		[ ] // First verify that the expected and actual Analyte Names match
		[+] if (rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
			[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Ct values match
		[-] if rDetail.sCt == "0"
			[ ] sCt = "0.0"
		[-] else
			[ ] iPos = StrPos(DEC, rDetail.sCt)
			[ ] sCt = SubStr(rDetail.sCt, 1, iPos +1)
		[+] if (sCt  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
			[ ] LogError("Ct value is not valid for sample: {sSampleID}")
		[ ] 
		[ ] print("Actual Ct value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual EndPt values match
		[-] if rDetail.sEndPt == "0"
			[ ] sEndPt = "0.0"
		[-] else
			[ ] iPos = StrPos(DEC, rDetail.sEndPt)
			[ ] sEndPt = SubStr(rDetail.sEndPt, 1, iPos +1)
		[+] if (sEndPt != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
			[ ] LogError("EndPt value is not valid for sample: {sSampleID}")
		[ ] print("Expected EndPt value: {sEndPt}")
		[ ] print("Actual EndPt value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Analyte Results match
		[-] if (rDetail.sAnalyteResult != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
			[ ] LogError("Analyte Result is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
		[ ] print("Expected Analyte Result: " + rDetail.sAnalyteResult)
		[ ] print("Actual Analyte Result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
		[ ] print ()
		[ ] //
		[ ] // Verify that the expected and actual  Probe Check Results match
		[-] if (rDetail.sProbeCheckResult != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 5}))
			[ ] LogError("Probe Check Result is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
		[ ] print("Expected Probe Check Result: " + rDetail.sProbeCheckResult)
		[ ] print("Actual Probe Check Result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 5}))
		[ ] print ()
		[ ] //
[ ] 
[ ] //Reasons for defining VerifyAnalyteResult3PRB, VerifyAnalyteResult4PRB, and VerifyAnalyteResult6PRB function
[ ] // are the same as for the above VerifyAnalyteResult2PRB function
[+] VerifyAnalyteResult3PRB (DETAIL_PRB rDetail, STRING sSampleID)
	[ ] //
	[ ] // Constants
	[ ] //
	[ ] const DEC = "."
	[ ] const DBNULLVALUE = "-9999.000000"
	[ ] const GUINULLVALUE = ' '
	[ ] // 
	[ ] // Variables
	[ ] //
	[ ] INTEGER iAnalytePos = 0
	[ ] STRING sCt = ' '
	[ ] STRING sEndPt = ' '
	[ ] STRING sTargetDeltaCt = ' '
	[ ] INTEGER iPos = 0
	[ ] 
	[ ] SetPrecision (1)
	[ ] 
	[ ] // Verification for the analyte name
	[-] if rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({3, 1})
		[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1}))
		[ ] print ()
	[-] else
		[ ] 
		[+] if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1})
			[ ] iAnalytePos = 1
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1})
			[ ] iAnalytePos = 2
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({3, 1})
			[ ] iAnalytePos = 3
			[ ] 
		[ ] // First verify that the expected and actual Analyte Names match
		[+] if (rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
			[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Ct values match
		[-] if rDetail.sCt == "0"
			[ ] sCt = "0.0"
		[+] else
			[ ] iPos = StrPos(DEC, rDetail.sCt)
			[ ] sCt = SubStr(rDetail.sCt, 1, iPos +1)
		[+] if (sCt  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
			[ ] LogError("Ct value is not valid for sample: {sSampleID}")
		[ ] print("Expected Ct value: {sCt}")
		[ ] print("Actual Ct value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual EndPt values match
		[-] if rDetail.sEndPt == "0"
			[ ] sEndPt = "0.0"
		[+] else
			[ ] iPos = StrPos(DEC, rDetail.sEndPt)
			[ ] sEndPt = SubStr(rDetail.sEndPt, 1, iPos +1)
		[+] if (sEndPt != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
			[ ] LogError("EndPt value is not valid for sample: {sSampleID}")
		[ ] print("Expected EndPt value: {sEndPt}")
		[ ] print("Actual EndPt value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Analyte Results match
		[+] if (rDetail.sAnalyteResult != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
			[ ] LogError("Analyte Result is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
		[ ] print("Expected Analyte Result: " + rDetail.sAnalyteResult)
		[ ] print("Actual Analyte Result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
		[ ] print ()
		[ ] //
		[ ] // Verify that the expected and actual  Probe Check Results match
		[+] if (rDetail.sProbeCheckResult != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 5}))
			[ ] LogError("Probe Check Result is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
		[ ] print("Expected Probe Check Result: " + rDetail.sProbeCheckResult)
		[ ] print("Actual Probe Check Result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 5}))
		[ ] print ()
		[ ] //
		[ ] // // // // Verify that the expected and actual Target Delta Ct values match
		[+] // // // if rDetail.sTargetDeltaCt == DBNULLVALUE //&& GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}) == NULL
			[ ] // // // print("Expected Target Delta Ct: ")
			[ ] // // // print("Actual Target Delta Ct: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}))
		[+] // // // else
			[ ] // // // iPos = StrPos(DEC, rDetail.sTargetDeltaCt)
			[ ] // // // sTargetDeltaCt = SubStr(rDetail.sTargetDeltaCt, 1, iPos +1)
			[-] // // // if (sTargetDeltaCt != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}))
				[ ] // // // LogError("Target Delta Ct is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
			[ ] // // // print("Expected Target Delta Ct: " + sTargetDeltaCt)
			[ ] // // // print("Actual Target Delta Ct: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}))
			[ ] // // // print ()
[ ] // 
[ ] // D8380 function
[+] VerifyAnalyteResult4PRB (DETAIL_PRB rDetail, STRING sSampleID)
	[ ] //
	[ ] // Constants
	[ ] //
	[ ] const DEC = "."
	[ ] const DBNULLVALUE = "-9999.000000"
	[ ] const GUINULLVALUE = ' '
	[ ] // 
	[ ] // Variables
	[ ] //
	[ ] INTEGER iAnalytePos = 0
	[ ] STRING sCt = ' '
	[ ] STRING sEndPt = ' '
	[ ] STRING sTargetDeltaCt = ' '
	[ ] INTEGER iPos = 0
	[ ] 
	[ ] SetPrecision (1)
	[ ] 
	[ ] // Verification for the analyte name
	[-] if rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({1, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({2, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({3, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({4, 1})
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1}))
		[ ] print ()
	[-] else
		[ ] 
		[-] if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1})
			[ ] iAnalytePos = 1
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1})
			[ ] iAnalytePos = 2
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({3, 1})
			[ ] iAnalytePos = 3
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({4, 1})
			[ ] iAnalytePos = 4
		[ ] 
		[ ] // First verify that the expected and actual Analyte Names match
		[-] if (rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
			[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Ct values match
		[-] if rDetail.sCt == "0"
			[ ] sCt = "0.0"
		[-] else
			[ ] iPos = StrPos(DEC, rDetail.sCt)
			[ ] sCt = SubStr(rDetail.sCt, 1, iPos +1)
		[-] if (sCt  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
			[ ] LogError("Ct value is not valid for sample: {sSampleID}")
		[ ] print("Expected Ct value: {sCt}")
		[ ] print("Actual Ct value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual EndPt values match
		[-] if rDetail.sEndPt == "0"
			[ ] sEndPt = "0.0"
		[-] else
			[ ] iPos = StrPos(DEC, rDetail.sEndPt)
			[ ] sEndPt = SubStr(rDetail.sEndPt, 1, iPos +1)
		[-] if (sEndPt != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
			[ ] LogError("EndPt value is not valid for sample: {sSampleID}")
		[ ] print("Expected EndPt value: {sEndPt}")
		[ ] print("Actual EndPt value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Analyte Results match
		[-] if (rDetail.sAnalyteResult != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
			[ ] LogError("Analyte Result is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
		[ ] print("Expected Analyte Result: " + rDetail.sAnalyteResult)
		[ ] print("Actual Analyte Result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
		[ ] print ()
		[ ] //
		[ ] // Verify that the expected and actual  Probe Check Results match
		[-] if (rDetail.sProbeCheckResult != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 5}))
			[ ] LogError("Probe Check Result is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
		[ ] print("Expected Probe Check Result: " + rDetail.sProbeCheckResult)
		[ ] print("Actual Probe Check Result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 5}))
		[ ] print ()
		[ ] 
		[ ] // // // // Verify that the expected and actual Target Delta Ct values match
		[-] // // // if rDetail.sTargetDeltaCt == DBNULLVALUE //&& GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}) == NULL
			[ ] // // // print("Expected Target Delta Ct: ")
			[ ] // // // print("Actual Target Delta Ct: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}))
		[-] // // // else
			[ ] // // // iPos = StrPos(DEC, rDetail.sTargetDeltaCt)
			[ ] // // // sTargetDeltaCt = SubStr(rDetail.sTargetDeltaCt, 1, iPos +1)
			[-] // // // if (sTargetDeltaCt != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}))
				[ ] // // // LogError("Target Delta Ct is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
			[ ] // // // print("Expected Target Delta Ct: " + sTargetDeltaCt)
			[ ] // // // print("Actual Target Delta Ct: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}))
			[ ] // // // print ()
[ ] 
[ ] // D8380 function
[+] VerifyAnalyteResult6PRB (DETAIL_PRB rDetail, STRING sSampleID)
	[ ] //
	[ ] // Constants
	[ ] //
	[ ] const DEC = "."
	[ ] const DBNULLVALUE = "-9999.000000"
	[ ] const GUINULLVALUE = ' '
	[ ] // 
	[ ] // Variables
	[ ] //
	[ ] INTEGER iAnalytePos = 0
	[ ] STRING sCt = ' '
	[ ] STRING sEndPt = ' '
	[ ] STRING sTargetDeltaCt = ' '
	[ ] INTEGER iPos = 0
	[ ] 
	[ ] SetPrecision (1)
	[ ] 
	[ ] // Verification for the analyte name
	[+] if rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({1, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({2, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({3, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({4, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({5, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({6, 1})
		[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1}))
		[ ] print ()
	[-] else
		[ ] 
		[-] if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1})
			[ ] iAnalytePos = 1
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1})
			[ ] iAnalytePos = 2
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({3, 1})
			[ ] iAnalytePos = 3
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({4, 1})
			[ ] iAnalytePos = 4
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({5, 1})
			[ ] iAnalytePos = 5
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({6, 1})
			[ ] iAnalytePos = 6
		[ ] 
		[ ] // First verify that the expected and actual Analyte Names match
		[-] if (rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
			[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Ct values match
		[-] if rDetail.sCt == "0"
			[ ] sCt = "0.0"
		[-] else
			[ ] iPos = StrPos(DEC, rDetail.sCt)
			[ ] sCt = SubStr(rDetail.sCt, 1, iPos +1)
		[-] if (sCt  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
			[ ] LogError("Ct value is not valid for sample: {sSampleID}")
		[ ] print("Expected Ct value: {sCt}")
		[ ] print("Actual Ct value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual EndPt values match
		[-] if rDetail.sEndPt == "0"
			[ ] sEndPt = "0.0"
		[-] else
			[ ] iPos = StrPos(DEC, rDetail.sEndPt)
			[ ] sEndPt = SubStr(rDetail.sEndPt, 1, iPos +1)
		[-] if (sEndPt != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
			[ ] LogError("EndPt value is not valid for sample: {sSampleID}")
		[ ] print("Expected EndPt value: {sEndPt}")
		[ ] print("Actual EndPt value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Analyte Results match
		[-] if (rDetail.sAnalyteResult != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
			[ ] LogError("Analyte Result is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
		[ ] print("Expected Analyte Result: " + rDetail.sAnalyteResult)
		[ ] print("Actual Analyte Result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
		[ ] print ()
		[ ] // Verify that the expected and actual  Probe Check Results match
		[-] if (rDetail.sProbeCheckResult != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 5}))
			[ ] LogError("Probe Check Result is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
		[ ] print("Expected Probe Check Result: " + rDetail.sProbeCheckResult)
		[ ] print("Actual Probe Check Result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 5}))
		[ ] print ()
		[ ] 
		[ ] // // // // Verify that the expected and actual Target Delta Ct values match
		[-] // // // if rDetail.sTargetDeltaCt == DBNULLVALUE //&& GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}) == NULL
			[ ] // // // print("Expected Target Delta Ct: ")
			[ ] // // // print("Actual Target Delta Ct: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}))
		[-] // // // else
			[ ] // // // iPos = StrPos(DEC, rDetail.sTargetDeltaCt)
			[ ] // // // sTargetDeltaCt = SubStr(rDetail.sTargetDeltaCt, 1, iPos +1)
			[-] // // // if (sTargetDeltaCt != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}))
				[ ] // // // LogError("Target Delta Ct is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
			[ ] // // // print("Expected Target Delta Ct: " + sTargetDeltaCt)
			[ ] // // // print("Actual Target Delta Ct: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}))
			[ ] // // // print ()
[ ] 
[ ] // Verify Analyte Result on DETAIL tab
[ ] // D8380 function
[+] VerifyDetailTab3 (DETAIL_PRB  rDetail, STRING sSampleID)
	[ ] //
	[ ] // Constants
	[ ] //
	[ ] const DEC = "."
	[ ] const NOTAPPLICABLE = 'NA'
	[ ] // 
	[ ] // Variables
	[ ] //
	[ ] INTEGER iAnalytePos = 0
	[ ] STRING sPrbChk = ' '
	[ ] STRING sSecDerivPkHt = ' '
	[ ] STRING sMeltPeak = ' '
	[ ] STRING sZERO = '0'
	[ ] STRING sLONG_ZERO = '0.0'
	[ ] INTEGER iPos = 0
	[ ] 
	[ ] SetPrecision (1)
	[ ] 
	[ ] // Verification for the analyte name
	[-] if rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({3, 1})
		[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1}))
		[ ] print ()
	[-] else
		[ ] 
		[-] if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1})
			[ ] iAnalytePos = 1
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1})
			[ ] iAnalytePos = 2
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({3, 1})
			[ ] iAnalytePos = 3
			[ ] 
	[ ] // First verify that the expected and actual Analyte Names match
	[-] if (rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
		[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
	[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
	[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
	[-] print ()
		[ ] 
		[ ] // Verify that the expected and actual Probe Check 1 values match
		[ ] iPos = StrPos(DEC, rDetail.sPrbChk1)
		[ ] sPrbChk = SubStr(rDetail.sPrbChk1, 1, iPos +1)
		[-] if rDetail.sPrbChk1 == sZERO
			[ ] rDetail.sPrbChk1 = sLONG_ZERO
		[-] if (sPrbChk  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
			[ ] LogError("Probe Check 1 value is not valid for sample: {sSampleID}")
		[ ] print("Expected Probe Check 1 value: {sPrbChk}")
		[ ] print("Actual Probe Check 1 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Probe Check 2 values match
		[ ] iPos = StrPos(DEC, rDetail.sPrbChk2)
		[ ] sPrbChk = SubStr(rDetail.sPrbChk2, 1, iPos +1)
		[-] if rDetail.sPrbChk2 == sZERO
			[ ] rDetail.sPrbChk2 = sLONG_ZERO
		[-] if (sPrbChk  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
			[ ] LogError("Probe Check 2 value is not valid for sample: {sSampleID}")
		[ ] print("Expected Probe Check 2 value: {sPrbChk}")
		[ ] print("Actual Probe Check 2 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Probe Check 3 values match
		[ ] iPos = StrPos(DEC, rDetail.sPrbChk3)
		[ ] sPrbChk = SubStr(rDetail.sPrbChk3, 1, iPos +1)
		[-] if rDetail.sPrbChk3 == sZERO
			[ ] rDetail.sPrbChk3 = sLONG_ZERO
		[-] if (sPrbChk  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
			[ ] LogError("Probe Check 3 value is not valid for sample: {sSampleID}")
		[ ] print("Expected Probe Check 3 value: {sPrbChk}")
		[ ] print("Actual Probe Check 3 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Probe Check Result values match
		[-] if (rDetail.sProbeCheckResult  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 5}))
			[ ] LogError("Detail tab: Probe Check Result is not valid for sample: {sSampleID} and analyte {rDetail.sAnalyteName}")
		[ ] print("Expected Probe Check Result: {rDetail.sProbeCheckResult}")
		[ ] print("Actual Probe Check Result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 5}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual 2nd Derivative Peak Height values match
		[ ] iPos = StrPos(DEC, rDetail.sSecDerivPeakHght)
		[ ] sSecDerivPkHt = SubStr(rDetail.sSecDerivPeakHght, 1, iPos +1)
		[+] if (sSecDerivPkHt  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}))
			[ ] LogError("2nd Derivative Peak Height is not valid for sample: {sSampleID}")
		[ ] print("Expected 2nd Derivative Peak Height: {sSecDerivPkHt}")
		[ ] print("Actual 2nd Derivative Peak Height: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Melt Peak 1 values match
		[+] if rDetail.sMeltPeak1 != NOTAPPLICABLE
			[ ] iPos = StrPos(DEC, rDetail.sMeltPeak1)
			[ ] sMeltPeak = SubStr(rDetail.sMeltPeak1, 1, iPos +1)
			[-] if (sMeltPeak  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 7}))
				[ ] LogError("Melt Peak 1 is not valid for sample: {sSampleID}")
			[ ] print("Expected Melt Peak 1 value: {sMeltPeak}")
			[ ] print("Actual Melt Peak 1 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 7}))
			[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Melt Peak 2 values match
		[+] if rDetail.sMeltPeak2 != NOTAPPLICABLE
			[ ] iPos = StrPos(DEC, rDetail.sMeltPeak2)
			[ ] sMeltPeak = SubStr(rDetail.sMeltPeak2, 1, iPos +1)
			[-] if (sMeltPeak  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 8}))
				[ ] LogError("Melt Peak 2 is not valid for sample: {sSampleID}")
			[ ] print("Expected Melt Peak 2 value: {sMeltPeak}")
			[ ] print("Actual Melt Peak 2 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 8}))
			[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Melt Peak 3 values match
		[+] if rDetail.sMeltPeak3 != NOTAPPLICABLE
			[ ] iPos = StrPos(DEC, rDetail.sMeltPeak3)
			[ ] sMeltPeak = SubStr(rDetail.sMeltPeak3, 1, iPos +1)
			[-] if (sMeltPeak  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 9}))
				[ ] LogError("Melt Peak 3 is not valid for sample: {sSampleID}")
			[ ] print("Expected Melt Peak 3 value: {sMeltPeak}")
			[ ] print("Actual Melt Peak 3 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 9}))
			[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Curve Fit values match
		[+] if (rDetail.sCurveFit  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 10}))
			[ ] LogError("Curve Fit is not valid for sample: {sSampleID}")
		[ ] print("Expected Curve Fit result: {rDetail.sCurveFit}")
		[ ] print("Actual Curve Fit result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 10}))
		[ ] print ()
		[ ] 
[ ] 
[ ] // D8380 function
[+] VerifyDetailTab4 (DETAIL_PRB rDetail, STRING sSampleID)
	[ ] //
	[ ] // Constants
	[ ] //
	[ ] const DEC = "."
	[ ] const NOTAPPLICABLE = 'NA'
	[ ] // 
	[ ] // Variables
	[ ] //
	[ ] INTEGER iAnalytePos = 0
	[ ] STRING sPrbChk = ' '
	[ ] STRING sSecDerivPkHt = ' '
	[ ] STRING sMeltPeak = ' '
	[ ] STRING sZERO = '0'
	[ ] STRING sLONG_ZERO = '0.0'
	[ ] INTEGER iPos = 0
	[ ] 
	[ ] SetPrecision (1)
	[ ] 
	[ ] // Verification for the analyte name
	[-] if rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({1, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({2, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({3, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({4, 1})
		[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: <Not Found>")
		[ ] print ()
	[-] else
		[ ] 
		[-] if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({1, 1})
			[ ] iAnalytePos = 1
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({2, 1})
			[ ] iAnalytePos = 2
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({3, 1})
			[ ] iAnalytePos = 3
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({4, 1})
			[ ] iAnalytePos = 4
		[ ] 
		[ ] // First verify that the expected and actual Analyte Names match
		[-] if (rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
			[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Probe Check 1 values match
		[ ] iPos = StrPos(DEC, rDetail.sPrbChk1)
		[ ] sPrbChk = SubStr(rDetail.sPrbChk1, 1, iPos +1)
		[-] if rDetail.sPrbChk1 == sZERO
			[ ] rDetail.sPrbChk1 = sLONG_ZERO
		[-] if (sPrbChk  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
			[ ] LogError("Probe Check 1 value is not valid for sample: {sSampleID}")
		[ ] print("Expected Probe Check 1 value: {sPrbChk}")
		[ ] print("Actual Probe Check 1 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Probe Check 2 values match
		[ ] iPos = StrPos(DEC, rDetail.sPrbChk2)
		[ ] sPrbChk = SubStr(rDetail.sPrbChk2, 1, iPos +1)
		[-] if rDetail.sPrbChk2 == sZERO
			[ ] rDetail.sPrbChk2 = sLONG_ZERO
		[-] if (sPrbChk  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
			[ ] LogError("Probe Check 2 value is not valid for sample: {sSampleID}")
		[ ] print("Expected Probe Check 2 value: {sPrbChk}")
		[ ] print("Actual Probe Check 2 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Probe Check 3 values match
		[ ] iPos = StrPos(DEC, rDetail.sPrbChk3)
		[ ] sPrbChk = SubStr(rDetail.sPrbChk3, 1, iPos +1)
		[-] if rDetail.sPrbChk3 == sZERO
			[ ] rDetail.sPrbChk3 = sLONG_ZERO
		[-] if (sPrbChk  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
			[ ] LogError("Probe Check 3 value is not valid for sample: {sSampleID}")
		[ ] print("Expected Probe Check 3 value: {sPrbChk}")
		[ ] print("Actual Probe Check 3 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Probe Check Result values match
		[-] if (rDetail.sProbeCheckResult  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 5}))
			[ ] LogError("Probe Check Result is not valid for sample: {sSampleID}")
		[ ] print("Expected Probe Check Result: {rDetail.sProbeCheckResult}")
		[ ] print("Actual Probe Check Result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 5}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual 2nd Derivative Peak Height values match
		[ ] iPos = StrPos(DEC, rDetail.sSecDerivPeakHght)
		[ ] sSecDerivPkHt = SubStr(rDetail.sSecDerivPeakHght, 1, iPos +1)
		[-] if (sSecDerivPkHt  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}))
			[ ] LogError("2nd Derivative Peak Height is not valid for sample: {sSampleID}")
		[ ] print("Expected 2nd Derivative Peak Height: {sSecDerivPkHt}")
		[ ] print("Actual 2nd Derivative Peak Height: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Melt Peak 1 values match
		[-] if rDetail.sMeltPeak1 != NOTAPPLICABLE
			[ ] iPos = StrPos(DEC, rDetail.sMeltPeak1)
			[ ] sMeltPeak = SubStr(rDetail.sMeltPeak1, 1, iPos +1)
			[-] if (sMeltPeak  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 7}))
				[ ] LogError("Melt Peak 1 is not valid for sample: {sSampleID}")
			[ ] print("Expected Melt Peak 1 value: {sMeltPeak}")
			[ ] print("Actual Melt Peak 1 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 7}))
			[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Melt Peak 2 values match
		[-] if rDetail.sMeltPeak2 != NOTAPPLICABLE
			[ ] iPos = StrPos(DEC, rDetail.sMeltPeak2)
			[ ] sMeltPeak = SubStr(rDetail.sMeltPeak2, 1, iPos +1)
			[-] if (sMeltPeak  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 8}))
				[ ] LogError("Melt Peak 2 is not valid for sample: {sSampleID}")
			[ ] print("Expected Melt Peak 2 value: {sMeltPeak}")
			[ ] print("Actual Melt Peak 2 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 8}))
			[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Melt Peak 3 values match
		[-] if rDetail.sMeltPeak3 != NOTAPPLICABLE
			[ ] iPos = StrPos(DEC, rDetail.sMeltPeak3)
			[ ] sMeltPeak = SubStr(rDetail.sMeltPeak3, 1, iPos +1)
			[-] if (sMeltPeak  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 9}))
				[ ] LogError("Melt Peak 3 is not valid for sample: {sSampleID}")
			[ ] print("Expected Melt Peak 3 value: {sMeltPeak}")
			[ ] print("Actual Melt Peak 3 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 9}))
			[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Curve Fit values match
		[-] if (rDetail.sCurveFit  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 10}))
			[ ] LogError("Curve Fit is not valid for sample: {sSampleID}")
		[ ] print("Expected Curve Fit result: {rDetail.sCurveFit}")
		[ ] print("Actual Curve Fit result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 10}))
		[ ] print ()
[ ] 
[ ] // D8380 function
[+] VerifyDetailTab6 (DETAIL_PRB rDetail, STRING sSampleID)
	[ ] //
	[ ] // Constants
	[ ] //
	[ ] const DEC = "."
	[ ] const NOTAPPLICABLE = 'NA'
	[ ] // 
	[ ] // Variables
	[ ] //
	[ ] INTEGER iAnalytePos = 0
	[ ] STRING sPrbChk = ' '
	[ ] STRING sSecDerivPkHt = ' '
	[ ] STRING sMeltPeak = ' '
	[ ] STRING sZERO = '0'
	[ ] STRING sLONG_ZERO = '0.0'
	[ ] INTEGER iPos = 0
	[ ] 
	[ ] SetPrecision (1)
	[ ] 
	[ ] // Verification for the analyte name
	[+] if rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({1, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({2, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({3, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({4, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({5, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({6, 1})
		[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: <Not Found>")
		[ ] print ()
	[-] else
		[ ] 
		[-] if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({1, 1})
			[ ] iAnalytePos = 1
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({2, 1})
			[ ] iAnalytePos = 2
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({3, 1})
			[ ] iAnalytePos = 3
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({4, 1})
			[ ] iAnalytePos = 4
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({5, 1})
			[ ] iAnalytePos = 5
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({6, 1})
			[ ] iAnalytePos = 6
		[ ] 
		[ ] // First verify that the expected and actual Analyte Names match
		[-] if (rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
			[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Probe Check 1 values match
		[ ] iPos = StrPos(DEC, rDetail.sPrbChk1)
		[ ] sPrbChk = SubStr(rDetail.sPrbChk1, 1, iPos +1)
		[-] if rDetail.sPrbChk1 == sZERO
			[ ] sPrbChk = sLONG_ZERO
		[ ] print("sPrbChk = {sPrbChk}")
		[-] if (sPrbChk  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
			[ ] LogError("Probe Check 1 value is not valid for sample: {sSampleID}")
		[ ] print("Expected Probe Check 1 value: {sPrbChk}")
		[ ] print("Actual Probe Check 1 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Probe Check 2 values match
		[ ] iPos = StrPos(DEC, rDetail.sPrbChk2)
		[ ] sPrbChk = SubStr(rDetail.sPrbChk2, 1, iPos +1)
		[-] if rDetail.sPrbChk2 == sZERO
			[ ] sPrbChk = sLONG_ZERO
		[ ] print("sPrbChk = {sPrbChk}")
		[-] if (sPrbChk  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
			[ ] LogError("Probe Check 2 value is not valid for sample: {sSampleID}")
		[ ] print("Expected Probe Check 2 value: {sPrbChk}")
		[ ] print("Actual Probe Check 2 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Probe Check 3 values match
		[ ] iPos = StrPos(DEC, rDetail.sPrbChk3)
		[ ] sPrbChk = SubStr(rDetail.sPrbChk3, 1, iPos +1)
		[-] if rDetail.sPrbChk3 == sZERO
			[ ] sPrbChk = sLONG_ZERO
		[ ] print("sPrbChk = {sPrbChk}")
		[-] if (sPrbChk  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
			[ ] LogError("Probe Check 3 value is not valid for sample: {sSampleID}")
		[ ] print("Expected Probe Check 3 value: {sPrbChk}")
		[ ] print("Actual Probe Check 3 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Probe Check Result values match
		[-] if (rDetail.sProbeCheckResult  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 5}))
			[ ] LogError("Probe Check Result is not valid for sample: {sSampleID}")
		[ ] print("Expected Probe Check Result: {rDetail.sProbeCheckResult}")
		[ ] print("Actual Probe Check Result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 5}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual 2nd Derivative Peak Height values match
		[ ] iPos = StrPos(DEC, rDetail.sSecDerivPeakHght)
		[ ] sSecDerivPkHt = SubStr(rDetail.sSecDerivPeakHght, 1, iPos +1)
		[-] if (sSecDerivPkHt  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}))
			[ ] LogError("2nd Derivative Peak Height is not valid for sample: {sSampleID}")
		[ ] print("Expected 2nd Derivative Peak Height: {sSecDerivPkHt}")
		[ ] print("Actual 2nd Derivative Peak Height: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Melt Peak 1 values match
		[-] if rDetail.sMeltPeak1 != NOTAPPLICABLE
			[ ] iPos = StrPos(DEC, rDetail.sMeltPeak1)
			[ ] sMeltPeak = SubStr(rDetail.sMeltPeak1, 1, iPos +1)
			[-] if (sMeltPeak  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 7}))
				[ ] LogError("Melt Peak 1 is not valid for sample: {sSampleID}")
			[ ] print("Expected Melt Peak 1 value: {sMeltPeak}")
			[ ] print("Actual Melt Peak 1 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 7}))
			[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Melt Peak 2 values match
		[-] if rDetail.sMeltPeak2 != NOTAPPLICABLE
			[ ] iPos = StrPos(DEC, rDetail.sMeltPeak2)
			[ ] sMeltPeak = SubStr(rDetail.sMeltPeak2, 1, iPos +1)
			[-] if (sMeltPeak  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 8}))
				[ ] LogError("Melt Peak 2 is not valid for sample: {sSampleID}")
			[ ] print("Expected Melt Peak 2 value: {sMeltPeak}")
			[ ] print("Actual Melt Peak 2 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 8}))
			[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Melt Peak 3 values match
		[-] if rDetail.sMeltPeak3 != NOTAPPLICABLE
			[ ] iPos = StrPos(DEC, rDetail.sMeltPeak3)
			[ ] sMeltPeak = SubStr(rDetail.sMeltPeak3, 1, iPos +1)
			[-] if (sMeltPeak  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 9}))
				[ ] LogError("Melt Peak 3 is not valid for sample: {sSampleID}")
			[ ] print("Expected Melt Peak 3 value: {sMeltPeak}")
			[ ] print("Actual Melt Peak 3 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 9}))
			[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Curve Fit values match
		[-] if (rDetail.sCurveFit  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 10}))
			[ ] LogError("Curve Fit is not valid for sample: {sSampleID}")
		[ ] print("Expected Curve Fit result: {rDetail.sCurveFit}")
		[ ] print("Actual Curve Fit result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 10}))
		[ ] print ()
	[ ] 
[ ] 
[ ] // This function verify Sample ID, status, and assay name.
[ ] // This function is used in D8380 function in melt tests
[+] VerifyTestResultMainPRB (REC_6ANALYTES_DR rExpected)
	[ ] //
	[ ] // Constants
	[ ] //
	[ ] // const PAD = '          '
	[ ] // const BACKGROUNDCOLOR = 'background-color: #'
	[ ] // const FONTCOLOR = ' color: #'
	[ ] // const ENDTABLETAG = '</table>'
	[ ] // const ROW0 = 'tr.row0 '
	[ ] //
	[ ] // Variable declarations
	[ ] //
	[ ] LIST OF STRING lsHTMLTestResult
	[ ] STRING sHTMLString = ' '
	[ ] INTEGER iPos = 0
	[ ] REC_6ANALYTES_DR rActual
	[ ] BOOLEAN bStyleNotFound = true
	[ ] 
	[ ] // Verify Sample ID
	[ ] GeneXpert®DxSystem.UserNone.SampleID.SetPosition( 1, 3 )
	[ ] rActual.sSampleID = GeneXpert®DxSystem.UserNone.SampleID.GetText()
	[-] if rExpected.sSampleID != rActual.sSampleID
		[ ] LogError("Sample ID is not valid")
	[ ] print("Expected Sample ID: " + rExpected.sSampleID)
	[ ] print("Actual Sample ID: " + rActual.sSampleID)
	[ ] print ()
	[ ] 
	[ ] // Verify information on the left panel i.e. Status and Assay Name
	[ ] rActual.sAssayNameLeftPanel = GeneXpert®DxSystem.UserNone.Assay.GetText()
	[-] if rExpected.sAssayNameLeftPanel != rActual.sAssayNameLeftPanel
		[ ] LogError("Assay name on the left panel is not valid for sample: {rExpected.sSampleID}")
	[ ] print("Expected Assay Name on left panel: " + rExpected.sAssayNameLeftPanel)
	[ ] print("Actual Assay Name on left panel: " + rActual.sAssayNameLeftPanel)
	[ ] print ()
	[ ] 
	[ ] rActual.sStatus = GeneXpert®DxSystem.UserNone.Status.GetText()
	[-] if rExpected.sStatus != rActual.sStatus
		[ ] LogError("Status on the left panel is not valid for sample: {rExpected.sSampleID}")
	[ ] print("Expected Status: " + rExpected.sStatus)
	[ ] print("Actual Status: " + rActual.sStatus)
	[ ] print ()
	[ ] 
	[ ] // Verify information on the Test Result tab i.e. Assay Name, Result Text & Result color
	[ ] rActual.sAssayNameRightPanel = GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.TestResult.AssayName.GetText()
	[-] if rExpected.sAssayNameRightPanel != rActual.sAssayNameRightPanel
		[ ] LogError("Assay name on the right panel is not valid for sample: {rExpected.sSampleID}")
	[ ] print("Expected Assay Name on right panel: " + rExpected.sAssayNameRightPanel)
	[ ] print("Actual Assay Name on right panel: " + rActual.sAssayNameRightPanel)
	[ ] print ()
	[ ] 
[ ] 
[ ] // This function verify Sample ID, status, and assay name.
[ ] // D8380 function
[+] VerifyMeltTestResultMain (REC_6ANALYTES_DR rExpected)
	[ ] //
	[ ] // Constants
	[ ] //
	[ ] // const PAD = '          '
	[ ] // const BACKGROUNDCOLOR = 'background-color: #'
	[ ] // const FONTCOLOR = ' color: #'
	[ ] // const ENDTABLETAG = '</table>'
	[ ] // const ROW0 = 'tr.row0 '
	[ ] //
	[ ] // Variable declarations
	[ ] //
	[ ] LIST OF STRING lsHTMLTestResult
	[ ] STRING sHTMLString = ' '
	[ ] INTEGER iPos = 0
	[ ] REC_6ANALYTES_DR rActual
	[ ] BOOLEAN bStyleNotFound = true
	[ ] 
	[ ] // Verify Sample ID
	[ ] GeneXpert®DxSystem.UserNone.SampleID.SetPosition( 1, 3 )
	[ ] rActual.sSampleID = GeneXpert®DxSystem.UserNone.SampleID.GetText()
	[-] if rExpected.sSampleID != rActual.sSampleID
		[ ] LogError("Sample ID is not valid")
	[ ] print("Expected Sample ID: " + rExpected.sSampleID)
	[ ] print("Actual Sample ID: " + rActual.sSampleID)
	[ ] print ()
	[ ] 
	[ ] // Verify information on the left panel i.e. Status and Assay Name
	[ ] rActual.sAssayNameLeftPanel = GeneXpert®DxSystem.UserNone.Assay.GetText()
	[-] if rExpected.sAssayNameLeftPanel != rActual.sAssayNameLeftPanel
		[ ] LogError("Assay name on the left panel is not valid for sample: {rExpected.sSampleID}")
	[ ] print("Expected Assay Name on left panel: " + rExpected.sAssayNameLeftPanel)
	[ ] print("Actual Assay Name on left panel: " + rActual.sAssayNameLeftPanel)
	[ ] print ()
	[ ] 
	[ ] rActual.sStatus = GeneXpert®DxSystem.UserNone.Status.GetText()
	[-] if rExpected.sStatus != rActual.sStatus
		[ ] LogError("Status on the left panel is not valid for sample: {rExpected.sSampleID}")
	[ ] print("Expected Status: " + rExpected.sStatus)
	[ ] print("Actual Status: " + rActual.sStatus)
	[ ] print ()
	[ ] 
	[ ] // Verify information on the Test Result tab i.e. Assay Name, Result Text & Result color
	[ ] rActual.sAssayNameRightPanel = GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.TestResult.AssayName.GetText()
	[-] if rExpected.sAssayNameRightPanel != rActual.sAssayNameRightPanel
		[ ] LogError("Assay name on the right panel is not valid for sample: {rExpected.sSampleID}")
	[ ] print("Expected Assay Name on right panel: " + rExpected.sAssayNameRightPanel)
	[ ] print("Actual Assay Name on right panel: " + rActual.sAssayNameRightPanel)
	[ ] print ()
	[ ] 
[ ] 
[ ] // This function is for D8383 Bkgnd Sub and Crosstalk
[ ] // This function takes the expected values for Sample ID, Status, Assay Name (Right and Left panel verifications), 
[ ] // r and verifies them against the GUI 
[+] VerifyTestResultMainBCT (REC_ANALYTE_BCT rExpected)
	[ ] //
	[ ] INTEGER iPos = 0
	[ ] REC_ANALYTE_BCT rActual
	[ ] //
	[ ] // Verify Sample ID
	[ ] GeneXpert®DxSystem.UserNone.SampleID.SetPosition( 1, 3 )
	[ ] rActual.sSampleID = GeneXpert®DxSystem.UserNone.SampleID.GetText()
	[-] if rExpected.sSampleID != rActual.sSampleID
		[ ] LogError("Sample ID is not valid")
	[ ] print("Expected Sample ID: " + rExpected.sSampleID)
	[ ] print("Actual Sample ID: " + rActual.sSampleID)
	[ ] print ()
	[ ] //
	[ ] // Verify information on the left panel i.e. Status and Assay Name
	[ ] rActual.sAssayNameLeftPanel = GeneXpert®DxSystem.UserNone.Assay.GetText()
	[-] if rExpected.sAssayNameLeftPanel != rActual.sAssayNameLeftPanel
		[ ] LogError("Assay name on the left panel is not valid for sample: {rExpected.sSampleID}")
	[ ] print("Expected Assay Name on left panel: " + rExpected.sAssayNameLeftPanel)
	[ ] print("Actual Assay Name on left panel: " + rActual.sAssayNameLeftPanel)
	[ ] print ()
	[ ] //
	[ ] rActual.sStatus = GeneXpert®DxSystem.UserNone.Status.GetText()
	[-] if rExpected.sStatus != rActual.sStatus
		[ ] LogError("Status on the left panel is not valid for sample: {rExpected.sSampleID}")
	[ ] print("Expected Status: " + rExpected.sStatus)
	[ ] print("Actual Status: " + rActual.sStatus)
	[ ] print ()
	[ ] //
	[ ] // Verify Assay Name i on the Test Result tab
	[ ] rActual.sAssayNameRightPanel = GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.TestResult.AssayName.GetText()
	[-] if rExpected.sAssayNameRightPanel != rActual.sAssayNameRightPanel
		[ ] LogError("Assay name on the right panel is not valid for sample: {rExpected.sSampleID}")
	[ ] print("Expected Assay Name on right panel: " + rExpected.sAssayNameRightPanel)
	[ ] print("Actual Assay Name on right panel: " + rActual.sAssayNameRightPanel)
	[ ] print ()
[ ] //
[ ] 
[ ] // This function is for D8383 Background Subtraction and Crosstalk Correction
[ ] // This function will verify all of the values on the Detail tab of View Results against the expected values that are passed into the function
[ ] // Used for assays that have 6 analytes
[ ] // For error log records the Sample ID is also passed into the function
[+] VerifyDetailTabBCT (REC_DETAIL rDetail, STRING sSampleID)
	[ ] //
	[ ] // Constants
	[ ] //
	[ ] const DEC = "."
	[ ] const NOTAPPLICABLE = 'NA'
	[ ] // 
	[ ] // Variables
	[ ] //
	[ ] INTEGER iAnalytePos = 0
	[ ] STRING sPrbChk = ' '
	[ ] STRING sSecDerivPkHt = ' '
	[ ] STRING sMeltPeak = ' '
	[ ] INTEGER iPos = 0
	[ ] 
	[ ] SetPrecision (1)
	[ ] 
	[ ] // Verification for the analyte name
	[-] if rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({1, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({2, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({3, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({4, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({5, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({6, 1})
		[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: <Not Found>")
		[ ] print ()
	[-] else
		[ ] 
		[-] if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({1, 1})
			[ ] iAnalytePos = 1
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({2, 1})
			[ ] iAnalytePos = 2
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({3, 1})
			[ ] iAnalytePos = 3
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({4, 1})
			[ ] iAnalytePos = 4
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({5, 1})
			[ ] iAnalytePos = 5
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({6, 1})
			[ ] iAnalytePos = 6
		[ ] print  ("This is analyte: {iAnalytePos}")
		[ ] // First verify that the expected and actual Analyte Names match
	[-] if (rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
		[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
	[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
	[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
	[ ] print ()
	[ ] //
	[ ] // Verify that the expected and actual 2nd Derivative Peak Height values match
	[ ] iPos = StrPos(DEC, rDetail.sSecDerivPeakHght)
	[ ] sSecDerivPkHt = SubStr(rDetail.sSecDerivPeakHght, 1, iPos +1)
	[-] if (sSecDerivPkHt  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}))
		[ ] LogError("2nd Derivative Peak Height is not valid for sample: {sSampleID}")
	[ ] print("Expected 2nd Derivative Peak Height: {sSecDerivPkHt}")
	[ ] print("Actual 2nd Derivative Peak Height: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}))
	[ ] print ()
	[ ] 
[ ] 
[ ] // This function is different from function VerifyAnalyteResult (REC_DETAIL rDetail, STRING sSampleID) above.
[ ] // VerifyAnalyteResultBKGND has additional code for Ct = O
[ ] //i f rDetail.sCt == '0.000000'
[ ] // sCt = '0'
[ ] // For error log records the Sample ID is also passed into the function
[-] VerifyAnalyteResultBCT(REC_DETAIL rDetail, STRING sSampleID)
	[ ] //
	[ ] // Constants
	[ ] //
	[ ] const DEC = "."
	[ ] // 
	[ ] // Variables
	[ ] //
	[ ] INTEGER iAnalytePos = 0
	[ ] STRING sCt = ' '
	[ ] STRING sEndPt = ' '
	[ ] INTEGER iPos = 0
	[ ] 
	[ ] SetPrecision (1)
	[ ] 
	[ ] // Verification for the analyte name
	[+] if rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({3, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({4, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({5, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({6, 1})
		[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: <Not Found>")
		[ ] print ()
	[-] else
		[ ] 
		[+] if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1})
			[ ] iAnalytePos = 1
		[+] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1})
			[ ] iAnalytePos = 2
		[+] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({3, 1})
			[ ] iAnalytePos = 3
		[+] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({4, 1})
			[ ] iAnalytePos = 4
		[+] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({5, 1})
			[ ] iAnalytePos = 5
		[+] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({6, 1})
			[ ] iAnalytePos = 6
		[ ] 
		[ ] //First verify that the expected and actual Analyte Names match
		[+] if (rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
			[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
		[ ] print ()
		[ ] //
		[ ] // Verify that the expected and actual Ct values match
		[-] if rDetail.sCt == '0.000000'
			[ ] sCt = '0'
		[-] else
			[ ] iPos = StrPos(DEC, rDetail.sCt)
			[ ] sCt = SubStr(rDetail.sCt, 1, iPos +1)
		[-] if (sCt  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
			[ ] LogError("Ct value is not valid for sample: {sSampleID}")
		[ ] print("Expected Ct value: {sCt}")
		[ ] print("Actual Ct value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
		[ ] print ()
		[ ] // 
		[ ] // Verify that the expected and actual EndPt values match
		[-] if rDetail.sEndPt== '0.000000'
			[ ] sEndPt= '0.0'
		[-] else
			[ ] iPos = StrPos(DEC, rDetail.sEndPt)
			[ ] sEndPt = SubStr(rDetail.sEndPt, 1, iPos +1)
		[+] if (sEndPt != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
			[ ] LogError("EndPt value is not valid for sample: {sSampleID}")
		[ ] print("Expected EndPt value: {sEndPt}")
		[ ] print("Actual EndPt value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Analyte Results match
		[+] if (rDetail.sAnalyteResult != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
			[ ] LogError("Analyte Result is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
		[ ] print("Expected Analyte Result: " + rDetail.sAnalyteResult)
		[ ] print("Actual Analyte Result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
		[ ] print ()
[ ] //
[ ] // This function is verifying melt test results on the Detail tab 
[ ] // This function is used in D8383 Background Subtraction and Crosstalk Correction
[+] VerifyDetailTabMELT (REC_MELT_DETAILS rDetail, STRING sSampleID)
	[ ] //
	[ ] // Constants
	[ ] //
	[ ] const DEC = "."
	[ ] const NOTAPPLICABLE = 'NA'
	[ ] // 
	[ ] // Variables
	[ ] //
	[ ] INTEGER iAnalytePos = 0
	[ ] STRING sPrbChk = ' '
	[ ] STRING sSecDerivPkHt = ' '
	[ ] STRING sMeltPeak1 = ' '
	[ ] STRING sMeltPeak2 = ' '
	[ ] STRING sMeltPeak3 = ' '
	[ ] //STRING sSampleID = ' ' 
	[ ] INTEGER iPos = 0
	[ ] //
	[ ] SetPrecision (1)
	[ ] //
	[ ] // Verification for the analyte name
	[-] if rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({1, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({2, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({3, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({4, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({5, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({6, 1})
		[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: <Not Found>")
		[ ] print ()
	[-] else
		[ ] //
		[+] if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({1, 1})
			[ ] iAnalytePos = 1
		[+] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({2, 1})
			[ ] iAnalytePos = 2
		[+] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({3, 1})
			[ ] iAnalytePos = 3
		[+] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({4, 1})
			[ ] iAnalytePos = 4
		[+] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({5, 1})
			[ ] iAnalytePos = 5
		[+] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({6, 1})
			[ ] iAnalytePos = 6
		[ ] print  ("This is analyte: {iAnalytePos}, {rDetail.sAnalyteName}")
		[ ] // First verify that the expected and actual Analyte Names match
	[ ] 
	[ ] //
	[ ] // Verify that the expected and actual 2nd Derivative Peak Height values match
	[ ] iPos = StrPos(DEC, rDetail.sSecDerivPeakHght)
	[ ] sSecDerivPkHt = SubStr(rDetail.sSecDerivPeakHght, 1, iPos +1)
	[+] if (sSecDerivPkHt  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}))
		[ ] LogError("2nd Derivative Peak Height is not valid for sample: {sSampleID}")
	[ ] print("Expected 2nd Derivative Peak Height:  {sSecDerivPkHt}")
	[ ] print("Actual 2nd Derivative Peak Height::  " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}))
	[ ] print ()
	[ ] //
	[ ] // Verify that the expected and actual Melt Peak 1 values match
	[ ] iPos = StrPos(DEC, rDetail.sMeltPeak1)
	[ ] sMeltPeak1 = SubStr(rDetail.sMeltPeak1, 1, iPos +1)
	[+] if (sMeltPeak1  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 7}))
		[ ] LogError("Melt Peak 1  is not valid for sample: {sSampleID}")
	[ ] print("Expected Melt Peak 1:  {sMeltPeak1}")
	[ ] print("Actual Melt Peak 1:  " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 7}))
	[ ] print ()
	[ ] //
	[ ] // Verify that the expected and actual Melt Peak 2 values match
	[ ] iPos = StrPos(DEC, rDetail.sMeltPeak2)
	[ ] sMeltPeak2 = SubStr(rDetail.sMeltPeak2, 1, iPos +1)
	[+] if (sMeltPeak2  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 8}))
		[ ] LogError("Melt Peak 2  is not valid for sample: {sSampleID}")
	[ ] print("Expected Melt Peak 2:  {sMeltPeak2}")
	[ ] print("Actual Melt Peak 2:  " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 8}))
	[ ] print ()
	[ ] //
	[ ] // Verify that the expected and actual Melt Peak 3 values match
	[ ] iPos = StrPos(DEC, rDetail.sMeltPeak3)
	[ ] sMeltPeak3 = SubStr(rDetail.sMeltPeak3, 1, iPos +1)
	[-] if (sMeltPeak3  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 9}))
		[ ] LogError("Melt Peak 3  is not valid for sample: {sSampleID}")
	[ ] print("Expected Melt Peak 3:  {sMeltPeak3}")
	[ ] print("Actual Melt Peak 3:  " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 9}))
	[ ] print ()
[ ] 
[ ] //This Function is for D8383 Bkgnd Sub and Crosstalk
[ ] // This function takes the expected values for Error Status and verifies it against the GUI. 
[ ] // User must be on Support tab prior to calling this function
[+] VerifyErrorStatusBCT (REC_ANALYTE_BCT rExpected)
	[ ] //
	[ ] // Variable declarations
	[ ] //
	[ ] REC_ANALYTE_BCT rActual
	[ ] 
	[ ] // Verification for the Error Status
	[ ] rActual.sErrorStatus = GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Support.ErrorStatus.GetText()
	[-] if (rExpected.sErrorStatus != rActual.sErrorStatus)
		[ ] LogError("Error Status is not valid for sample: {rExpected.sSampleID}")
	[ ] print("Expected Error Status: " + rExpected.sErrorStatus)
	[ ] print("Actual Error Status: " + rActual.sErrorStatus)
[ ] 
[ ] //This Function is for D8383 Bkgnd Sub and Crosstalk
[ ] // This function will verify Analyte Name, Probe Check readings, Probe Check Result, and 2nd Derivative Peak Height  values on the Detail tab of View Results against the expected values that are passed into the function
[ ] // Used for assays that have 6 analytes
[ ] // For error log records the Sample ID is also passed into the function
[+] VerifyDetailTabWithPrbChk (REC_DETAIL rDetail, STRING sSampleID)
	[ ] //
	[ ] // Constants
	[ ] //
	[ ] const DEC = "."
	[ ] const NOTAPPLICABLE = 'NA'
	[ ] // 
	[ ] // Variables
	[ ] //
	[ ] INTEGER iAnalytePos = 0
	[ ] STRING sPrbChk = ' '
	[ ] STRING sSecDerivPkHt = ' '
	[ ] STRING sMeltPeak = ' '
	[ ] INTEGER iPos = 0
	[ ] 
	[ ] SetPrecision (1)
	[ ] 
	[ ] // Verification for the analyte name
	[-] if rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({1, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({2, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({3, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({4, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({5, 1}) &&
    rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({6, 1})
		[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: <Not Found>")
		[ ] print ()
	[-] else
		[ ] 
		[-] if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({1, 1})
			[ ] iAnalytePos = 1
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({2, 1})
			[ ] iAnalytePos = 2
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({3, 1})
			[ ] iAnalytePos = 3
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({4, 1})
			[ ] iAnalytePos = 4
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({5, 1})
			[ ] iAnalytePos = 5
		[-] else if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({6, 1})
			[ ] iAnalytePos = 6
		[ ] print (iAnalytePos)
		[ ] // First verify that the expected and actual Analyte Names match
		[-] if (rDetail.sAnalyteName != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
			[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Probe Check 1 values match
		[ ] iPos = StrPos(DEC, rDetail.sPrbChk1)
		[ ] sPrbChk = SubStr(rDetail.sPrbChk1, 1, iPos +1)
		[-] if (sPrbChk  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
			[ ] LogError("Probe Check 1 value is not valid for sample: {sSampleID}")
		[ ] print("Expected Probe Check 1 value: {sPrbChk}")
		[ ] print("Actual Probe Check 1 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Probe Check 2 values match
		[ ] iPos = StrPos(DEC, rDetail.sPrbChk2)
		[ ] sPrbChk = SubStr(rDetail.sPrbChk2, 1, iPos +1)
		[-] if (sPrbChk  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
			[ ] LogError("Probe Check 2 value is not valid for sample: {sSampleID}")
		[ ] print("Expected Probe Check 2 value: {sPrbChk}")
		[ ] print("Actual Probe Check 2 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Probe Check 3 values match
		[ ] iPos = StrPos(DEC, rDetail.sPrbChk3)
		[ ] sPrbChk = SubStr(rDetail.sPrbChk3, 1, iPos +1)
		[-] if (sPrbChk  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
			[ ] LogError("Probe Check 3 value is not valid for sample: {sSampleID}")
		[ ] print("Expected Probe Check 3 value: {sPrbChk}")
		[ ] print("Actual Probe Check 3 value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual Probe Check Result values match
		[-] if (rDetail.sPrbChkResult  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 5}))
			[ ] LogError("Probe Check Result is not valid for sample: {sSampleID}")
		[ ] print("Expected Probe Check Result: {rDetail.sPrbChkResult}")
		[ ] print("Actual Probe Check Result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 5}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual 2nd Derivative Peak Height values match
		[ ] iPos = StrPos(DEC, rDetail.sSecDerivPeakHght)
		[ ] sSecDerivPkHt = SubStr(rDetail.sSecDerivPeakHght, 1, iPos +1)
		[-] if (sSecDerivPkHt  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}))
			[ ] LogError("2nd Derivative Peak Height is not valid for sample: {sSampleID}")
		[ ] print("Expected 2nd Derivative Peak Height: {sSecDerivPkHt}")
		[ ] print("Actual 2nd Derivative Peak Height: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}))
		[ ] print ()
		[ ] 
[ ] 
[ ] // This function takes the expected values for the test disclaimer & test result and verifies it against the GUI. 
[ ] // User must be on the Test Result tab with the Sample ID displayed prior to calling this function
[ ] // The Boolean parameter tells the function if the user is on the Basic or Detail view
[ ] // Added on 2/2/2011 by Steve.
[+] VerifyTestDisclaimerResultDetail (STRING sSampleID)
	[ ] //
	[ ] // Variable declarations
	[ ] //
	[ ] INTEGER iTestDisclaimerFontSize = 0
	[ ] INTEGER iTestResultFontSize = 0
	[ ] 
	[ ] print("The Sample ID: {sSampleID}")
	[ ] // Verification for the Test Result. Added by Steve on 2/3/2011
	[ ] iTestResultFontSize = JavaMainWin("GeneXpert® Dx System").CustomWin("[javax.swing.JSplitPane]User*").
    CustomWin("[javax.swing.JSplitPane]Sample ID*").CustomWin("[javax.swing.JSplitPane]#1").
    JavaJFCPageList("Views").JavaJFCTextField("#3").invokeMethods({"getFont", "getSize"},{{},{}})
	[ ] 
	[-] if iTestResultFontSize != TEST_DISCLAIMER_FONT_SIZE_DETAIL
		[ ] LogError("Test Result Font Size in Detailed View is not valid for sample: {sSampleID}")
	[ ] print("Expected Test Result Font Size in Detailed View: {TEST_DISCLAIMER_FONT_SIZE_DETAIL} ")
	[ ] print("Actual Test Result Font Size in Detailed View: {iTestResultFontSize}")
	[ ] 
	[ ] print()
	[ ] 
	[ ] // Get the Font Size from the Test Disclaimer text box. Added by Steve on 1/28/2011
	[ ] iTestDisclaimerFontSize = JavaMainWin("GeneXpert® Dx System").CustomWin("[javax.swing.JSplitPane]User*").
    CustomWin("[javax.swing.JSplitPane]Sample ID*").CustomWin("[javax.swing.JSplitPane]#1").
    JavaJFCPageList("Views").JavaJFCTextField("<html><div align='right'>Test Result<?html>").invokeMethods({"getFont", "getSize"},{{},{}})
	[ ] 
	[-] if iTestDisclaimerFontSize != TEST_DISCLAIMER_FONT_SIZE_DETAIL
		[ ] LogError("Test Disclaimer Font Size in Detailed View is not valid for sample: {sSampleID}")
	[ ] print("Expected Test Disclaimer Font Size in Detailed View: {TEST_DISCLAIMER_FONT_SIZE_DETAIL} ")
	[ ] print("Actual Test Disclaimer Font Size in Detailed View: {iTestDisclaimerFontSize}")
	[ ] 
	[ ] print()
[ ] 
[ ] // This function takes the expected values for the test disclaimer & test result and verifies it against the GUI for Basic view. 
[ ] // User must be on the Test Result tab logged in as a Basic user with the Sample ID displayed prior to calling this function
[ ] // Added on 2/2/2011 by Steve.
[+] VerifyTestResultDisclaimerBasic(STRING sSampleID)
	[ ] //
	[ ] // Variable declarations
	[ ] //
	[ ] INTEGER iTestDisclaimerFontSize = 0
	[ ] INTEGER iTestResultFontSize = 0
	[ ] LIST OF STRING lsProps = {...}
	[ ] BOOLEAN bFontFound = 0
	[ ] STRING sItem = ''
	[ ] const SFONT = "*font-size: 16pt*"
	[ ] 
	[ ] print("The Sample ID: {sSampleID}")
	[ ] iTestDisclaimerFontSize = JavaMainWin("GeneXpert® Dx System").JavaJFCPageList("User *").
    JavaJFCTextField("Notes[2]").invokeMethods({"getFont", "getSize"},{{},{}})
	[ ] 
	[-] if iTestDisclaimerFontSize != TEST_DISCLAIMER_FONT_SIZE_BASIC
		[ ] LogError("Test Disclaimer Font Size in Basic View is not valid for sample: {sSampleID}")
	[ ] print("Expected Test Disclaimer Font Size in the Basic View: {TEST_DISCLAIMER_FONT_SIZE_BASIC} ")
	[ ] print("Actual Test Disclaimer Font Size in the Basic View: {iTestDisclaimerFontSize}")
	[ ] 
	[ ] print()
	[ ] 
	[ ] iTestResultFontSize = JavaMainWin("GeneXpert® Dx System").JavaJFCPageList("User *").
    JavaJFCTextField("Result").invokeMethods({"getFont", "getSize"},{{},{}})
	[ ] 
	[ ] lsProps = JavaMainWin("GeneXpert® Dx System").JavaJFCPageList("User *").
    JavaJFCTextField("Result").GetMultiText()
	[ ] // print("The text for the Test Result field is: ")
	[ ] // ListPrint(lsProps)
	[ ] 
	[ ] bFontFound = 0
	[-] for each sItem in lsProps
		[-] if MatchStr(SFONT, sItem)
			[ ] bFontFound = 1
	[-] if !bFontFound
		[ ] LogError("Test Result Font Size in Basic View is not valid for sample: {sSampleID}")
		[ ] LogError("The Test Result Font is not 16 pt")
	[-] else
		[ ] print("The Test Result font is 16 pt")
	[ ] 
	[ ] print()
[ ] 
