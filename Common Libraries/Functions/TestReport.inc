[ ] use "..\..\Common Libraries\MasterUseStmts.inc"
[ ] 
[ ] 
[ ] // This function will save a copy of the test report for the displayed test
[ ] // Arguments: None
[-] SaveTestReport(inout STRING sFilename)
	[ ] 
	[ ] GeneXpertDx.ReportButton.Click()
	[ ] sleep(1)
	[ ] 
	[ ] 
	[ ] //options
	[ ] //BOOLEAN bIsGraphOptionEnabled=GeneXpertDx.JavaJFCCheckBox("Include Amplification Curve").invokeMethods({"isEnabled"},{{}})
	[-] if GeneXpertDx.IncludeAmplificationCurveCB.Exists(10)
		[ ] sleep(1)
		[ ] GeneXpertDx.IncludeAmplificationCurveCB.Check()
		[ ] sleep(1)
		[ ] print("The include PCR graph option was enabled, so it was selected.")
	[-] else
		[ ] print("The include PCR graph option was not enabled, so it was not selected.")
	[ ] 
	[ ] GeneXpertDx.GenerateReportFileButton.Click()
	[ ] sleep(1)
	[ ] 
	[-] if sFilename==""
		[ ] sFilename=GeneXpertDx.FileNameTextField.GetText()
	[-] else
		[ ] GeneXpertDx.FileNameTextField.SetText( sFilename )
	[ ] 
	[ ] sleep(2)
	[ ] GeneXpertDx.SaveButton.Click()
	[ ] sleep(2)
	[ ] 
	[ ] // Handle problems
	[-] if GeneXpertDx.YesButton.Exists(8)
		[ ] LogWarning ("The existing file {sFilename} needed to be overwritten")
		[ ] STRING sMsg=GeneXpertDx.NotificationTextArea.GetText()
		[ ] print(sMsg)
		[ ] sleep(2)
		[ ] GeneXpertDx.YesButton.Click()
		[ ] sleep(2)
	[ ] 
	[ ] GeneXpertDx.CloseButton.Click()
	[ ] print("The created a report in the file '{sFilename}'.")
	[ ] sleep(2)
