[-] VerifyAnalyteResultPR ( REC_DETAIL_RATIO rDetail, STRING sSampleID, INTEGER iAnalytePos, BOOLEAN bTextResultFound, BOOLEAN bTargetDeltaCtFound)
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
		[-] if (rDetail.sAnalyteResult != GeneXpertDxSystem.UserNone.SampleID.JavaxSwingJSplitPane1.Views.JavaxSwingJTable.GetCellValue({iAnalytePos,4}))
			[ ] LogError("Analyte Resultis not valid for sample: {sSampleID}")
		[ ] print("Expected Analyte Result: " + rDetail.sAnalyteResult)
		[ ] print("Actual Analyte Result: " + GeneXpertDxSystem.UserNone.SampleID.JavaxSwingJSplitPane1.Views.JavaxSwingJTable.GetCellValue({iAnalytePos, 4}))
		[ ] print()
		[-] if (rDetail.sAnalyteResult != POS)
			[-] if !bTargetDeltaCtFound 
				[ ] LogError("TargetDeltaCt is found for non-positive analyte ")
		[-] else
			[-]  if rDetail.sTargetDeltaCt  == ZERO
				[ ] rDetail.sTargetDeltaCt=  ZERO_LONG
			[ ] 
			[-] if (rDetail.sTargetDeltaCt != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Views4.JavaxSwingJTable.GetCellValue({iAnalytePos,6}))
				[ ] LogError("TargetDeltaCt is not valid for sample: {sSampleID}")
			[ ] print("Expected TargetDeltaCt: " + rDetail.sTargetDeltaCt)
			[ ] print("Actual TargetDeltaCt: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Views4.JavaxSwingJTable.GetCellValue({iAnalytePos,6}))
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
		[-] // Verify that the expected and actual EndPt values match
				[ ] iPos = StrPos(DEC, rDetail.sEndPt)
				[-] sEndPt = SubStr(rDetail.sEndPt, 1, iPos -1)
					[ ] // StuffComma(sEndPt)
				[-] if (sEndPt != GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
					[ ] LogError("EndPt value is not valid for sample: {sSampleID}")
				[ ] print("Expected EndPt value: {sEndPt}")
				[ ] print("Actual EndPt value: " + GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.AnalyteResult.JavaxSwingJTable.GetCellValue({iAnalytePos, 3}))
				[ ] print ()
		[-] 
			[ ] // 
			[ ] print('---------------------------------------------------------------------------')
			[ ] print()
		[ ] 
[ ] 
