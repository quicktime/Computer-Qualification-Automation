[ ] use "..\..\Common Libraries ADS\MasterUseStmtsADS.inc"
[ ] 
[ ] 
[ ] // This function exports Test Result and Optical Data
[ ] 
[ ] 
[+] // ExportTest(STRING sIN, out STRING sCSVFileName)
	[ ] // Agent.SetOption (OPT_VERIFY_EXPOSED, FALSE)
	[ ] // GeneXpertInfinity.ExportButton.Click()
	[ ] // 
	[ ] // // Choose options
	[ ] // sleep(1)
	[ ] // GeneXpertInfinity.ExportMeltDataCheckBox.Check()
	[ ] // sleep(1)
	[ ] // 
	[ ] // 
	[ ] // 
	[ ] // 
	[ ] // sleep(3)
	[-] // if GeneXpertInfinity.ExportButton.Exists(10)
		[ ] // GeneXpertInfinity.ExportButton.Click()
		[ ] // sleep(1)
		[ ] // 
	[ ] // 
	[ ] // 
	[-] // if GeneXpertInfinity.FileNameTextField.Exists(10)
		[ ] // GeneXpertInfinity.FileNameTextField.GetText()
		[ ] // sleep(1)
	[ ] // 
	[ ] // sCSVFileName=PATH+GeneXpertInfinity.FileNameTextField.GetText()
	[ ] // print ("Saving to file: {sCSVFileName}")
	[ ] // 
	[-] // if GeneXpertInfinity.SaveButton.Exists(10)
		[ ] // GeneXpertInfinity.SaveButton.Click()
		[ ] // sleep(1)
		[ ] // 
		[-] // if GeneXpertInfinity.NotificationTextArea.Exists()
			[ ] // LogWarning("The file {sCSVFileName} already existed and needed to be overwritten")
			[ ] // print (GeneXpertInfinity.NotificationTextArea.GetText())
			[ ] // GeneXpertInfinity.YesButton.Click()
			[ ] // sleep(1)
	[ ] // 
	[ ] // 
	[ ] // // Save an export file
	[ ] // sleep(1)
	[ ] // GeneXpertInfinity.CloseButton.Click()
	[ ] // GeneXpertInfinity.SetActive( )
	[ ] // sleep (1)
	[ ] // 
	[ ] // 
	[ ] // Agent.SetOption (OPT_VERIFY_EXPOSED, TRUE)
[ ] // 
