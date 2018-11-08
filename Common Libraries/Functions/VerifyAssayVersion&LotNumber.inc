[ ] use "..\..\Common Libraries\MasterUseStmts.inc"
[ ] 
[ ] // This function takes the expected values for Sample ID, Status, Assay Name (Right and Left panel verifications), 
[ ] // Test Result Text, Test Result Color & Test Result Font Color and verifies them against the GUI 
[-] VerifyTestResultMainCepheid (REC_RESULT rExpected)
	[ ] 
	[ ] //
	[ ] // Variable declarations
	[ ] //
	[ ] LIST OF STRING lsHTMLTestResult
	[ ] STRING sHTMLString = ' '
	[ ] INTEGER iPos = 0
	[ ] REC_RESULT rActual
	[ ] BOOLEAN bStyleNotFound = true
	[ ] 
	[ ] // Verify Sample ID
	[ ] GeneXpertDxSystemCepheid.UserCepheid.SampleID1.SetPosition( 1, 3 )
	[ ] rActual.sSampleID = GeneXpertDxSystemCepheid.UserCepheid.SampleID1.GetText()
	[-] if rExpected.sSampleID != rActual.sSampleID
		[ ] LogError("Sample ID is not valid")
	[ ] print("Expected Sample ID: " + rExpected.sSampleID)
	[ ] print("Actual Sample ID: " + rActual.sSampleID)
	[ ] print ()
	[ ] 
	[ ] // Verify information on the left panel i.e. Status and Assay Name
	[ ] rActual.sAssayName = GeneXpertDxSystemCepheid.UserCepheid.Assay.GetText()
	[-] if rExpected.sAssayName != rActual.sAssayName
		[ ] LogError("Assay name on the left panel is not valid for sample: {rExpected.sSampleID}")
	[ ] print("Expected Assay Name on left panel: " + rExpected.sAssayName)
	[ ] print("Actual Assay Name on left panel: " + rActual.sAssayName)
	[ ] print ()
	[ ] 
	[ ] rActual.sStatus = GeneXpertDxSystemCepheid.UserCepheid.Status.GetText()
	[-] if rExpected.sStatus != rActual.sStatus
		[ ] LogError("Status on the left panel is not valid for sample: {rExpected.sSampleID}")
	[ ] print("Expected Status: " + rExpected.sStatus)
	[ ] print("Actual Status: " + rActual.sStatus)
	[ ] print ()
	[ ] 
	[ ] // Verify information on the Test Result tab i.e. Assay Name, Result Text & Result color
	[ ] // Steve updated on 10/13/2014 to match the new Assay Name (right panel) field tags
	[ ] // Assay Name on right panel
	[ ] rActual.sAssayName = GeneXpertDxSystemCepheid.UserCepheid.SampleID4.JavaxSwingJSplitPane1.Views5.AssayName.GetText()
	[ ] // rActual.sAssayName = GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.TestResult.AssayName.GetText()
	[-] if rExpected.sAssayName != rActual.sAssayName
		[ ] LogError("Assay name on the right panel is not valid for sample: {rExpected.sSampleID}")
	[ ] print("Expected Assay Name on right panel: " + rExpected.sAssayName)
	[ ] print("Actual Assay Name on right panel: " + rActual.sAssayName)
	[ ] print ()
	[ ] 
	[ ] // Result Text and Result Color are part of a series of html tags.
	[ ] // HTML tag that contains the result color and the result font color looks like below
	[ ] // e.g.    tr.row0 { color: #FFFFFF; background-color: #00E600 }
	[ ] // Steve updated on 10/13/2014 to match the new Test Result field tags
	[ ] lsHTMLTestResult = GeneXpertDxSystemCepheid.UserCepheid.SampleID4.JavaxSwingJSplitPane1.Views5.TestResult1.GetMultiText()
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
[+] VerifyAssayVersion(REC_LSP rExpected)
	[ ] //
	[ ] // Variable declarations
	[ ] //
	[ ] STRING sActualAssayVer = ' '
	[ ] 
	[ ] // Verify Assay Version
	[ ] GeneXpertDxSystemCepheid.SetActive()
	[ ] sActualAssayVer = GeneXpertDxSystemCepheid.UserCepheid.Version.GetText()
	[-] if Str(rExpected.iAssayVersion) != sActualAssayVer
		[ ] LogError("Assay Version is not valid for sample: {rExpected.sSampleID}")
	[ ] print("Expected Assay Version Number: " + Str(rExpected.iAssayVersion))
	[ ] print("Actual Assay Version Number: {sActualAssayVer}")
	[ ] print ()
	[ ] 
[ ] 
[+] VerifyLotNumber(REC_LSP rExpected)
	[ ] //
	[ ] // Variable declarations
	[ ] //
	[ ] STRING sActualLotNumber = ' '
	[ ] 
	[ ] // Verify information on the left panel i.e. Lot Number
	[ ] GeneXpertDxSystemCepheid.SetActive()
	[ ] sActualLotNumber = GeneXpertDxSystemCepheid.UserCepheid.ReagentLotID.GetText()
	[-] if Str(rExpected.iLotNumber) != sActualLotNumber
		[ ] LogError("Assay Lot Number  is not valid for sample: {rExpected.sSampleID}")
	[ ] print("Expected Assay Lot Number: " + Str(rExpected.iLotNumber))
	[ ] print("Actual Assay Lot Number: {sActualLotNumber}")
	[ ] print ()
	[ ] 
[ ] 
[+] VerifyAnalyteResultCepheid (REC_DETAIL rDetail, STRING sSampleID, INTEGER iAnalytePos)
	[ ] // 
	[ ] // Variables
	[ ] //
	[ ] STRING sCt = ' '
	[ ] STRING sEndPt = ' '
	[ ] INTEGER iPos = 0
	[ ] STRING sTargetDeltaCt = ' '
	[ ] 
	[ ] SetPrecision (1)
	[ ] 
	[ ] // Verify that the expected and actual Analyte Names match
	[-] if rDetail.sAnalyteName != NOTAPPLICABLE
		[-] if (TRIM(rDetail.sAnalyteName) != GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
			[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
		[ ] print ()
	[ ] 
	[ ] // Verify that the expected and actual Cartridge match
	[-] if rDetail.sCartridge != NOTAPPLICABLE
		[-] if (rDetail.sCartridge != GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
			[ ] LogError("Cartridge is not valid for sample: {sSampleID}")
		[ ] print("Expected Cartridge: " + rDetail.sCartridge)
		[ ] print("Actual Cartridge: " + GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
		[ ] print ()
	[ ] 
	[ ] // Verify that the expected and actual Ct values match
	[-] if rDetail.sCt != NOTAPPLICABLE
		[ ] iPos = StrPos(DEC, rDetail.sCt)
		[ ] sCt = SubStr(rDetail.sCt, 1, iPos +1)
		[ ] StuffComma(sCt)
		[-] if (sCt  != GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
			[ ] LogError("Ct value is not valid for sample: {sSampleID}")
		[ ] print("Expected Ct value: {sCt}")
		[ ] print("Actual Ct value: " + GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
		[ ] print ()
	[ ] 
	[ ] // Verify that the expected and actual EndPt values match
	[-] if rDetail.sEndPt != NOTAPPLICABLE
		[ ] iPos = StrPos(DEC, rDetail.sEndPt)
		[ ] sEndPt = SubStr(rDetail.sEndPt, 1, iPos -1)
		[ ] // StuffComma(sCt)
		[-] if (sEndPt != GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
			[ ] LogError("EndPt value is not valid for sample: {sSampleID}")
		[ ] print("Expected EndPt value: {sEndPt}")
		[ ] print("Actual EndPt value: " + GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
		[ ] print ()
	[ ] 
	[ ] 
	[ ] // Verify that the expected and actual Interpretation Result match
	[-] if rDetail.sInterpretationResult != NOTAPPLICABLE
		[-] if (TRIM(rDetail.sInterpretationResult) != GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 5}))
			[ ] LogError("Interpretation Result is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
		[ ] print("Expected Interpretation Result: " + rDetail.sInterpretationResult)
		[ ] print("Actual Interpretation Result: " + GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 5}))
		[ ] print ()
	[ ] 
	[ ] 
	[ ] // Verify that the expected and actual Reason match
	[-] if rDetail.sReason != NOTAPPLICABLE
		[-] if (TRIM(rDetail.sReason) != GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}))
			[ ] LogError("Reason is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
		[ ] print("Expected Reason: " + rDetail.sReason)
		[ ] print("Actual Reason: " + GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}))
		[ ] print ()
	[ ] 
	[ ] // Verify that the expected and actual Analyte Results match
	[-] if rDetail.sAnalyteResult != NOTAPPLICABLE1
		[-] if (TRIM(rDetail.sAnalyteResult) != GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 7}))
			[ ] LogError("Analyte Result is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
		[ ] print("Expected Analyte Result: " + rDetail.sAnalyteResult)
		[ ] print("Actual Analyte Result: " + GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 7}))
		[ ] print ()
	[ ] 
	[ ] // Verify that the expected and actual Probe Check Results match
	[-] if rDetail.sPrbChkResult != DBNULLVALUE
		[-] if (TRIM(rDetail.sPrbChkResult) != GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 8}))
			[ ] LogError("Probe Check Result is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
		[ ] print("Expected Probe Check Result: " + rDetail.sPrbChkResult)
		[ ] print("Actual Probe Check Result: " + GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 8}))
		[ ] print ()
	[ ] 
	[ ] // Verify that the expected and actual Target Delta Ct values match
	[-] if rDetail.sTargetDeltaCt != DBNULLVALUE
		[-] if rDetail.sTargetDeltaCt == "0.000000"
			[ ] sTargetDeltaCt = "0.0"
		[-] else
			[ ] iPos = StrPos(DEC, rDetail.sTargetDeltaCt)
			[ ] sTargetDeltaCt = SubStr(rDetail.sTargetDeltaCt, 1, iPos +1)
		[-] if (sTargetDeltaCt != GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 9}))
			[ ] LogError("Target Delta Ct is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
		[ ] print("Expected Target Delta Ct: " + sTargetDeltaCt)
		[ ] print("Actual Target Delta Ct: " + GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 9}))
		[ ] print ()
	[ ] 
[ ] 
[ ] // Logged on as Cepheid, this function takes the record detail, Sample ID and Analyte position in the table and verifies all of the values in the Detail  table for the give Sample ID and Analyte
[+] VerifyDetailTabCepheid (REC_DETAIL rDetail, STRING sSampleID, INTEGER iAnalytePos)
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
		[-] if (TRIM(rDetail.sAnalyteName) != GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
			[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: " + GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 1}))
		[ ] print ()
	[ ] 
	[ ] // Verify that the expected and actual Cartridge match
	[-] if rDetail.sCartridge != NOTAPPLICABLE
		[-] if (rDetail.sCartridge != GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
			[ ] LogError("Cartridge is not valid for sample: {sSampleID}")
		[ ] print("Expected Cartridge: " + rDetail.sCartridge)
		[ ] print("Actual Cartridge: " + GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
		[ ] print ()
	[ ] 
	[ ] // Verify that the expected and actual Probe Check 1 values match
	[-] if rDetail.sPrbChk1 != NOTAPPLICABLE
		[ ] iPos = StrPos(DEC, rDetail.sPrbChk1)
		[ ] sPrbChk = SubStr(rDetail.sPrbChk1, 1, iPos-1)
		[-] if (sPrbChk  != GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
			[ ] LogError("Probe Check 1 value is not valid for sample: {sSampleID}")
		[ ] print("Expected Probe Check 1 value: {sPrbChk}")
		[ ] print("Actual Probe Check 1 value: " + GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
		[ ] print ()
	[ ] 
	[ ] // Verify that the expected and actual Probe Check 2 values match
	[-] if rDetail.sPrbChk2 != NOTAPPLICABLE
		[ ] iPos = StrPos(DEC, rDetail.sPrbChk2)
		[ ] sPrbChk = SubStr(rDetail.sPrbChk2, 1, iPos -1)
		[-] if (sPrbChk  != GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
			[ ] LogError("Probe Check 2 value is not valid for sample: {sSampleID}")
		[ ] print("Expected Probe Check 2 value: {sPrbChk}")
		[ ] print("Actual Probe Check 2 value: " + GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
		[ ] print ()
	[ ] 
	[ ] // Verify that the expected and actual Probe Check 3 values match
	[-] if rDetail.sPrbChk3 != NOTAPPLICABLE
		[ ] iPos = StrPos(DEC, rDetail.sPrbChk3)
		[ ] sPrbChk = SubStr(rDetail.sPrbChk3, 1, iPos -1)
		[-] if (sPrbChk  != GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 5}))
			[ ] LogError("Probe Check 3 value is not valid for sample: {sSampleID}")
		[ ] print("Expected Probe Check 3 value: {sPrbChk}")
		[ ] print("Actual Probe Check 3 value: " + GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 5}))
		[ ] print ()
	[ ] 
	[ ] // Verify that the expected and actual Probe Check Result values match
	[-] if rDetail.sPrbChkResult != DBNULLVALUE
		[-] if (TRIM(rDetail.sPrbChkResult)  != GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}))
			[ ] LogError("Probe Check Result is not valid for sample: {sSampleID}")
		[ ] print("Expected Probe Check Result: {rDetail.sPrbChkResult}")
		[ ] print("Actual Probe Check Result: " + GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 6}))
		[ ] print ()
	[ ] 
	[ ] // Verify that the expected and actual 2nd Derivative Peak Height values match
	[-] if rDetail.sSecDerivPeakHght != DBNULLVALUE
		[ ] iPos = StrPos(DEC, rDetail.sSecDerivPeakHght)
		[ ] sSecDerivPkHt = SubStr(rDetail.sSecDerivPeakHght, 1, iPos +1)
		[-] if (sSecDerivPkHt  != GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 7}))
			[ ] LogError("2nd Derivative Peak Height is not valid for sample: {sSampleID}")
		[ ] print("Expected 2nd Derivative Peak Height: {sSecDerivPkHt}")
		[ ] print("Actual 2nd Derivative Peak Height: " + GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 7}))
		[ ] print ()
	[ ] 
	[ ] // Verify that the expected and actual Curve Fit values match
	[-] if rDetail.sCurveFit != DBNULLVALUE
		[-] if (TRIM(rDetail.sCurveFit)  != GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 8}))
			[ ] LogError("Curve Fit is not valid for sample: {sSampleID}")
		[ ] print("Expected Curve Fit result: {rDetail.sCurveFit}")
		[ ] print("Actual Curve Fit result: " + GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 8}))
		[ ] print ()
	[ ] 
[ ] 
[+] // VerifyDetail3AnalyteLSP (DETAIL_LSP rDetail, STRING sSampleID)
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
	[-] // if rDetail.sAnalyteName != GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1}) &&
    // rDetail.sAnalyteName != GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1}) &&
    // rDetail.sAnalyteName != GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({3, 1}) 
		[ ] // LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] // print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] // print("Actual Analyte Name: " + GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1}))
		[ ] // print ()
	[-] // else
		[ ] // 
		[-] // if rDetail.sAnalyteName == GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({1, 1})
			[ ] // iAnalytePos = 1
		[-] // else if rDetail.sAnalyteName == GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({2, 1})
			[ ] // iAnalytePos = 2
		[-] // else if rDetail.sAnalyteName == GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({3, 1})
			[ ] // iAnalytePos = 3
		[ ] // 
		[ ] // // Verify that the expected and actual Probe Check Result values match
		[-] // if rDetail.sProbeCheck != NOTREPORTED
			[-] // if (rDetail.sProbeCheck  != GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 5}))
				[ ] // LogError("Probe Check Result is not valid for sample: {sSampleID}")
			[ ] // print("Expected Probe Check Result: {rDetail.sProbeCheck}")
			[ ] // print("Actual Probe Check Result: " + GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 5}))
			[ ] // print ()
		[ ] // 
		[ ] // // Verify that the expected and actual Curve Fit values match
		[-] // if rDetail.sCurveFit != NOTREPORTED
			[-] // if (rDetail.sCurveFit  != GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 10}))
				[ ] // LogError("Curve Fit is not valid for sample: {sSampleID}")
			[ ] // print("Expected Curve Fit value: {rDetail.sCurveFit}")
			[ ] // print("Actual Curve Fit value: " + GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.Detail.JavaxSwingJTable.GetCellValue({iAnalytePos, 10}))
			[ ] // print ()
		[ ] // 
[ ] 
[ ] // This function takes the expected values for Error Status and verifies it against the GUI. 
[ ] // User must be on Support tab prior to calling this function
[+] VerifyErrorStatusCepheid (REC_RESULT rExpected)
	[ ] //
	[ ] // Variable declarations
	[ ] //
	[ ] REC_RESULT rActual
	[ ] 
	[ ] // Verification for the Error Status
	[ ] rActual.sErrorStatus = GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.Support.ErrorStatus.GetText()
	[-] if (rExpected.sErrorStatus != rActual.sErrorStatus)
		[ ] LogError("Error Status is not valid for sample: {rExpected.sSampleID}")
	[ ] print("Expected Error Status: " + rExpected.sErrorStatus)
	[ ] print("Actual Error Status: " + rActual.sErrorStatus)
[ ] 
[+] FindAnalyteRowCepheid(STRING sAnalyteName, STRING sSampleID, out INTEGER iAnalytePos)
	[ ] iAnalytePos = 0
	[ ] 
	[-] for (i = 1; i<= GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetRowCount(); i++)
		[-] if sAnalyteName == GeneXpertDxSystemCepheid.UserCepheid.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({i, 1})
			[ ] iAnalytePos = i
			[ ] break
			[ ] 
	[-] if iAnalytePos == 0
		[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + sAnalyteName)
		[-] print('No match found for this analyte name in View Results for this sample ID')
			[ ] 
[ ] 
