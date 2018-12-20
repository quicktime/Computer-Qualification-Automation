[ ] use "..\..\Common Libraries ADS\MasterUseStmtsADS.inc"
[ ] 
[ ] // Appendition() is used for dynamically changing locators that use [ROW]
[ ] // Apply Appendition() to any function in which multiple rows with the same locator are used
[-] STRING Appendition(INT iRow)
	[ ] STRING sAppendition
	[ ] STRING sRow = str(iRow)
	[-] if iRow == 1
		[ ] sAppendition = ""
	[-] else
		[ ] sAppendition = "[" + sRow + "]"
	[ ] return sAppendition
[ ] 
[ ] // Used to define new analytes
[-] DefineAnalyte(STRING sName, STRING sReporter, STRING sUsage, INT iRow)
	[ ] STRING sAppendition = Appendition(iRow)
	[ ] 
	[ ] ADK.Web.Browser.AnalyteSettings_add.Click()
	[ ] print("Adding another analyte")
	[ ] ADK.Web.Browser.Find("//INPUT[@id='analyteSettings_name*']" + sAppendition).SetText(sName) // name
	[ ] print("Setting name")
	[ ] ADK.Web.Browser.Find("//SELECT[@id='analyteSettings_repo*']" + sAppendition).Select(sReporter) // reporter
	[ ] print("Setting reporter")
	[ ] ADK.Web.Browser.Find("//SELECT[@id='analyteSettings_usag*']" + sAppendition).Select(sUsage) // usage
	[ ] print("Setting usage")
[ ] 
[ ] // Used to define targets for an analyte
[ ] // Use this function after all analytes are defined
[+] DefineTarget(INT iRow, INT iTarget)
	[ ] STRING sAppendition = Appendition(iRow)
	[ ] STRING sTarget = str(iTarget)
	[ ] STRING sLocator = Stuff("//INPUT[@id='editTargets_check_0']", 32, 1, sTarget)
	[ ] 
	[ ] ADK.Web.Browser.Find("//BUTTON[@id='analyteSettings_edit*']" + sAppendition).Click()
	[ ] ADK.Web.Browser.Find(sLocator).Select(1)
	[ ] ADK.Web.Browser.OkButton.Click()
[ ] 
[ ] // Changes Curve Fit settings for a single analyte
[-] CurveFitSettings(BOOLEAN useCurveFit, BOOLEAN useCrosstalk, BOOLEAN startBkgnd, STRING startIndex, BOOLEAN endData, STRING endIndex, STRING minShape, STRING maxShape, STRING maxNRSE, STRING maxSlope, int iRow)
	[ ] STRING sRow = str(iRow)
	[ ] STRING sUseCurveFit  = Stuff("//INPUT[@id='curveFitSettings_useCurveFit_0']", 43, 1, sRow)
	[ ] STRING sUseCrosstalk = Stuff("//TD[@ng-class='??td-sorted?: $paren*']//INPUT[@id='curveFitSettings_useCurveFitOnCrosstalk_0']", 93, 1, sRow)
	[ ] STRING sStartBkgnd   = Stuff("//TD[@ng-class='??td-sorted?: $paren*']//INPUT[@id='curveFitSettings_useCurveFitStartBackground_0']", 97, 1, sRow)
	[ ] STRING sStartIndex   = Stuff("//INPUT[@id='curveFitSettings_curveFitStartIndex_0']", 50, 1, sRow)
	[ ] STRING sEndData      = Stuff("//INPUT[@id='curveFitSettings_useCurveFitEndData_0']", 50, 1, sRow)
	[ ] STRING sEndIndex     = Stuff("//INPUT[@id='curveFitSettings_curveFitEndIndex_0']", 48, 1, sRow)
	[ ] STRING sMinShape     = Stuff("//INPUT[@id='curveFitSettings_curveFitMinShapeFactor_0']", 54, 1, sRow)
	[ ] STRING sMaxShape     = Stuff("//INPUT[@id='curveFitSettings_curveFitMaxShapeFactor_0']", 54, 1, sRow)
	[ ] STRING sMaxNRSE      = Stuff("//INPUT[@id='curveFitSettings_curveFitMaxNrse_0']", 47, 1, sRow)
	[ ] STRING sMaxSlope     = Stuff("//INPUT[@id='curveFitSettings_curveFitMaxSlopeVsRatio_0']", 55, 1, sRow)
	[ ] 
	[ ] // Use Curve Fit
	[-] if useCurveFit
		[ ] ADK.Web.Browser.Find(sUseCurveFit).Select(1)
	[-] else
		[ ] ADK.Web.Browser.Find(sUseCurveFit).Select(2)
		[ ] return
	[ ] 
	[ ] // On Crosstalk
	[-] if useCrosstalk
		[ ] ADK.Web.Browser.Find(sUseCrosstalk).Select(1)
	[-] else
		[ ] ADK.Web.Browser.Find(sUseCrosstalk).Select(2)
	[ ] 
	[ ] // Start Bkgnd
	[-] if startBkgnd
		[ ] ADK.Web.Browser.Find(sStartBkgnd).Select(1)
	[-] else
		[ ] ADK.Web.Browser.Find(sStartBkgnd).Select(2)
		[ ] // Start Index
		[ ] ADK.Web.Browser.Find(sStartIndex).SetText(startIndex)
	[ ] 
	[ ] // End Data
	[-] if endData
		[ ] ADK.Web.Browser.Find(sEndData).Select(1)
	[-] else
		[ ] ADK.Web.Browser.Find(sEndData).Select(2)
		[ ] // End Index
		[ ] ADK.Web.Browser.Find(sEndIndex).SetText(endIndex)
	[ ] 
	[ ] // Min Shape
	[ ] ADK.Web.Browser.Find(sMinShape).SetText(minShape)
	[ ] 
	[ ] // Max Shape
	[ ] ADK.Web.Browser.Find(sMaxShape).SetText(maxShape)
	[ ] 
	[ ] // Max NRSE
	[ ] ADK.Web.Browser.Find(sMaxNRSE).SetText(maxNRSE)
	[ ] 
	[ ] // Max Slope to VS Ratio
	[ ] ADK.Web.Browser.Find(sMaxSlope).SetText(maxSlope)
[ ] 
[ ] // Edits Result Analysis settings for a single analyte
[+] ResultAnalysisSettings(STRING mtfu, STRING validMinCycle, STRING validMaxCycle, BOOLEAN useEndPt, STRING endPtMin, STRING peakHeightMin, STRING scalingFactor, STRING deltaCtEfficiency, INT iRow)
	[ ] STRING sRow = str(iRow)
	[ ] STRING sMTFU              = Stuff("//INPUT[@id='resultAnalysisSettings_ctThresholdValue_0']", 54, 1, sRow)
	[ ] STRING sValidMinCycle     = Stuff("//INPUT[@id='resultAnalysisSettings_validMin_0']", 46, 1, sRow)
	[ ] STRING sValidMaxCycle     = Stuff("//INPUT[@id='resultAnalysisSettings_validMax_0']", 46, 1, sRow)
	[ ] STRING sUseEndPt          = Stuff("//INPUT[@id='resultAnalysisSettings_useEndpoint_0']", 49, 1, sRow)
	[ ] STRING sEndPtMin          = Stuff("//INPUT[@id='resultAnalysisSettings_endPtThreshold_0']", 52, 1, sRow)
	[ ] STRING sPeakHeightMin     = Stuff("//INPUT[@id='resultAnalysisSettings_peakHeightMin_0']", 51, 1, sRow)
	[ ] STRING sScalingFactorCell = Stuff("//TD[@id='resultAnalysisSettings_scalingFactor_cell_0']", 53, 1, sRow)
	[ ] STRING sScalingFactor     = Stuff("//INPUT[@id='resultAnalysisSettings_scalingFactor_0']", 51, 1, sRow)
	[ ] STRING sDeltaCtCell       = Stuff("//TD[@id='resultAnalysisSettings_deltaCtEfficiency_cell_0']", 57, 1, sRow)
	[ ] STRING sDeltaCtEfficiency = Stuff("//INPUT[@id='resultAnalysisSettings_deltaCtEfficiency_0']", 55, 1, sRow)
	[ ] 
	[ ] // MTFU
	[ ] ADK.Web.Browser.Find(sMTFU).SetText(mtfu)
	[ ] 
	[ ] // Valid Min Cycle
	[ ] ADK.Web.Browser.Find(sValidMinCycle).SetText(validMinCycle)
	[ ] 
	[ ] // Valid Max Cycle
	[ ] ADK.Web.Browser.Find(sValidMaxCycle).SetText(validMaxCycle)
	[ ] 
	[ ] // Use End Pt
	[-] if useEndPt
		[ ] ADK.Web.Browser.Find(sUseEndPt).Select(1)
		[ ] // End Pt Min
		[ ] ADK.Web.Browser.Find(sEndPtMin).SetText(endPtMin)
	[-] else
		[ ] ADK.Web.Browser.Find(sUseEndPt).Select(2)
	[ ] 
	[ ] // Peak Height Min
	[ ] 
	[ ] // Scaling Factor
	[-] if ADK.Web.Browser.Find(sScalingFactorCell).GetText() == "NA"
		[ ] 
	[-] else
		[ ] ADK.Web.Browser.Find(sScalingFactor).SetText(scalingFactor)
	[ ] 
	[ ] // Delta Ct Efficiency
	[-] if ADK.Web.Browser.Find(sDeltaCtCell).GetText() == "NA"
		[ ] 
	[-] else
		[ ] ADK.Web.Browser.Find(sDeltaCtEfficiency).SetText(deltaCtEfficiency)
