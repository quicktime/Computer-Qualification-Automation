[-] VerifyAnalyteResultGT( REC_DETAIL rDetail, STRING sSampleID, INTEGER iAnalytePos)
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
				[ ] sEndPt = "0"
			[-] else
				[ ] iPos = StrPos(DEC, rDetail.sEndPt)
				[ ] sEndPt = SubStr(rDetail.sEndPt, 1, iPos -1)
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
