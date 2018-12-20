[ ] use "..\..\Common Libraries ADS\MasterUseStmtsADS.inc"
[ ] 
[-] Login(WINDOW ADS, STRING gsDSNConnect, STRING sLoginSheet) //Logs you in if you logged out for some reason
	[ ] HANDLE hDB,hLog
	[ ] STRING sUser = ''
	[ ] STRING sPass = ''
	[ ] REC_LOGINS rLogin
	[ ] 
	[ ] 
	[ ] //Connect to Excel and get expected results spreadsheet
	[ ] hDB = DB_Connect (gsDSNConnect)
	[ ] //Select from the appropriate tab of the spreadsheet
	[ ] hLog = DB_ExecuteSQL(hDB, "Select * from`{sLoginSheet}$`")
	[ ] sUser=""
	[ ] sPass=""
	[ ] 
	[-] if (ADS.Web.Browser.LoginButton.exists())
		[ ] print("Debug: User needs to log in")
		[ ] print("Debug: Logging user in...")
		[-] DB_FetchNext(hLog, rLogin)
			[-] if (sUser == null || sPass == null)
				[ ] print("Error")
			[-] else
				[ ] sUser = rLogin.sLogin
				[ ] sPass = rLogin.sPassword
				[ ] ADS.Web.Browser.LoginName.SetText(sUser)
				[ ] print("Username: {sUser}")
				[ ] ADS.Web.Browser.Password.SetText(sPass)
				[ ] print("Password: {sPass}")
				[ ] ADS.Web.Browser.LoginButton.Click()
				[-] if ADS.Web.Browser.Incorrect_Username.exists()
					[ ] Print ("------- Incorrect Username Password dialog appeared------")
[ ] 
[ ] // Logs in with specified user credentials
[ ] // Used after a DB_FetchNext(HANDLE hLog, REC_LOGINS rLogin)
[-] LoginUser(WINDOW ADS, REC_LOGINS rLogin)
	[-] if (ADS.Web.Browser.LoginButton.exists())
		[ ] print()
		[ ] print("Logging in as: {rLogin.sLogin}")
		[ ] print("Password: {rLogin.sPassword}")
		[ ] ADS.Web.Browser.LoginName.SetText(rLogin.sLogin)
		[ ] ADS.Web.Browser.Password.SetText(rLogin.sPassword)
		[ ] ADS.Web.Browser.LoginButton.Click()
		[ ] sleep(1)
		[-] if ADS.Web.Browser.Incorrect_Username.exists()
			[ ] Print ("------- Incorrect Username Password dialog appeared------")
[ ] 
[ ] // Logs in as cepheid user
[ ] // Credentials are kept in {@link Constants-ADS.inc}
[-] LoginCepheid(WINDOW ADS)
	[-] if ADS.Web.Browser.LoginButton.exists()
		[ ] print("Logging in as cepheid...")
		[ ] ADS.Web.Browser.LoginName.SetText(CEPHEID_USER)
		[ ] ADS.Web.Browser.Password.SetText(CEPHEID_PW)
		[ ] ADS.Web.Browser.LoginButton.Click()
		[-] if ADS.Web.Browser.Incorrect_Username.exists()
			[ ] Print ("------- Incorrect Username Password dialog appeared------")
