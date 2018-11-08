[ ] use "..\Common Libraries\MasterUseStmts.inc"
[ ] 
[-] VerifyAnalyteResultNew (REC_DETAIL rDetail, STRING sSampleID, INTEGER iNumAnalytes, out INTEGER iAnalytePos)
	[ ] // 
	[ ] // Variables
	[ ] //
	[ ] STRING sCt = ' '
	[ ] STRING sEndPt = ' '
	[ ] INTEGER iPos = 0
	[ ] BOOLEAN bInvalidAnalyteName = true
	[ ] INTEGER i = 0
	[ ] 
	[ ] SetPrecision (1)
	[ ] 
	[ ] // Verification for the analyte name
	[ ] bInvalidAnalyteName = true
	[-] for (i = 1; i<= iNumAnalytes; i++)
		[-] if rDetail.sAnalyteName == GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({i, 1})
			[ ] bInvalidAnalyteName = false
			[ ] iAnalytePos = i
	[ ] 
	[-] if !bInvalidAnalyteName
		[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Name: " + rDetail.sAnalyteName)
		[ ] print("Actual Analyte Name: <Not Found>")
		[ ] print ()
	[-] else
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
		[ ] StuffComma(sCt)
		[-] if (sCt  != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
			[ ] LogError("Ct value is not valid for sample: {sSampleID}")
		[ ] print("Expected Ct value: {sCt}")
		[ ] print("Actual Ct value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 2}))
		[ ] print ()
		[ ] 
		[ ] // Verify that the expected and actual EndPt values match
		[ ] iPos = StrPos(DEC, rDetail.sEndPt)
		[ ] sEndPt = SubStr(rDetail.sEndPt, 1, iPos -1)
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
[-] VerifyProbeCheckResult(REC_DETAIL rDetail, STRING sSampleID, out INTEGER iAnalytePos)
	[ ] 
	[ ] // Verify that the expected and actual Probe Check Results match
	[-] if (rDetail.sPrbChkResult != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 5}))
		[ ] LogError("Probe Check Result is not valid for sample: {sSampleID} and Analyte Name: {rDetail.sAnalyteName}")
	[ ] print("Expected Probe Check Result: " + rDetail.sPrbChkResult)
	[ ] print("Actual Probe Check Result: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 5}))
	[ ] print ()
	[ ] 
[ ] 
[-] VerifyDeltaTargetCt(REC_DETAIL rDetail, STRING sSampleID, out INTEGER iAnalytePos)
	[ ] // 
	[ ] // Variables
	[ ] //
	[ ] STRING sTargetDeltaCt = ' '
	[ ] INTEGER iPos = 0
	[ ] 
	[ ] // Verify that the expected and actual Target Delta Ct values match
	[-] if rDetail.sTargetDeltaCt == DBNULLVALUE
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
[ ] 
