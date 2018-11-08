[ ] use "..\..\Common Libraries\MasterUseStmts.inc"
[ ] 
[ ] // Global variables -
[ ] 
[ ] // This variable is global since it is used by most of the functions in this file. 
[ ] INTEGER i = 0
[ ] 
[ ] //
[ ] // Select analytes
[ ] //
[+] SelectAnalytes(LIST OF STRING lsAnalyteName, LIST OF STRING lsReporterName)
	[ ] 
	[ ] GeneXpert®DxSystem.AssayName2.SelectAnalytes.Click()
	[ ] SelectAnalytes.SetActive( )
	[ ] 
	[-] for(i = 1; i <= ListCount(lsAnalyteName);i++)
		[ ] SelectAnalytes.Add.Click()
		[ ] SelectAnalytes.AnalyteS.ClickCell( {i,2} )
		[ ] SelectAnalytes.AnalyteS.ComCepheidGenexpertUiUtil.SetText(lsAnalyteName[i])
		[ ] SelectAnalytes.AnalyteS.ClickCell( {i,3} )
		[ ] SelectAnalytes.AnalyteS.JavaxSwingJComboBox.Select( lsReporterName[i] )
	[ ] 
	[ ] SelectAnalytes.OK.Click()
	[ ] GeneXpert®DxSystem.SetActive( )
[ ] 
[+] DefineThreshold(LIST OF REAL lrThreshold)
	[-] for (i = 1; i <= ListCount(lrThreshold); i++)
		[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {i,8} )
		[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ComCepheidGenexpertUiUtil.SetText(Str(lrThreshold[i],3,1))
[ ] 
[+] DefineNormFactors(LIST OF INTEGER liNormFactor)
	[-] for (i = 1; i <= ListCount(liNormFactor); i++)
		[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {i,10} )
		[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ComCepheidGenexpertUiUtil.SetText(Str(liNormFactor[i]))
[ ] 
[+] DefineBoxcar(LIST OF INTEGER liBoxcar)
	[-] for (i = 1; i<= ListCount(liBoxcar); i++)
		[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {i,11} )
		[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ComCepheidGenexpertUiUtil.SetText(Str(liBoxcar[i]))
[ ] 
[+] SelectCurveAnalysis(LIST OF STRING lsCurveAnalysis)
	[-] for (i = ListCount(lsCurveAnalysis); i > 0; i--)
		[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {i,9} )
		[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.JavaxSwingJComboBox.Select(lsCurveAnalysis[i] )
[ ] 
[+] DefineBkgndValues(INTEGER iBkgndSub, LIST OF INTEGER liBkgndVMin, LIST OF INTEGER liBkgndVMax)
		[-] if (iBkgndSub == 1)
			[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.SetCellValue( {1,5} ,true)
			[-] for (i = 1; i<= ListCount(liBkgndVMin); i++)
				[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {i,7} )
				[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ComCepheidGenexpertUiUtil.SetText(Str(liBkgndVMax[i]))
				[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {i,6} )
				[-] if (AnalysisSettings.Exists())
					[ ] AnalysisSettings.OK.Click()
					[ ] GeneXpert®DxSystem .SetActive( )
					[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {i,6} )
					[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ComCepheidGenexpertUiUtil.SetText(Str(liBkgndVMin[i]))
					[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {i,7} )
					[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ComCepheidGenexpertUiUtil.SetText(Str(liBkgndVMax[i]))
				[-] else
					[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ComCepheidGenexpertUiUtil.SetText(Str(liBkgndVMin[i]))
		[-] else
			[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.SetCellValue( {1,5} ,false)
[ ] 
[+] DefineValidCyclesMinMax( LIST OF INTEGER liVMin,  LIST OF INTEGER liVMax)
	[-] for (i = 1; i <= ListCount(liVMin); i++)
		[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {i,2} )
		[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(Str(liVMin[i]))
		[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {i,3} )
		[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(Str(liVMax[i]))
[ ] 
[+] DefineEndPts( LIST OF INTEGER liUseEndPt,LIST OF INTEGER liEndPt)
	[-] for (i = 1; i<= ListCount(liUseEndPt); i++)
		[-] if (liUseEndPt[i] == 1)
			[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {i,4} )
			[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {i,5} )
			[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(Str(liEndPt[i]))
		[-] else
			[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.SetCellValue({i,4}, false)
[ ] 
[+] SelectPeakHeightMin(LIST OF STRING lsCurveAnalysis, LIST OF STRING liPeakHeightMin)
	[ ] INTEGER iPos = 0
	[ ] STRING sPeakHght = ' '
	[ ] 
	[-] for (i = 1; i <= ListCount(liPeakHeightMin); i++)
		[-] if (lsCurveAnalysis[i] == COMBO_CURVE_ANALYSIS && lsCurveAnalysis[i] != null)
			[ ] iPos = StrPos(DEC, liPeakHeightMin[i])
			[ ] sPeakHght = SubStr(liPeakHeightMin[i], 1, iPos + 1)
			[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {i,6} )
			[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(sPeakHght)
		[ ] 
[ ] 
[+] SelectUsage(LIST OF STRING lsUsage)
	[-] for (i = ListCount(lsUsage); i > 0; i--)
		[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {i,3} ) 
		[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.JavaxSwingJComboBox.Select(lsUsage[i] )
[ ] 
[+] SelectInvalidBias(LIST OF STRING lsUsage, LIST OF STRING liInvalidBias)
	[-] for (i = ListCount(liInvalidBias); i > 0; i--)
		[-] if (lsUsage[i] == USAGE_TARGET)
			[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {i,14} )
			[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.JavaxSwingJComboBox.Select(liInvalidBias[i])
		[ ] 
[ ] 
[ ] // For % Ratio assays only
[+] SelectInvalidBiasPR(LIST OF STRING lsUsage, LIST OF STRING liInvalidBias)
	[-] for (i = ListCount(liInvalidBias); i > 0; i--)
		[-] if (lsUsage[i] == USAGE_TARGET)
			[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {i,15} )
			[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.JavaxSwingJComboBox.Select(liInvalidBias[i])
		[ ] 
[ ] 
[ ] // For % Ratio assays only
[+] SelectIDeltaCtE(LIST OF STRING lsUsage, LIST OF STRING lsDeltaCtE)
	[-] for (i = ListCount(lsDeltaCtE); i > 0; i--)
		[-] if (lsUsage[i] == USAGE_TARGET)
			[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {i,12} )
			[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(lsDeltaCtE[i])
[ ] 
[ ] // For % Ratio assays only
[+] SelectScalingFactor(LIST OF STRING lsUsage, LIST OF STRING lsScalingFactor)
	[-] for (i = ListCount(lsScalingFactor); i > 0; i--)
		[-] if (lsUsage[i] == USAGE_TARGET)
			[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {i,13} )
			[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(lsScalingFactor[i])
[ ] 
[+] DefinePrbChk(LIST OF INTEGER liPrbChk13Min,LIST OF INTEGER  liPrbChk2Min)
	[-] for (i = 1; i <= ListCount(liPrbChk13Min); i++)
		[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {i,7} )
		[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(Str(liPrbChk13Min[i]))
		[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {i,8} )
		[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(Str(liPrbChk2Min[i]))
[ ] 
[ ] // This function will set the values for resut text and result color for any number of analytes in the customize test result dialog
[+] CustomizeOrganism (REC_CUSTOMIZE rCustomize, INTEGER iNumAnalytes)
	[ ] 
	[ ] // this is the variable that will hold the position of the row of the Customize table
	[ ] INTEGER iPosition = 0
	[ ] 
	[ ] list of string Combolist = {}
	[ ] integer ItemIndex = 0
	[ ] 
	[ ] iPosition = FindPosition(rCustomize, iNumAnalytes)
	[ ] 
	[+] switch iNumAnalytes
		[+] case 6
			[-] if rCustomize.sResultText == null && rCustomize.sResultColor == null 
				[ ]  
			[-] else
				[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell({iPosition,7})
				[-] if OrganismDetail.ComCepheidGenexpertUiPanel.GetCellValue({iPosition,1}) == rCustomize.sAnalyte1
    && OrganismDetail.ComCepheidGenexpertUiPanel.GetCellValue({iPosition,2}) == rCustomize.sAnalyte2
    && OrganismDetail.ComCepheidGenexpertUiPanel.GetCellValue({iPosition,3}) == rCustomize.sAnalyte3
    && OrganismDetail.ComCepheidGenexpertUiPanel.GetCellValue({iPosition,4}) == rCustomize.sAnalyte4
    && OrganismDetail.ComCepheidGenexpertUiPanel.GetCellValue({iPosition,5}) == rCustomize.sAnalyte5
    && OrganismDetail.ComCepheidGenexpertUiPanel.GetCellValue({iPosition,6}) == rCustomize.sAnalyte6
					[-] if (rCustomize.sResultText == null)
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {iPosition,7} )
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select("#21") 
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {iPosition,8} )
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rCustomize.sResultColor )
					[-] else if (LEFT(rCustomize.sResultText,1) == '?')
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {iPosition,7} )
						[ ] Combolist = OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.GetContents()
						[ ]  ItemIndex = ListFind (Combolist, '?')
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select("#{ItemIndex}")
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {iPosition,8} )
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rCustomize.sResultColor )
					[-] else
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {iPosition,7} )
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rCustomize.sResultText )
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {iPosition,8} )
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rCustomize.sResultColor )
				[-] else
					[ ] Print("Index for Excel row {iNumAnalytes} does not match the values in the Customize Result Text table")
		[+] case 5
			[-] if rCustomize.sResultText == null && rCustomize.sResultColor == null 
				[ ]  
			[-] else
				[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell({iPosition,7})
				[-] if OrganismDetail.ComCepheidGenexpertUiPanel.GetCellValue({iPosition,1}) == rCustomize.sAnalyte1
    && OrganismDetail.ComCepheidGenexpertUiPanel.GetCellValue({iPosition,2}) == rCustomize.sAnalyte2
    && OrganismDetail.ComCepheidGenexpertUiPanel.GetCellValue({iPosition,3}) == rCustomize.sAnalyte3
    && OrganismDetail.ComCepheidGenexpertUiPanel.GetCellValue({iPosition,4}) == rCustomize.sAnalyte4
    && OrganismDetail.ComCepheidGenexpertUiPanel.GetCellValue({iPosition,5}) == rCustomize.sAnalyte5
					[-] if (rCustomize.sResultText == null)
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {iPosition,7} )
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select("#21") 
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {iPosition,8} )
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rCustomize.sResultColor )
					[-] else if (LEFT(rCustomize.sResultText,1) == '?')
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {iPosition,7} )
						[ ] Combolist = OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.GetContents()
						[ ]  ItemIndex = ListFind (Combolist, '?')
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select("#{ItemIndex}")
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {iPosition,8} )
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rCustomize.sResultColor )
					[-] else
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {iPosition,7} )
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rCustomize.sResultText )
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {iPosition,8} )
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rCustomize.sResultColor )
				[-] else
					[ ] Print("Index for Excel row {iPosition} does not match the values in the Customize Result Text table")
		[+] case 4
			[-] if rCustomize.sResultText == null && rCustomize.sResultColor == null 
				[ ]  
			[-] else
				[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell({iPosition,7})
				[-] if OrganismDetail.ComCepheidGenexpertUiPanel.GetCellValue({iPosition,1}) == rCustomize.sAnalyte1
    && OrganismDetail.ComCepheidGenexpertUiPanel.GetCellValue({iPosition,2}) == rCustomize.sAnalyte2
    && OrganismDetail.ComCepheidGenexpertUiPanel.GetCellValue({iPosition,3}) == rCustomize.sAnalyte3
    && OrganismDetail.ComCepheidGenexpertUiPanel.GetCellValue({iPosition,4}) == rCustomize.sAnalyte4
					[-] if (rCustomize.sResultText == null)
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {iPosition,7} )
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select("#21") 
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {iPosition,8} )
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rCustomize.sResultColor )
					[-] else if (LEFT(rCustomize.sResultText,1) == '?')
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {iPosition,7} )
						[ ] Combolist = OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.GetContents()
						[ ]  ItemIndex = ListFind (Combolist, '?')
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select("#{ItemIndex}")
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {iPosition,8} )
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rCustomize.sResultColor )
					[-] else
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {iPosition,7} )
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rCustomize.sResultText )
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {iPosition,8} )
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rCustomize.sResultColor )
				[-] else
					[ ] Print("Index for Excel row {iNumAnalytes} does not match the values in the Customize Result Text table")
		[+] case 3
			[-] if rCustomize.sResultText == null && rCustomize.sResultColor == null 
				[ ]  
			[-] else
				[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell({iPosition,7})
				[-] if OrganismDetail.ComCepheidGenexpertUiPanel.GetCellValue({iPosition,1}) == rCustomize.sAnalyte1
    && OrganismDetail.ComCepheidGenexpertUiPanel.GetCellValue({iPosition,2}) == rCustomize.sAnalyte2
    && OrganismDetail.ComCepheidGenexpertUiPanel.GetCellValue({iPosition,3}) == rCustomize.sAnalyte3
					[-] if (rCustomize.sResultText == null)
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {iPosition,7} )
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select("#21") 
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {iPosition,8} )
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rCustomize.sResultColor )
					[-] else if (LEFT(rCustomize.sResultText,1) == '?')
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {iPosition,7} )
						[ ] Combolist = OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.GetContents()
						[ ]  ItemIndex = ListFind (Combolist, '?')
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select("#{ItemIndex}")
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {iPosition,8} )
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rCustomize.sResultColor )
					[-] else
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {iPosition,7} )
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rCustomize.sResultText )
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {iPosition,8} )
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rCustomize.sResultColor )
				[-] else
					[ ] Print("Index for Excel row {iNumAnalytes} does not match the values in the Customize Result Text table")
		[+] case 2
			[-] if rCustomize.sResultText == null && rCustomize.sResultColor == null 
				[ ]  
			[-] else
				[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell({iPosition,7})
				[-] if OrganismDetail.ComCepheidGenexpertUiPanel.GetCellValue({iPosition,1}) == rCustomize.sAnalyte1
    && OrganismDetail.ComCepheidGenexpertUiPanel.GetCellValue({iPosition,2}) == rCustomize.sAnalyte2
					[-] if (rCustomize.sResultText == null)
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {iPosition,7} )
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select("#21") 
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {iPosition,8} )
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rCustomize.sResultColor )
					[-] else if (LEFT(rCustomize.sResultText,1) == '?')
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {iPosition,7} )
						[ ] Combolist = OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.GetContents()
						[ ]  ItemIndex = ListFind (Combolist, '?')
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select("#{ItemIndex}")
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {iPosition,8} )
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rCustomize.sResultColor )
					[-] else
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {iPosition,7} )
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rCustomize.sResultText )
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {iPosition,8} )
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rCustomize.sResultColor )
				[-] else
					[ ] Print("Index for Excel row {iNumAnalytes} does not match the values in the Customize Result Text table")
		[-] case 1
			[-] if rCustomize.sResultText == null && rCustomize.sResultColor == null 
				[ ]  
			[-] else
				[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell({iPosition,7})
				[-] if OrganismDetail.ComCepheidGenexpertUiPanel.GetCellValue({iPosition,1}) == rCustomize.sAnalyte1
					[-] if (rCustomize.sResultText == null)
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {iPosition,7} )
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select("#21") 
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {iPosition,8} )
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rCustomize.sResultColor )
					[-] else if (LEFT(rCustomize.sResultText,1) == '?')
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {iPosition,7} )
						[ ] Combolist = OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.GetContents()
						[ ]  ItemIndex = ListFind (Combolist, '?')
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select("#{ItemIndex}")
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {iPosition,8} )
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rCustomize.sResultColor )
					[-] else
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {iPosition,7} )
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rCustomize.sResultText )
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {iPosition,8} )
						[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rCustomize.sResultColor )
				[-] else
					[ ] Print("Index for Excel row {iNumAnalytes} does not match the values in the Customize Result Text table")
[ ] 
[ ] // This function is a helper function to the CustomzeOrganism function. It sets the value in the table of the row that is being changed. 
[ ] // i.e. if the Row is POS, POS, NEG, NEG then this function will find the position in the customize test result table of this row. 
[ ] // The row position is the return value of the function and is then used by CustomzeOrganism function
[+] INTEGER FindPosition(REC_CUSTOMIZE rCustomize, INTEGER iNumAnalytes)
	[ ] INTEGER iW1 = 0, iW2 = 0, iW3 = 0, iW4 = 0, iW5 = 0, iW6 = 0 
	[ ] 
	[ ] // Calculates the position in the customize result table for 1 - 6 analytes
	[ ] // The weights are done by POS = 0, NEG = 1, INVALID = 2
	[+] if rCustomize.sAnalyte1 != NOTAPPLICABLE
		[-] switch rCustomize.sAnalyte1
			[-] case POS
				[ ] iW1 = 0
			[-] case NEG
				[ ] iW1 = 1
			[-] case INVALID
				[ ] iW1 = 2
	[+] if rCustomize.sAnalyte2 != NOTAPPLICABLE
		[-] switch rCustomize.sAnalyte2
			[-] case POS
				[ ] iW2 = 0
			[-] case NEG
				[ ] iW2 = 1
			[-] case INVALID
				[ ] iW2 = 2
	[+] if rCustomize.sAnalyte3 != NOTAPPLICABLE
		[-] switch rCustomize.sAnalyte3
			[-] case POS
				[ ] iW3 = 0
			[-] case NEG
				[ ] iW3 = 1
			[-] case INVALID
				[ ] iW3 = 2
	[+] if rCustomize.sAnalyte4 != NOTAPPLICABLE
		[-] switch rCustomize.sAnalyte4
			[-] case POS
				[ ] iW4 = 0
			[-] case NEG
				[ ] iW4 = 1
			[-] case INVALID
				[ ] iW4 = 2
	[+] if rCustomize.sAnalyte5 != NOTAPPLICABLE
		[-] switch rCustomize.sAnalyte5
			[-] case POS
				[ ] iW5 = 0
			[-] case NEG
				[ ] iW5 = 1
			[-] case INVALID
				[ ] iW5 = 2
	[+] if rCustomize.sAnalyte6 != NOTAPPLICABLE
		[-] switch rCustomize.sAnalyte6
			[-] case POS
				[ ] iW6 = 0
			[-] case NEG
				[ ] iW6 = 1
			[-] case INVALID
				[ ] iW6 = 2
	[ ]  
	[ ] 
	[-] switch iNumAnalytes
		[-] case 6
			[ ] return (3**5 * iW1) + (3**4 * iW2) + (3**3 * iW3) + (3**2 * iW4) + (3**1 * iW5) + (3**0 + iW6)
		[-] case  5
			[ ] return (3**4 * iW1) + (3**3 * iW2) + (3**2 * iW3) + (3**1 * iW4) + (3**0 + iW5)
		[-] case 4
			[ ] return (3**3 * iW1) + (3**2 * iW2) + (3**1 * iW3) + (3**0 + iW4)
		[-] case 3
			[ ] return (3**2 * iW1) + (3**1 * iW2) + (3**0 + iW3)
		[-] case 2
			[ ] return (3**1 * iW1) + (3**0 + iW2)
		[-] case 1
			[ ] return (3**0 + iW1)
		[-] default
			[ ] LogError("The value for the number of analytes is invalid. Value is: {iNumAnalytes}")
[ ] 
[ ] // This function will set all of the customze information for a Semi-Quant type assay. 
[+] CreateSemiQuantDetail(REC_SEMI_DETAIL rSemiDetail)
	[ ] INTEGER iPos = 0
	[ ] list of string Combolist = {}
	[ ] integer ItemIndex = 0
	[ ] 
	[-] if rSemiDetail.sMediumCtMin != NOTAPPLICABLE
		[ ] iPos = StrPos(DEC, rSemiDetail.sMediumCtMin)
		[ ] rSemiDetail.sMediumCtMin = SubStr(rSemiDetail.sMediumCtMin, 1, iPos + 1)
		[ ] OrganismDetailSemi.MEDIUMCtMin1.SetText(rSemiDetail.sMediumCtMin)
	[-] if rSemiDetail.sLowCtMin != NOTAPPLICABLE
		[ ] iPos = StrPos(DEC, rSemiDetail.sLowCtMin)
		[ ] rSemiDetail.sLowCtMin = SubStr(rSemiDetail.sLowCtMin, 1, iPos + 1)
		[ ] OrganismDetailSemi.LOWCtMin.SetText(rSemiDetail.sLowCtMin)
	[-] if rSemiDetail.sVeryLowCtMin != NOTAPPLICABLE
		[ ] iPos = StrPos(DEC, rSemiDetail.sVeryLowCtMin)
		[ ] rSemiDetail.sVeryLowCtMin = SubStr(rSemiDetail.sVeryLowCtMin, 1, iPos + 1)
		[ ] OrganismDetailSemi.VERYLOWCtMin.SetText(rSemiDetail.sVeryLowCtMin)
	[-] if rSemiDetail.sQuantResultText == NOTAPPLICABLE
		[ ]  
	[-] else
		[-] if (rSemiDetail.sQuantResultText == null)
			[ ] OrganismDetailSemi.MEDIUMCtMin2.ClickCell({1, 1})
			[ ] OrganismDetailSemi.MEDIUMCtMin2.JavaxSwingJComboBox.Select("#21")
		[-] else if (LEFT(rSemiDetail.sQuantResultText,1) == '?')
			[ ] OrganismDetailSemi.MEDIUMCtMin2.ClickCell({1, 1})
			[ ] Combolist = OrganismDetailSemi.MEDIUMCtMin2.JavaxSwingJComboBox.GetContents()
			[ ]  ItemIndex = ListFind (Combolist, '?')
			[ ] OrganismDetailSemi.MEDIUMCtMin2.JavaxSwingJComboBox.Select("#{ItemIndex}")
		[-] else
			[ ] OrganismDetailSemi.MEDIUMCtMin2.ClickCell({1, 1})
			[ ] OrganismDetailSemi.MEDIUMCtMin2.JavaxSwingJComboBox.Select(rSemiDetail.sQuantResultText)
	[ ] 
	[-] if rSemiDetail.sReplacedResultText == NOTAPPLICABLE
		[ ]  
	[-] else
		[-] if (rSemiDetail.sReplacedResultText == null)
			[ ] OrganismDetailSemi.MEDIUMCtMin2.ClickCell({1, 3})
			[ ] OrganismDetailSemi.MEDIUMCtMin2.JavaxSwingJComboBox.Select("#21")
		[-] else if (LEFT(rSemiDetail.sReplacedResultText,1) == '?')
			[ ] OrganismDetailSemi.MEDIUMCtMin2.ClickCell({1, 3})
			[ ] Combolist = OrganismDetailSemi.MEDIUMCtMin2.JavaxSwingJComboBox.GetContents()
			[ ]  ItemIndex = ListFind (Combolist, '?')
			[ ] OrganismDetailSemi.MEDIUMCtMin2.JavaxSwingJComboBox.Select("#{ItemIndex}")
		[-] else
			[ ] OrganismDetailSemi.MEDIUMCtMin2.ClickCell({1, 3})
			[ ] OrganismDetailSemi.MEDIUMCtMin2.JavaxSwingJComboBox.Select(rSemiDetail.sReplacedResultText)
	[ ] 
	[-] if rSemiDetail.sReplacedResultColor != NOTAPPLICABLE
		[ ] OrganismDetailSemi.MEDIUMCtMin2.ClickCell({1, 4})
		[ ] OrganismDetailSemi.MEDIUMCtMin2.JavaxSwingJComboBox.Select(rSemiDetail.sReplacedResultColor)
	[-] if rSemiDetail.sDeltaCtMin != NOTAPPLICABLE
		[-] if LEFT(rSemiDetail.sDeltaCtMin, 3) == '0.0'
			[ ] rSemiDetail.sDeltaCtMin = '0'
		[-] else
			[ ] iPos = StrPos(DEC, rSemiDetail.sDeltaCtMin)
			[ ] rSemiDetail.sDeltaCtMin = SubStr(rSemiDetail.sDeltaCtMin, 1, iPos + 1)
		[ ] OrganismDetailSemi.MEDIUMCtMin2.SetCellValue({1,2}, rSemiDetail.sDeltaCtMin)
	[ ] 
[ ] 
[ ] // This function will set all of the customze information for a Delta Ct  type assay. 
[+] CustomizeDeltaCt(REC_DELTA_DETAIL rDeltaCtDetail)
	[ ] // 
	[ ] // Variables
	[ ] //
	[ ] INTEGER iPosition = 0
	[ ] list of string Combolist = {}
	[ ] integer ItemIndex = 0
	[ ] BOOLEAN bNotFound = true
	[ ] 
	[-] if rDeltaCtDetail.sResultText == null && rDeltaCtDetail.sResultColor == null
		[ ] 
	[-] else
		[ ] bNotFound = true
		[-] for (iPosition = 1; iPosition <= NUM_DELTA_CONDITIONS && bNotFound; iPosition++)
			[-] if OrganismDeltaCt.ComCepheidGenexpertUiPanel.GetCellValue({iPosition,1}) == rDeltaCtDetail.sCondition
				[ ] bNotFound = false
				[-] if (rDeltaCtDetail.sResultText == null)
					[ ] OrganismDeltaCt.ComCepheidGenexpertUiPanel.ClickCell ( {iPosition,2} )
					[ ] OrganismDeltaCt.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select("#21") 
					[ ] OrganismDeltaCt.ComCepheidGenexpertUiPanel.ClickCell ( {iPosition,3} )
					[ ] OrganismDeltaCt.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rDeltaCtDetail.sResultColor )
				[-] else if (LEFT(rDeltaCtDetail.sResultText,1) == '?')
					[ ] OrganismDeltaCt.ComCepheidGenexpertUiPanel.ClickCell ( {iPosition,2} )
					[ ] Combolist = OrganismDeltaCt.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.GetContents()
					[ ]  ItemIndex = ListFind (Combolist, '?')
					[ ] OrganismDeltaCt.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select("#{ItemIndex}")
					[ ] OrganismDeltaCt.ComCepheidGenexpertUiPanel.ClickCell ( {iPosition,3} )
					[ ] OrganismDeltaCt.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rDeltaCtDetail.sResultColor )
				[-] else
					[ ] OrganismDeltaCt.ComCepheidGenexpertUiPanel.ClickCell ( {iPosition,2} )
					[ ] OrganismDeltaCt.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rDeltaCtDetail.sResultText )
					[ ] OrganismDeltaCt.ComCepheidGenexpertUiPanel.ClickCell ( {iPosition,3} )
					[ ] OrganismDeltaCt.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rDeltaCtDetail.sResultColor )
				[ ] 
			[ ] 
			[ ] 
[ ] 
[ ] // This function will set the Delta Ct Min & Delta Ct Max values for a Delta Ct  type assay. 
[+] SetDeltaCtMinMax(STRING rDeltaCtMin, STRING rDeltaCtMax)
	[ ] 
	[ ] OrganismDeltaCt.SetActive()
	[ ] 
	[-] if rDeltaCtMin != NOTAPPLICABLE && LEFT(rDeltaCtMin, 2) != '-1' 
		[ ] OrganismDeltaCt.DeltaCtMin.SetText(rDeltaCtMin)
	[-] if rDeltaCtMax != NOTAPPLICABLE && LEFT(rDeltaCtMax, 2) != '-1' 
		[ ] OrganismDeltaCt.DeltaCtMax.SetText(rDeltaCtMax)
[ ] 
[ ] // This function sets all of the disclaimers for an assay
[+] SetDisclaimers(ASSAY_DISCLAIMERS rDisclaimers)
	[ ] GeneXpert®DxSystem.SetActive( )
	[-] if rDisclaimers.sAssayDisclaimer != NOTAPPLICABLE
		[ ] GeneXpert®DxSystem.AssayName2.AssayDisclaimer.SetPosition( 1, 1 )
		[ ] GeneXpert®DxSystem.AssayName2.AssayDisclaimer.SetText(rDisclaimers.sAssayDisclaimer)
	[-] if rDisclaimers.sGreenDisclaimer != NOTAPPLICABLE
		[ ] GeneXpert®DxSystem.AssayName2.GreenDisclaimer.SetPosition( 1, 1 )
		[ ] GeneXpert®DxSystem.AssayName2.GreenDisclaimer.SetText(rDisclaimers.sGreenDisclaimer)
	[-] if rDisclaimers.sLightBlueDisclaimer != NOTAPPLICABLE
		[ ] GeneXpert®DxSystem.AssayName2.LightBlueDisclaimer.SetPosition( 1, 1 )
		[ ] GeneXpert®DxSystem.AssayName2.LightBlueDisclaimer.SetText(rDisclaimers.sLightBlueDisclaimer)
	[-] if rDisclaimers.sYellowDisclaimer != NOTAPPLICABLE
		[ ] GeneXpert®DxSystem.AssayName2.YellowDisclaimer.SetPosition( 1, 1 )
		[ ] GeneXpert®DxSystem.AssayName2.YellowDisclaimer.SetText(rDisclaimers.sYellowDisclaimer)
	[-] if rDisclaimers.sLightGrayDisclaimer != NOTAPPLICABLE
		[ ] GeneXpert®DxSystem.AssayName2.LightGrayDisclaimer.SetPosition( 1, 1 )
		[ ] GeneXpert®DxSystem.AssayName2.LightGrayDisclaimer.SetText(rDisclaimers.sLightGrayDisclaimer)
	[-] if rDisclaimers.sWhiteDisclaimer != NOTAPPLICABLE
		[ ] GeneXpert®DxSystem.AssayName2.WhiteDisclaimer.SetPosition( 1, 1 )
		[ ] GeneXpert®DxSystem.AssayName2.WhiteDisclaimer.SetText(rDisclaimers.sWhiteDisclaimer)
	[-] if rDisclaimers.sRedDisclaimer != NOTAPPLICABLE
		[ ] GeneXpert®DxSystem.AssayName2.RedDisclaimer.SetPosition( 1, 1 )
		[ ] GeneXpert®DxSystem.AssayName2.RedDisclaimer.SetText(rDisclaimers.sRedDisclaimer)
[ ] 
[ ] // This function will take as input a filename with the .gxa extension and import this assay into the GX database
[ ] // Deprecated on 9/22/2014, use the ImportAssayFiles() function
[+] // ImportAssay(STRING sAssayImportFileName)
	[ ] // GeneXpert®DxSystem.SetActive( )
	[ ] // 
	[ ] // // if the Define Assays is not displayed then toggle the Define Assays button
	[-] // if !GeneXpert®DxSystem.DefineAssays.IsChecked()
		[ ] // GeneXpert®DxSystem.DefineAssays.Toggle()
	[ ] // GeneXpert®DxSystem.Import.Click()
	[ ] // ImportAssay.SetActive( )
	[ ] // ImportAssay.LookIn.Select( sAssayImportFileName )
	[ ] // ImportAssay.Import.Click()
	[ ] // sleep(1)
	[-] // if ImportAssay.Exists()
		[ ] // ImportAssay.OK.Click()
	[ ] // 
[ ] 
[ ] // This function will take as input a filename with the .gxa extension and import this assay into the GX database
[ ] // Deprecated on 9/22/2014, use the ImportLot() function
[+] // ImportLots(STRING sLotFileName)
	[ ] // GeneXpert®DxSystem.SetActive( )
	[ ] // GeneXpert®DxSystem.Lot.Click()
	[ ] // ReagentLotSpecificParameter.SetActive( )
	[ ] // ReagentLotSpecificParameter.Import.Click()
	[ ] // ImportReagentLotSpecificPa.SetActive( )
	[ ] // ImportReagentLotSpecificPa.LookIn.Select(sLotFileName)
	[ ] // ImportReagentLotSpecificPa.Open.Click()
	[ ] // sleep(1)
	[-] // if ImportReagentLotSpecificPa.Exists()
		[ ] // ImportReagentLotSpecificPa.OK.Click()
[ ] 
[ ] // This function will set the values for resut text and result color for any number of analytes in the customize test result dialog
[+] CustomizeGenotyping(REC_GENOTYPING_DETAIL rDetail)
	[ ] 
	[ ] // this is the variable that will hold the position of the row of the Customize table
	[ ] INTEGER iPosition = 0
	[ ] 
	[ ] list of string Combolist = {}
	[ ] integer ItemIndex = 0
	[ ] 
	[ ] iPosition = FindPositionGT(rDetail)
	[ ] 
	[-] if rDetail.sResultText == null && rDetail.sResultColor == null 
		[ ] 
	[-] else
		[ ] GeneDetail.ComCepheidGenexpertUiPanel.ClickCell({iPosition,4})
		[-] if GeneDetail.ComCepheidGenexpertUiPanel.GetCellValue({iPosition,1}) == rDetail.sAnalyte1
    && GeneDetail.ComCepheidGenexpertUiPanel.GetCellValue({iPosition,2}) == rDetail.sAnalyte2
    && GeneDetail.ComCepheidGenexpertUiPanel.GetCellValue({iPosition,3}) == rDetail.sDeltaCtResult
			[-] if (rDetail.sResultText == null)
				[ ] GeneDetail.ComCepheidGenexpertUiPanel.ClickCell ( {iPosition,4} )
				[ ] GeneDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select("#21") 
				[ ] GeneDetail.ComCepheidGenexpertUiPanel.ClickCell ( {iPosition,5} )
				[ ] GeneDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rDetail.sResultColor )
			[-] else if (LEFT(rDetail.sResultText,1) == '?')
				[ ] GeneDetail.ComCepheidGenexpertUiPanel.ClickCell ( {iPosition,4} )
				[ ] Combolist = GeneDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.GetContents()
				[ ] ItemIndex = ListFind (Combolist, '?')
				[ ] GeneDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select("#{ItemIndex}")
				[ ] GeneDetail.ComCepheidGenexpertUiPanel.ClickCell ( {iPosition,5} )
				[ ] GeneDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rDetail.sResultColor )
			[-] else
				[ ] GeneDetail.ComCepheidGenexpertUiPanel.ClickCell ( {iPosition,4} )
				[ ] GeneDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rDetail.sResultText )
				[ ] GeneDetail.ComCepheidGenexpertUiPanel.ClickCell ( {iPosition,5} )
				[ ] GeneDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rDetail.sResultColor )
		[-] else
			[ ] LogError("Index for Excel row {iPosition} does not match the values in the Customize Result Text table")
			[ ] LogError("The passed parameters for the customize detail are: {rDetail}")
[ ] 
[ ] // This function is a helper function to the CustomzeOrganism function. It sets the value in the table of the row that is being changed. 
[ ] // i.e. if the Row is POS, POS, NEG, NEG then this function will find the position in the customize test result table of this row. 
[ ] // The row position is the return value of the function and is then used by CustomzeOrganism function
[+] INTEGER FindPositionGT(REC_GENOTYPING_DETAIL rDetail)
	[ ] LIST OF STRING lsAnalytes = {}
	[ ] 
	[-] if rDetail.sAnalyte1 == POS && rDetail.sAnalyte2 == POS
		[-] switch rDetail.sDeltaCtResult 
			[-] case DELTA_CT_LESS
				[ ] return 1
			[-] case DELTA_CT_BETWEEN
				[ ] return 2
			[-] case DELTA_CT_GREATER
				[ ] return 3
			[-] default 
				[ ] LogError("The values for either the 2 analytes or the Delta Ct Result is invalid. ")
				[ ] LogError("Values for the analytes are: {rDetail.sAnalyte1} , {rDetail.sAnalyte2}")
				[ ] LogError("Value for the Delta Ct Result is: {rDetail.sDeltaCtResult}")
				[ ] return 0
	[-] else 
		[ ] ListAppend(lsAnalytes, rDetail.sAnalyte1)
		[ ] ListAppend(lsAnalytes, rDetail.sAnalyte2)
		[-] switch lsAnalytes
			[-] case {POS, NEG}
				[ ] return 4
			[-] case {POS, INVALID}
				[ ] return 5
			[-] case {NEG, POS}
				[ ] return 6
			[-] case {NEG, NEG}
				[ ] return 7
			[-] case {NEG, INVALID}
				[ ] return 8
			[-] case {INVALID, POS}
				[ ] return 9
			[-] case {INVALID, NEG}
				[ ] return 10
			[-] case {INVALID, INVALID}
				[ ] return 11
			[-] default
				[ ] LogError("The values for the 2 analytes is invalid. Values are: {rDetail.sAnalyte1} , {rDetail.sAnalyte2}")
				[ ] return 0
[ ] 
[ ] // This function defines the haplotype, main screen only
[+] DefineHaplotype(REC_HAPLOTYPE rHaplotype)
	[ ] DefineHaplotype.SetActive( )
	[ ] DefineHaplotype.Add.Click()
	[ ] // print("This is the value of the Haplotype tab passed to the DefineHaplotype function: {rHaplotype}")
	[ ] DefineHaplotype.JavaxSwingJTable.ClickCell( {rHaplotype.iPosition,3} )
	[ ] DefineHaplotype.JavaxSwingJTable.ComCepheidGenexpertUiUtil.SetText(rHaplotype.sHaplotypeName)
	[-] if rHaplotype.sGene1 == CHECKED
		[ ] DefineHaplotype.JavaxSwingJTable.ClickCell( {rHaplotype.iPosition,4} )
	[-] if rHaplotype.sGene2 == CHECKED
		[ ] DefineHaplotype.JavaxSwingJTable.ClickCell( {rHaplotype.iPosition,5} )
	[-] if rHaplotype.sGene3 == CHECKED
		[ ] DefineHaplotype.JavaxSwingJTable.ClickCell( {rHaplotype.iPosition,6} )
	[-] if rHaplotype.sGene4 == CHECKED
		[ ] DefineHaplotype.JavaxSwingJTable.ClickCell( {rHaplotype.iPosition,7} )
	[-] if DefineHaplotype1.Exists(2)
		[ ] DefineHaplotype1.SetActive( )
		[ ] DefineHaplotype1.Yes.Click()
		[ ] 
[ ] 
[ ] // This function is a helper function to the DefineHaplotypeDetail function. It sets the value in the table of the row that is being changed. 
[ ] // i.e. if the Row is HETEROZYGOUS, HOMOZYGOUS  then this function will find the position in the haplotype result table of this row. 
[ ] // The row position is the return value of the function and is then used by DefineHaplotypeDetail function
[+] INTEGER FindPositionHaplotype(REC_HAPLOTYPE_DETAIL rHaplotypeDetail)
	[ ] 
	[-] if rHaplotypeDetail.sGene3 == NOTAPPLICABLE
		[-] switch rHaplotypeDetail.sGene1
			[+] case NORMAL
				[-] switch rHaplotypeDetail.sGene2
					[-] case NORMAL
						[ ] return 1
					[-] case HETEROZYGOUS
						[ ] return 2
					[-] case HOMOZYGOUS
						[ ] return 3
			[+] case HETEROZYGOUS
				[-] switch rHaplotypeDetail.sGene2
					[-] case NORMAL
						[ ] return 4
					[-] case HETEROZYGOUS
						[ ] return 5
					[-] case HOMOZYGOUS
						[ ] return 6
			[+] case HOMOZYGOUS
				[-] switch rHaplotypeDetail.sGene2
					[-] case NORMAL
						[ ] return 7
					[-] case HETEROZYGOUS
						[ ] return 8
					[-] case HOMOZYGOUS
						[ ] return 9
	[-] else
		[-] switch rHaplotypeDetail.sGene1
			[+] case NORMAL
				[-] switch rHaplotypeDetail.sGene2
					[-] case NORMAL
						[-] switch rHaplotypeDetail.sGene3
							[-] case NORMAL
								[ ] return 1
							[-] case HETEROZYGOUS
								[ ] return 2
							[-] case HOMOZYGOUS
								[ ] return 3
					[-] case HETEROZYGOUS
						[-] switch rHaplotypeDetail.sGene3
							[-] case NORMAL
								[ ] return 4
							[-] case HETEROZYGOUS
								[ ] return 5
							[-] case HOMOZYGOUS
								[ ] return 6
					[-] case HOMOZYGOUS
						[-] switch rHaplotypeDetail.sGene3
							[-] case NORMAL
								[ ] return 7
							[-] case HETEROZYGOUS
								[ ] return 8
							[-] case HOMOZYGOUS
								[ ] return 9
			[+] case HETEROZYGOUS
				[-] switch rHaplotypeDetail.sGene2
					[-] case NORMAL
						[-] switch rHaplotypeDetail.sGene3
							[-] case NORMAL
								[ ] return 10
							[-] case HETEROZYGOUS
								[ ] return 11
							[-] case HOMOZYGOUS
								[ ] return 12
					[-] case HETEROZYGOUS
						[-] switch rHaplotypeDetail.sGene3
							[-] case NORMAL
								[ ] return 13
							[-] case HETEROZYGOUS
								[ ] return 14
							[-] case HOMOZYGOUS
								[ ] return 15
					[-] case HOMOZYGOUS
						[-] switch rHaplotypeDetail.sGene3
							[-] case NORMAL
								[ ] return 16
							[-] case HETEROZYGOUS
								[ ] return 17
							[-] case HOMOZYGOUS
								[ ] return 18
			[+] case HOMOZYGOUS
				[-] switch rHaplotypeDetail.sGene2
					[-] case NORMAL
						[-] switch rHaplotypeDetail.sGene3
							[-] case NORMAL
								[ ] return 19
							[-] case HETEROZYGOUS
								[ ] return 20
							[-] case HOMOZYGOUS
								[ ] return 21
					[-] case HETEROZYGOUS
						[-] switch rHaplotypeDetail.sGene3
							[-] case NORMAL
								[ ] return 22
							[-] case HETEROZYGOUS
								[ ] return 23
							[-] case HOMOZYGOUS
								[ ] return 24
					[-] case HOMOZYGOUS
						[-] switch rHaplotypeDetail.sGene3
							[-] case NORMAL
								[ ] return 25
							[-] case HETEROZYGOUS
								[ ] return 26
							[-] case HOMOZYGOUS
								[ ] return 27
	[ ] 
	[ ] // If the function falls through to here then there is an error with the text of either Gene1, Gene2 or Gene3
	[-] if rHaplotypeDetail.sGene3 == NOTAPPLICABLE
		[ ] LogError("The values for either the 2 genes for the haplotype is invalid. ")
		[ ] LogError("Values for the genes are: {rHaplotypeDetail.sGene1} , {rHaplotypeDetail.sGene2}")
		[ ] return 0
	[-] else
		[ ] LogError("The values for either the 3 genes for the haplotype is invalid. ")
		[ ] LogError("Values for the genes are: {rHaplotypeDetail.sGene1} , {rHaplotypeDetail.sGene2} , {rHaplotypeDetail.sGene3}")
		[ ] return 0
[ ] 
[ ] // This function defines the haplotype customizations
[+] DefineHaplotypeDetail(REC_HAPLOTYPE_DETAIL rHaplotypeDetail)
	[ ] // this is the variable that will hold the position of the row of the Haplotype  table
	[ ] INTEGER iPosition = 0
	[ ] 
	[-] if rHaplotypeDetail.sAllele1 == null && rHaplotypeDetail.sAllele2 == null 
		[ ] 
	[-] else
		[-] if rHaplotypeDetail.sGene3 == NOTAPPLICABLE
			[ ] iPosition = FindPositionHaplotype(rHaplotypeDetail)
			[ ] DefineHaplotypeResultFor.SetActive( )
			[-] if DefineHaplotypeResultFor.JavaxSwingJTable.GetCellValue({iPosition,1}) == rHaplotypeDetail.sGene1
    && DefineHaplotypeResultFor.JavaxSwingJTable.GetCellValue({iPosition,2}) == rHaplotypeDetail.sGene2
				[ ] // Set the test for allele 1 if it is non-blank
				[-] if rHaplotypeDetail.sAllele1 != null
					[ ] DefineHaplotypeResultFor.JavaxSwingJTable.ClickCell( {iPosition,4} )
					[ ] DefineHaplotypeResultFor.JavaxSwingJTable.ComCepheidGenexpertUiUtil.SetText(rHaplotypeDetail.sAllele1)
				[ ] // Set the test for allele 2 if it is non-blank
				[-] if rHaplotypeDetail.sAllele2 != null
					[ ] DefineHaplotypeResultFor.JavaxSwingJTable.ClickCell( {iPosition,5} )
					[ ] DefineHaplotypeResultFor.JavaxSwingJTable.ComCepheidGenexpertUiUtil.SetText(rHaplotypeDetail.sAllele2)
				[ ] // Set the result color for the allele combination result 
				[ ] DefineHaplotypeResultFor.JavaxSwingJTable.ClickCell({iPosition, 6})
				[ ] DefineHaplotypeResultFor.JavaxSwingJTable.JavaxSwingJComboBox.Select(rHaplotypeDetail.sResultColor)
			[-] else
				[ ] LogError("Index for Excel row {iPosition} does not match the values in the Haplotype Allele Text table")
				[ ] LogError("The passed parameters for the haplotype detail are: {rHaplotypeDetail}")
				[ ] 
		[-] else
			[ ] iPosition = FindPositionHaplotype(rHaplotypeDetail)
			[ ] DefineHaplotypeResultFor.SetActive( )
			[-] if DefineHaplotypeResultFor.JavaxSwingJTable.GetCellValue({iPosition,1}) == rHaplotypeDetail.sGene1
    && DefineHaplotypeResultFor.JavaxSwingJTable.GetCellValue({iPosition,2}) == rHaplotypeDetail.sGene2
    && DefineHaplotypeResultFor.JavaxSwingJTable.GetCellValue({iPosition,3}) == rHaplotypeDetail.sGene3
				[ ] // Set the test for allele 1 if it is non-blank
				[-] if rHaplotypeDetail.sAllele1 != null
					[ ] DefineHaplotypeResultFor.JavaxSwingJTable.ClickCell( {iPosition,4} )
					[ ] DefineHaplotypeResultFor.JavaxSwingJTable.ComCepheidGenexpertUiUtil.SetText(rHaplotypeDetail.sAllele1)
				[ ] // Set the test for allele 2 if it is non-blank
				[-] if rHaplotypeDetail.sAllele2 != null
					[ ] DefineHaplotypeResultFor.JavaxSwingJTable.ClickCell( {iPosition,5} )
					[ ] DefineHaplotypeResultFor.JavaxSwingJTable.ComCepheidGenexpertUiUtil.SetText(rHaplotypeDetail.sAllele2)
				[ ] // Set the result color for the allele combination result 
				[ ] DefineHaplotypeResultFor.JavaxSwingJTable.ClickCell({iPosition, 6})
				[ ] DefineHaplotypeResultFor.JavaxSwingJTable.JavaxSwingJComboBox.Select(rHaplotypeDetail.sResultColor)
			[-] else
				[ ] LogError("Index for Excel row {iPosition} does not match the values in the Haplotype Allele Text table")
				[ ] LogError("The passed parameters for the haplotype detail are: {rHaplotypeDetail}")
[ ] 
[ ] // The following functions are defined for D8380 Probe Check project
[ ] // This function defines Norm Factor in assays with Probe Check
[+] DefineNormFactor( LIST OF INTEGER liNormFactorD,LIST OF INTEGER liNormFactor)
	[-] for (i = 1; i<= ListCount(liNormFactor); i++)
		[-] if (liNormFactorD[i] == 1)
			[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {i,10} )
			[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ComCepheidGenexpertUiUtil.SetText(Str(liNormFactor[i]))
[ ] 
[+] DefinePrbChkPRB(INTEGER iPrbChk, LIST OF INTEGER liPrbChk13Max,LIST OF INTEGER  liPrbChk2Min,LIST OF INTEGER  liPrbChkDeltaMin)
	[-] if (iPrbChk == 1)
		[-] for (i = 1; i <= ListCount(liPrbChk13Max); i++)
			[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {i,7} )
			[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(Str(liPrbChk13Max[i]))
			[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {i,8} )
			[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(Str(liPrbChk2Min[i]))
			[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {i,9} )
			[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(Str(liPrbChkDeltaMin[i]))
			[ ] 
[ ] 
[ ] // This Function sets the decision when one target analyte is selected
[+] SelectDecisionFor1Analyte(LIST OF STRING IsDecision)
	[+] for  (i = ListCount(IsDecision); i > 0; i--)
		[ ] Decision.YkA1f.ClickCell( {i,2} )
		[ ] Decision.YkA1f.JavaxSwingJComboBox.Select(IsDecision[i])
[ ] 
[ ] // This Function sets the decision when two target analytes are selected
[+] SelectDecisionFor2Analytes(LIST OF STRING IsDecision)
	[-] for  (i = ListCount(IsDecision); i > 0; i--)
		[ ] Decision.YkA1f.ClickCell( {i,3} )
		[ ] Decision.YkA1f.JavaxSwingJComboBox.Select(IsDecision[i])
[ ] 
[ ] // This DefineValidCyclesMinMax1 function defines Valid Min/Max cycles and also take care of a situation when Valid Min  cycle is defined first and is >
[ ] // than Valid Max cycle. It is used for D8383 Bkgnd Sub and Crosstalk
[+] DefineValidCyclesMinMax1( LIST OF INTEGER liVMin,  LIST OF INTEGER liVMax)
	[-] for (i = 1; i <= ListCount(liVMin); i++)
		[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {i,2} )
		[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(Str(liVMin[i]))
		[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {i,3} )
		[-] if (AnalysisSettings.Exists())
			[ ] AnalysisSettings.OK.Click()
			[ ] GeneXpert®DxSystem .SetActive( )
			[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {i,3} )
			[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(Str(liVMax[i]))
			[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {i,2} )
			[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(Str(liVMin[i]))
		[-] else
			[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(Str(liVMax[i]))
[ ] //
[ ] // This SelectAnalyteFor6AnalytetoProtocol functions select any number of analytes for 6Analytes assays.
[+] SelectAnalyteFor6AnalytetoProtocol_1(REC_DetailTab_Assay_Protocol_1 rProtocol1)
	[-] if (rProtocol1.iPAnalyte1 == 1)
		[ ] Protocol. JavaxSwingJTable1.SetCellValue({1,1}, true)
	[-] if (rProtocol1.iPAnalyte1 == 0)
		[ ] Protocol. JavaxSwingJTable1.SetCellValue({1,1}, false)
	[-] if (rProtocol1.iPAnalyte2 == 1)
		[ ] Protocol. JavaxSwingJTable1.SetCellValue({2,1}, true)
	[-] if (rProtocol1.iPAnalyte2 == 0)
		[ ] Protocol. JavaxSwingJTable1.SetCellValue({2,1}, false)
	[-] if (rProtocol1.iPAnalyte3 == 1)
		[ ] Protocol. JavaxSwingJTable1.SetCellValue({3,1}, true)
	[-] if (rProtocol1.iPAnalyte3 == 0)
		[ ] Protocol. JavaxSwingJTable1.SetCellValue({3,1}, false)
	[-] if (rProtocol1.iPAnalyte4 == 1)
		[ ] Protocol. JavaxSwingJTable1.SetCellValue({4,1}, true)
	[-] if (rProtocol1.iPAnalyte4 == 0)
		[ ] Protocol. JavaxSwingJTable1.SetCellValue({4,1}, false)
	[-] if (rProtocol1.iPAnalyte5 == 1)
		[ ] Protocol. JavaxSwingJTable1.SetCellValue({5,1}, true)
	[-] if (rProtocol1.iPAnalyte5 == 0)
		[ ] Protocol. JavaxSwingJTable1.SetCellValue({5,1}, false)
	[-] if (rProtocol1.iPAnalyte6 == 1)
		[ ] Protocol. JavaxSwingJTable1.SetCellValue({6,1}, true)
	[-] if (rProtocol1.iPAnalyte6 == 0)
		[ ] Protocol. JavaxSwingJTable1.SetCellValue({6,1}, false)
		[ ] 
[+] SelectAnalyteFor6AnalytetoProtocol_2(REC_DetailTab_Assay_Protocol_2  rProtocol2)
	[-] if (rProtocol2.iPAnalyte1 == 1)
		[ ] Protocol. JavaxSwingJTable1.SetCellValue({1,1}, true)
	[-] if (rProtocol2.iPAnalyte1 == 0)
		[ ] Protocol. JavaxSwingJTable1.SetCellValue({1,1}, false)
	[-] if (rProtocol2.iPAnalyte2 == 1)
		[ ] Protocol. JavaxSwingJTable1.SetCellValue({2,1}, true)
	[-] if (rProtocol2.iPAnalyte2 == 0)
		[ ] Protocol. JavaxSwingJTable1.SetCellValue({2,1}, false)
	[-] if (rProtocol2.iPAnalyte3 == 1)
		[ ] Protocol. JavaxSwingJTable1.SetCellValue({3,1}, true)
	[-] if (rProtocol2.iPAnalyte3 == 0)
		[ ] Protocol. JavaxSwingJTable1.SetCellValue({3,1}, false)
	[-] if (rProtocol2.iPAnalyte4 == 1)
		[ ] Protocol. JavaxSwingJTable1.SetCellValue({4,1}, true)
	[-] if (rProtocol2.iPAnalyte4 == 0)
		[ ] Protocol. JavaxSwingJTable1.SetCellValue({4,1}, false)
	[-] if (rProtocol2.iPAnalyte5 == 1)
		[ ] Protocol. JavaxSwingJTable1.SetCellValue({5,1}, true)
	[-] if (rProtocol2.iPAnalyte5 == 0)
		[ ] Protocol. JavaxSwingJTable1.SetCellValue({5,1}, false)
	[-] if (rProtocol2.iPAnalyte6 == 1)
		[ ] Protocol. JavaxSwingJTable1.SetCellValue({6,1}, true)
	[-] if (rProtocol2.iPAnalyte6 == 0)
		[ ] Protocol. JavaxSwingJTable1.SetCellValue({6,1}, false)
	[ ] 
[ ] 
[ ] // This Function Protocolwith3Stages define 3 stages of the protocol for first two stages only stages are variable and all other fields are default.
[+] Protocolwith3Stages(REC_Assay_Protocol1 rProtocol1)
	[ ] Protocol.SetActive( )
	[ ] Protocol.Stage11.Select(rProtocol1.sStage1)
	[ ] Protocol.Stage21.Select(rProtocol1.sStage2)
	[ ] Protocol.Stage22.SetCellValue({1,2}, rProtocol1.iSecs21)
	[ ] Protocol.Stage31.Select(rProtocol1.sStage3 )
	[ ] Protocol.N3.SetSelRange(1, 1, 1, 2)
	[ ] Protocol.N3.SetText(Str(rProtocol1.iNumberCyclesInStage3))
	[ ] Protocol.Repeat2.SetCellValue({1,2},rProtocol1.iSecs31)
	[ ] Protocol.Repeat2.SetCellValue({2,2},rProtocol1.iSecs32)
	[ ] Protocol.OK.Click()
[ ] 
[ ] // This Function MakeDecisionFor1Analyte choose the decision for 1 Target Analyte and save it.
[+] MakeDecisionFor1Analyte(REC_DECISION rDecision)
	[ ] //
	[ ] // variable Declaration
	[ ] //
	[ ] LIST OF STRING lsFirstString = {...}
	[ ] //
	[ ] SelectTargetAnalytes.SetActive( )
	[ ] SelectTargetAnalytes.Available.Select(rDecision.sSelectTargetAnalytes1 )
	[ ] SelectTargetAnalytes.JavaxSwingJButton1.Click()
	[ ] SelectTargetAnalytes.OK.Click()
	[ ] Decision.SetActive( )
	[ ] 
	[ ] //Choosing the Decision for 1 Target Analyte
	[ ] lsFirstString = {...}
	[ ] // Move the values into the list
	[ ] // i.e. Decision values (lsFirstString)
	[ ] ListAppend(lsFirstString, rDecision.sDecision_Combo1)
	[ ] ListAppend(lsFirstString, rDecision.sDecision_Combo2)
	[ ] ListAppend(lsFirstString, rDecision.sDecision_Combo3)
	[ ] 
	[ ] SelectDecisionFor1Analyte(lsFirstString)
	[ ] //
	[ ] //Saving the Decision with 1 Target Analyte
	[ ] //
	[ ] Decision.OK.Click()
	[ ] ChangeToDecisionCommand.SetActive( )
	[ ] ChangeToDecisionCommand.Yes.Click()
[ ] 
[ ] // This Function MakeDecisionFor2Analyte choose the decision for 2 Target Analyte and save it.
[+] MakeDecisionFor2Analytes(REC_DECISION rDecision)
	[ ] //
	[ ] // Variable Declaration
	[ ] //
	[ ] LIST OF STRING lsFirstString = {...}
	[ ] //
	[ ] //Selecting 2 target analytes for Decision
	[ ] SelectTargetAnalytes.SetActive( )
	[ ] SelectTargetAnalytes.Available.Select(rDecision.sSelectTargetAnalytes1 )
	[ ] SelectTargetAnalytes.JavaxSwingJButton1.Click()
	[ ] SelectTargetAnalytes.Available.Select(rDecision.sSelectTargetAnalytes2 )
	[ ] SelectTargetAnalytes.JavaxSwingJButton1.Click()
	[ ] SelectTargetAnalytes.OK.Click()
	[ ] Decision.SetActive( )
	[ ] //Choosing the Decision for 2 Target Analytes
	[ ] lsFirstString = {...}
	[ ] // Move the values into the list
	[ ] // i.e. Decision values (lsFirstString)
	[ ] ListAppend(lsFirstString, rDecision.sDecision_Combo1)
	[ ] ListAppend(lsFirstString, rDecision.sDecision_Combo2)
	[ ] ListAppend(lsFirstString, rDecision.sDecision_Combo3)
	[ ] ListAppend(lsFirstString, rDecision.sDecision_Combo4)
	[ ] ListAppend(lsFirstString, rDecision.sDecision_Combo5)
	[ ] ListAppend(lsFirstString, rDecision.sDecision_Combo6)
	[ ] ListAppend(lsFirstString, rDecision.sDecision_Combo7)
	[ ] ListAppend(lsFirstString, rDecision.sDecision_Combo8)
	[ ] ListAppend(lsFirstString, rDecision.sDecision_Combo9)
	[ ] 
	[ ] SelectDecisionFor2Analytes(lsFirstString)
	[ ] //
	[ ] //Saving the Decision with 2 Target Analytes
	[ ] //
	[ ] Decision.OK.Click()
	[ ] ChangeToDecisionCommand.SetActive( )
	[ ] ChangeToDecisionCommand.Yes.Click()
[ ] 
[ ] // The function SelectAnalyteToProtocol selects any number of analytes to the protocol for 5  Analytes Assays
[+] SelectAnalyteFor5AnalytetoProtocol (REC_5Analytes_Assay_Protocol  rProtocol)
	[-] if (rProtocol.iPAnalyte1 == 1)
		[ ] Protocol. JavaxSwingJTable1.SetCellValue({1,1}, true)
	[-] else 
		[ ] Protocol. JavaxSwingJTable1.SetCellValue({1,1}, false)
	[-] if (rProtocol.iPAnalyte2 == 1)
		[ ] Protocol. JavaxSwingJTable1.SetCellValue({2,1}, true)
	[-] else
		[ ] Protocol. JavaxSwingJTable1.SetCellValue({2,1}, false)
	[-] if (rProtocol.iPAnalyte3 == 1)
		[ ] Protocol. JavaxSwingJTable1.SetCellValue({3,1}, true)
	[-] else
		[ ] Protocol. JavaxSwingJTable1.SetCellValue({3,1}, false)
	[-] if (rProtocol.iPAnalyte4 == 1)
		[ ] Protocol. JavaxSwingJTable1.SetCellValue({4,1}, true)
	[-] else
		[ ] Protocol. JavaxSwingJTable1.SetCellValue({4,1}, false)
	[-] if (rProtocol.iPAnalyte5 == 1)
		[ ] Protocol. JavaxSwingJTable1.SetCellValue({5,1}, true)
	[-] else
		[ ] Protocol. JavaxSwingJTable1.SetCellValue({5,1}, false)
[ ] 
[ ] // This Function 'ProtocolwithStage1_2TemperatureCycle' define 2 temperature cycle in stage 1 with any number of cycle
[+] ProtocolwithStage1_2TemperatureCycle(REC_5Analytes_Assay_Protocol  rProtocol)
	[ ] Protocol.SetActive( )
	[ ] Protocol.Stage11.Select(rProtocol.sStage1)
	[ ] Protocol.N1.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol.N1.SetText(Str(rProtocol.iNumberCyclesInStage))
	[ ] Protocol.Repeat2.SetCellValue({1,1},"72")
	[ ] Protocol.Repeat2.SetCellValue({1,2},"1")
	[ ] Protocol.Repeat2.SetCellValue({2,1},"60")
	[ ] Protocol.Repeat2.SetCellValue({2,2},"2")
	[ ] Protocol.OK.Click()
[ ] 
[ ] //This Function 'CustomizeResultsForOrganism' customizes organism based test results upto 3 Analytes
[+] CustomizeResultsForOrganism(CUSTOMIZEDRESULT3 myResult, INTEGER iNumAnalytes)
	[-] switch iNumAnalytes
		[-] case 3
			[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell({myResult.iRow,7})
			[-] if (OrganismDetail.ComCepheidGenexpertUiPanel.GetCellValue({myResult.iRow,1}) == myResult.sTestResult1 && OrganismDetail.ComCepheidGenexpertUiPanel.GetCellValue({myResult.iRow,2}) == myResult.sTestResult2 && OrganismDetail.ComCepheidGenexpertUiPanel.GetCellValue({myResult.iRow,3}) == myResult.sTestResult3)
				[-] if (myResult.sTestResultText == null)
					[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {myResult.iRow,7} )
					[ ] // list of string Combolist2 = TargetBasedTestResult.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.GetContents()
					[ ] // integer ItemIndex2 = ListFind (Combolist2, null)
					[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select("#21") // #ItemIndex2")
					[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {myResult.iRow,8} )
					[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( myResult.sTestResultColor )
				[-] else if (LEFT(myResult.sTestResultText,1) == '?')
					[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {myResult.iRow,7} )
					[ ] list of string Combolist3 = OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.GetContents()
					[ ] integer ItemIndex3 = ListFind (Combolist3, '?')
					[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select("#{ItemIndex3}")
					[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {myResult.iRow,8} )
					[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( myResult.sTestResultColor )
				[-] else
					[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {myResult.iRow,7} )
					[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( myResult.sTestResultText )
					[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {myResult.iRow,8} )
					[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( myResult.sTestResultColor )
			[-] else
				[ ] Print("Index for Excel row {myResult.iRow} does not match the values in the Customize Result Text table")
		[-] case 2
			[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell({myResult.iRow,7})
			[-] if (OrganismDetail.ComCepheidGenexpertUiPanel.GetCellValue({myResult.iRow,1}) == myResult.sTestResult1 && OrganismDetail.ComCepheidGenexpertUiPanel.GetCellValue({myResult.iRow,2}) == myResult.sTestResult2)
				[-] if (myResult.sTestResultText == null)
					[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {myResult.iRow,7} )
					[ ] // list of string Combolist2 = TargetBasedTestResult.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.GetContents()
					[ ] // integer ItemIndex2 = ListFind (Combolist2, null)
					[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select("#21") // #ItemIndex2")
					[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {myResult.iRow,8} )
					[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( myResult.sTestResultColor )
				[-] else if (LEFT(myResult.sTestResultText,1) == '?')
					[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {myResult.iRow,7} )
					[ ] list of string Combolist2 = OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.GetContents()
					[ ] integer ItemIndex2 = ListFind (Combolist2, '?')
					[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select("#{ItemIndex2}")
					[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {myResult.iRow,8} )
					[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( myResult.sTestResultColor )
				[-] else
					[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {myResult.iRow,7} )
					[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( myResult.sTestResultText )
					[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {myResult.iRow,8} )
					[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( myResult.sTestResultColor )
			[-] else
				[ ] Print("Index for Excel row {myResult.iRow} does not match the values in the Customize Result Text table")
			[ ] 
		[-] case 1
			[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell({myResult.iRow,7})
			[-] if (OrganismDetail.ComCepheidGenexpertUiPanel.GetCellValue({myResult.iRow,1}) == myResult.sTestResult1)
				[-] if (myResult.sTestResultText == null)
					[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {myResult.iRow,7} )
					[ ] // list of string Combolist2 = TargetBasedTestResult.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.GetContents()
					[ ] // integer ItemIndex2 = ListFind (Combolist2, null)
					[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select("#21") // #ItemIndex2")
					[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {myResult.iRow,8} )
					[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( myResult.sTestResultColor )
				[-] else if (LEFT(myResult.sTestResultText,1) == '?')
					[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {myResult.iRow,7} )
					[ ] list of string Combolist1 = OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.GetContents()
					[ ] integer ItemIndex1 = ListFind (Combolist1, '?')
					[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select("#{ItemIndex1}")
					[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {myResult.iRow,8} )
					[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( myResult.sTestResultColor )
				[-] else
					[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {myResult.iRow,7} )
					[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( myResult.sTestResultText )
					[ ] OrganismDetail.ComCepheidGenexpertUiPanel.ClickCell ( {myResult.iRow,8} )
					[ ] OrganismDetail.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( myResult.sTestResultColor )
			[-] else
				[ ] Print("Index for Excel row {myResult.iRow} does not match the values in the Customize Result Text table")
			[ ] 
[ ] 
[ ] // This function 'CustomizeResultsForPercentRatio' Customize Test Results of Percent Ratio assays with 4 Target Analytes
[+] CustomizeResultsForPercentRatio(REC_CustomizeResult_PR_4  myResult)
	[ ] TargetAnalyte.ComCepheidGenexpertUiPanel.ClickCell ( {myResult.iRow,7} )
	[-] if TargetAnalyte.ComCepheidGenexpertUiPanel.GetCellValue({myResult.iRow,1}) == myResult.sTargetResult
		[-] if (myResult.sResultText == null)
			[ ] TargetAnalyte.ComCepheidGenexpertUiPanel.ClickCell ( {myResult.iRow,7} )
			[ ] TargetAnalyte.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select("#21") 
			[ ] TargetAnalyte.ComCepheidGenexpertUiPanel.ClickCell( {myResult.iRow,8} )
			[ ] TargetAnalyte.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select(myResult.sResultColor) 
		[-] else if (LEFT(myResult.sResultText,1) == '?')
			[ ] TargetAnalyte.ComCepheidGenexpertUiPanel.ClickCell( {myResult.iRow,7} )
			[ ] list of string Combolist = TargetAnalyte.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.GetContents()
			[ ] integer ItemIndex = ListFind (Combolist, '?')
			[ ] TargetAnalyte.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select("#{ItemIndex}")
			[ ] TargetAnalyte.ComCepheidGenexpertUiPanel.ClickCell( {myResult.iRow,8} )
			[ ] TargetAnalyte.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select(myResult.sResultColor)
		[-] else
			[ ] TargetAnalyte.ComCepheidGenexpertUiPanel.ClickCell( {myResult.iRow,8} )
			[ ] TargetAnalyte.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select(myResult.sResultColor)
			[-] switch myResult.iRow
				[-] case 3
					[ ] TargetAnalyte.ComCepheidGenexpertUiPanel.ClickCell( {3,7} )
					[ ] TargetAnalyte.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select(myResult.sResultText)
				[-] case 4
					[ ] TargetAnalyte.ComCepheidGenexpertUiPanel.ClickCell( {4,7} )
					[ ] TargetAnalyte.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select(myResult.sResultText)
	[-] else
		[ ] Print("Index for Excel row {myResult.iRow} does not match the values in the Customize Result Text table")
[ ] 
[-] ImportAssayFiles (STRING sExcelFileName, String sTabName)
	[ ] 
	[ ] print ("Reading {sTabName} tab of the spreadsheet {sExcelFileName} ")
	[ ] 
	[ ] //Variables
	[ ] handle hdbc, hAssay
	[ ] REC_GXA_MANIFESET recGXA
	[ ] INTEGER iAssayID=NULL
	[ ] 
	[ ] hdbc = DB_Connect ("DSN=Silk DDA Excel;DBQ={sExcelFileName};UID=;PWD=;")
	[ ] hAssay = DB_ExecuteSQL(hdbc, "Select * from`{sTabName}$`")
	[-] while (DB_FetchNext (hAssay,recGXA))
		[ ] 
		[ ] print("----------------------------------")
		[-] if recGXA.sAssayName!=NULL
			[ ] print ("Importing an assay named: {recGXA.sAssayName}")
			[ ] 
			[ ] //If assay file name is specified in excel sheet...
			[-] if recGXA.sAssayFileName!=NULL
				[ ] Print("Assay file name has been provided:")
				[ ] print("{recGXA.sAssayFileName}")
			[ ] //Otherwise, build a file name based on assay name and version..
			[-] else
				[ ] print("Must build the Filename:")
				[-] if recGXA.iVersion == 0 || recGXA.iVersion == NULL
					[ ]  
					[ ] recGXA.sAssayFileName=PATH+recGXA.sAssayName+".gxa"
					[ ] print(recGXA.sAssayFileName)
				[-] else
					[-] if recGXA.iVersion<0
						[ ] LogError("Invalid version number provided for assay {recGXA.sAssayName}")
					[-] else
						[ ] recGXA.sAssayFileName= PATH+recGXA.sAssayName+"_{(recGXA.iVersion)}.gxa"
						[ ] print(recGXA.sAssayFileName)
						[ ] 
			[ ] //CALL TO ATTEMPT TO IMPORT A GIVEN FILENAME
			[ ] ImportAssayFile(recGXA.sAssayFileName)
			[ ] 
			[ ] 
			[ ] 
			[ ] //See if there is a lot to import
			[-] if  recGXA.iLot!= NULL
				[ ] 
				[ ] // Updated below statement to use > 0 rather than > 1 Steve 9/25/2014
				[-] if recGXA.iLot > 0 && recGXA.iVersion > 0
					[ ] print()
					[ ] print ("Trying to import lot # {recGXA.iLot} for this assay...")
					[ ] 
					[ ] //If a file name is provided for the lot:
					[-] if recGXA.sLotFileName!=NULL
						[ ] print("Lot file name has been provided:")
						[ ] print("{recGXA.sLotFileName}")
						[ ] 
					[ ] //Otherwise, Let's build a file name based on the assay name, version, and lot #s
					[-] else
						[ ] print("Must build the Filename:")
						[ ] recGXA.sLotFileName=PATH+ recGXA.sAssayName + "_"+str(recGXA.iVersion)+'_lot_' + str(recGXA.iLot) + ".gxr"
						[ ] print("{recGXA.sLotFileName}")
					[ ] 
					[ ] 
					[ ] //Now that we have a filename, attempt to import
					[ ] print ("")
					[ ] Print("Importing file:")
					[ ] print("{recGXA.sLotFileName}")
					[ ] ImportLot(recGXA.sAssayName,recGXA.sLotFileName)
					[ ] 
					[ ] 
				[ ] 
				[-] else
					[ ] LogError("Invalid lot or version # specified, skipped retrieving LSPs for assay {recGXA.sAssayName}")
				[ ] 
			[ ] 
			[ ] //Otherwise, skip lot import
			[-] else
				[ ] print("No lot specified, skipped retrieving LSPs for assay {recGXA.sAssayName}")
		[-] else
			[ ] LogError("Tried to load an assay without a name specified in {sExcelFileName}")
[ ] 
[ ] // This function will take as input a filename (optionally with the .gxa 
[ ] // extension and/or  path) and import this assay into the GX database
[-] ImportAssayFile(STRING sAssayImportFileName)
	[ ] GeneXpert®DxSystem.SetActive( )
	[ ] 
	[ ] // if the Define Assays is not displayed, then navigate to the Define Assays workspace
	[-] if !GeneXpert®DxSystem.DefineAssays.IsChecked()
		[ ] GeneXpert®DxSystem.DefineAssays.Toggle()
	[ ] 
	[ ] //Choose to import assay
	[ ] GeneXpert®DxSystem.Import.Click()
	[ ] ImportAssay.SetActive( )
	[ ] 
	[ ] //Set the directory to the default in case user has not specified a path
	[ ] ImportAssay.FileName.SetText ( PATH )
	[ ] ImportAssay.Import.Click()
	[ ] 
	[ ] //Enter in the filename and click import
	[ ] ImportAssay.FileName.SetText(sAssayImportFileName)
	[ ] ImportAssay.Import.Click()
	[ ] 
	[ ] //Wait to see if the definition is not  found
	[ ] sleep(1)
	[-] if SelectFile.Exists()
		[ ] LogError('Could not find or read the file "{sAssayImportFileName}"!')
		[ ] SelectFile.OK.Click()
		[ ] ImportAssay.Close()
	[ ] 
	[ ] 
	[ ] //If version does not match
	[ ] sleep(1)
	[-] if ImportAssay.Exists()
		[ ] // Newer version selected, confirm the message
		[-] if ImportAssay.ReplaceOldAssayVersionText.Exists()
			[ ] PRINT(ImportAssay.ReplaceOldAssayVersionText.GetText())
			[ ] LogWarning('Replaced an old version of the assay in "{sAssayImportFileName}".')
			[ ] ImportAssay.Yes.Click()
		[-] else
			[ ] //Wait to see if a duplicate definition is found
			[-] if ImportAssay.DuplicateAssay.Exists()
				[ ] ImportAssay.SetActive()
				[ ] ImportAssay.OK.Click()
				[ ] LogWarning('The assay defined in "{sAssayImportFileName}" was already found in the GX System.')
				[ ] 
			[-] else
				[ ] //An older version that may not be imported, so log error
				[ ] LogError('Tried to import lower version of "{sAssayImportFileName}"')
				[ ] SelectFile.OK.Click()
				[ ] ImportAssay.Close()
			[ ] 
			[ ] 
[ ] 
[ ] // This function will take as input a filename with the .gxa extension and import this assay into the GX database
[ ] // 
[+] ImportLot(STRING sAssayName, STRING sLotFileName)
	[ ] 
	[ ] GeneXpert®DxSystem.SetActive( )
	[ ] 
	[ ] 
	[ ] SelectAssayFromList(sAssayName)
	[ ] 
	[ ] //Choose lot dialog
	[ ] GeneXpert®DxSystem.Lot.Click()
	[ ] ReagentLotSpecificParameter.SetActive( )
	[ ] 
	[ ] //Choose lot import dialog
	[ ] ReagentLotSpecificParameter.Import.Click()
	[ ] ImportReagentLotSpecificPa.SetActive( )
	[ ] 
	[ ] //Set default path
	[ ] ImportReagentLotSpecificPa.FileName.SetText ( PATH )
	[ ] ImportReagentLotSpecificPa.Open.Click()
	[ ] 
	[ ] 
	[ ] //Open specified file
	[ ] ImportReagentLotSpecificPa.FileName.SetText ( sLotFileName )
	[ ] ImportReagentLotSpecificPa.Open.Click()
	[ ] 
	[ ] 
	[ ] sleep(1)
	[ ] //If an issue is found with the file...
	[ ] 
	[ ] 
	[ ] //File not found or could not be read
	[-] if SelectFile.Exists()
		[ ] //Dialog may be inactive
		[ ] SelectFile.SetActive()
		[ ] SelectFile.OK.Click()
		[ ] LogError("File {sLotFileName} could not be found or read when importing LSPs!")
		[ ] ImportReagentLotSpecificPa.Cancel.Click()
		[ ] //Close the Reagent Lot Specific Parameters dialog when done.
		[ ] ReagentLotSpecificParameter.CloseButton.Click()
	[ ] 
	[ ] //Duplicate lot or or wrong assay selected...
	[ ] sleep(1)
	[-] if ImportReagentLotSpecificPa.Exists()
		[ ] 
		[-] if ImportReagentLotSpecificPa.DuplicateLotSpecificParamet.Exists()
			[ ] LogWarning("This reagent lot is already found in the GX system for {sLotFileName}")
			[ ] 
		[-] if ImportReagentLotSpecificPa.AssayMismatchText.Exists()
			[ ] LogError("GXR file {sLotFileName} specified does not match the currently selected assay ")
			[ ] 
		[ ] //Confirm either of the above error messages  
		[-] if ImportReagentLotSpecificPa.exists()
			[ ] ImportReagentLotSpecificPa.OK.Click()
		[ ] //Close the Reagent Lot Specific Parameters dialog when done.
		[-] if ReagentLotSpecificParameter.exists()
			[ ] ReagentLotSpecificParameter.CloseButton.Click()
		[ ] 
		[ ] 
[ ] 
[+] SelectAssayFromList(STRING sAssayName)
	[ ] // Finds the cell containing the specified assay name and then highlights it
	[ ] TABLECELL tcCell
	[ ] 
	[ ] GeneXpert®DxSystem.SetActive( )
	[ ] 
	[ ] // Find the assay in the list of active assays and click the assay name 
	[-] do
		[ ] tcCell = GeneXpert®DxSystem.Assay.FindCell(sAssayName) 
		[ ] GeneXpert®DxSystem.Assay.ClickCell (tcCell)
	[-] except
		[ ] LogError("{sAssayName} was not found in the list of assays in the Define Assays workspace.")
	[ ] 
[ ] 
[ ] 
