[ ] use "..\..\Common Libraries\MasterUseStmts.inc"
[ ] 
[ ] // use "..\/MasterFrame.inc"
[ ] // use "..\constants\Constants.inc"
[ ] // use "..\types\DBTypes.inc"
[ ] 
[ ] // This function will select the given Sample ID fromt he View Another Test dialog and make it active in the View Results screen
[+] //  SelectTest (STRING sSampleID)
	[ ] // TABLECELL tcCell
	[ ] // INTEGER i = 0
	[ ] // STRING sGUISampleID
	[ ] // 
	[ ] // GeneXpert®DxSystem.SetActive( )
	[ ] // GeneXpert®DxSystem.ViewTest.Click()
	[ ] // SelectTestToBeViewed.SetActive( )
	[ ] // 
	[ ] // // tcCell = SelectTestToBeViewed1.TestsSinceLaunch.FindCell (sSampleID)
	[ ] // tcCell = SelectTestToBeViewed.ComCepheidGenexpertUiPanel.FindCell(sSampleID)
	[ ] // SelectTestToBeViewed.ComCepheidGenexpertUiPanel.SetFocusCell (tcCell)
	[-] // // for (i = 1; i < SelectTestToBeViewed.ComCepheidGenexpertUiPanel.GetRowCount(); i++)
		[ ] // // SelectTestToBeViewed.ComCepheidGenexpertUiPanel.SetFocusCell({i,1})
		[ ] // // sGUISampleID = SelectTestToBeViewed.ComCepheidGenexpertUiPanel.GetCellValue({i,1})
		[ ] // // print( "This is the value from the GUI:  {sGUISampleID}")
		[-] // // if sSampleID == sGUISampleID
			[ ] // // break
	[ ] // // 
	[ ] // // SelectTestToBeViewed.ComCepheidGenexpertUiPanel.SetFocusRow(i)
	[ ] // // Click [OK] button
	[ ] // SelectTestToBeViewed.OK.Click(  )
	[ ] // // Go back to the main screen
	[ ] // GeneXpert®DxSystem.SetActive( )
	[ ] // // GeneXpert®DxSystem.UserNone.OtherSampleType2.JavaxSwingJSplitPane1.Views3.Select( "Result View" )
	[ ] // 
[ ] // 
[+] // SelectTestBD(STRING sSampleID)
	[ ] // // This function will select the given Sample ID from the View Another Test dialog and make it active in the View Results screen
	[ ] // TABLECELL tcCell
	[ ] // GeneXpert®DxSystem.SetActive( )
	[ ] // GeneXpert®DxSystem.ViewTest.Click()
	[ ] // SelectTestToBeViewed.SetActive( )
	[ ] // tcCell = SelectTestToBeViewed.ComCepheidGenexpertUiPanel.FindCell (sSampleID)
	[ ] // SelectTestToBeViewed.ComCepheidGenexpertUiPanel.SetFocusCell (tcCell)
	[ ] // SelectTestToBeViewed.OK.Click(  )
	[ ] // // Go back to the main screen
	[ ] // GeneXpert®DxSystem.SetActive( )
[ ] // 
[ ] // // This function will retreive all of the tests included in the archive file name that is passed into the fucntion
[+] // RetrieveTestArchiveFile(STRING sTestArchiveFileName)
	[ ] // GeneXpertDx.SetActive( )
	[ ] // GeneXpertDx.DataManagement.RetrieveTest.Pick()
	[ ] // Open.SetActive( )
	[ ] // Open.LookIn1.Select(sTestArchiveFileName )
	[ ] // Open.Open.Click()
	[ ] // sleep(1)
	[-] // if RetrieveTestS.Exists(2)
		[ ] // RetrieveTestS.OK.Click()
		[ ] // SelectTestSToBeRetrieved.SetActive( )
		[ ] // SelectTestSToBeRetrieved.Cancel.Click()
		[ ] // GeneXpertDx.SetActive( )
	[-] // else
		[ ] // SelectTestSToBeRetrieved.SetActive( )
		[ ] // SelectTestSToBeRetrieved.HtmlCenterSelectAllHtml.Click()
		[ ] // SelectTestSToBeRetrieved.OK.Click()
		[ ] // RetrieveTestS.SetActive( )
		[ ] // RetrieveTestS.Proceed.Click()
		[ ] // sleep(3)
		[ ] // RetrieveTestS.SetActive( )
		[ ] // RetrieveTestS.OK.Click()
		[ ] // GeneXpertDx.SetActive( )
	[ ] // 
[ ] // 
[ ] // // This function saves the detail version of a test report using the optionally provided filename
[-] SaveDetailTestReport(STRING sDetailTestReportFileName optional)
	[ ] GeneXpertDx.ReportButton.Click()
	[ ] GeneXpertDx.TestReportWorkspace.SetActive( )
	[ ] GeneXpertDx.TestReportWorkspace.GenerateReportFileButton.Click()
	[-] if sDetailTestReportFileName != NULL
		[ ] GeneXpertDx.GenerateReportFileWorkspace.FileNameTextField.SetText( sDetailTestReportFileName )
		[ ] 
	[ ] GeneXpertDx.GenerateReportFile.Save.Click()
	[ ] // Added by Steve 2/3/2011 to deal with the Replace File? dialog
	[-] if GeneXpertDx.ReplaceFile.Exists(2)
		[ ] GeneXpertDx.ReplaceFile.Yes.Click()
	[ ] 
	[ ] GeneXpertDx.TestReportWorkspace.SetActive( )
	[ ] GeneXpertDx.TestReportWorkspace.CloseButton.Click()
	[ ] 
[ ] 
[ ] // This function saves the detail version of a export using the optionally provided filename
[ ] // The stuff function is to change the default filename so that it retains the filename and then places '...-detail.csv' at the end
[-] SaveDetailExport(STRING sDetailExportFileName optional)
	[ ] // 
	[ ] // Variables
	[ ] // 
	[ ] STRING sFileName = ''
	[ ] 
	[ ] GeneXpertDx.Export.Click()
	[-] if GeneXpertDx.ExportDataDialog.Exists(5)
		[ ] GeneXpertDx.ExportDataDialog.SetActive( )
	[ ] GeneXpertDx.ExportDataDialog.ExportButton.Click()
	[-] if GeneXpertDx.ResultExportDialog.Exists(5)
		[ ] GeneXpertDx.ResultExportDialog.SetActive( )
	[-] if sDetailExportFileName != NULL
		[ ] GeneXpertDx.ResultExportDialog.FileNameTextField.SetText(sDetailExportFileName)
	[-] else
		[ ] sFileName = GeneXpertDx.ResultExportDialog.FileNameTextField.Text
		[ ] sFileName = Stuff(sFileName, LEN(sFileName) - 3, 0, "-detail")
		[ ] GeneXpertDx.ResultExportDialog.FileNameTextField.SetText(sFileName)
		[ ] // print("This is the modified Export FileName: {sFileName}")
		[ ] 
	[ ] GeneXpertDx.ResultExportDialog.SaveButton.Click()
	[ ] // Added by Steve 2/3/2011 to deal with the Replace File? dialog
	[-] if GeneXpertDx.ReplaceFile.Exists(2)
		[ ] GeneXpertDx.ReplaceFile.Yes.Click()
	[ ] 
	[ ] GeneXpertDx.ExportDataDialog.SetActive( )
	[ ] GeneXpertDx.ExportDataDialog.CancelButton.Click()
	[ ] 
[ ] 
[ ] // This function saves the basic version of a test report
[-] SaveBasicTestReport()
	[ ] // GeneXpertDx.Click (1, 233, 674)
	[ ] GeneXpertDx.ReportButton.Click()
	[-] // if AdobeReaderWindow.Exists(10)
		[ ] // AdobeReaderWindow.SetActive ()
	[ ] // // AdobeReader.TypeKeys("<Ctrl-Q>")
	[-] // if AdobeReaderWindow.Exists(5)
		[-] // do
			[ ] // AdobeReaderWindow.Close()
		[ ] // except
	[ ] AdobeReaderWindow.TypeKeys("<ALT+F4>")
	[ ] sleep(10)
	[ ] GeneXpertDx.SetActive()
[ ] 
[ ] // This function saves the basic version of a export using the optionally provided filename
[ ] // The stuff function is to change the default filename so that it retains the filename and then places '...-basic.csv' at the end
[-] SaveBasicExport(STRING sDetailExportFileName optional)
	[ ] // 
	[ ] // Variables
	[ ] // 
	[ ] STRING sFileName = ''
	[ ] 
	[ ] GeneXpertDx.SetActive()
	[ ] GeneXpertDx.Export.Click()
	[ ] GeneXpertDx.ResultExportDialog.SetActive( )
	[-] if sDetailExportFileName != NULL
		[ ] GeneXpertDx.ResultExportDialog.FileNameTextField.SetText(sDetailExportFileName)
	[-] else
		[ ] sFileName = GeneXpertDx.ResultExportDialog.FileNameTextField.Text
		[ ] sFileName = Stuff(sFileName, LEN(sFileName) - 3, 0, "-basic")
		[ ] GeneXpertDx.ResultExportDialog.FileNameTextField.SetText(sFileName)
		[ ] // print("This is the modified Export FileName: {sFileName}")
		[ ] 
	[ ] GeneXpertDx.ResultExportDialog.SaveButton.Click()
	[ ] // Added by Steve 2/3/2011 to deal with the Replace File? dialog
	[-] if GeneXpertDx.ReplaceFile.Exists(2)
		[ ] GeneXpertDx.ReplaceFile.Yes.Click()
	[ ] 
	[ ] GeneXpertDx.SetActive()
	[ ] 
[ ] // 
[ ] // // This function takes the expected values for Sample ID, Status, Assay Name (Right and Left panel verifications), 
[ ] // // Test Result Text, Test Result Color & Test Result Font Color and verifies them against the GUI 
[-] // VerifyTestResultMainBD (STRING sResultText, STRING sSampleID)
	[ ] // //
	[ ] // // Constants
	[ ] // //
	[ ] // const PAD = '          '
	[ ] // const ENDTABLETAG = '</table>'
	[ ] // //
	[ ] // // Variable declarations
	[ ] // //
	[ ] // LIST OF STRING lsHTMLTestResult
	[ ] // INTEGER iPos = 0
	[ ] // 
	[ ] // // Added to deal with > and < characters for a Quant-1 test result 5/7/12
	[ ] // sResultText = StrTran(sResultText, ">", "&gt;")
	[ ] // sResultText = StrTran(sResultText, "<", "&lt;")
	[ ] // // End of added code 5/7/12
	[ ] // 
	[ ] // // Verify information on the Test Result tab i.e. Assay Name, Result Text & Result color
	[ ] // // Result Text and Result Color are part of a series of html tags.
	[ ] // // HTML tag that contains the result color and the result font color looks like below
	[ ] // // e.g.    tr.row0 { color: #FFFFFF; background-color: #00E600 }
	[ ] // 
	[ ] // // Changed to recognize the new field name changed for GX Dx 4.7 for the Test Result on the View Results screen 10/22/2014
	[ ] // // lsHTMLTestResult = GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.TestResult.JavaxSwingJEditorPane.GetMultiText()
	[ ] // lsHTMLTestResult = GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.Messages.JavaxSwingJTextArea.GetMultiText ()
	[ ] // 
	[ ] // // ListPrint(lsHTMLTestResult)
	[ ] // // print()
	[ ] // 
	[-] // if sResultText != NULL
		[ ] // sResultText = PAD + sResultText 
		[ ] // iPos = ListFind(lsHTMLTestResult, sResultText)
		[-] // if iPos == 0
			[ ] // LogError("Result text is not valid for sample: {sSampleID}")
			[ ] // print("Expected Result Text: {sResultText}")
			[ ] // print("Actual Result Text:  <Not Valid>")
			[ ] // print("----------------------------------------------------------")
		[-] // else
			[ ] // print("Expected Result Text: {sResultText}")
			[ ] // print("Actual Result Text: { lsHTMLTestResult[iPos]}")
			[ ] // print("----------------------------------------------------------")
		[ ] // 
	[-] // else
		[ ] // iPos = ListFind(lsHTMLTestResult, ENDTABLETAG)
		[-] // if iPos != 0
			[ ] // LogError("Result text is not valid for sample: {sSampleID}")
			[ ] // ListPrint(lsHTMLTestResult)
		[ ] // print("Expected Result Text: NULL")
		[ ] // print("Actual Result Text: NULL")
		[ ] // print("----------------------------------------------------------")
		[ ] // 
[ ] // 
[+] // GetGUITargets(out LIST OF GUI_ANALYTES lrGUIAnalytes)
	[ ] // // Assume that the sample ID is displayed on the View Results screen
	[ ] // // and that the Universal Analysis Settings is displayed in the lower pane
	[ ] // 
	[ ] // INTEGER i = 0
	[ ] // 
	[ ] // GUI_ANALYTES rGUIAnalytes = {...}
	[ ] // 
	[ ] // GeneXpertDxSystem.SetActive()
	[-] // for (i = 1; i <= GeneXpertDxSystem.UserNone.SampleID2.JavaxSwingJSplitPane2.Views4.ComCepheidGenexpertUiPanel.GetRowCount(); i++)
		[ ] // GeneXpertDxSystem.SetActive( )
		[ ] // rGUIAnalytes.sAnalyteName = GeneXpertDxSystem.UserNone.SampleID2.JavaxSwingJSplitPane2.Views4.ComCepheidGenexpertUiPanel.GetCellValue({i,1})
		[ ] // rGUIAnalytes.sUsage = GeneXpertDxSystem.UserNone.SampleID2.JavaxSwingJSplitPane2.Views4.ComCepheidGenexpertUiPanel.GetCellValue({i,3})
		[ ] // rGUIAnalytes.sTargetNum = GeneXpertDxSystem.UserNone.SampleID2.JavaxSwingJSplitPane2.Views4.ComCepheidGenexpertUiPanel.GetCellValue({i,4})
		[ ] // ListAppend(lrGUIAnalytes, rGUIAnalytes)
	[ ] // 
[ ] // 
[+] // GetControlsTargets(LIST OF GUI_ANALYTES lrGUIAnalytes, out LIST OF CONTROL_TARGETS lrControlsTargets)
	[ ] // 
	[ ] // INTEGER i = 0, j = 0, k = 0
	[ ] // CONTROL_TARGETS rControlTargets = {...}
	[ ] // 
	[-] // for (i = 1; i <= ListCount(lrGUIAnalytes); i++)
		[-] // if lrGUIAnalytes[i].sUsage == IC || lrGUIAnalytes[i].sUsage == SPC
			[ ] // j = 1
			[-] // while (GetField(lrGUIAnalytes[i].sTargetNum, COMMA,j) != '')
				[ ] // rControlTargets.sControlName = lrGUIAnalytes[i].sAnalyteName
				[ ] // rControlTargets.sControlUsage = lrGUIAnalytes[i].sUsage
				[-] // for (k = 1; k <= ListCount(lrGUIAnalytes); k++)
					[-] // if lrGUIAnalytes[k].sTargetNum == GetField(lrGUIAnalytes[i].sTargetNum,COMMA,j)
						[ ] // rControlTargets.sTargetName = lrGUIAnalytes[k].sAnalyteName
						[ ] // ListAppend(lrControlsTargets, rControlTargets)
						[ ] // break
				[ ] // j++
			[-] // if StrPos(COMMA, lrGUIAnalytes[i].sTargetNum) == 0
				[ ] // rControlTargets.sControlName = lrGUIAnalytes[i].sAnalyteName
				[ ] // rControlTargets.sControlUsage = lrGUIAnalytes[i].sUsage
				[-] // for (k = 1; k <= ListCount(lrGUIAnalytes); k++)
					[-] // if lrGUIAnalytes[k].sTargetNum == GetField(lrGUIAnalytes[i].sTargetNum,COMMA,j)
						[ ] // rControlTargets.sTargetName = lrGUIAnalytes[k].sAnalyteName
						[ ] // ListAppend(lrControlsTargets, rControlTargets)
						[ ] // 
				[ ] // 
	[ ] // 
[ ] // 
[+] // DoRecalc()
	[ ] // // This function will do a recalc of the displayed sample ID. The recalc is actually done twice to set the assay values back to the original values
	[ ] // GeneXpertDxSystem.SetActive ()
	[ ] // // Click on the Result Analysis Settings tab in the lower panel of the View Results screen
	[ ] // // GeneXpertDxSystem.UserNone.SampleID.JavaxSwingJSplitPane2.Views.Select ("Result Analysis Settings")
	[ ] // GeneXpertDxSystem.UserNone.SampleID2.JavaxSwingJSplitPane2.Views4.Select ("Result Analysis Settings")
	[ ] // // Change the state of the Validate Optics with Curve Fitting checkbox
	[ ] // GeneXpertDxSystem.UserNone.SampleID2.JavaxSwingJSplitPane2.Views4.ValidateOpticDataWithCurve.Toggle()
	[ ] // // Save the changes to the test and the assay
	[ ] // GeneXpert®DxSystem.SaveChanges.Click ()
	[ ] // Save.SetActive( )
	[ ] // Save.Yes.Click()
	[ ] // RecalculateTests.SetActive( )
	[ ] // RecalculateTests.OK.Click()
	[ ] // sleep(5)
	[ ] // GeneXpert®DxSystem.SetActive( )
	[ ] // // Do the save of the test and assay again to set it back to it's original value
	[ ] // GeneXpertDxSystem.UserNone.SampleID2.JavaxSwingJSplitPane2.Views4.ValidateOpticDataWithCurve.Toggle()
	[ ] // // Save the changes to the test and the assay
	[ ] // GeneXpert®DxSystem.SaveChanges.Click()
	[ ] // Save.SetActive( )
	[ ] // Save.Yes.Click()
	[ ] // RecalculateTests.SetActive( )
	[ ] // RecalculateTests.OK.Click()
	[ ] // GeneXpert®DxSystem.SetActive( )
	[ ] // GeneXpertDxSystem.UserNone.SampleID2.JavaxSwingJSplitPane2.Views4.Select( "Universal Analysis Settings ")
	[ ] // 
[ ] // 
[+] // ValidateResults(LIST OF CONTROL_INTERPRETATION lrAnalyteInterp, LIST OF CONTROL_TARGETS lrControlsTargets, INTEGER iPos, STRING sControlType)
	[ ] // // This function will validate the Control Result column(s) (SPC_Result, IC_Result) in the analyte_result database table
	[ ] // 
	[ ] // INTEGER i = 0, j = 0
	[ ] // STRING sTargetName = ' '
	[ ] // STRING sControlNameForTarget = ' '
	[ ] // STRING sControlInterpretation = ' '
	[ ] // BOOLEAN bAtLeast1TargetPOS = false, bTargetFound = false, bAtLeast1ControlFAIL = false
	[ ] // 
	[ ] // // Determine if this record is for a control or a target
	[-] // if lrAnalyteInterp[iPos].sUsage == TARGET
		[-] // switch (lrAnalyteInterp[iPos].sInterpretation)
			[-] // case POS // For the case of a POS target the IC_Result and the SPC_Result columns will be NA
				[-] // if sControlType == SPC
					[ ] // DetermineControlResult(NA, lrAnalyteInterp[iPos].sSPCResult, sControlType, lrAnalyteInterp[iPos].sAnalyteName)
				[-] // else if sControlType == IC
					[ ] // DetermineControlResult(NA, lrAnalyteInterp[iPos].sICResult, sControlType, lrAnalyteInterp[iPos].sAnalyteName)
			[-] // case NEG // For the case of a target that has a NEG interpretation, then we must find all of the controls for this target to see if 
				[ ] // // any of them have a POS interpretation. If at least 1 target is POS then the targets' control result will be NA
				[ ] // // if no targets have a POS interpretation then the targets control result will equal the targets' interpretation
				[ ] // // Find the control for this target
				[ ] // sControlNameForTarget = ''
				[ ] // sControlInterpretation = ''
				[-] // for (i = 1; i <= ListCount(lrControlsTargets); i++)
					[-] // if lrAnalyteInterp[iPos].sAnalyteName == lrControlsTargets[i].sTargetName && lrControlsTargets[i].sControlUsage == sControlType
						[ ] // sControlNameForTarget = lrControlsTargets[i].sControlName
						[ ] // sControlInterpretation = FindControlInterpretation(sControlNameForTarget, lrAnalyteInterp)
				[-] // if sControlNameForTarget == ''
					[ ] // // This target is not associated to a control of this type i.e. IC or SPC
					[-] // if sControlType == SPC
						[ ] // DetermineControlResult(NA, lrAnalyteInterp[iPos].sSPCResult, sControlType, lrAnalyteInterp[iPos].sAnalyteName)
					[-] // else if sControlType == IC
						[ ] // DetermineControlResult(NA, lrAnalyteInterp[iPos].sICResult, sControlType, lrAnalyteInterp[iPos].sAnalyteName)
				[-] // else
					[ ] // // Go back through the list of Control - Targets and see if any of the targets assigned to this control  are POS
					[ ] //  bAtLeast1TargetPOS = false
					[-] // for (i = 1; i<= ListCount(lrControlsTargets) && bAtLeast1TargetPOS == false; i++)
						[-] // if lrControlsTargets[i].sControlName == sControlNameForTarget  && lrControlsTargets[i].sControlUsage == sControlType
							[ ] // sTargetName = lrControlsTargets[i].sTargetName
							[ ] // bTargetFound = true
							[-] // if bTargetFound 
								[-] // for (j = 1; j <= ListCount(lrAnalyteInterp) && bAtLeast1TargetPOS == false; j++)
									[-] // if lrAnalyteInterp[j].sAnalyteName == sTargetName
										[-] // if lrAnalyteInterp[j].sInterpretation == POS
											[ ] // bAtLeast1TargetPOS = true
											[-] // if sControlType == SPC
												[ ] // DetermineControlResult(NA, lrAnalyteInterp[iPos].sSPCResult, sControlType, lrAnalyteInterp[iPos].sAnalyteName)
											[-] // else if sControlType == IC
												[ ] // DetermineControlResult(NA, lrAnalyteInterp[iPos].sICResult, sControlType, lrAnalyteInterp[iPos].sAnalyteName)
							[ ] // bTargetFound = false
					[-] // if bAtLeast1TargetPOS == false
						[ ] // // None of the target Interpretations is POS then the control result will equal the target interpretation
						[ ] // DetermineControlResult(sControlInterpretation, lrAnalyteInterp[iPos].sSPCResult, sControlType, lrAnalyteInterp[iPos].sAnalyteName)
			[-] // case NO_RESULT
				[-] // if sControlType == SPC
					[ ] // DetermineControlResult(NO_RESULT, lrAnalyteInterp[iPos].sSPCResult, sControlType, lrAnalyteInterp[iPos].sAnalyteName)
				[-] // else if sControlType == IC
					[ ] // DetermineControlResult(NO_RESULT, lrAnalyteInterp[iPos].sICResult, sControlType, lrAnalyteInterp[iPos].sAnalyteName)
			[-] // default
				[ ] // LogError("This Interpretation for  target  '{lrAnalyteInterp[iPos]}' is not correct")
				[ ] // print("----------------------------------------------------------")
		[ ] // 
	[-] // else if lrAnalyteInterp[iPos].sUsage == SPC || lrAnalyteInterp[iPos].sUsage == IC  // Row is for a control (SPC or IC) 
		[ ] // // Initialize variables
		[ ] // sTargetName = ''
		[ ] // sControlInterpretation = ''
		[ ] //  bAtLeast1TargetPOS = false
		[ ] // bTargetFound = false
		[ ] // // Go  through the list of Control - Targets and see if any of the targets assigned to this Control are POS
		[ ] // // Find all of the targets that are assigned to  this Control
		[-] // for (i = 1; i<= ListCount(lrControlsTargets) && bAtLeast1TargetPOS == false; i++)
			[-] // if lrControlsTargets[i].sControlName == lrAnalyteInterp[iPos].sAnalyteName && lrControlsTargets[i].sControlUsage == sControlType
				[ ] // sTargetName = lrControlsTargets[i].sTargetName
				[ ] // sControlInterpretation = lrAnalyteInterp[iPos].sInterpretation
				[ ] // bTargetFound = true
				[-] // if bTargetFound 
					[ ] // // Iterate through the list of results and find the target row that matches the target name found above get the interpretation
					[-] // for (j = 1; j <= ListCount(lrAnalyteInterp) && bAtLeast1TargetPOS == false; j++)
						[-] // if lrAnalyteInterp[ j ].sAnalyteName == sTargetName 
							[-] // if lrAnalyteInterp[ j ].sInterpretation == POS
								[ ] // bAtLeast1TargetPOS = true
								[-] // if sControlType == SPC
									[-] // if lrAnalyteInterp[iPos].sInterpretation == NO_RESULT
										[ ] // DetermineControlResult(NO_RESULT, lrAnalyteInterp[iPos].sSPCResult, sControlType, lrAnalyteInterp[iPos].sAnalyteName)
									[-] // else
										[ ] // DetermineControlResult(NA, lrAnalyteInterp[iPos].sSPCResult, sControlType, lrAnalyteInterp[iPos].sAnalyteName)
								[-] // else if sControlType == IC
									[-] // if lrAnalyteInterp[iPos].sInterpretation == NO_RESULT
										[ ] // DetermineControlResult(NO_RESULT, lrAnalyteInterp[iPos].sICResult, sControlType, lrAnalyteInterp[iPos].sAnalyteName)
									[-] // else
										[ ] // DetermineControlResult(NA, lrAnalyteInterp[iPos].sICResult, sControlType, lrAnalyteInterp[iPos].sAnalyteName)
			[ ] // bTargetFound = false
		[-] // if !bAtLeast1TargetPOS && sTargetName != ''
			[ ] // // None of the target Interpretations is POS; hence Control (SPC or IC) Result will equal  Interpretation for Control
			[-] // if sControlType == SPC
				[ ] // DetermineControlResult(sControlInterpretation, lrAnalyteInterp[iPos].sSPCResult, sControlType, lrAnalyteInterp[iPos].sAnalyteName)
			[-] // else if sControlType == IC
				[ ] // DetermineControlResult(sControlInterpretation, lrAnalyteInterp[iPos].sICResult, sControlType, lrAnalyteInterp[iPos].sAnalyteName)
		[-] // else
				[-] // if sTargetName == ''
					[ ] // // This target is not associated to a control of this type i.e. IC or SPC
					[-] // if sControlType == SPC
						[-] // if lrAnalyteInterp[iPos].sInterpretation == NO_RESULT
							[ ] // DetermineControlResult(NO_RESULT, lrAnalyteInterp[iPos].sSPCResult, sControlType, lrAnalyteInterp[iPos].sAnalyteName)
						[-] // else
							[ ] // DetermineControlResult(NA, lrAnalyteInterp[iPos].sSPCResult, sControlType, lrAnalyteInterp[iPos].sAnalyteName)
					[-] // else if sControlType == IC
						[-] // if lrAnalyteInterp[iPos].sInterpretation == NO_RESULT
							[ ] // DetermineControlResult(NO_RESULT, lrAnalyteInterp[iPos].sICResult, sControlType, lrAnalyteInterp[iPos].sAnalyteName)
						[-] // else
							[ ] // DetermineControlResult(NA, lrAnalyteInterp[iPos].sICResult, sControlType, lrAnalyteInterp[iPos].sAnalyteName)
[ ] // 
[+] // DetermineControlResult(STRING sExpected, STRING sActual,  STRING sControlType, STRING sAnalyteName)
	[ ] // // This function compares the actual and expected values for either the SPC_Result or IC_Result and displays an error if they are not equal
	[ ] // // and then prints the expected and the actual values. 
	[-] // if sControlType == SPC
		[-] // if sActual != sExpected
			[ ] // LogError("SPC Result for  '{sAnalyteName}' analyte is not correct")
		[ ] // print("This is the expected SPC Result: {sExpected} for target {sAnalyteName}")
		[ ] // print("This is the actual SPC Result: {sActual} for target {sAnalyteName}")
		[ ] // print("----------------------------------------------------------")
	[-] // else if sControlType == IC
		[-] // if sActual != sExpected
			[ ] // LogError("IC Result for  '{sAnalyteName}' analyte is not correct")
		[ ] // print("This is the expected IC Result: {sExpected} for target {sAnalyteName}")
		[ ] // print("This is the actual IC Result: {sActual} for target {sAnalyteName}")
		[ ] // print("----------------------------------------------------------")
[ ] // 
[+] // DetermineTargetResult(STRING sExpected, STRING sActual, STRING sAnalyteName)
	[ ] // // This function compares the actual and expected values for  the Target_Result and displays an error if they are not equal
	[ ] // // and then prints the expected and the actual values. 
	[-] // if sExpected != sActual
		[ ] // LogError("Target Result for:  '{sAnalyteName}' target is not correct")
	[ ] // print("This is the expected Target Result: {sExpected} for analyte  {sAnalyteName}")
	[ ] // print("This is the actual Target Result: {sActual} for analyte {sAnalyteName}")
	[ ] // print("----------------------------------------------------------")
[ ] // 
[+] // ValidateNoSPCResults(LIST OF CONTROL_INTERPRETATION lrAnalyteInterp, INTEGER iPos)
	[ ] // // If there are no SPCs for this assay then all of the SPC_Result column should be 'NA' or 'NO_RESULT' for all analytes
	[ ] // // Validate that all of the SPC Results are 'NA' or 'NO_RESULT' when there are no SPCs for this assay
	[ ] // 
	[-] // switch lrAnalyteInterp[iPos].sSPCResult
		[-] // case NA
			[ ] // print("This is the expected SPC Result: {NA} for analyte  {lrAnalyteInterp[iPos].sAnalyteName}")
			[ ] // print("This is the actual SPC Result: {lrAnalyteInterp[iPos].sSPCResult} for analyte {lrAnalyteInterp[iPos].sAnalyteName}")
			[ ] // print("----------------------------------------------------------")
		[-] // case NO_RESULT
			[ ] // print("This is the expected SPC Result: {NO_RESULT} for analyte  {lrAnalyteInterp[iPos].sAnalyteName}")
			[ ] // print("This is the actual SPC Result: {lrAnalyteInterp[iPos].sSPCResult} for analyte {lrAnalyteInterp[iPos].sAnalyteName}")
			[ ] // print("----------------------------------------------------------")
		[-] // default
			[ ] // LogError("SPC Result for:  '{lrAnalyteInterp[iPos].sAnalyteName}' analyte is not correct since there are no SPCs for this assay")
			[ ] // print("This is the expected SPC Result: either NA or NO_RESULT for analyte  {lrAnalyteInterp[iPos].sAnalyteName}")
			[ ] // print("This is the actual SPC Result: {lrAnalyteInterp[iPos].sSPCResult} for analyte {lrAnalyteInterp[iPos].sAnalyteName}")
			[ ] // print("----------------------------------------------------------")
[ ] // 
[+] // ValidateNoICResults(LIST OF CONTROL_INTERPRETATION lrAnalyteInterp, INTEGER iPos)
	[ ] // // If there are no ICs for this assay then all of the IC_Result column should be 'NA'  or 'NO_RESULT' for all analytes
	[ ] // // Validate that all of the IC Results are 'NA' or 'NO_RESULT' when there are no ICs for this assay
	[ ] // 
	[-] // switch lrAnalyteInterp[iPos].sICResult
		[-] // case NA
			[ ] // print("This is the expected IC Result: {NA} for analyte  {lrAnalyteInterp[iPos].sAnalyteName}")
			[ ] // print("This is the actual IC Result: {lrAnalyteInterp[iPos].sICResult} for analyte {lrAnalyteInterp[iPos].sAnalyteName}")
			[ ] // print("----------------------------------------------------------")
		[-] // case NO_RESULT
			[ ] // print("This is the expected IC Result: {NO_RESULT} for analyte  {lrAnalyteInterp[iPos].sAnalyteName}")
			[ ] // print("This is the actual IC Result: {lrAnalyteInterp[iPos].sICResult} for analyte {lrAnalyteInterp[iPos].sAnalyteName}")
			[ ] // print("----------------------------------------------------------")
		[-] // default
			[ ] // LogError("IC Result for:  '{lrAnalyteInterp[iPos].sAnalyteName}' analyte is not correct since there are no ICs for this assay")
			[ ] // print("This is the expected IC Result: either NA or NO_RESULT for analyte  {lrAnalyteInterp[iPos].sAnalyteName}")
			[ ] // print("This is the actual IC Result: {lrAnalyteInterp[iPos].sICResult} for analyte {lrAnalyteInterp[iPos].sAnalyteName}")
			[ ] // print("----------------------------------------------------------")
[ ] // 
[+] // ValidateAnalyteResults(LIST OF CONTROL_INTERPRETATION lrAnalyteInterp, LIST OF CONTROL_TARGETS lrControlsTargets, INTEGER iPos)
	[ ] // BOOLEAN bFailedControlFound = false
	[ ] // INTEGER i = 0, j = 0
	[ ] // STRING sControlNameForTarget = ' '
	[ ] // BOOLEAN bAtLeast1TargetPOS = false, bAtLeast1ControlFAIL = false
	[ ] // 
	[-] // switch (lrAnalyteInterp[iPos].sUsage)
		[-] // case SPC, IC
			[ ] // // The passed record is for a control (SPC or IC) then the target result = 'NA' or 'NO_RESULT'
			[-] // switch lrAnalyteInterp[iPos].sTargetResult
				[-] // case NA
					[ ] // print("This is the expected Target Result: {NA} for contol  {lrAnalyteInterp[iPos].sAnalyteName}")
					[ ] // print("This is the actual Target Result: {lrAnalyteInterp[iPos].sTargetResult} for control {lrAnalyteInterp[iPos].sAnalyteName}")
					[ ] // print("----------------------------------------------------------")
				[-] // case NO_RESULT
					[ ] // print("This is the expected Target Result: {NO_RESULT} for contol  {lrAnalyteInterp[iPos].sAnalyteName}")
					[ ] // print("This is the actual Target Result: {lrAnalyteInterp[iPos].sTargetResult} for control {lrAnalyteInterp[iPos].sAnalyteName}")
					[ ] // print("----------------------------------------------------------")
				[-] // default
					[ ] // LogError("Target Result for:  '{lrAnalyteInterp[iPos].sAnalyteName}' control is not correct")
					[ ] // print("This is the expected Target Result: either NA or NO_RESULT for contol  {lrAnalyteInterp[iPos].sAnalyteName}")
					[ ] // print("This is the actual Target Result: {lrAnalyteInterp[iPos].sTargetResult} for control {lrAnalyteInterp[iPos].sAnalyteName}")
					[ ] // print("----------------------------------------------------------")
		[-] // case TARGET
			[ ] // // If this record is for a target then if it's interpretation is POS then the target result is POS 
			[ ] // // else search for all of the controls that this target is associated to and see if 
			[ ] // // any of the associated targets are POS then target result = POS 
			[ ] // // else since all target interpretations are NEG if controls FAIL then the target result is INVALID else the target result == interpretation
			[ ] // 
			[ ] // // Initialize variables
			[ ] // bFailedControlFound = false
			[ ] // bAtLeast1TargetPOS = false
			[ ] // sControlNameForTarget = ' '
			[ ] // bAtLeast1ControlFAIL = false
			[-] // if lrAnalyteInterp[iPos].sInterpretation == POS
				[ ] // DetermineTargetResult(lrAnalyteInterp[iPos].sInterpretation, lrAnalyteInterp[iPos].sTargetResult, lrAnalyteInterp[iPos].sAnalyteName)
			[-] // else // Search for at least 1 POS for any of the targets associated to this targets' control(s)
				[-] // for (i = 1; i <= ListCount(lrControlsTargets) && !bAtLeast1TargetPOS; i++)
					[-] // if lrAnalyteInterp[iPos].sAnalyteName == lrControlsTargets[i].sTargetName
						[ ] // sControlNameForTarget = lrControlsTargets[i].sControlName
						[-] // for (j = 1; j <= ListCount(lrControlsTargets) && !bAtLeast1TargetPOS; j++)
							[-] // if lrControlsTargets[ j ].sControlName == sControlNameForTarget
								[-] // if FindControlInterpretation(lrControlsTargets[ j ].sTargetName, lrAnalyteInterp) == POS
									[ ] // bAtLeast1TargetPOS = true
									[ ] // DetermineTargetResult(lrAnalyteInterp[iPos].sInterpretation, lrAnalyteInterp[iPos].sTargetResult, lrAnalyteInterp[iPos].sAnalyteName)
				[-] // if !bAtLeast1TargetPOS 
					[ ] // // Hence all of the targets that are associated to this targets' control are NEG
					[ ] // // Search all of this targets' control for interpretation = FAIL if found then target result = INVALID else target result = interpretation
					[-] // for (i = 1; i <= ListCount(lrControlsTargets) && !bAtLeast1ControlFAIL; i++)
						[-] // if lrAnalyteInterp[iPos].sAnalyteName == lrControlsTargets[i].sTargetName
							[-] // if FindControlInterpretation(lrControlsTargets[i].sControlName, lrAnalyteInterp) == FAIL
								[ ] // bAtLeast1ControlFAIL = true
								[ ] // DetermineTargetResult(INVALID, lrAnalyteInterp[iPos].sTargetResult, lrAnalyteInterp[iPos].sAnalyteName)
					[-] // if !bAtLeast1ControlFAIL // All controls for the given target are PASS
						[ ] // DetermineTargetResult(lrAnalyteInterp[iPos].sInterpretation, lrAnalyteInterp[iPos].sTargetResult, lrAnalyteInterp[iPos].sAnalyteName)
		[-] // default
			[ ] // // This is an EC control so we will skip it
			[ ] // print("This record is for an EC Control; Analyte: {lrAnalyteInterp[iPos].sAnalyteName} will be skipped")
[ ] // 
[+] // STRING FindControlInterpretation(STRING sControlNameForTarget, LIST OF CONTROL_INTERPRETATION lrAnalyteInterp)
	[ ] // // This function searches the lrAnalyteInterp list and searches for the Control name and returns the control interpretation
	[ ] // // if the control name is not found then the function returns "Control <Control Name> Not Found" to the calling program
	[ ] // 
	[ ] // INTEGER i = 0
	[ ] // 
	[-] // for (i = 1; i <= ListCount(lrAnalyteInterp); i++)
		[-] // if lrAnalyteInterp[i].sAnalyteName == sControlNameForTarget
			[ ] // return lrAnalyteInterp[i].sInterpretation
	[ ] // 
	[ ] // return "Control " + sControlNameForTarget + " not found"
[ ] // 
[ ] // // 
[ ] // // System Configuration Functions
[ ] // //
[ ] // // This function creates a user based on the given User ID, Password and User Type
[+] // CreateUser(STRING sUserID, STRING sPassword, STRING sUserType)
	[ ] // UserAdministration.SetActive( )
	[ ] // UserAdministration.Add.Click()
	[ ] // AddUser.SetActive( )
	[ ] // AddUser.UserName.SetText( sUserID )
	[ ] // AddUser.Password.SetText (sPassword)
	[ ] // AddUser.ConfirmPassword.SetText (sPassword)
	[ ] // AddUser.UserType.Select( sUserType )
	[ ] // AddUser.OK.Click()
	[ ] // 
	[ ] // // Added code by Steve on 2/2/2011 to deal with the popup reminder for reactivation of an existing user with the same user ID
	[-] // if GeneXpert.Exists(2)
		[ ] // GeneXpert.OK.Click()
[ ] // 
[ ] // // This function logs into the GX Dx application based on the given User ID & Password
[+] // UserLogin(STRING sUserID, STRING sPassword)
	[ ] // GeneXpert®DxSystem.User.Login.Pick()
	[ ] // Login.SetActive( )
	[ ] // Login.UserName.SetText( sUserID )
	[ ] // Login.Password.SetText (sPassword)
	[ ] // Login.OK.Click()
	[ ] // GeneXpert®DxSystem.SetActive( )
	[ ] // 
[ ] // 
[ ] // // This function removes all user-defined users in the GX Dx database. Can't be used to delete the current (logged in) user
[+] // RemoveAllUsers()
	[ ] // GeneXpert®DxSystem.Setup.UserAdministration.Pick()
	[ ] // UserAdministration.SetActive( )
	[-] // while UserAdministration.JavaxSwingJTable.GetRowCount() > 0
		[ ] // UserAdministration.JavaxSwingJTable.ClickCell( {1,1} )
		[ ] // UserAdministration.Remove.Click()
		[ ] // UserAdministration.SetActive( )
	[ ] // UserAdministration.Close.Click()
	[ ] // 
[ ] // // This function creates the export filename based on the given information and the start time of the test (gotten from the GUI)
[ ] // // this function assumes that the start time is in MM/DD/YY order
[+] // GetExportFileName(STRING sSampleID, STRING sFileEnding, out STRING sFileName)
	[ ] // STRING sStartTime = ''
	[ ] // 
	[ ] // sFileName = ''
	[ ] // sStartTime = GeneXpertDxSystem.UserNone.HtmlDivAlignRightStart2.GetText()
	[ ] // // Convert the start time into the middle part of the export filename
	[ ] // sStartTime = StrTran(sStartTime, "/", ".")
	[ ] // sStartTime = StrTran(sStartTime, ":", ".")
	[ ] // sStartTime = StrTran(sStartTime, " ", "_")
	[ ] // // Create the filename based on the Sample ID + Start Time + File ending
	[ ] // // e.g. 76081538-rpt_2009.04.09_08.13.37-basic.csv
	[ ] // sFileName = sSampleID + '_20' + SubStr(sStartTime,7,2) + '.' + SubStr(sStartTime, 1,5) + '_' + SubStr(sStartTime,10,8)  + sFileEnding
	[ ] // print("The export filename is: {sFileName}")
[ ] // 
[ ] // // Set the "Print Test Report at end of Test" system configuration checkbox based on the value of the passed parameter
[+] // SetPrintTestReportatendofTest(BOOLEAN bPrintTestReport)
	[ ] // GeneXpert®DxSystem.Setup.SystemConfiguration.Pick()
	[ ] // SystemConfiguration.SetActive( )
	[-] // if bPrintTestReport 
		[ ] // SystemConfiguration.JavaxSwingJTabbedPane.PrintTestReportAtEndOfTe.Check()
	[-] // else
		[ ] // SystemConfiguration.JavaxSwingJTabbedPane.PrintTestReportAtEndOfTe.Uncheck()
	[ ] // SystemConfiguration.OK.Click()
	[ ] // GeneXpert®DxSystem.SetActive( )
	[ ] // 
[ ] // 
[ ] // // Set the "Use Patient ID" system configuration checkbox based on the value of the passed parameter
[+] // SetUsePatientID(BOOLEAN bUsePatientID)
	[ ] // GeneXpert®DxSystem.Setup.SystemConfiguration.Pick()
	[ ] // SystemConfiguration.SetActive( )
	[-] // if bUsePatientID
		[ ] // SystemConfiguration.JavaxSwingJTabbedPane.UsePatientID.Check()
	[-] // else
		[ ] // SystemConfiguration.JavaxSwingJTabbedPane.UsePatientID.Uncheck()
	[ ] // SystemConfiguration.OK.Click()
	[ ] // GeneXpert®DxSystem.SetActive( )
	[ ] // 
[ ] // 
[ ] // // Set the "Scan Patient ID" system configuration checkbox based on the value of the passed parameter
[+] // SetScanPatientID(BOOLEAN bScanPatientID)
	[ ] // GeneXpert®DxSystem.Setup.SystemConfiguration.Pick()
	[ ] // SystemConfiguration.SetActive( )
	[-] // if bScanPatientID
		[ ] // SystemConfiguration.JavaxSwingJTabbedPane.ScanPatientIDBarcode.Check()
	[-] // else
		[ ] // SystemConfiguration.JavaxSwingJTabbedPane.ScanPatientIDBarcode.Uncheck()
	[ ] // SystemConfiguration.OK.Click()
	[ ] // GeneXpert®DxSystem.SetActive( )
	[ ] // 
[ ] // 
[ ] // // Set the "Scan Sample ID" system configuration checkbox based on the value of the passed parameter
[+] // SetScanSampleID(BOOLEAN bScanSampleID)
	[ ] // GeneXpert®DxSystem.Setup.SystemConfiguration.Pick()
	[ ] // SystemConfiguration.SetActive( )
	[-] // if bScanSampleID 
		[ ] // SystemConfiguration.JavaxSwingJTabbedPane.ScanSampleIDBarcode.Check()
	[-] // else
		[ ] // SystemConfiguration.JavaxSwingJTabbedPane.ScanSampleIDBarcode.Uncheck()
	[ ] // SystemConfiguration.OK.Click()
	[ ] // GeneXpert®DxSystem.SetActive( )
	[ ] // 
[ ] // 
[ ] // // Set the "Scan Cartridge ID" system configuration checkbox based on the value of the passed parameter
[+] // SetScanCartridgeID(BOOLEAN bScanCartridgeID)
	[ ] // GeneXpert®DxSystem.Setup.SystemConfiguration.Pick()
	[ ] // SystemConfiguration.SetActive( )
	[-] // if bScanCartridgeID 
		[ ] // SystemConfiguration.JavaxSwingJTabbedPane.ScanCartridgeBarcode.Check()
	[-] // else
		[ ] // SystemConfiguration.JavaxSwingJTabbedPane.ScanCartridgeBarcode.Uncheck()
	[ ] // SystemConfiguration.OK.Click()
	[ ] // GeneXpert®DxSystem.SetActive( )
	[ ] // 
[ ] // 
[+] // StopAllTests()
	[ ] // 
	[ ] // GeneXpert®DxSystem.StopTest.Click()
	[ ] // StopTest.SetActive( )
	[-] // if StopTest.Modules.GetRowCount() > 0
		[ ] // StopTest.SelectRunning.Click()
		[ ] // StopTest.Stop.Click()
		[ ] // sleep(1)
		[ ] // StopTest1.SetActive( )
		[ ] // StopTest1.Yes.Click()
		[ ] // sleep(60)
	[-] // else
		[ ] // StopTest.Cancel.Click()
	[ ] // 
[ ] // 
[+] // STRING GetNextCartridgeID()
	[ ] // STRING sCartID = '0'
	[ ] // STRING sCartIDOut = '0'
	[ ] // INTEGER iCartID = 0
	[ ] // HFILE hInOutFileHandle
	[ ] // 
	[ ] // hInOutFileHandle = SYS_FileOpen ("C:\Silk Data Files\D11268 Performance Analysis\CartID.txt", FM_APPEND)
	[ ] // SYS_FileSetPointer(hInOutFileHandle, FP_START)
	[ ] // SYS_FileReadLine (hInOutFileHandle, sCartID)
	[ ] // sCartIDOut = sCartID
	[ ] // print("This is the value of the sCartID read from the file is: {sCartID}")
	[ ] // print("This is the value of the sCartIDOut: {sCartIDOut}")
	[ ] // iCartID = Val(sCartID)
	[ ] // iCartID++
	[ ] // sCartID = str(iCartID)
	[ ] // 
	[ ] // print("This is the new value of the sCartID: {sCartID}")
	[ ] // print("This is the new value of iCartID: {iCartID}")
	[ ] // SYS_FileSetPointer(hInOutFileHandle, FP_START)
	[ ] // SYS_FileWriteLine (hInOutFileHandle, sCartID)
	[ ] // SYS_FileClose(hInOutFileHandle)
	[ ] // return sCartIDOut
[ ] // 
[+] CheckModuleStatus(inout BOOLEAN bModuleNotAvailable)
	[ ] 
	[ ] const AVAILABLE = 'Available'
	[ ] 
	[ ] INTEGER i = 1
	[ ] 
	[ ] // Go to the Check Status screen 
	[-] if !GeneXpertDx.CheckStatusButton.Selected
		[ ] GeneXpertDx.CheckStatusButton.Toggle()
	[ ] // Check the table to see if there are any modules with status of 'Available'
	[-] while (i <= GeneXpertDx.ModulesTable.RowCount && bModuleNotAvailable)
		[-] if GeneXpertDx.ModulesTable.GetCellValue(i,4) == AVAILABLE
			[ ] bModuleNotAvailable = false
		[-] else
			[ ] i++
[ ] 
[+] StuffComma(inout STRING sNumber)
	[ ] 
	[-] if val(sNumber) >= 100000
		[ ] sNumber = Stuff(sNumber, 4, 0, ',')
	[-] else if val(sNumber) >= 10000
		[ ] sNumber = Stuff(sNumber, 3, 0, ',')
	[-] else if val(sNumber) >= 1000
		[ ] sNumber = Stuff(sNumber, 2, 0, ',')
		[ ] 
