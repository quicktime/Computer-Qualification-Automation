[ ] use "..\..\Common Libraries\MasterUseStmts.inc"
[ ] 
[ ] 
[ ] // This function exports Test Result and Optical Data
[ ] 
[ ] 
[-] ExportTest(STRING sProject, out STRING sCSVFileName)
	[ ] Agent.SetOption (OPT_VERIFY_EXPOSED, FALSE)
	[ ] GeneXpertDx.ExportButton.Click()
	[ ] 
	[ ] // Choose options
	[ ] sleep(1)
	[ ] GeneXpertDx.ExportDataDialog.MeltData.Check()
	[ ] sleep(1)
	[ ] 
	[ ] // Added by Steve 3/22/2018 used by D8383 to export Optics only
	[-] if sProject == 'D8383'
		[ ] GeneXpertDx.ExportDataDialog.AnalysisSettings.Uncheck()
		[ ] GeneXpertDx.ExportDataDialog.TestResult.Uncheck()
		[ ] GeneXpertDx.ExportDataDialog.MeltData.UnCheck()
		[ ] 
	[ ] 
	[ ] sleep(3)
	[ ] // if GeneXpertDx.ExportButton.Exists(10) // original
	[-] if GeneXpertDx.ExportDataDialog.ExportButton.Exists(10)
		[ ] GeneXpertDx.ExportDataDialog.ExportButton.Click() // EG new
		[ ] sleep(1)
	[ ] 
	[-] if GeneXpertDx.FileNameTextField.Exists(10)
		[ ] GeneXpertDx.FileNameTextField.GetText()
		[ ] print(GeneXpertDx.FileNameTextField.GetText())
		[ ] sleep(1)
	[ ] 
	[ ] sCSVFileName=PATH+GeneXpertDx.FileNameTextField.GetText()
	[ ] print ("Saving to file: {sCSVFileName}")
	[ ] 
	[-] if GeneXpertDx.ResultExportDialog.SaveButton.Exists(10)
		[ ] GeneXpertDx.ResultExportDialog.SaveButton.Click()
		[-] sleep(1)
			[-] if GeneXpertDx.ReplaceFileDialog.Exists(10)
				[ ] LogWarning("The file {sCSVFileName} already existed and needed to be overwritten")
				[ ] //print (GeneXpertDx.ReplaceFileDialog.GetText())
				[ ] sleep(5)
				[ ] GeneXpertDx.ReplaceFileDialog.YesButton.Click()
				[ ] sleep(1)
			[ ] // Save an export file
			[ ] sleep(1)
	[ ] GeneXpertDx.ExportDataDialog.CancelButton.Click()
	[ ] GeneXpertDx.SetActive( )
	[ ] sleep (1)
	[ ] 
	[ ] 
	[ ] Agent.SetOption (OPT_VERIFY_EXPOSED, TRUE)
[ ] 
