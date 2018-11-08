[ ] use "..\..\Common Libraries\MasterUseStmts.inc"
[ ] 
[-] RetrieveArchive (STRING sFilename)
	[ ] Agent.SetOption (OPT_VERIFY_EXPOSED, FALSE)
	[ ] GeneXpertDx.SetActive( )
	[ ] sleep(2)
	[ ] //GeneXpertDx.HomeDashboardIcon.Click()
	[ ] sleep(2)
	[ ] GeneXpertDx.DataManagementMenu.Click() //editted by jg 8/14/17
	[ ] sleep(2)
	[ ] GeneXpertDx.DataManagementMenu.RetrieveTest.Click()//editted by jg 8/14/17
	[ ] sleep(2)
	[ ] GeneXpertDx.FileNameTextField.SetText(sFilename)
	[ ] sleep(2)
	[ ] GeneXpertDx.OpenButton.Click()
	[ ] sleep(2)
	[-] if GeneXpertDx.RetrieveTestDuplicates.OKButton.exists(100) //added for testing by JG 8/15/17
		[ ] sleep(2)
		[ ] GeneXpertDx.RetrieveTestDuplicates.OKButton.Click()
	[ ] 
	[ ] //Wait for the file to be read and the selection dialog to come
	[-] if GeneXpertDx.SelectAllButton.exists(1100)// changed time from 1000 to 1100
		[ ] sleep(2)
		[ ] GeneXpertDx.SelectAllButton.Click()
		[ ] sleep(2)
		[ ] GeneXpertDx.OkButton.Click()
		[ ] 
		[ ] // Check if there was an overwrite warning
		[ ] sleep (2)
		[ ] LIST OF STRING lsMsg=GeneXpertDx.NotificationTextArea.GetContents()
		[ ] STRING sMsg=''
		[ ] STRING sEntireMsg=''
		[-] for each sMsg in lsMsg
			[ ] sEntireMsg=sEntireMsg+CHR(10)+sMsg
		[-] if MatchStr("*OVERWRITE*",sEntireMsg)
			[ ] LogWarning(sEntireMsg)
		[ ] //Regardless, choose to move on.
		[ ] sleep (2)
		[ ] GeneXpertDx.ProceedButton.Click()
		[ ] 
		[ ] // Wait for the finished message
		[-] if GeneXpertDx.OkButton.exists(1700) //increased to 1500
			[-] if GeneXpertDx.NotificationTextArea.Exists(5)
				[ ] sMsg=''
				[ ] sEntireMsg=''
				[-] for each sMsg in lsMsg
					[ ] sEntireMsg=sEntireMsg+CHR(10)+sMsg
				[ ] print(sEntireMsg)
		[ ] sleep (4)
		[ ] GeneXpertDx.OkButton.Click()
		[ ] sleep (4)
		[ ] //GeneXpertDx.CancelButton.Click()
		[ ] sleep(2) //added by JG 8/15/17
		[ ] print("Done retrieving tests from {sFilename}")
		[ ] sleep(2)//added by JG 8/15/17
		[ ] GeneXpertDx.UserMenu.Exit.Click()//added by JG 8/15/17
		[ ] sleep(2)//added by JG 8/15/17
		[ ] GeneXpertDx.DatabaseManagementDialog.NoButton.Click()//added by JG 8/15/17
		[ ] sleep(2)
		[ ] Console.TypeKeys("<Enter 2>")
	[ ] Agent.SetOption (OPT_VERIFY_EXPOSED, TRUE)
