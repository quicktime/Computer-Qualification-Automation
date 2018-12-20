[ ] use "..\..\Common Libraries ADS\MasterUseStmtsADS.inc"
[ ] 
[ ] 
[ ] // This function will save a copy of the test report for the displayed test
[ ] // Arguments: None
[+] // SaveTestReport(inout STRING sFilename)
	[ ] // 
	[ ] // GeneXpertInfinity.ReportButton.Click()
	[ ] // sleep(1)
	[ ] // 
	[ ] // 
	[ ] // //options
	[ ] // //BOOLEAN bIsGraphOptionEnabled=GeneXpertInfinity.JavaJFCCheckBox("Include Amplification Curve").invokeMethods({"isEnabled"},{{}})
	[-] // if GeneXpertInfinity.IncludeAmplificationCurveCB.Exists(10)
		[ ] // sleep(1)
		[ ] // GeneXpertInfinity.IncludeAmplificationCurveCB.Check()
		[ ] // sleep(1)
		[ ] // print("The include PCR graph option was enabled, so it was selected.")
	[-] // else
		[ ] // print("The include PCR graph option was not enabled, so it was not selected.")
	[ ] // 
	[ ] // GeneXpertInfinity.GenerateReportFileButton.Click()
	[ ] // sleep(1)
	[ ] // 
	[-] // if sFilename==""
		[ ] // sFilename=GeneXpertInfinity.FileNameTextField.GetText()
	[-] // else
		[ ] // GeneXpertInfinity.FileNameTextField.SetText( sFilename )
	[ ] // 
	[ ] // sleep(2)
	[ ] // GeneXpertInfinity.SaveButton.Click()
	[ ] // sleep(2)
	[ ] // 
	[ ] // // Handle problems
	[-] // if GeneXpertInfinity.YesButton.Exists(8)
		[ ] // LogWarning ("The existing file {sFilename} needed to be overwritten")
		[ ] // STRING sMsg=GeneXpertInfinity.NotificationTextArea.GetText()
		[ ] // print(sMsg)
		[ ] // sleep(2)
		[ ] // GeneXpertInfinity.YesButton.Click()
		[ ] // sleep(2)
	[ ] // 
	[ ] // GeneXpertInfinity.CloseButton.Click()
	[ ] // print("The created a report in the file '{sFilename}'.")
	[ ] // sleep(2)
[ ] // 
