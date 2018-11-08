[ ] use "..\..\Common Libraries\MasterUseStmts.inc"
[ ] 
[ ] // This function will create a user
[ ] // Arguments: User Name, Password, User Type
[-] CreateUser(STRING sUserName, STRING sPassword, STRING sUserType)
	[ ] 
	[ ] Agent.SetOption (OPT_VERIFY_EXPOSED, FALSE)
	[ ] 
	[ ] //GeneXpertDx.HomeDashboardIcon.Click()
	[ ] GeneXpertDx.AddUserButton.Click()
	[ ] sleep(1)
	[ ] GeneXpertDx.LoginTextField.SetText(sUserName)
	[ ] 
	[ ] 
	[ ] GeneXpertDx.PasswordTextField.SetText(sPassword)
	[ ] GeneXpertDx.ConfirmPasswordTextField.SetText(sPassword)
	[ ] 
	[ ] GeneXpertDx.UserTypeComboBox.Select( sUserType )
	[ ] 
	[ ] GeneXpertDx.OkButton.Click()
	[ ] sleep(3)
	[ ] 
	[ ] 
	[ ] STRING sMsg=''
	[-] if GeneXpertDx.NotificationTextArea.Exists(10)
		[ ] sMsg=GeneXpertDx.NotificationTextArea.GetText()
	[ ] 
	[-] if MatchStr("*already exists.",sMsg)
		[ ] 
		[ ] LogWarning (sMsg)
		[ ] sleep(3)
		[ ] GeneXpertDx.OkButton.Click()
		[ ] sleep(2)
		[ ] GeneXpertDx.CancelButton.Click()
	[ ] 
	[ ] 
	[ ] print ()
	[ ] 
	[ ] 
	[-] if GeneXpertDx.OkButton.Exists(10)
		[ ] sleep(3)
		[ ] GeneXpertDx.OkButton.Click()
		[ ] print ("The user '{sUserName}' was reactivated.")
	[ ] 
	[ ] 
	[ ] 
	[ ] 
	[ ] Agent.SetOption (OPT_VERIFY_EXPOSED, TRUE)
	[ ] 
	[ ] 
[-] UserLogin(STRING sUserID, STRING sPassword)
	[ ] GeneXpertDx.UserMenu.Login.Select()
	[ ] GeneXpertDx.LoginDialog.SetActive( )
	[ ] GeneXpertDx.LoginDialog.UserNameTextField.SetText( sUserID )
	[ ] GeneXpertDx.LoginDialog.PasswordTextField.SetText (sPassword)
	[ ] GeneXpertDx.LoginDialog.OK.Click()
	[ ] GeneXpertDx.SetActive( )
[ ] 
[ ] // This function removes all user-defined users in the GX Dx database. 
[ ] // Can't be used to delete the current (logged in) user
[-] RemoveAllUsers()
	[ ] GeneXpertDx.SetupMenu.UserAdministration.Select()
	[ ] sleep(1)
	[ ] GeneXpertDx.UserAdministrationDialog.SetActive( )
	[-] while GeneXpertDx.UserAdministrationDialog.UserList.GetRowCount() > 0
		[ ] GeneXpertDx.UserAdministrationDialog.UserList.ClickCell(GeneXpertDx.UserAdministrationDialog.UserList.GetRowCount(),1)
		[ ] GeneXpertDx.UserAdministrationDialog.Remove.Click()
		[ ] GeneXpertDx.UserAdministrationDialog.SetActive( )
	[ ] GeneXpertDx.UserAdministrationDialog.Close.Click()
	[ ] 
