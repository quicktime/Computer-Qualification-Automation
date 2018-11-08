[ ] use "..\/MasterFrame.inc"
[ ] use "..\constants\Constants.inc"
[ ] use "..\types\DefineAssaysTypes.inc"
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
		[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ComCepheidGenexpertUiUtil.SetText(Str(lrThreshold[i],4,1))
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
			[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {i,13} )
			[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.JavaxSwingJComboBox.Select(liInvalidBias[i])
		[ ] 
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
	[-] switch iNumAnalytes
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
[-] ImportAssay(STRING sAssayImportFileName)
	[ ] GeneXpert®DxSystem.SetActive( )
	[ ] GeneXpert®DxSystem.Import.Click()
	[ ] ImportAssay.SetActive( )
	[ ] ImportAssay.LookIn.Select( sAssayImportFileName )
	[ ] ImportAssay.Import.Click()
	[ ] sleep(1)
	[-] if ImportAssay.Exists()
		[ ] ImportAssay.OK.Click()
	[ ] 
[ ] 
[ ] // This function will take as input a filename with the .gxa extension and import this assay into the GX database
[+] ImportLot(STRING sLotFileName)
	[ ] GeneXpert®DxSystem.SetActive( )
	[ ] GeneXpert®DxSystem.Lot.Click()
	[ ] ReagentLotSpecificParameter.SetActive( )
	[ ] ReagentLotSpecificParameter.Import.Click()
	[ ] ImportReagentLotSpecificPa.SetActive( )
	[ ] ImportReagentLotSpecificPa.LookIn.Select(sLotFileName)
	[ ] ImportReagentLotSpecificPa.Open.Click()
	[ ] sleep(1)
	[-] if ImportReagentLotSpecificPa.Exists()
		[ ] ImportReagentLotSpecificPa.OK.Click()
[ ] 
[+] SelectAssayFromList(STRING sAssayName)
	[ ] // 
	[ ] // Variables
	[ ] //
	[ ] TABLECELL tcCell
	[ ] 
	[ ] GeneXpert®DxSystem.SetActive( )
	[ ] 
	[ ] // Find the assay in the list of active assays and click the assay name 
	[ ] tcCell = GeneXpert®DxSystem.Assay.FindCell(sAssayName) 
	[ ] GeneXpert®DxSystem.Assay.ClickCell (tcCell)
	[ ] 
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
