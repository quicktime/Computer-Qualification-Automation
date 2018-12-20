[ ] use "..\..\Common Libraries ADS\MasterUseStmtsADS.inc"
[ ] 
[+] // PurgeArchive()
	[ ] // Agent.SetOption (OPT_VERIFY_EXPOSED, FALSE)
	[ ] // GeneXpertInfinity.SetActive( )
	[ ] // sleep(2)
	[ ] // GeneXpertInfinity.HomeDashboardIcon.Click()
	[ ] // sleep(2)
	[ ] // GeneXpertInfinity.DataManagentButton.Click()
	[ ] // sleep(2)
	[ ] // GeneXpertInfinity.ArchiveTest.Click()
	[ ] // sleep(2)
	[ ] // GeneXpertInfinity.PurgeSelected.Click()
	[ ] // sleep(2)
	[ ] // GeneXpertInfinity.SelectAllButton.Click()
	[ ] // sleep(2)
	[ ] // GeneXpertInfinity.OkButton.Click()
	[ ] // sleep(2)
	[ ] // GeneXpertInfinity.ProceedButton.Click()
	[ ] // sleep(2)
	[ ] // GeneXpertInfinity.SaveButton.Click()
	[ ] // GeneXpertInfinity.OkButton.exists(100000000000000)
	[ ] // sleep(2)
	[ ] // GeneXpertInfinity.OkButton.Click()
	[ ] // sleep(2)
	[ ] // GeneXpertInfinity.OkButton.Click()
	[ ] // sleep(2)
	[ ] // GeneXpertInfinity.OkButton.exists(100000000000000)
	[ ] // GeneXpertInfinity.OkButton.Click()
	[ ] // sleep(2)
	[ ] // GeneXpertInfinity.HomeDashboardIcon.Click()
	[ ] // 
	[ ] // 
[ ] // 
[ ] // 
[+] // RetrieveArchive (STRING sFilename)
	[ ] // Agent.SetOption (OPT_VERIFY_EXPOSED, FALSE)
	[ ] // GeneXpertInfinity.SetActive( )
	[ ] // sleep(2)
	[ ] // GeneXpertInfinity.HomeDashboardIcon.Click()
	[ ] // sleep(2)
	[ ] // GeneXpertInfinity.DataManagentButton.Click()
	[ ] // sleep(2)
	[ ] // GeneXpertInfinity.RetrieveTestButton.Click()
	[ ] // sleep(2)
	[ ] // GeneXpertInfinity.FileNameTextField.Click()
	[ ] // sleep(2)
	[ ] // GeneXpertInfinity.FileNameTextField.SetText(sFilename)
	[ ] // sleep(2)
	[ ] // GeneXpertInfinity.OpenButton.Click()
	[ ] // 
	[ ] // //Wait for the file to be read and the selection dialog to come
	[-] // if GeneXpertInfinity.SelectAllButton.exists(90)
		[ ] // sleep(2)
		[ ] // GeneXpertInfinity.SelectAllButton.Click()
		[ ] // sleep(2)
		[ ] // GeneXpertInfinity.OkButton.Click()
		[ ] // 
		[ ] // // Check if there was an overwrite warning
		[ ] // sleep (2)
		[ ] // LIST OF STRING lsMsg=GeneXpertInfinity.NotificationTextArea.GetContents()
		[ ] // STRING sMsg=''
		[ ] // STRING sEntireMsg=''
		[-] // for each sMsg in lsMsg
			[ ] // sEntireMsg=sEntireMsg+CHR(10)+sMsg
		[-] // if MatchStr("*OVERWRITE*",sEntireMsg)
			[ ] // LogWarning(sEntireMsg)
		[ ] // //Regardless, choose to move on.
		[ ] // sleep (2)
		[ ] // GeneXpertInfinity.ProceedButton.Click()
		[ ] // 
		[ ] // // Wait for the finished message
		[-] // if GeneXpertInfinity.OkButton.exists(6000000000000)
			[-] // if GeneXpertInfinity.NotificationTextArea.Exists(65)
				[ ] // sMsg=''
				[ ] // sEntireMsg=''
				[-] // for each sMsg in lsMsg
					[ ] // sEntireMsg=sEntireMsg+CHR(10)+sMsg
				[ ] // print(sEntireMsg)
			[ ] // sleep (2)
			[ ] // GeneXpertInfinity.OkButton.Click()
			[ ] // sleep (2)
			[ ] // GeneXpertInfinity.CancelButton.Click()
			[ ] // print("Done retrieving tests from {sFilename}")
			[ ] // sleep(2)
			[ ] // GeneXpertInfinity.ExitButton.Click()
			[ ] // sleep(2)
			[ ] // GeneXpertInfinity.OkButton.Click()
			[ ] // sleep(2)
			[ ] // GeneXpertInfinity.NoButton.Click()
			[ ] // sleep(2)
			[ ] // Console.TypeKeys("<Enter 2>")
	[ ] // Agent.SetOption (OPT_VERIFY_EXPOSED, TRUE)
