[-] VerifyAnalyteResult6PRB (DETAIL_PRB rDetail, STRING sSampleID)
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
			[ ] sEndPt = "0"
		[-] else
			[ ] iPos = StrPos(DEC, rDetail.sEndPt)
			[ ] sEndPt = SubStr(rDetail.sEndPt, 1, iPos -1)
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
