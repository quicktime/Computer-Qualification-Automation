[ ] //ToDo: double check domlistbox entries, they may need to be redefined another way.
[ ] //ToDo: Comment and Organize for readability, followed by edits and testing
[-] window MainWin ADK
	[ ] locator "/MainWin[@caption='Assay Development Kit']"
	[ ] 
	[ ] //windows window to browse for assay
	[+] DialogBox OpenFile // dialog box that appears after clicking browse
		[ ] locator "DialogBox[@caption='Open']"
		[ ] 
		[-] TextField FileNameTextField //text field to paste path to assay
			[ ] locator "TextField[@caption='File name:']"
			[ ] 
		[-] PushButton WinOpenButton // ... self explanatory i hope
			[ ] locator "PushButton[@caption='Open']"
			[ ] 
		[-] PushButton WinCancelButton // see above comment.
			[ ] locator "PushButton[@caption='Cancel']"
	[ ] 
	[ ] //windows window for when exporting assay, needs testing
	[+] DialogBox SaveAs //Dialog box for
		[ ] locator "[@caption='Save As']"
		[ ] 
		[-] DropDownToolItem Directory
			[ ] locator "//DropDownToolItem[@caption='Desktop']"
			[ ] 
		[-] TextField Directory_TextField
			[ ] locator "//TextField"
			[ ] 
		[-] DialogBox Confirm_Save //if there id a duplicate this dialog appears
			[ ] locator "//DialogBox[@caption='Confirm Save As']"
			[-] PushButton Confirm_Yes // confirm saving over
				[ ] locator "//PushButton[@caption='Yes']"
				[ ] 
			[-] PushButton Confirm_No // cancel save over file
				[ ] locator "//PushButton[@caption='No']"
			[ ] 
		[-] ComboBox Export_Filename // textfield with dialog box
			[ ] locator "ComboBox[2]"
			[ ] 
		[-] PushButton WinCancel //cancel save assay
			[ ] locator "PushButton[@caption='Cancel']"
			[ ] 
		[-] PushButton WinSave // confirm assay save
			[-] locator "//PushButton[@caption='Save']"
				[ ] 
	[ ] 
	[ ] //Behold Chromium in all its splendor
	[-] BrowserApplication Web
		[ ] locator "//BrowserApplication"
		[ ] 
		[ ] //ADK Browser window
		[-] BrowserWindow Browser
			[ ] locator "//BrowserWindow"
			[ ] 
			[ ] //ConstantS used by multiple Menus to be added here as they appear
			[+] DomButton CancelButton // cancel button used in browser menus/dialogs
				[ ] locator "BUTTON[@id='cancel']"
				[ ] 
			[-] DomButton OkButton // this is an ok button used in all browser menus/dialogs
				[ ] locator "BUTTON[@id='ok']"
			[+] DomButton YesButton // YES button to confirm your excellent choices or LEAVE before people notice your mistakes
				[ ] locator "BUTTON[@id='prompt_yes_button']"
			[+] DomButton NoButton // you made a mistake... you know what you did, click quickly so NO one notices or STAY and fix them.
				[ ] locator "BUTTON[@id='prompt_no_button']"
			[+] DomLink CloseButton // Close button in menu's, specifically the about dialog so far
				[ ] locator "BUTTON[@id='close']"
			[+] DomElement Dialogbox // common locator for dialog boxes within ADK, use text in boxes to ID
				[ ] locator "//DIV[@class='modal-content']"
			[+] DomElement Error_Dialog // specific error dialog box header text
				[ ] locator "H3[@textContents='Error']"
			[-] DomElement Dialog_text // body of dialog box, for grabbing text(grab text)
				[ ] locator "DIV[@class='modal-body']"
			[+] DomButton Save_Assay //Save Assay Button
				[ ] locator "BUTTON[@id='save_assay']"
			[+] DomElement Info_Dialog //info dialog box after saving assay
				[ ] locator "H3[@textContents='Information']"
			[+] DomElement Confirm_Dialog //confirm dialog box when leaving an unsaved assay
				[ ] locator "H3[@textContents='Confirm']"
			[+] DomElement Max_Length // max field length red text
				[ ] locator "SPAN[@textContents='Field maximum length*']"
			[+] DomButton Copy // it clones things, like really well
				[ ] locator "BUTTON[@id='copy']"
			[+] DomButton SaveButton // save button...
				[ ] locator "BUTTON[@textContents='Save']"
			[+] DomButton Expand_Table //Open and close table button
				[ ] locator "BUTTON[@class='btn btn-toogle pull-*']"
			[+] DomButton Expand_Table2 //Open and close button
				[ ] locator "BUTTON[@class='btn btn-toogle pull-*'][2]"
			[ ] 
			[ ] 
			[ ] 
			[ ] //Login window
			[+] DomElement Username_Text //username text next to field, can click to enter text field
				[ ] locator "LABEL[@textContents='Username']"
			[-] DomTextField LoginName // login name field
				[ ] locator "//INPUT[@id='loginForm_loginName']"
				[ ] 
			[-] DomElement Password_Text // Password text next to field, can click to enter text field
				[ ] locator "LABEL[@textContents='Password']"
			[-] DomTextField Password // password text field
				[ ] locator "//INPUT[@id='loginForm_password']"
				[ ] 
			[-] DomButton LoginButton // login button
				[ ] locator "BUTTON[@id='loginForm_login']"
			[-] DomElement Remember_Username_Text // Remember username text, can click to check box
				[ ] locator "LABEL[@textContents='Remember user name']"
			[-] DomCheckBox Remember_Username // checkbox for remember username
				[ ] locator "//INPUT[@id='loginForm_remember']"
			[-] DomElement Incorrect_Username // Incorrect Username or password error box
				[ ] locator "DIV[@textContents='Incorrect user name *']"
			[ ] 
			[ ] //Home Assays Window
			[-] DomLink Navbar_loginName //login name with pulldown button, top right of window
				[ ] locator "A[@id='navbar_loginName']"
			[-] DomLink Navbar_Exit // only option in the drop down menu
					[ ] locator "A[@id='navbar_Exit']"
			[-] DomLink Navbar_Logout // logout button, top right of window
				[ ] locator "A[@id='navbar_logout']"
			[-] DomLink Navbar_Help // help button top right of window
				[ ] locator "A[@id='navbar_help']"
			[-] DomLink NavBar_Changepass // change password of user currently logged in
				[ ] locator "A[@id='navbar_changePasswor*']"
			[+] DomElement Changepass_Dialog // change password dialog box text to ID dialog box
				[ ] locator "H4[@textContents='Change password']"
				[ ] 
			[-] DomTextField PWForm_Oldpass // textfield for old password
				[ ] locator "//INPUT[@id='pwdForm_oldPassword']"
			[-] DomTextField PWForm_Newpass // textfield for new password
				[ ] locator "//INPUT[@id='pwdForm_newPassword']"
			[-] DomTextField PWForm_Confirmpass // textfield to confirm new password
				[ ] locator "//INPUT[@id='pwdForm_confirmPassw*']"
			[-] DomButton PWForm_Cancel
				[ ] locator "BUTTON[@id='cancel']"
				[ ] 
			[ ] //Navbar Burger Menu
			[-] DomLink Navbar_Burger //Burger on the top left of the window, must be clicked before clicking Burger items below
				[ ] locator "A[@id='navbar_menu']"
				[ ] //locator "A[@id='navbar_about']"
			[+] DomLink Burger_DefineAssay // Define Assay window link within dropdown
				[ ] locator "A[@id='navbar_menu_assay']"
			[-] DomLink Burger_DefineCartridge // define cartridge window link within dropdown
				[ ] locator "A[@id='navbar_menu_cartridge']"
			[+] DomLink Burger_UserManagement // define user management window link within dropdown
				[ ] locator "A[@id='navbar_menu_user']"
			[-] DomLink Burger_DatabaseManagement // database management window link within dropdown
				[ ] locator "A[@id='navbar_menu_database']"
			[-] DomLink Burger_Settings // settings window link within dropdown
				[ ] locator "A[@id='navbar_menu_settings']"
			[+] DomLink Burger_About // about window link within dropdown
				[ ] locator "A[@id='navbar_menu_about']"
			[ ] 
			[ ] 
			[ ] //Search Filter Drop Down Menu Constants
			[+] DomButton DropDownMenu1 // arrow next to filter by text, should use this to open dropdown menu everytime
				[ ] locator "BUTTON[@id='filterDropdown_0']"
			[+] DomButton DropDownMenu2
				[ ] locator "BUTTON[@id='filterDropdown_1']"
			[+] DomButton DropDownMenu3
				[ ] locator "BUTTON[@id='filterDropdown_2']"
			[+] DomButton DropDownMenu4
				[ ] locator "BUTTON[@id='filterDropdown_3']"
				[ ] 
			[+] DomButton AddSearchFilter // add search filter button
				[ ] locator "BUTTON[@id='addBtn']"
			[+] DomButton RemoveSearchFilter //remove search filter button
				[ ] locator "BUTTON[@id='removeBtn_0']"
			[+] DomButton RemoveSearchFilter2 // remove second search filter button 2
				[ ] locator "BUTTON[@id='removeBtn_1']"
			[+] DomButton RemoveSearchFilter3 // remove second search filter button 3
				[ ] locator "BUTTON[@id='removeBtn_2']"
			[+] DomButton RemoveSearchFilter4 // remove second search filter button 4
				[ ] locator "BUTTON[@id='removeBtn_3']"
			[-] DomListBox SearchFilter_DropDown // Dropdown for assay version and user type, Click do not DomClick, then enter number of version or letter for user type
				[ ] locator "SELECT[@id='selectedFieldDropDown_0']"
			[-] DomListBox SearchFilter_DropDown1 // Dropdown for assay version and user type, Click do not DomClick, then enter number of version or letter for user type
				[ ] locator "SELECT[@id='selectedFieldDropDown_1']"
			[-] DomListBox SearchFilter_DropDown2 // Dropdown for assay version and user type, Click do not DomClick, then enter number of version or letter for user type
				[ ] locator "SELECT[@id='selectedFieldDropDown_2']"
				[ ] 
			[+] DomTextField SearchFilter_Textfield0 // first text field for search
				[ ] locator "//INPUT[@id='searchTextInput_0']"
			[+] DomTextField SearchFilter_Textfield1 // second text field for search
				[ ] locator "//INPUT[@id='searchTextInput_1']"
			[+] DomTextField SearchFilter_Textfield2 // third text field for search
				[ ] locator "//INPUT[@id='searchTextInput_2']"
			[+] DomTextField SearchFilter_Textfield3 // fourth text field for search
				[ ] locator "//INPUT[@id='searchTextInput_3']"
			[+] DomTextField SearchFilter_Textfield4 // fifth text field for search
				[ ] locator "//INPUT[@id='searchTextInput_4']"
			[+] DomTextField SearchFilter_Textfield5 // sixth text field for search
				[ ] locator "//INPUT[@id='searchTextInput_5']"
			[+] DomTextField SearchFilter_Textfield6 // seventh text field for search
				[ ] locator "//INPUT[@id='searchTextInput_6']"
			[+] DomTextField SearchFilter_Textfield7 // eighth text field for search
				[ ] locator "//INPUT[@id='searchTextInput_7']"
			[+] DomTextField SearchFilter_Textfield8 // ninth text field for search
				[ ] locator "//INPUT[@id='searchTextInput_8']"
			[+] DomTextField SearchFilter_Textfield9 // tenth text field for search
				[ ] locator "//INPUT[@id='searchTextInput_9']"
				[ ] 
			[+] DomLink Filter_By_FilterBy // filter by filter by
				[ ] locator "//A[@textContents='Filter By']"
			[+] DomLink Filter_By_PatientID // filter by patient ID
				[ ] locator "A[@textContents='Patient ID']"
			[+] DomLink Filter_By_SampleID // filter by sample ID
				[ ] locator "A[@textContents='Sample ID']"
			[+] DomLink Filter_By_Result // filter by result
				[ ] locator "A[@textContents='Result']"
			[+] DomLink Filter_By_ModuleName // filter by module name
				[ ] locator "A[@textContents='Module Name']"
			[+] DomLink Filter_By_ModuleSerial // filter by module serial
				[ ] locator "A[@textContents='Module Serial #']"
			[+] DomLink Filter_By_User // filter by user
				[ ] locator "A[@textContents='User']"
			[+] DomLink Filter_By_Assay // filter by assay
				[ ] locator "A[@textContents='Assay']"
			[+] DomLink Filter_By_Version // filter by version
				[ ] locator "A[@textContents='Version']"
			[-] DomLink Filter_By_Lot // filter by lot
				[ ] locator "A[@textContents='Lot']"
			[-] DomLink Filter_By_AssayType // filter by assay type
				[ ] locator "A[@id='Assay_Type']"
			[-] DomLink Filter_By_AssayVer // filter by assay version
				[ ] locator "A[@id='Assay_Version']"
			[-] DomLink Filter_By_AssayName // assay name search button, only works if the text is Assay Name or dropdown is open
				[ ] locator "A[@id='Assay_Name']"
			[-] DomLink Filter_By_AssayCreator
				[ ] locator "A[@id='Assay_Creator']"
			[-] DomLink Filter_By_LastModDate
				[ ] locator "A[@id='Last_Modified Date']"
			[ ] 
			[+] DomLink Filter_By_Status // filter by status
				[ ] locator "A[@textContents='Status']"
			[+] DomLink Filter_By_Error // filter by error
				[ ] locator "A[@textContents='Error']"
			[+] DomLink Filter_By_StartTime // filter by start time
				[ ] locator "A[@textContents='Start Time']"
			[ ] 
			[ ] //Search Filter Calendar because apparently it's quite robust
			[+] DomButton From_Date //from date button in the created date search filter bar
				[ ] locator "//BUTTON[@class='btn btn-flat btn-def*']"
			[+] DomButton To_Date // to date button in the created date search filter bar
				[ ] locator "//BUTTON[@class='btn btn-flat btn-def*'][2]"
			[-] DomButton Prev_MonthYear // Arrow key to move back a month or year depending on text
				[ ] locator "BUTTON[@ng-click='move(-1)']"
			[+] DomButton Next_MonthYear // Arrow key to move forward a month or year depending on text
				[ ] locator "BUTTON[@ng-click='move(1)']"
			[-] DomButton Month_Year // click to open up month/year selection
				[ ] locator "BUTTON[@id='datepicker-7002-5612-title']"
			[+] DomButton Calendar_Today // Today button in calendar
				[ ] locator "BUTTON[@textContents='Today']"
			[+] DomButton Calendar_Clear // Clear button in calendar
				[ ] locator "BUTTON[@textContents='Clear']"
			[+] DomButton Calendar_Close // Close button in calendar
				[ ] locator "BUTTON[@textcContents='Close']"
			[ ] 
			[ ] //Months in calendar 
			[+] DomElement Jan // January in year selection
				[ ] locator "SPAN[@textContents='January']"
			[+] DomElement Feb // February in year selection
				[ ] locator "SPAN[@textContents='February']"
			[+] DomElement Mar // March in year selection
				[ ] locator "SPAN[@textContents='March']"
			[+] DomElement Apr // April in year selection
				[ ] locator "SPAN[@textContents='April']"
			[+] DomElement May // May in year selection
				[ ] locator "SPAN[@textContents='May']"
			[+] DomElement Jun // June in year selection
				[ ] locator "SPAN[@textContents='June']"
			[+] DomElement Jul // July in year selection
				[ ] locator "SPAN[@textContents='July']"
			[+] DomElement Aug // August in year selection
				[ ] locator "SPAN[@textContents='August']"
			[+] DomElement Sep // September in year selection
				[ ] locator "SPAN[@textContents='September']"
			[+] DomElement Oct // October in year selection
				[ ] locator "SPAN[@textContents='October']"
			[+] DomElement Nov // November in year selection
				[ ] locator "SPAN[@textContents='November']"
			[+] DomElement Dec // December in year selection
				[ ] locator "SPAN[@textContents='December']"
			[ ] 
			[ ] //Years in calendar
			[-] DomElement Year2005
				[ ] locator "SPAN[@textContents='2005']"
			[ ] 
			[ ] //Dates within the calendar, for repeated dates the nomenclature is ND instead of D
			[+] DomElement D1 //first appearance of 1 on the calendar regardless of month
				[ ] locator "SPAN[@textContents='01']"
			[+] DomElement D2 //first appearance of 2 on the calendar regardless of month
				[ ] locator "SPAN[@textContents='02']"
			[+] DomElement D3 //first appearance of 3 on the calendar regardless of month
				[ ] locator "SPAN[@textContents='03']"
			[+] DomElement D4 //first appearance of 4 on the calendar regardless of month
				[ ] locator "SPAN[@textContents='04']"
			[+] DomElement D5 //first appearance of 5 on the calendar regardless of month
				[ ] locator "SPAN[@textContents='05']"
			[+] DomElement D6 //first appearance of 6 on the calendar regardless of month
				[ ] locator "SPAN[@textContents='06']"
			[+] DomElement D7 //first appearance of 7 on the calendar regardless of month
				[ ] locator "SPAN[@textContents='07']"
			[+] DomElement D8 //first appearance of 8 on the calendar regardless of month
				[ ] locator "SPAN[@textContents='08']"
			[+] DomElement D9  //first appearance of 9 on the calendar regardless of month
				[ ] locator "SPAN[@textContents='09']"
			[+] DomElement D10 //first appearance of 10 on the calendar regardless of month
				[ ] locator "SPAN[@textContents='10']"
			[+] DomElement D11 //first appearance of 11 on the calendar regardless of month
				[ ] locator "SPAN[@textContents='11']"
			[+] DomElement D12 //first appearance of 12 on the calendar regardless of month
				[ ] locator "SPAN[@textContents='12']"
			[+] DomElement D13 //first appearance of 13 on the calendar regardless of month
				[ ] locator "SPAN[@textContents='13']"
			[+] DomElement D14 //first appearance of 14 on the calendar regardless of month
				[ ] locator "SPAN[@textContents='14']"
			[+] DomElement D15 //first appearance of 15 on the calendar regardless of month
				[ ] locator "SPAN[@textContents='15']"
			[+] DomElement D16 //first appearance of 16 on the calendar regardless of month
				[ ] locator "SPAN[@textContents='16']"
			[+] DomElement D17 //first appearance of 17 on the calendar regardless of month
				[ ] locator "SPAN[@textContents='17']"
			[+] DomElement D18 //first appearance of 18 on the calendar regardless of month
				[ ] locator "SPAN[@textContents='18']"
			[+] DomElement D19 //first appearance of 19 on the calendar regardless of month
				[ ] locator "SPAN[@textContents='19']"
			[+] DomElement D20 //first appearance of 20 on the calendar regardless of month
				[ ] locator "SPAN[@textContents='20']"
			[+] DomElement D21 //first appearance of 21 on the calendar regardless of month
				[ ] locator "SPAN[@textContents='21']"
			[+] DomElement D22 //first appearance of 22 on the calendar regardless of month
				[ ] locator "SPAN[@textContents='22']"
			[+] DomElement D23 //first appearance of 23 on the calendar regardless of month
				[ ] locator "SPAN[@textContents='23']"
			[+] DomElement D24 //first appearance of 24 on the calendar regardless of month
				[ ] locator "SPAN[@textContents='24']"
			[+] DomElement D25 //first appearance of 25 on the calendar regardless of month
				[ ] locator "SPAN[@textContents='25']"
			[+] DomElement D26 //first appearance of 26 on the calendar regardless of month
				[ ] locator "SPAN[@textContents='26']"
			[+] DomElement D27 //first appearance of 27 on the calendar regardless of month
				[ ] locator "SPAN[@textContents='27']"
			[+] DomElement D28 //first appearance of 28 on the calendar regardless of month
				[ ] locator "SPAN[@textContents='28']"
			[+] DomElement D29 //first appearance of 29 on the calendar regardless of month
				[ ] locator "SPAN[@textContents='29']"
			[+] DomElement D30 //first appearance of 30 on the calendar regardless of month
				[ ] locator "SPAN[@textContents='30']"
			[+] DomElement D31 //first appearance of 31 on the calendar regardless of month
				[ ] locator "SPAN[@textContents='31']"
			[+] DomElement ND1 //second appearance of 1 on the calendar regardless of month
				[ ] locator "SPAN[@textContents='01'][2]"
			[+] DomElement ND2 //second appearance of 1 on the calendar regardless of month
				[ ] locator "SPAN[@textContents='02'][2]"
			[+] DomElement ND3 //second appearance of 1 on the calendar regardless of month
				[ ] locator "SPAN[@textContents='03'][2]"
			[+] DomElement ND4 //second appearance of 1 on the calendar regardless of month
				[ ] locator "SPAN[@textContents='04'][2]"
			[+] DomElement ND5 //second appearance of 1 on the calendar regardless of month
				[ ] locator "SPAN[@textContents='05'][2]"
			[+] DomElement ND6 //second appearance of 1 on the calendar regardless of month
				[ ] locator "SPAN[@textContents='06'][2]"
			[+] DomElement ND7 //second appearance of 1 on the calendar regardless of month
				[ ] locator "SPAN[@textContents='07'][2]"
			[+] DomElement ND8 //second appearance of 1 on the calendar regardless of month
				[ ] locator "SPAN[@textContents='08'][2]"
			[+] DomElement ND9 //second appearance of 1 on the calendar regardless of month
				[ ] locator "SPAN[@textContents='09'][2]"
			[+] DomElement ND10 //second appearance of 1 on the calendar regardless of month
				[ ] locator "SPAN[@textContents='10'][2]"
			[ ] 
			[ ] //Years on a Calendar these are self explanatory...
			[+] DomElement Y2001 // the year of 2001
				[ ] locator "SPAN[@textContents='2001']"
			[+] DomElement Y2002 // the year of 2002
				[ ] locator "SPAN[@textContents='2002']"
			[+] DomElement Y2003 // the year of 2003
				[ ] locator "SPAN[@textContents='2003']"
			[+] DomElement Y2004 // the year of 2004
				[ ] locator "SPAN[@textContents='2004']"
			[+] DomElement Y2005 // the year of 2005
				[ ] locator "SPAN[@textContents='2005']"
			[+] DomElement Y2006 // the year of 2006
				[ ] locator "SPAN[@textContents='2006']"
			[+] DomElement Y2007 // the year of 2007
				[ ] locator "SPAN[@textContents='2007']"
			[+] DomElement Y2008 // the year of 2008
				[ ] locator "SPAN[@textContents='2008']"
			[+] DomElement Y2009 // the year of 2009
				[ ] locator "SPAN[@textContents='2009']"
			[+] DomElement Y2010 // the year of 2010
				[ ] locator "SPAN[@textContents='2010']"
			[+] DomElement Y2011 // the year of 2011
				[ ] locator "SPAN[@textContents='2011']"
			[+] DomElement Y2012 // the year of 2012
				[ ] locator "SPAN[@textContents='2012']"
			[+] DomElement Y2013 // the year of 2013
				[ ] locator "SPAN[@textContents='2013']"
			[+] DomElement Y2014 // the year of 2014
				[ ] locator "SPAN[@textContents='2014']"
			[+] DomElement Y2015 // the year of 2015
				[ ] locator "SPAN[@textContents='2015']"
			[+] DomElement Y2016 // the year of 2016
				[ ] locator "SPAN[@textContents='2016']"
			[+] DomElement Y2017 // the year of 2017
				[ ] locator "SPAN[@textContents='2017']"
			[+] DomElement Y2018 // the year of 2018
				[ ] locator "SPAN[@textContents='2018']"
			[+] DomElement Y2019 // the year of 2019
				[ ] locator "SPAN[@textContents='2019']"
			[+] DomElement Y2020 // the year of 2020
				[ ] locator "SPAN[@textContents='2020']"
			[ ] 
			[ ] //Search Filter Drop down menu options on Define Assay Page
			[-] DomLink AssayName // assay name search button, only works if the text is Assay Name or dropdown is open
				[ ] locator "A[@textContents='Assay Name']"
				[ ] 
			[+] DomLink AssayVersion // assay version search button, only works if the text is Assay Version or dropdown is open
				[ ] locator "A[@textContents='Assay Version']"
				[ ] 
			[+] DomLink AssayType // assay type search button, only works if the text is Assay Type or dropdown is open
				[ ] locator "A[@textContents='Assay Type']"
				[ ] 
			[+] DomLink AssayCreator //assay creator search button, only works if the text is Assay Creator or dropdown is open
				[ ] locator "A[@textContents='Assay Creator']"
				[ ] 
			[+] DomLink LastModifiedDate // last modified date search button, only works if the text is Last Modified Date or dropdown is open
				[ ] locator "A[@textContents='Last Modified Date']"
				[ ] 
			[ ] 
			[ ] //Search Filter drop down menu Define Cartridge window
			[-] DomLink CartridgeName // Cartridge name search button, only works if the text is Cartridge Name or dropdown is open
				[ ] locator "A[@textContents='Cartridge Name']"
			[-] DomLink CartridgeVersion // Cartridge version search button, only works if the text is Cartridge Version or dropdown is open
				[ ] locator "A[@textContents='Cartridge Version']"
			[-] DomTextField Version_Number // apparently the version number is a text field instead of a dropdown like define assay. So it has a different locator then the text field as it only accepts numbers
				[ ] locator "//INPUT[@id='numberInput_0']"
			[+] DomLink AssayCreatedDate //Cartrdige Date search button, only works if the text is Created Date or dropdown is open
				[ ] locator "A[@textContents='Created Date']"
			[ ] 
			[ ] //Search Filter drop down menu for Users
			[-] DomLink User_Name // UserName filter by button, only works if dropdown is open or previously selected
				[ ] locator"A[@textContents='User Name']"
			[+] DomLink User_Full_Name // User Full Name filter button, only works if dropdown is open or previously selected
				[ ] locator "A[@textContents='User Full Name']"
			[+] DomLink User_Type // User type button, only works if dropdown is open or previously selected
				[ ] locator "A[@textContents='User Type']"
			[ ] 
			[ ] //Define Assay Table(DAT)
			[+] DomLink DefineAssay // define assay text, can be used to return to the Define Assay window by click, if available
				[ ] locator "A[@textContents='Define Assay']"
				[ ] 
			[-] DomTable DefineAssay_Table // Main table on Define Assay page
				[ ] locator  "TABLE[@id='assayTable_table']"
				[ ] 
			[+] DomElement DAT_AssayName //menu header Assay name
				[ ] locator  "SPAN[@textContents='Assay Name']"
				[ ] 
			[-] DomElement AssayName_Row1
				[ ] locator "TD[@id='assayTable_name_cell_0']"
			[+] DomElement DAT_AssayVersion // menu header Assay version
				[ ] locator  "SPAN[@textContents='Assay Version']"
				[ ] 
			[-] DomElement AssayVersion_Row1
				[ ] locator "TD[@id='assayTable_assayVersion_cell_0']"
			[+] DomElement DAT_AssayType // menu header Assay Type
				[ ] locator  "SPAN[@textContents='Assay Type']"
				[ ] 
			[-] DomElement AssayType_Row1
				[ ] locator "TD[@id='assayTable_assayTypeString_cell_0']"
			[+] DomElement DAT_AssayCreator // menu header Assay Creator
				[ ] locator  "SPAN[@textContents='Assay Creator']"
				[ ] 
			[-] DomElement AssayCreator_Row1
				[ ] locator "TD[@id='assayTable_userFullName_cell_0']"
			[+] DomElement DAT_LastModDate // menu header Last modified date
				[ ] locator  "SPAN[@textContents='Last Modified Date']"
				[ ] 
			[-] DomElement LastModDate_Row1
				[ ] locator "TD[@id='assayTable_modificationTime_cell_0']"
			[-] DomElement DAT_Refresh // refresh button
				[-] locator "BUTTON[@id='assayTable_refresh']"
					[ ] 
			[-] DomElement DAT_CreateAssay // add assay button
				[ ] locator "BUTTON[@id='assayTable_add']"
				[ ] 
			[-] DomElement DAT_ImportAssay // import assay button
				[ ] locator "BUTTON[@id='assayTable_import']"
				[ ] 
			[-] DomCheckBox DAT_CheckBoxAll //all rows checkbox to select all assays
				[ ] locator "//INPUT[@id='assayTable_tableHead*']"
			[-] DomCheckBox DAT_CheckBox1 //first row checkbox to select assay
				[ ] locator "//INPUT[@id='assayTable_selectChe*']"
			[-] DomCheckBox DAT_CheckBox2 //second row checkbox to select assay
				[ ] locator "//INPUT[@id='assayTable_selectChe*'][2]"
			[-] DomButton DAT_DeleteAssay // delete assay button
				[ ] locator "BUTTON[@id='assayTable_deleteAll']"
				[ ] 
			[ ] 
			[ ] //Import Assay Dialog, to Cancel use constant buttons list above
			[+] DomButton Browse //browse button in dialog that appears when clicking import assay button
				[ ] locator "BUTTON[@textContents='Browse']"
				[ ] 
			[+] DomButton Import //imports assay if possible
				[ ] locator "BUTTON[@id='importAssayButton']"
				[ ] 
			[ ] 
			[ ] 
			[ ] 
			[ ] //Action menu for Assays in Table number dictates which row the assay is in at the moment of clicking
			[ ] // add additional rows simply add [n] to the locator path where n is the number of the row
			[ ] // Before the closing " you will also need to change the name for the new row
			[ ] // locator "//INPUT[@id='anaylteSettings_name*']" = first row
			[ ] // locator "//INPUT[@id='anaylteSettings_name*'][2]" = second row 
			[ ] 
			[-] DomElement ActionMenu // ellipses(...) button which opens the action menu
				[ ] locator "IMG[@id='assayTable_actionMenu_0']"
			[-] DomElement ActionMenu2 // ellipses(...) button which opens the action menu for assay in 2nd row
				[ ] locator "IMG[@id='assayTable_actionMen*'][2]"
			[+] DomElement ActionMenu3 // ellipses(...) button which opens the action menu for assay in 3rd row
				[ ] locator "IMG[@id='assayTable_actionMen*'][3]"
			[+] DomElement ActionMenu4 // ellipses(...) button which opens the action menu for assay in 4th row
				[ ] locator "IMG[@id='assayTable_actionMen*'][4]"
			[+] DomElement ActionMenu5 // ellipses(...) button which opens the action menu for assay in 5th row
				[ ] locator "IMG[@id='assayTable_actionMen*'][5]"
			[ ] 
			[ ] //the elements below will work with any of the above, edit and view change based on assay type
			[-] DomLink ActionMenu_Edit // the table containing the assays
				[ ] locator "A[@id='assayTable_groupEdit*']"
			[-] DomLink ActionMenu_View // the table containing the assays
				[ ] locator "A[@id='assayTable_groupViewButton_0']"
			[ ] 
			[ ] //EditAssay / ViewAssay Constant Buttons, may need to rename
			[-] DomElement AssayActionMenu
				[ ] locator "IMG[@id='assay_edit_action']"
			[-] DomLink Duplication2
				[ ] locator "A[@id='duplicate']"
			[-] DomLink Export2
				[ ] locator "A[@id='export']"
			[-] DomLink Report2
				[ ] locator "A[@id='report']"
			[-] DomLink Convert2
				[ ] locator "A[@id='convert']"
			[-] DomLink Change_to_multi
				[ ] locator "A[@id='multi_cartridges']"
			[-] DomLink Change_to_single
				[ ] locator "A[@id='single_cartridge']"
				[ ] 
			[-] DomListBox Result_Type // Result type pulldown
				[ ] locator "SELECT[@id='result_type']"
				[ ] 
			[-] DomTextField NewAssay_Name // Assay Name field for new/duplciate assay
				[ ] locator "//INPUT[@id='defineAssays_name']"
				[ ] 
			[-] DomTextField Lot_Assay // Lot type field for create new assay
				[ ] locator "//INPUT[@id='lot']"
				[ ] 
			[-] DomElement Assay_Type // Assay Type field, in create new assay
				[ ] locator "//DIV[@class='col-md-4 pull left']"
				[ ] 
			[-] DomElement Assay_Creator
				[ ] locator "//DIV[@class='col-md-4 pull left'][2]"
				[ ] 
			[-] DomElement Assay_Created_Date
				[ ] locator "//DIV[@class='col-md-4 pull left'][3]"
			[ ] 
			[-] DomElement Last_Modified_Date
				[ ] locator "//DIV[@class='col-md-4 pull left'][4]"
			[-] DomButton Multi_Cartridge //multicart button, only exists when creating assay
				[ ] locator "//INPUT[@id='multi_cartridges']"
				[ ] 
			[-] DomButton Single_Cartridge //single cartridge button, only exists when creating assay
				[ ] locator "//INPUT[@id='single_cartridge']"
				[ ] 
			[-] DomLink AssayInfo //Create/Edit/View Assay workspace
				[ ] locator "A[@id='defineAssays_assayInfo']"
				[ ] 
			[-] DomTextField Comments // Comments field
				[ ] locator "TEXTAREA[@id='assaySettings_comments']"
				[ ] 
			[-] DomTextField Locked_Comments
				[ ] locator "TEXTAREA[@id='assaySettings_lockComments']"
				[ ] 
			[-] DomTextField Disclaimer // Disclaimer field
				[ ] locator "TEXTAREA[@id='assaySettings_disclaimer']"
				[ ] 
			[ ] 
			[ ] //Color Disclaimer collapse expand button and subsequent text fields
			[-] DomTextField LB_Disclaimer //Light Blue Disclaimer
				[ ] locator "TEXTAREA[@id='colorDisclaimer_disclaimer_0']"
				[ ] 
			[-] DomTextField LG_Disclaimer // Light Gray Disclaimer
				[ ] locator "TEXTAREA[@id='colorDisclaimer_disclaimer_1']"
				[ ] 
			[-] DomTextField R_Disclaimer // Red Disclaimer
				[ ] locator "TEXTAREA[@id='colorDisclaimer_disclaimer_2']"
				[ ] 
			[-] DomTextField G_Disclaimer // Green Disclaimer, obviously the best one...
				[ ] locator "TEXTAREA[@id='colorDisclaimer_disclaimer_3']"
				[ ] 
			[-] DomTextField Y_Disclaimer // Yellow Disclaimer
				[ ] locator "TEXTAREA[@id='colorDisclaimer_disclaimer_4']"
				[ ] 
			[-] DomTextField W_Disclaimer // White Disclaimer
				[ ] locator "TEXTAREA[@id='colorDisclaimer_disclaimer_5']"
				[ ] 
			[ ] 
			[ ] //Sample Types collapse expand button and subsequent checkboxes... there is 100+ 
			[+] DomButton SampleTypes //Sample Types button
				[ ] locator "BUTTON[@textContents='Sample Types']"
				[ ] 
			[+] DomCheckBox Checkbox1 // Abscess Check Box
				[ ] locator "//LABEL[@textContents='Abscess']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox2 // Amniotic fluid check box
				[ ] locator "//LABEL[@textContents='Amniotic fluid']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox3 // Aspirate check box
				[ ] locator "//LABEL[@textContents='Aspirate']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox4 // Basophils check box
				[ ] locator "//LABEL[@textContents='Basophils']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox5 // Bile fluid check box
				[ ] locator "//LABEL[@textContents='Bile fluid']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox6 // Blood arterial check box
				[ ] locator "//LABEL[@textContents='Blood arterial']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox7 // Blood bag check box
				[ ] locator "//LABEL[@textContents='Blood bag']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox8 // Blood capillary check box
				[ ] locator "//LABEL[@textContents='Blood capillary']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox9 // Blood mixec venous check box
				[ ] locator "//LABEL[@textContents='Blood mixed venous']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox10 // Blood product unit check box
				[ ] locator "//LABEL[@textContents='Blood product unit']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox11 // Blood venous check box
				[ ] locator "//LABEL[@textContents='Blood venous']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox12 // Body fluid, unsp check box
				[ ] locator "//LABEL[@textContents='Body fluid, unsp']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox13 // Bone check box
				[ ] locator "//LABEL[@textContents='Bone']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox14 // Breast milk check box
				[ ] locator "//LABEL[@textContents='Breast milk']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox15 // Breath check box
				[ ] locator "//LABEL[@textContents='Breath']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox16 // Bronchial check box
				[ ] locator "//LABEL[@textContents='Bronchial']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox17 // Burn check box
				[ ] locator "//LABEL[@textContents='Burn']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox18 // Calculus check box ... how is this a sample type?
				[ ] locator "//LABEL[@textContents='Calculus']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox19 // Cannula check box
				[ ] locator "//LABEL[@textContents='Cannula']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox20 // Cardiac muscle check box
				[ ] locator "//LABEL[@textContents='Cardiac muscle']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox21 // Catheter tip check box
				[ ] locator "//LABEL[@textContents='Catheter tip']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox22 // Cerebral spinal fluid check box
				[ ] locator "//LABEL[@textContents='Cerebral spinal fluid']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox23 // Cervical mucus check box
				[ ] locator "//LABEL[@textContents='Cervical mucus']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox24 // Cervix check box
				[ ] locator "//LABEL[@textContents='Cervix']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox25 // Colostrum check box
				[ ] locator "//LABEL[@textContents='Colostrum']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox26 // Conjunctiva check box
				[ ] locator "//LABEL[@textContents='Conjunctiva']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox27 // Cord blood check box
				[ ] locator "//LABEL[@textContents='Cord blood']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox28 // Curettage check box
				[ ] locator "//LABEL[@textContents='Curettage']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox29 // Cyst check box
				[ ] locator "//LABEL[@textContents='Cyst']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox30 // Dialysis fluid check box
				[ ] locator "//LABEL[@textContents='Dialysis fluid']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox31 // Dose med or substance check box
				[ ] locator "//LABEL[@textContents='Dose med or substance']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox32 // Drain check box
				[ ] locator "//LABEL[@textContents='Drain']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox33 // Duodenal fluid check box
				[ ] locator "//LABEL[@textContents='Duodenal fluid']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox34 // Ear check box
				[ ] locator "//LABEL[@textContents='Ear']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox35 // Ear wax check box
				[ ] locator "//LABEL[@textContents='Ear wax']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox36 // Electrode check box
				[ ] locator "//LABEL[@textContents='Electrode']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox37 // Endocardium check box
				[ ] locator "//LABEL[@textContents='Endocardium']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox38 // Endometrium check box
				[ ] locator "//LABEL[@textContents='Endometrium']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox39 // Eosinophils check box
				[ ] locator "//LABEL[@textContents='Eosinophils']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox40 // Erythrocytes check box
				[ ] locator "//LABEL[@textContents='Erythrocytes']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox41 // Exhaled gas check box
				[ ] locator "//LABEL[@textContents='Exhaled gas']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox42 // Eye check box
				[ ] locator "//LABEL[@textContents='Eye']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox43 // Fibroblasts check box
				[ ] locator "//LABEL[@textContents='Fibroblasts']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox44 // Filter check box
				[ ] locator "//LABEL[@textContents='Filter']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox45 // Fistula check box
				[ ] locator "//LABEL[@textContents='Fistula']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox46 // Gas check box
				[ ] locator "//LABEL[@textContents='Gas']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox47 // Gastric fluid/contents check box
				[ ] locator "//LABEL[@textContents='Gastric fluid/contents']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox48 // Genital check box
				[ ] locator "//LABEL[@textContents='Genital']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox49 // Genital cervix check box
				[ ] locator "//LABEL[@textContents='Genital cervix']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox50 // Genital lochia check box
				[ ] locator "//LABEL[@textContents='Genital lochia']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox51 // Genital vaginal check box
				[ ] locator "//LABEL[@textContents='Genital vaginal']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox52 // Hair check box
				[ ] locator "//LABEL[@textContents='Hair']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox53 // Inhaled gas check box
				[ ] locator "//LABEL[@textContents='Inhaled gas']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox54 // Intubation tube check box
				[ ] locator "//LABEL[@textContents='Intubation tube']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox55 // Isolate check box
				[ ] locator "//LABEL[@textContents='Isolate']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox56 // Lamella check box
				[ ] locator "//LABEL[@textContents='Lamella']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox57 // Leukocytes check box
				[ ] locator "//LABEL[@textContents='Leukocytes']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox58 // Line check box
				[ ] locator "//LABEL[@textContents='Line']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox59 // Line arterial check box
				[ ] locator "//LABEL[@textContents='Line arterial']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox60 // Line venous check box
				[ ] locator "//LABEL[@textContents='Line venous']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox61 // Liquid NOS check box
				[ ] locator "//LABEL[@textContents='Liquid NOS']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox62 // Lymphocytes check box
				[ ] locator "//LABEL[@textContents='Lymphocytes']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox63 // Macrophages check box
				[ ] locator "//LABEL[@textContents='Macrophages']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox64 // Marrow check box
				[ ] locator "//LABEL[@textContents='Marrow']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox65 // Meconium check box
				[ ] locator "//LABEL[@textContents='Meconium']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox66 // Menstrual blood check box
				[ ] locator "//LABEL[@textContents='Menstrual blood']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox67 // Milk check box
				[ ] locator "//LABEL[@textContents='Milk']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox68 // Nail check box
				[ ] locator "//LABEL[@textContents='Nail']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox69 // Nose check box
				[ ] locator "//LABEL[@textContents='Nose']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox70 // Pancreatic fluid check box
				[ ] locator "//LABEL[@textContents='Pancreatic fluid']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox71 // Patient check box
				[ ] locator "//LABEL[@textContents='Patient']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox72 // Peritoneal fluid/ascites check box
				[ ] locator "//LABEL[@textContents='Peritoneal fluid/ascites']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox73 // Placenta check box
				[ ] locator "//LABEL[@textContents='Placenta']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox74 // Plasma check box
				[ ] locator "//LABEL[@textContents='Plasma']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox75 // Plasma bag check box
				[ ] locator "//LABEL[@textContents='Plasma bag']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox76 // Platelet poor plasma check box
				[ ] locator "//LABEL[@textContents='Platelet poor plasma']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox77 // Platelet rich plasma check box
				[ ] locator "//LABEL[@textContents='Platelet rich plasma']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox78 // Pleural fluid check box
				[ ] locator "//LABEL[@textContents='Pleural fluid']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox79 // Polymorphoneclear neutrophils check box
				[ ] locator "//LABEL[@textContents='Polymorphonuclear neutrophils']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox80 // Pus check box
				[ ] locator "//LABEL[@textContents='Pus']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox81 // Route of medicine check box
				[ ] locator "//LABEL[@textContents='Route of medicine']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox82 // Saliva check box
				[ ] locator "//LABEL[@textContents='Saliva']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox83 // Seminal fluid check box
				[ ] locator "//LABEL[@textContents='Seminal fluid']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox84 // Serum check box
				[ ] locator "//LABEL[@textContents='Serum']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox85 // Skeletal muscle check box
				[ ] locator "//LABEL[@textContents='Skeletal muscle']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox86 // Skin check box
				[ ] locator "//LABEL[@textContents='Skin']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox87 // Spermatozoa check box
				[ ] locator "//LABEL[@textContents='Spermatozoa']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox88 // Sputum check box
				[ ] locator "//LABEL[@textContents='Sputum']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox89 // Sputum - coughed check box
				[ ] locator "//LABEL[@textContents='Sputum - coughed']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox90 // Sputum - tracheal aspirate check box
				[ ] locator "//LABEL[@textContents='Sputum - tracheal aspirate']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox91 // Stone check box
				[ ] locator "//LABEL[@textContents='Stone']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox92 // Stool check box
				[ ] locator "//LABEL[@textContents='Stool']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox93 // Sweat check box
				[ ] locator "//LABEL[@textContents='Sweat']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox94 // Synovial fluid check box
				[ ] locator "//LABEL[@textContents='Synovial fluid']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox95 // Tears check box
				[ ] locator "//LABEL[@textContents='Tears']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox96 // Throat check box
				[ ] locator "//LABEL[@textContents='Throat']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox97 // Thrombocyte check box
				[ ] locator "//LABEL[@textContents='Thrombocyte']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox98 // Tissue check box
				[ ] locator "//LABEL[@textContents='Tissue']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox99 // Tissue gall bladder check box
				[ ] locator "//LABEL[@textContents='Tissue gall bladder']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox100 // Tissue large intestine check box
				[ ] locator "//LABEL[@textContents='Tissue large intestine']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox101 // Tissue lung check box
				[ ] locator "//LABEL[@textContents='Tissue lung']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox102 // Tissue placenta check box
				[ ] locator "//LABEL[@textContents='Tissue placenta']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox103 // Tissue small intestine check box
				[ ] locator "//LABEL[@textContents='Tissue small intestine']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox104 // Tissue ulcer check box
				[ ] locator "//LABEL[@textContents='Tissue ulcer']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox105 // Tube NOS check box
				[ ] locator "//LABEL[@textContents='Tube NOS']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox106 // Ulcer check box
				[ ] locator "//LABEL[@textContents='Ulcer']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox107 // Umbilical blood check box
				[ ] locator "//LABEL[@textContents='Umbilical blood']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox108 // Unknown medicine check box
				[ ] locator "//LABEL[@textContents='Unknown medicine']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox109 // Unknown substance check box
				[ ] locator "//LABEL[@textContents='Unknown substance']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox110 // Urethra check box
				[ ] locator "//LABEL[@textContents='Urethra']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox111 // Urine check box
				[ ] locator "//LABEL[@textContents='Urine']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox112 // Urine Catheter check box
				[ ] locator "//LABEL[@textContents='Urine catheter']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox113 // Urine clean catch check box
				[ ] locator "//LABEL[@textContents='Urine clean catch']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox114 // Urine sediment check box
				[ ] locator "//LABEL[@textContents='Urine sediment']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox115 // Vitreous fluid check box
				[ ] locator "//LABEL[@textContents='Vitreous fluid']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox116 // Vomitus check box
				[ ] locator "//LABEL[@textContents='Vomitus']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox117 // Water check box
				[ ] locator "//LABEL[@textContents='Water']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox118 // Whole blood check box
				[ ] locator "//LABEL[@textContents='Whole blood']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox119 // Whole body check box
				[ ] locator "//LABEL[@textContents='Whole body']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox120 // Wick check box
				[ ] locator "//LABEL[@textContents='Wick']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox121 // Wound check box
				[ ] locator "//LABEL[@textContents='Wound']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox122 // Wound abscess check box
				[ ] locator "//LABEL[@textContents='Wound abscess']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox123 // Wound Drainage check box
				[ ] locator "//LABEL[@textContents='Wound drainage']//INPUT[@type='checkbox']"
				[ ] 
			[+] DomCheckBox Checkbox124 // Wound Exudate check box
				[-] locator "//LABEL[@textContents='Wound exudate']//INPUT[@type='checkbox']"
					[ ] 
			[ ] 
			[ ] //Define Analytes Workspace with View/Edit Assay... This is where it gets tricky
			[ ] // The values below are for the first row, to add additional rows simply add [2] to the locator path
			[ ] // Before the closing " you will also need to change the name for the new row
			[ ] // locator "//INPUT[@id='anaylteSettings_name*']" = first row
			[ ] // locator "//INPUT[@id='anaylteSettings_name*'][2]" = second row 
			[-] DomLink Define_Analytes //Define Analytes workspace button on left list
				[ ] locator "A[@id='defineAssays_defineAnalytes']"
			[-] DomTable Analyte_Table
				[ ] locator "TABLE[@class='table table-responsi*']"
			[ ] 
			[ ] //Table buttons for Viewing Assay text
			[-] DomTextField AnaylteSettings_name // Naming the Analyte row 1
				[ ] locator "//INPUT[@id='anaylteSettings_name*']"
			[-] DomTextField AnaylteSettings_name2 // Naming the Analyte row 2
				[ ] locator "//INPUT[@id='anaylteSettings_name*'][2]"
			[-] DomTextField AnaylteSettings_name3 // Naming the Analyte row 3
				[ ] locator "//INPUT[@id='anaylteSettings_name*'][3]"
			[-] DomTextField AnaylteSettings_name4 // Naming the Analyte row 4
				[ ] locator "//INPUT[@id='anaylteSettings_name*'][4]"
			[-] DomTextField AnaylteSettings_name5 // Naming the Analyte row 5
				[ ] locator "//INPUT[@id='anaylteSettings_name*'][5]"
			[ ] 
			[ ] //Table buttons for clicking the rows and what not
			[ ] //Clicks on row highlighting it
			[+] DomElement AnaylteRow // clicks on the 1st row when in view assay table
				[ ] locator "TD[@ng-repeat-start='column in analyteCol*']"
			[+] DomElement AnaylteRow2 // clicks on the 2nd row when in view assay table
				[ ] locator "TD[@ng-repeat-start='column in analyteCol*'][2]"
			[+] DomElement AnaylteRow3 // clicks on the 3rd row when in view assay table
				[ ] locator "TD[@ng-repeat-start='column in analyteCol*'][3]"
			[+] DomElement AnaylteRow4 // clicks on the 4th row when in view assay table
				[ ] locator "TD[@ng-repeat-start='column in analyteCol*'][4]"
			[+] DomElement AnaylteRow5 // clicks on the 5th row when in view assay table
				[ ] locator "TD[@ng-repeat-start='column in analyteCol*'][5]"
			[+] DomElement AnaylteRow6 // clicks on the 6th row when in view assay table
				[ ] locator "TD[@ng-repeat-start='column in analyteCol*'][6]"
			[ ] 
			[ ] //Name of analyte
			[+] DomTextField AnalyteName // first row, name of analyte
				[ ] locator "//INPUT[@name='analyteName_0']"
			[+] DomTextField AnalyteName2 // second row, name of analyte
				[ ] locator "//INPUT[@name='analyteName_1']"
			[+] DomTextField AnalyteName3 // third row, name of analyte
				[ ] locator "//INPUT[@name='analyteName_2']"
			[+] DomTextField AnalyteName4 // fourth row, name of analyte
				[ ] locator "//INPUT[@name='analyteName_3']"
			[+] DomTextField AnalyteName5 //  fifth row, name of analyte
				[ ] locator "//INPUT[@name='analyteName_4']"
				[ ] 
			[+] DomTextField AnalyteName6 // sixth row, name of analyte
				[ ] locator "//INPUT[@name='analyteName_5']"
			[ ] 
			[ ] //Reporters list, use Click instead of DomClick use arrow keys or type name of reporter
			[-] DomListBox Reporter //choose reporter in first row
				[ ] locator "SELECT[@name='reporterName_0']"
			[-] DomListBox Reporter2 //choose reporter in second row
				[ ] locator "SELECT[@name='reporterName_1']"
			[-] DomListBox Reporter3 //choose reporter in third row
				[ ] locator "SELECT[@name='reporterName_2']"
			[-] DomListBox Reporter4 //choose reporter in fourth row
				[ ] locator "SELECT[@name='reporterName_3']"
			[-] DomListBox Reporter5 //choose reporter in fifth row
				[ ] locator "SELECT[@name='reporterName_4']"
			[-] DomListBox Reporter6 //choose reporter in sixth row
				[ ] locator "SELECT[@name='reporterName_5']"
			[ ] 
			[ ] //Usage list use arrow keys or type name of probe 
			[-] DomListBox Usage // choose usage for first row
				[ ] locator "SELECT[@name='usage_0']"
			[-] DomListBox Usage2 // choose usage for second row
				[ ] locator "SELECT[@name='usage_1']"
			[-] DomListBox Usage3 // choose usage for third row
				[ ] locator "SELECT[@name='usage_2']"
			[-] DomListBox Usage4 // choose usage for fourth row
				[ ] locator "SELECT[@name='usage_3']"
			[-] DomListBox Usage5 // choose usage for fifth row
				[ ] locator "SELECT[@name='usage_4']"
			[-] DomListBox Usage6 // choose usage for sixth row
				[ ] locator "SELECT[@name='usage_5']"
				[ ] 
			[ ] 
			[ ] //Blue box under target to select Analytes, GOES BY COUNT OF BOXES NOT BY ROW!
			[-] DomButton EditTarget // Allows target edit for firsst row
				[ ] locator "BUTTON[@id='analyteSettings_edit*']"
			[-] DomButton EditTarget2 // Allows target edit for secon row
				[ ] locator "BUTTON[@id='analyteSettings_edit*'][2]"
			[-] DomButton EditTarget3 // Allows target edit for third row
				[ ] locator "BUTTON[@id='analyteSettings_edit*'][3]"
			[-] DomButton EditTarget4 // Allows target edit for fourth row
				[ ] locator "BUTTON[@id='analyteSettings_edit*'][4]"
			[-] DomButton EditTarget5 // Allows target edit for fifth row
				[ ] locator "BUTTON[@id='analyteSettings_edit*'][5]"
			[-] DomButton EditTarget6 // Allows target edit for sixth row
				[ ] locator "BUTTON[@id='analyteSettings_edit*'][6]"
			[ ] 
			[ ] //check boxes to choose analytes within dialog for target# edit.
			[-] DomCheckBox EditTargets_Check// first check box
				[ ] locator "//INPUT[@id='editTargets_check_0']"
			[+] DomCheckBox EditTargets_Check2// second check box
				[ ] locator "//INPUT[@id='editTargets_check_1']"
			[+] DomCheckBox EditTargets_Check3// third check box
				[ ] locator "//INPUT[@id='editTargets_check_2']"
			[+] DomCheckBox EditTargets_Check4// fourth check box
				[ ] locator "//INPUT[@id='editTargets_check_3']"
			[+] DomCheckBox EditTargets_Check5// fifth check box
				[ ] locator "//INPUT[@id='editTargets_check_4']"
			[+] DomCheckBox EditTargets_Check6// sixth check box
				[ ] locator "//INPUT[@id='editTargets_check_5']"
			[ ] 
			[ ] 
			[ ] //Delete analyte button
			[-] DomButton DeleteAnalyteButton // Delete analyte button row 1
				[ ] locator "//BUTTON[@id='analyteSettings_dele*']"
			[-] DomButton DeleteAnalyteButton2 // Delete analyte button row 2
				[ ] locator "//BUTTON[@id='analyteSettings_dele*'][2]"
			[-] DomButton DeleteAnalyteButton3 // Delete analyte button row 3
				[ ] locator "//BUTTON[@id='analyteSettings_dele*'][3]"
			[-] DomButton DeleteAnalyteButton4 // Delete analyte button row 3
				[ ] locator "//BUTTON[@id='analyteSettings_dele*'][4]"
			[-] DomButton DeleteAnalyteButton5 // Delete analyte button row 3
				[ ] locator "//BUTTON[@id='analyteSettings_dele*'][5]"
			[-] DomButton DeleteAnalyteButton6 // Delete analyte button row 3
				[ ] locator "//BUTTON[@id='analyteSettings_dele*'][6]"
			[ ] 
			[-] DomButton Add_Analyte // add analyte button
				[ ] locator "BUTTON[@id='analyteSettings_add']"
			[ ] 
			[ ] //as stated above, to click the next row, create a new DomButton and add a [2] to the locator.
			[-] DomButton ReporterScaling // opens and closes the reporter scaling menu
				[ ] locator "BUTTON[@id='reporter_collapse_ex*']"
			[-] DomTable ReportScaling_Table
				[ ] locator "TABLE[@class='table table-responsi*'][2]"
			[ ] //Row 1 value
			[-] DomElement ReportScaling_Row1_Reporter // reporter name in report scaling, row 1
				[ ] locator "//TR[@ng-repeat='dataRow in reporters*']/TD[@ng-repeat='column in reporterTa*']"
			[-] DomElement ReportScaling_Row1_Value // reporter value in report scaling, row 1
				[ ] locator "//TR[@ng-repeat='dataRow in reporters*']/TD[@ng-repeat='column in reporterTa*'][2]"
			[ ] //Row 2 value
			[-] DomElement ReportScaling_Row2_Reporter // reporter name in report scaling, row 2
				[ ] locator "//TR[@ng-repeat='dataRow in reporters*'][2]/TD[@ng-repeat='column in reporterTa*']"
			[-] DomElement ReportScaling_Row2_Value // reporter value in report scaling, row 2
				[ ] locator "//TR[@ng-repeat='dataRow in reporters*'][2]/TD[@ng-repeat='column in reporterTa*'][2]"
			[ ] //Row 3 value
			[-] DomElement ReportScaling_Row3_Reporter // reporter name in report scaling, row 3
				[ ] locator "//TR[@ng-repeat='dataRow in reporters*'][3]/TD[@ng-repeat='column in reporterTa*']"
			[-] DomElement ReportScaling_Row3_Value // reporter value in report scaling, row 3
				[ ] locator "//TR[@ng-repeat='dataRow in reporters*'][3]/TD[@ng-repeat='column in reporterTa*'][2]"
			[ ] //Row 4 value
			[+] DomElement ReportScaling_Row4_Reporter // reporter name in report scaling, row 4
				[ ] locator "//TR[@ng-repeat='dataRow in reporters*'][4]/TD[@ng-repeat='column in reporterTa*']"
			[+] DomElement ReportScaling_Row4_Value // reporter value in report scaling, row 4
				[ ] locator "//TR[@ng-repeat='dataRow in reporters*'][4]/TD[@ng-repeat='column in reporterTa*'][2]"
			[ ] //Row 5 value
			[+] DomElement ReportScaling_Row5_Reporter // reporter name in report scaling, row 5
				[ ] locator "//TR[@ng-repeat='dataRow in reporters*'][5]/TD[@ng-repeat='column in reporterTa*']"
			[+] DomElement ReportScaling_Row5_Value // reporter value in report scaling, row 5
				[ ] locator "//TR[@ng-repeat='dataRow in reporters*'][5]/TD[@ng-repeat='column in reporterTa*'][2]"
			[ ] //Row 6 value
			[+] DomElement ReportScaling_Row6_Reporter // reporter name in report scaling, row 6
				[ ] locator "//TR[@ng-repeat='dataRow in reporters*'][6]/TD[@ng-repeat='column in reporterTa*']"
			[+] DomElement ReportScaling_Row6_Value // reporter value in report scaling, row 6
				[ ] locator "//TR[@ng-repeat='dataRow in reporters*'][6]/TD[@ng-repeat='column in reporterTa*'][2]"
			[ ] 
			[ ] 
			[ ] //you will need to double click CalScale to highlight the value
			[+] DomTextField CalScale //this clicks the calibration scale text box on the first row
				[ ] locator "//INPUT[@name='intendedConcentratio*']"
			[ ] 
			[ ] 
			[ ] 
			[ ] //Command Sequence button and associated menu
			[+] DomLink Command_Sequence //Command Sequence workspace
				[ ] locator "A[@id='defineAssays_command*']"
				[ ] 
			[+] DomTable Command_Seq_Table
				[ ] locator "TABLE[@class='table table-responsi*']"
			[+] DomElement Collapse_Expand //the collapse and expand all menues button
				[ ] locator "IMG[@title='Collapse/Expand']"
				[ ] 
			[+] DomButton CommandSequenceButton // collapses and expands the Command sequence table
				[ ] locator "BUTTON[@id='commands']"
				[ ] 
			[ ] 
			[+] DomButton CopyfromAssay // button to open dialog that allows user to create copies selected commands from another chosen assay
				[ ] locator "BUTTON[@title='Copy From Assay']"
				[ ] 
			[-] DomListBox AssayList // list of assays for copying command sequence
				[ ] locator "SELECT[@id='assaylist']"
			[-] DomButton AddBefore // add's selected commands before the highlighted command
				[ ] locator "BUTTON[@title='Add before Selected']"
				[ ] 
			[-] DomButton AddAfter // add's selected commands after the highlighted command
				[ ] locator "BUTTON[@title='Add after Selected']"
				[ ] 
			[+] DomButton Cut //removes from the sequence and saves to selected commands to clipboard 
				[ ] locator "BUTTON[@title='Cut']"
				[ ] 
			[+] DomButton Paste // Pastes the copied or cut commands
				[ ] locator "Button[@title='Paste']"
				[ ] 
			[-] DomButton Del_Sel_Cmd // Delete button to delete selected commands from command sequence
				[ ] locator "BUTTON[@title='Delete Selected']"
			[-] DomCheckBox SelectallCommands // the checkbox that checks all checkboxes when checked... :)
				[ ] locator "//INPUT[@ng-if='canSelect()']"
				[ ] 
			[-] DomCheckBox FirstCommand //checkbox for first command
				[ ] locator "//INPUT[@class='ng-scope']"
				[ ] 
			[-] DomCheckBox SecondCommand // checkbox for second command
				[ ] locator "//INPUT[@class='ng-scope'][2]"
				[ ] 
			[+] DomElement DeleteCommand // this is incremented by 2, so row 2 is [3] not [2]
				[ ] locator "IMG[@class='pull-right ng-scope']"
				[ ] 
			[+] DomElement EditCommand // this is incremented by 2, so row 2 is [4] not [3]
				[ ] locator "IMG[@class='pull-right ng-scope'][2]"
				[ ] 
			[ ] 
			[ ] //Insert New Command window
			[-] DomListBox SelectCommand // command drop down menu that contains all selectable commands
				[ ] locator "SELECT[@id='addCommand_select']"
			[+] DomListBox ChamberNum // drop down menu that contains all available chambers
				[ ] locator "SELECT[@name='chamber']"
			[-] DomTextField Volume // Volume text field to place volume in micro liters
				[ ] locator "//INPUT[@name='volume']"
			[+] DomTextField FlowRate // Text field for Flow Rate of solution at micro Liters per Second
				[ ] locator "//INPUT[@name='flowRate']"
			[+] DomListBox Path // Path pull down menu for the solution
				[ ] locator "SELECT[@name='path']"
			[+] DomTextField Count_Times // Text field to list how many times you wish for the action/command to take place
				[ ] locator "//INPUT[@name='repeatCount']"
			[+] DomTextField Var_Volume // Text field for Aspirate or Dispense Volume for (Variable) commands 
				[ ] locator "//INPUT[@name='volumeRegister']"
			[+] DomTextField Var_FlowRate // Text field for Aspirate or Dispense Volume for (Variable) commands
				[ ] locator "//INPUT[@name='flowRateRegister']"
			[+] DomListBox Start_With // Pull down menu within toggle command 
				[ ] locator "SELECT[@name='startOption']"
			[+] DomTextField DispenseVolume //Text field specifc to toggle menu for now
				[ ] locator "//INPUT[@name='dispenseVolume']"
			[+] DomTextField DispenseFlowRate //Text field specific to toggle menu for now
				[ ] locator "//INPUT[@name='dispenseFlow']"
			[+] DomTextField Aspirate_Vol //Text field specific to toggle menu for now
				[ ] locator "//INPUT[@name='aspirateVolume']"
			[+] DomTextField Aspirate_FlowRate //Text field specific to toggle menu for now, 
				[ ] locator "//INPUT[@name='aspirateFlow']"
			[+] DomTextField Time_Sec // Text field time in seconds goes to one decimal place. 
				[ ] locator "//INPUT[@name='waitTime']"
				[ ] 
				[ ] 
			[+] DomTextField Amplitude // Amplitude Text field
				[ ] locator "//INPUT[@name='amplitude']"
				[ ] 
			[+] DomTextField Period //Period Text field
				[ ] locator "//INPUT[@name='period']"
			[+] DomCheckBox BlockTube // Block tube checkbox, within Pressurize tube command
				[ ] locator "//INPUT[@name='blockTube']"
			[+] DomTextField MinPressure // Min Pressure text field
				[ ] locator "//INPUT[@name='minPressure']"
			[+] DomTextField MaxPressure // Max Pressure text field
				[ ] locator "//INPUT[@name='maxPressure']"
			[+] DomTextField LogInterval // Log Interval
				[ ] locator "//INPUT[@name='logInterval']"
			[+] DomTextField Destination // Destination Variable Text Field within Store and Label
				[ ] locator "//INPUT[@name='destination']"
			[+] DomTextField Value // Value Text Field within Store
				[ ] locator "//INPUT[@name='value']"
			[+] DomTextField Operand // Operand 1 text field 
				[ ] locator "//INPUT[@name='operand1']"
			[+] DomListBox Op_Code // within math, I do not know what this is...
				[ ] locator "SELECT[@name='opCode']"
			[+] DomListBox Pres_Abort_Reporting // Pressure abort reporting pulldown menu
				[ ] locator "SELECT[@class='form-control ng-pris*']"
			[+] DomTextField First_Compress
				[ ] locator "INPUT[@name='firstCompressVolume']"
			[+] DomTextField Second_Compress
				[ ] locator "//INPUT[@name='secondCompressVolume']"
			[+] DomTextField Hold_Time
				[ ] locator "INPUT[@name='timeHold']"
			[+] DomTextField Delta_PSI_Limit
				[ ] locator "//INPUT[@name='deltaPsiLimit']"
			[+] DomListBox ErrorCode
				[ ] locator "SELECT[@name='errorCode']"
			[+] DomTextField Parameter1 
				[ ] locator "//INPUT[@name='param1']"
			[+] DomTextField Parameter2
				[ ] locator "//INPUT[@name='param2']"
			[+] DomTextField Parameter3
				[ ] locator "//INPUT[@name='param3']"
			[-] DomTextField Parameter4
				[ ] locator "//INPUT[@name='param4']"
			[+] DomListBox CITMode
				[ ] locator "SELECT[@name='mode']"
			[ ] 
			[ ] //Stupid Complicated Protocol Command sub menu within protocol command/Insert New Command
			[+] DomLink EC_Analytes // Edit command Protocol Analyte tab button/link
				[ ] locator "A[@id='commandProtocol_anal*']"
			[-] DomCheckBox Select_All_ChkBox // checkbox in Protocol command, assuming it will work for all
				[ ] locator "//INPUT[@id='selectAll']"
			[+] DomCheckBox EC_ChkBox1 // first check box, all locators are the same ToDo: let Garry know
				[ ] locator "//INPUT[@id='commandProtocol_anal*']"
			[+] DomButton EC_AddStage //Add stages
				[ ] locator "BUTTON[@id='commandProtocol_stag*']"
			[+] DomLink EC_Stages // Edit command Protocol Stages tab button/link
				[ ] locator "A[@id='commandProtocol_stag*']"
			[+] DomLink EC_Stages2 // Edit command Protocol Stages tab button/link row 2
				[ ] locator "A[@id='commandProtocol_stag*'][2]"
			[+] DomListBox Stage_Type // Chrome legacy window for pull down, after click use arrow keys
				[ ] locator "SELECT[@id='commandProtocol_stage_type_0']"
			[+] DomListBox Stage_Type2 // Chrome legacy window for pull down, after click use arrow keys
				[ ] locator "SELECT[@id='commandProtocol_stage_type_1']"
			[+] DomListBox Stage_Type3 // Chrome legacy window for pull down, after click use arrow keys
				[ ] locator "SELECT[@id='commandProtocol_stage_type_2']"
			[+] DomListBox Stage_Type4 // Chrome legacy window for pull down, after click use arrow keys
				[ ] locator "SELECT[@id='commandProtocol_stage_type_3']"
			[+] DomListBox Stage_Type5 // Chrome legacy window for pull down, after click use arrow keys
				[ ] locator "SELECT[@id='commandProtocol_stage_type_4']"
			[+] DomListBox Stage_Type6 // Chrome legacy window for pull down, after click use arrow keys
				[ ] locator "SELECT[@id='commandProtocol_stage_type_5']"
				[ ] 
			[+] DomTextField Temp_1C //First text field in which you can type in Temp
				[ ] locator "//INPUT[@id='commandProtocol_stage_temperature_0_0']"
			[+] DomTextField Temp_1C2 // Second text field for Temp, irregardless of stage number top to bottom
				[ ] locator "//INPUT[@id='commandProtocol_stage_temperature_0_1']"
			[+] DomTextField Temp_1C3 // Third text field for Temp, irregardless of stage number top to bottom
				[ ] locator "//INPUT[@id='commandProtocol_stage_temperature_0_2']"
			[+] DomTextField Temp_2C //First text field in which you can type in Temp
				[ ] locator "//INPUT[@id='commandProtocol_stage_temperature_1_0']"
			[+] DomTextField Temp_2C2 // Second text field for Temp, irregardless of stage number top to bottom
				[ ] locator "//INPUT[@id='commandProtocol_stage_temperature_1_1']"
			[+] DomTextField Temp_2C3 // Third text field for Temp, irregardless of stage number top to bottom
				[ ] locator "//INPUT[@id='commandProtocol_stage_temperature_1_2']"
			[+] DomTextField Temp_3C //First text field in which you can type in Temp
				[ ] locator "//INPUT[@id='commandProtocol_stage_temperature_2_0']"
			[+] DomTextField Temp_3C2 // Second text field for Temp, irregardless of stage number top to bottom
				[ ] locator "//INPUT[@id='commandProtocol_stage_temperature_2_1']"
			[+] DomTextField Temp_3C3 // Third text field for Temp, irregardless of stage number top to bottom
				[ ] locator "//INPUT[@id='commandProtocol_stage_temperature_2_2']"
			[+] DomTextField Temp_4C //First text field in which you can type in Temp
				[ ] locator "//INPUT[@id='commandProtocol_stage_temperature_3_0']"
			[+] DomTextField Temp_4C2 // Second text field for Temp, irregardless of stage number top to bottom
				[ ] locator "//INPUT[@id='commandProtocol_stage_temperature_3_1']"
			[+] DomTextField Temp_4C3 // Third text field for Temp, irregardless of stage number top to bottom
				[ ] locator "//INPUT[@id='commandProtocol_stage_temperature_3_2']"
				[ ] 
			[+] DomTextField Temp_5C // Second text field for Temp, irregardless of stage number top to bottom
				[ ] locator "//INPUT[@id='commandProtocol_stage_temperature_4_0']"
			[+] DomTextField Temp_5C2 // Second text field for Temp, irregardless of stage number top to bottom
				[ ] locator "//INPUT[@id='commandProtocol_stage_temperature_4_1']"
			[+] DomTextField Temp_5C3 // Third text field for Temp, irregardless of stage number top to bottom
				[ ] locator "//INPUT[@id='commandProtocol_stage_temperature_4_2']"
			[+] DomTextField Temp_6C //First text field in which you can type in Temp
				[ ] locator "//INPUT[@id='commandProtocol_stage_temperature_5_0']"
			[+] DomTextField Temp_6C2 // Second text field for Temp, irregardless of stage number top to bottom
				[ ] locator "//INPUT[@id='commandProtocol_stage_temperature_5_1']"
			[+] DomTextField Temp_6C3 // Third text field for Temp, irregardless of stage number top to bottom
				[ ] locator "//INPUT[@id='commandProtocol_stage_temperature_5_2']"
			[+] DomTextField Seconds1 // Seconds's Text field, similiar to Temp, top down regardless of stage
				[ ] locator "//INPUT[@id='commandProtocol_stage_seconds_0_0']"
			[+] DomTextField Seconds1_2 // Second Time text field, top to bottom, regardless of stage
				[ ] locator "//INPUT[@id='commandProtocol_stage_seconds_0_1']"
			[-] DomTextField Seconds1_3 // Third time text field, top to bottom, regardless of stage
				[ ] locator "//INPUT[@id='commandProtocol_stage_seconds_0_2']"
			[-] DomTextField Seconds1_4 // Third time text field, top to bottom, regardless of stage
				[ ] locator "//INPUT[@id='commandProtocol_stage_seconds_0_3']"
			[-] DomTextField Seconds1_5 // Third time text field, top to bottom, regardless of stage
				[ ] locator "//INPUT[@id='commandProtocol_stage_seconds_0_4']"
				[ ] 
			[+] DomTextField Seconds2 // Seconds's Text field, similiar to Temp, top down regardless of stage
				[ ] locator "//INPUT[@id='commandProtocol_stage_seconds_1_0']"
			[+] DomTextField Seconds2_2 // Second Time text field, top to bottom, regardless of stage
				[ ] locator "//INPUT[@id='commandProtocol_stage_seconds_1_1']"
			[+] DomTextField Seconds2_3 // Third time text field, top to bottom, regardless of stage
				[ ] locator "//INPUT[@id='commandProtocol_stage_seconds_1_2']"
			[+] DomTextField Seconds3 // Seconds's Text field, similiar to Temp, top down regardless of stage
				[ ] locator "//INPUT[@id='commandProtocol_stage_seconds_2_0']"
			[+] DomTextField Seconds3_2 // Second Time text field, top to bottom, regardless of stage
				[ ] locator "//INPUT[@id='commandProtocol_stage_seconds_2_1']"
			[+] DomTextField Seconds3_3 // Third time text field, top to bottom, regardless of stage
				[ ] locator "//INPUT[@id='commandProtocol_stage_seconds_2_2']"
				[ ] 
			[+] DomTextField Seconds4 // Seconds's Text field, similiar to Temp, top down regardless of stage
				[ ] locator "//INPUT[@id='commandProtocol_stage_seconds_3_0']"
			[+] DomTextField Seconds4_2 // Second Time text field, top to bottom, regardless of stage
				[ ] locator "//INPUT[@id='commandProtocol_stage_seconds_3_1']"
			[+] DomTextField Seconds4_3 // Third time text field, top to bottom, regardless of stage
				[ ] locator "//INPUT[@id='commandProtocol_stage_seconds_3_2']"
				[ ] 
			[+] DomTextField Seconds5 // Seconds's Text field, similiar to Temp, top down regardless of stage
				[ ] locator "//INPUT[@id='commandProtocol_stage_seconds_4_0']"
			[+] DomTextField Seconds5_2 // Second Time text field, top to bottom, regardless of stage
				[ ] locator "INPUT[@id='commandProtocol_stage_seconds_4_1']"
			[+] DomTextField Seconds5_3 // Third time text field, top to bottom, regardless of stage
				[ ] locator "INPUT[@id='commandProtocol_stage_seconds_4_2']"
			[+] DomTextField Seconds6 // Seconds's Text field, similiar to Temp, top down regardless of stage
				[ ] locator "//INPUT[@id='commandProtocol_stage_seconds_5_0']"
			[+] DomTextField Seconds6_2 // Second Time text field, top to bottom, regardless of stage
				[ ] locator "INPUT[@id='commandProtocol_stage_seconds_5_1']"
			[+] DomTextField Seconds6_3 // Third time text field, top to bottom, regardless of stage
				[ ] locator "INPUT[@id='commandProtocol_stage_seconds_5_2']"
			[ ] 
			[+] DomCheckBox Optics_ChkBox // Check box for optics, order is from top to bottom regardless of stage number
				[ ] locator "//INPUT[@ng-disabled='!isEditable || stage*']"
			[+] DomCheckBox Optics_ChkBox2 // Check box for optics, order is from top to bottom regardless of stage number
				[ ] locator "//INPUT[@ng-disabled='!isEditable || stage*'][2]"
			[+] DomCheckBox Optics_ChkBox3 // Check box for optics, order is from top to bottom regardless of stage number
				[ ] locator "//INPUT[@ng-disabled='!isEditable || stage*'][3]"
			[+] DomTextField Repeat_Times // Text field for Repeat times, only ever be one per stage, ordered top to bottom
				[ ] locator "//INPUT[@name='count']"
			[+] DomTextField Repeat_Times2 // Text field for Repeat times, only ever be one per stage, ordered top to bottom
				[ ] locator "//INPUT[@name='count'][2]"
			[+] DomTextField Repeat_Times3 // Text field for Repeat times, only ever be one per stage, ordered top to bottom
				[ ] locator "//INPUT[@name='count'][3]"
				[ ] 
			[+] DomTextField FirstCompVol
				[ ] locator "INPUT[@name='firstCompressVolume']"
			[+] DomTextField SecondCompVol
				[ ] locator "INPUT[@name='secondCompressVolume']"
			[ ] 
			[ ] 
			[ ] //Crosstalk factors in Protocol submenu within Insert New Command Dialog
			[ ] //Collapse Expand is listed above
			[+] DomLink CrossTalk_Factors // Crosstalk Factors tab button, click to access menu
				[ ] locator "A[@id='commandProtocol_cros*']"
			[+] DomButton PCR_CT //PCR Crosstalk button, expands and collapses menu within crosstalk menu
				[ ] locator "BUTTON[@textContents='PCR Crosstalk Factor*']"
			[ ] //PCR Crosstalk Factors Table, following values are ordered left to right and top to bottom; each row has three text field
			[ ] //ToDo may need more adaptive code for both Crosstalk and Residual Crosstalk.
			[+] DomTextField CT_Textfield1 // First text field available in row one if Alx532 or alx 647 is at the top
				[ ] locator "INPUT[@id='crosstalk_factors_Al*']"
			[+] DomTextField CT_TextField2 // Second text field available in row one
				[ ] locator "INPUT[@id='crosstalk_factors_Al*'][2]"
			[+] DomTextField CT_TextField3 // Third text field available in row one
				[ ] locator "INPUT[@id='crosstalk_factors_Al*'][3]"
			[+] DomTextField CT_Textfield4 // First text field available in row two
				[ ] locator "INPUT[@id='crosstalk_factors_Al*'][4]"
			[+] DomTextField CT_Textfield5 // Second text field available in row two
				[ ] locator "INPUT[@id='crosstalk_factors_Al*'][5]"
			[+] DomTextField CT_Textfield6 // Third text field available in row two
				[ ] locator "INPUT[@id='crosstalk_factors_Al*'][6]"
			[+] DomTextField CT_Textfield7 // First text field available in row three
				[ ] locator "INPUT[@id='crosstalk_factors_Al*'][7]"
			[+] DomTextField CT_Textfield8 // Second text field available in row three
				[ ] locator "INPUT[@id='crosstalk_factors_Al*'][8]"
			[+] DomTextField CT_Textfield9 // Third text field available in row three
				[ ] locator "INPUT[@id='crosstalk_factors_Al*'][9]"
			[+] DomTextField CT_Textfield10 // First text field available in row four
				[ ] locator "INPUT[@id='crosstalk_factors_Al*'][10]"
			[+] DomTextField CT_Textfield11 // First text field available in row one if CF1 or CF6 is at the top
				[ ] locator "INPUT[@id='crosstalk_factors_CF*']"
			[+] DomTextField CT_TextField12 // Second text field available in row one
				[ ] locator "INPUT[@id='crosstalk_factors_CF*'][2]"
			[+] DomTextField CT_TextField13 // Third text field available in row one
				[ ] locator "INPUT[@id='crosstalk_factors_CF*'][3]"
			[+] DomTextField CT_Textfield14 // First text field available in row two
				[ ] locator "INPUT[@id='crosstalk_factors_CF*'][4]"
			[+] DomTextField CT_Textfield15 // Second text field available in row two
				[ ] locator "INPUT[@id='crosstalk_factors_CF*'][5]"
			[+] DomTextField CT_Textfield16 // Third text field available in row two
				[ ] locator "INPUT[@id='crosstalk_factors_CF*'][6]"
			[+] DomTextField CT_Textfield17 // First text field available in row three
				[ ] locator "INPUT[@id='crosstalk_factors_CF*'][7]"
			[+] DomTextField CT_Textfield18 // Second text field available in row three
				[ ] locator "INPUT[@id='crosstalk_factors_CF*'][8]"
			[+] DomTextField CT_Textfield19 // Third text field available in row three
				[ ] locator "INPUT[@id='crosstalk_factors_CF*'][9]"
			[+] DomTextField CT_Textfield20 // First text field available in row four
				[ ] locator "INPUT[@id='crosstalk_factors_CF*'][10]"
			[ ] //First row involving Fam
			[+] DomTextField CT_Textfield21 // Second text field available in row two
				[ ] locator "INPUT[@id='crosstalk_factors_FA*']"
			[+] DomTextField CT_Textfield22 // Third text field available in row two
				[ ] locator "INPUT[@id='crosstalk_factors_FA*'][2]"
			[+] DomTextField CT_Textfield23 // First text field available in row three
				[ ] locator "INPUT[@id='crosstalk_factors_FA*'][3]"
			[+] DomTextField CT_Textfield24 // Second text field available in row three
				[ ] locator "INPUT[@id='crosstalk_factors_FA*'][4]"
			[+] DomTextField CT_Textfield25 // Third text field available in row three
				[ ] locator "INPUT[@id='crosstalk_factors_FA*'][5]"
				[ ] //First Row involving TxR
			[+] DomTextField CT_Textfield26 // Second text field available in row two
				[ ] locator "INPUT[@id='crosstalk_factors_Tx*']"
			[+] DomTextField CT_Textfield27 // Third text field available in row two
				[ ] locator "INPUT[@id='crosstalk_factors_Tx*'][2]"
			[+] DomTextField CT_Textfield28 // First text field available in row three
				[ ] locator "INPUT[@id='crosstalk_factors_Tx*'][3]"
			[+] DomTextField CT_Textfield29 // Second text field available in row three
				[ ] locator "INPUT[@id='crosstalk_factors_Tx*'][4]"
			[+] DomTextField CT_Textfield30 // Third text field available in row three
				[ ] locator "INPUT[@id='crosstalk_factors_Tx*'][5]"
			[ ] 
			[ ] 
			[ ] //Residual Crosstalk Table
			[ ] //ToDo import assay that contains residual crosstalk values.
			[+] DomButton Res_CT // Residual Crosstalk button, expands and collapses menu
				[ ] locator "BUTTON[@textContents='Residual Crosstalk F*']"
			[-] DomTable Res_Table
				[ ] locator "//TABLE[@id='res_crosstalk_table_*']"
			[+] DomCheckBox Enable_Res_CT // Checkbox to enable Residual Cross talk
				[ ] locator "//INPUT[@id='crosstalkCorrSetting*']"
			[+] DomButton Add_Res_CT // Add button
				[ ] locator "BUTTON[@id='res_crosstalk_table_*']"
			[+] DomListBox From_Reporter
				[ ] locator "SELECT[@id='res_crosstalk_table_*']"
			[+] DomListBox To_Reporter
				[ ] locator "SELECT[@id='res_crosstalk_table_*'][2]"
			[-] DomButton Res_Delete
				[ ] locator "IMG[@id='res_crosstalk_table_deleteButton_0']"
			[ ] 
			[ ] //If there is only one Residual Crosstalk factor
			[+] DomTextField RCT_A // Ignore Band Boundaries Text field in Residual Crosstalk
				[ ] locator "//INPUT[@id='res_crosstalk_table_*']"
			[+] DomTextField RCT_B // Min Source EndPoint Text field in Residual Crosstalk
				[ ] locator "//INPUT[@id='res_crosstalk_table_*'][2]"
			[+] DomTextField RCT_C // Max Crosstalk Channel Enpoint Text field in Residual Crosstalk
				[ ] locator "//INPUT[@id='res_crosstalk_table_*'][3]"
			[+] DomTextField RCT_D // Max Absolute Channel Endpoint Text field in Residual Crosstalk
				[ ] locator "//INPUT[@id='res_crosstalk_table_*'][4]"
			[+] DomTextField RCT_E // Min R^2 Text field in Residual Crosstalk
				[ ] locator "//INPUT[@id='res_crosstalk_table_*'][5]"
			[ ]  
			[ ] //If there is two or more refer to these Id's
			[+] DomTextField RCT_A_row1 // Ignore Band Boundaries Text field in Residual Crosstalk
				[ ] locator "//INPUT[@name='opticBoundValue_0']"
			[+] DomTextField RCT_A_row2 // Ignore Band Boundaries Text field in Residual Crosstalk
				[ ] locator "//INPUT[@name='opticBoundValue_1']"
			[+] DomTextField RCT_B_row1 // Min Source EndPoint Text field in Residual Crosstalk
				[ ] locator "//INPUT[@id='res_crosstalk_table_*'][2]"
			[+] DomTextField RCT_C_row1 // Max Crosstalk Channel Enpoint Text field in Residual Crosstalk
				[ ] locator "//INPUT[@id='res_crosstalk_table_*'][3]"
			[+] DomTextField RCT_D_row1 // Max Absolute Channel Endpoint Text field in Residual Crosstalk
				[ ] locator "//INPUT[@id='res_crosstalk_table_*'][4]"
			[+] DomTextField RCT_E_row1 // Min R^2 Text field in Residual Crosstalk
				[ ] locator "//INPUT[@id='res_crosstalk_table_*'][5]"
			[ ] 
			[ ] //Advance to New Stage
			[ ] // ToDo: Locators do not have unique identifies, inform Garry.
			[+] DomLink AdvToNewStage // Advance to new stage tab button to open up menu
				[ ] locator "A[@id='commandProtocol_adva*']"
			[+] DomButton AddNewStage // Add new stage criteria button
				[ ] locator "BUTTON[@title='Add']"
			[-] DomListBox ANS_Analyte // First Analyte Dropdown Menu
				[ ] locator "TR[@ng-repeat='row in param.advance*']/TD[@ng-repeat='col in advanceToStag*']/SELECT[@ng-disabled='isDisabled()']"
			[-] DomListBox ANS_Monitor // Monitor Stage # pull down menu
				[ ] locator "TR[@ng-repeat='row in param.advance*']/TD[@ng-repeat='col in advanceToStag*'][3]/SELECT[@ng-disabled='isDisabled()']"
			[-] DomListBox ANS_AdvToStage //Avance To Stage # pull down menu in first row.
				[ ] locator "TR[@ng-repeat='row in param.advance*']/TD[@ng-repeat='col in advanceToStag*'][4]/SELECT[@ng-disabled='isDisabled()']"
			[+] DomCheckBox ANS_StopAfterStage // Checkbox for Stop After New Stage
				[ ] locator "//INPUT[@ng-if='col.controlType === *']"
			[+] DomCheckBox ANS_StopNoCT // Stop if No CT checkbox for row one
				[ ] locator "//INPUT[@ng-if='col.controlType === *'][2]"
			[+] DomElement ANS_Delete // Delete button for first row in Advance to New stage table
				[ ] locator "IMG[@class='pull-right']"
			[ ] 
			[ ] //Decision Menu
			[+] DomCheckBox SelectAllAnalytes //checkbox in Decision Menu to select all analytes
				[ ] locator "//INPUT[@class='ng-pristine ng-valid*']"
			[+] DomCheckBox DM_Analyte1 // First Analytes check box
				[ ] locator "//INPUT[@id='commandDecision_anal*']"
			[+] DomCheckBox DM_Analyte2 // Second Analyte check box
				[ ] locator "//INPUT[@id='commandDecision_anal*'][2]"
			[ ] 
			[ ] //Locators for pull downs if there is only one analyte chosen in Decision Menu
			[+] DomListBox POS
				[ ] locator "SELECT[@id='tableResults_decisio*']"
			[+] DomListBox NEG
				[ ] locator "SELECT[@id='tableResults_decisio*'][2]"
			[+] DomListBox INVALID
				[ ] locator "SELECT[@id='tableResults_decisio*'][3]"
			[ ] 
			[ ] //Locators for pull down menu if there is 2 or more Analytes selected in Decision Menu
			[+] DomListBox DM_Decision1
				[ ] locator "SELECT[@name='decision_0']"
			[+] DomListBox DM_Decision2
				[ ] locator "SELECT[@name='decision_1']"
			[+] DomListBox DM_Decision3
				[ ] locator "SELECT[@name='decision_2']"
			[+] DomListBox DM_Decision4
				[ ] locator "SELECT[@name='decision_3']"
			[+] DomListBox DM_Decision5
				[ ] locator "SELECT[@name='decision_4']"
			[+] DomListBox DM_Decision6
				[ ] locator "SELECT[@name='decision_5']"
			[+] DomListBox DM_Decision7
				[ ] locator "SELECT[@name='decision_6']"
			[+] DomListBox DM_Decision8
				[ ] locator "SELECT[@name='decision_7']"
			[+] DomListBox DM_Decision9
				[ ] locator "SELECT[@name='decision_8']"
			[+] DomListBox DM_Decision10
				[ ] locator "SELECT[@name='decision_9']"
			[+] DomListBox DM_Decision11
				[ ] locator "SELECT[@name='decision_10']"
			[+] DomListBox DM_Decision12
				[ ] locator "SELECT[@name='decision_11']"
			[ ] 
			[ ] 
			[ ] 
			[ ] //Simulation sub menu and associated buttons
			[+] DomButton SimulationButton // collapses and expands the Simulation tab
				[ ] locator "BUTTON[@id='Simulator']"
			[+] DomButton StartSim // Starts simulation
				[ ] locator "BUTTON[@id='startSimulation']"
			[+] DomButton SimLog // Sim Log button, I do not know what this does...
				[ ] locator "BUTTON[@id='simulationLog']"
			[+] DomButton StopSim // Stops simulation
				[ ] locator "BUTTON[@id='stopSimulation']"
				[ ] 
				[ ] 
			[ ] 
			[ ] //Chambers button and subsequent buttons and associated buttons
			[+] DomButton ChambersButton //collapses and expands Chambers menu
				[ ] locator "BUTTON[@id='chambers']"
				[ ] 
			[-] DomListBox AirChamber // Airchamber pulldown menu
				[ ] locator "//SELECT[@class='ng-pristine ng-untou*'][2]"
			[-] DomTable ChambersTable
				[ ] locator "//TABLE[@id='chambers_table']"
			[-] DomListBox OverflowChamber //overflow chamber pulldown
				[ ] locator "//SELECT[@class='ng-pristine ng-untou*'][2]"
				[ ] 
			[-] DomListBox CartridgeType // CartridgeType pull down menu
				[ ] locator "//DIV[@class='col-xs-12'][2]/DIV[@class='col-xs-7']"
				[ ] 
			[-] DomTextField ChamberName1 //Cartridge name Text field 1
				[ ] locator "//INPUT[@id='chambers_name_0']"
			[-] DomTextField InitialVol1 // Initial Volume text field 1
				[ ] locator "//INPUT[@id='chambers_initialVolume_0']"
			[-] DomTextField ChamberName2 //Cartridge name Text field 2
				[ ] locator "//INPUT[@id='chambers_name_1']"
			[-] DomTextField InitialVol2 // Initial Volume text field 2
				[ ] locator "//INPUT[@id='chambers_initialVolume_1']"
			[-] DomTextField ChamberName3 //Cartridge name Text field 3
				[ ] locator "//INPUT[@id='chambers_name_2']"
			[-] DomTextField InitialVol3 // Initial Volume text field 3
				[ ] locator "//INPUT[@id='chambers_initialVolume_2']"
			[+] DomTextField ChamberName4 //Cartridge name Text field 4
				[ ] locator "//INPUT[@id='chambers_name_3']"
			[-] DomTextField InitialVol4 // Initial Volume text field 4
				[ ] locator "//INPUT[@id='chambers_initialVolume_3']"
			[+] DomTextField ChamberName5 //Cartridge name Text field 5
				[ ] locator "//INPUT[@id='chambers_name_4']"
			[-] DomTextField InitialVol5 // Initial Volume text field 5
				[ ] locator "//INPUT[@id='chambers_initialVolume_4']"
			[+] DomTextField ChamberName6 //Cartridge name Text field 6
				[ ] locator "//INPUT[@id='chambers_name_5']"
			[-] DomTextField InitialVol6 // Initial Volume text field 6
				[ ] locator "//INPUT[@id='chambers_initialVolume_5']"
			[-] DomTextField ChamberName7 //Cartridge name Text field 7
				[ ] locator "//INPUT[@id='chambers_name_6']"
			[-] DomTextField InitialVol7 // Initial Volume text field 7
				[ ] locator "//INPUT[@id='chambers_initialVolume_6']"
			[+] DomTextField ChamberName8 //Cartridge name Text field 8
				[ ] locator "//INPUT[@id='chambers_name_7']"
			[-] DomTextField InitialVol8 // Initial Volume text field 8
				[ ] locator "//INPUT[@id='chambers_initialVolume_7']"
			[+] DomTextField ChamberName9 //Cartridge name Text field 9
				[ ] locator "//INPUT[@id='chambers_name_8']"
			[-] DomTextField InitialVol9 // Initial Volume text field 9
				[ ] locator "//INPUT[@id='chambers_initialVolume_8']"
			[+] DomTextField ChamberName10 //Cartridge name Text field 10
				[ ] locator "//INPUT[@id='chambers_name_9']"
			[-] DomTextField InitialVol10 // Initial Volume text field 10
				[ ] locator "//INPUT[@id='chambers_initialVolume_9']"
			[+] DomTextField ChamberName11 //Cartridge name Text field 11
				[ ] locator "//INPUT[@id='chambers_name_10']"
			[-] DomTextField InitialVol11 // Initial Volume text field 11
				[ ] locator "//INPUT[@id='chambers_initialVolume_10']"
			[ ] 
			[ ] //Define Results workspace
			[-] DomTable DefineResults_Table
				[ ] locator "TABLE[@id='defineResultsResultText_table']"
			[-] DomTable Quant_DefineResults_Table
				[ ] locator "//TABLE[@id='quant1DefineResults_table']"
			[-] DomLink Define_Results //Button to open Define Results workspace
				[ ] locator "A[@id='defineAssays_defineR*']"
			[-] DomListBox DefResultText
				[ ] locator "SELECT[@id='defaultResultTextIndexForm_defaultResultTextIndex']"
			[-] DomListBox DefResultColor
				[ ] locator "SELECT[@id='defaultTextColorReferenceForm_defaultTextColorReference']"
			[-] DomRadioButton Table_Radio // Table Radio Button default choice
				[ ] locator "INPUT[@id='tableRadio']"
			[-] DomRadioButton Rule_Radio // Rule Radio Button 
				[ ] locator "INPUT[@id='ruleRadio']"
			[-] DomTable ORG_DefineResults_Table
				[ ] locator "TABLE[@id='organismDefineResults_table']"
				[ ] 
			[-] DomTable DeltaCt_Table
				[ ] locator "TABLE[@id='deltaCtDefineResults_table']"
				[ ] 
				[ ] 
				[ ] //Genes Results
			[+] DomTextField Gene_Name
				[ ] locator "INPUT[@id='genes_name_0']"
			[+] DomTextField Gene_Name2
				[ ] locator "INPUT[@id='genes_name_1']"
			[-] DomButton AddGenes
				[ ] locator "//BUTTON[@id='genes_add']"
			[+] DomButton Gene_Analyte
				[ ] locator "BUTTON[@id='genes_organismTargets_0']"
			[+] DomButton Gene_Analyte2
				[ ] locator "BUTTON[@id='genes_organismTargets_1']"
			[+] DomCheckBox Gene_Select_Analyte
				[ ] locator "INPUT[@id='addGeneForm_analyte_0']"
			[+] DomCheckBox Gene_Select_Analyte2
				[ ] locator "INPUT[@id='addGeneForm_analyte_1']"
			[+] DomCheckBox Gene_Select_Analyte3
				[ ] locator "INPUT[@id='addGeneForm_analyte_2']"
			[+] DomCheckBox Gene_Select_Analyte4
				[ ] locator "INPUT[@id='addGeneForm_analyte_3']"
			[+] DomCheckBox Gene_Select_Analyte5
				[ ] locator "INPUT[@id='addGeneForm_analyte_4']"
			[+] DomCheckBox Gene_Select_Analyte6
				[ ] locator "INPUT[@id='addGeneForm_analyte_5']"
			[-] DomTextField EarlyDeltaCT
				[ ] locator "//INPUT[@id='genes_earlyDeltaCtMax_0']"
			[+] DomTextField EarlyDeltaCT2
				[ ] locator "//INPUT[@id='genes_earlyDeltaCtMax_1']"
				[ ] 
			[+] DomTextField LateDeltaCT
				[ ] locator "//INPUT[@id='genes_lateDeltaCtMax_0']"
			[+] DomTextField LateDeltaCT2
				[ ] locator "//INPUT[@id='genes_lateDeltaCtMax_1']"
			[-] DomButton EditGene
				[ ] locator "IMG[@id='genes_editButton_0']"
			[-] DomTable Gene_DefineResults_Table
				[ ] locator "//TABLE[@id='geneDefineResults_table']"
				[ ] 
			[ ] //LDA Results
			[-] DomButton AddLDA
				[ ] locator "//BUTTON[@id='ldaCategories_add']"
			[+] DomTextField CategoryName
				[ ] locator "//INPUT[@id='ldaCategories_name_0']"
			[-] DomButton LDA_Analyte
				[ ] locator "//BUTTON[@id='ldaCategories_organismTargets_0']"
			[-] DomTextField LDA_Intercept
				[ ] locator "//INPUT[@id='ldaCategories_intercept_0']"
			[-] DomTextField LDA_Min_Valid
				[ ] locator "//INPUT[@id='ldaCategories_minValidRange_0']"
			[-] DomTextField LDA_Cutoff
				[ ] locator "//INPUT[@id='ldaCategories_cutoff*']"
			[-] DomTextField LDA_Max_Valid
				[ ] locator "//INPUT[@id='ldaCategories_maxValidRange_0']"
				[ ] 
			[ ] //SemiQuant fields, Define Ct Results
			[+] DomTextField MediumCT
				[ ] locator "INPUT[@id='semiQuant_mediumCtMi*']"
			[+] DomTextField LowCT
				[ ] locator "INPUT[@id='semiQuant_lowCtMin']"
			[+] DomTextField VeryLowCT
				[ ] locator "INPUT[@id='semiQuant_verylowCtM*']"
			[+] DomListBox SemiQuant_Result_Text
				[ ] locator "SELECT[@id='defineCtResults_semi*']"
			[+] DomTextField DeltaCTMin
				[ ] locator "INPUT[@id='defineCtResults_delt*']"
			[+] DomListBox Replaced_Result_Text
				[ ] locator "SELECT[@id='defineCtResults_repl*']"
			[+] DomListBox Replaced_Result_Color
				[ ] locator "SELECT[@id='defineCtResults_replacedResultColor_0']"
			[ ] 
			[ ] //Table Menu and rule dialog
			[-] DomListBox Select_Target
				[ ] locator "SELECT[@id='selected_organism']"
			[+] DomListBox Result_Text
				[ ] locator "SELECT[@id='defaultResultTextInd*']"
			[+] DomListBox Result_Color
				[ ] locator "SELECT[@id='defaultTextColorReferenceForm_defaultTextColorReference']"
			[-] DomTextField Organism_Name1
				[ ] locator "INPUT[@id='organismDefineResults_name_0']"
			[-] DomTextField Organism_Name2
				[ ] locator "INPUT[@id='organismDefineResults_name_1']"
			[-] DomTextField Organism_Name3
				[ ] locator "INPUT[@id='organismDefineResults_name_2']"
			[-] DomListBox Type1
				[ ] locator "SELECT[@id='organismDefineResults_type_0']"
			[-] DomListBox Type2
				[ ] locator "SELECT[@id='organismDefineResults_type_1']"
			[ ] 
			[ ] //Table Menu and rule dialog
			[+] DomButton Add_Quant1_Result
				[ ] locator "BUTTON[@id='quant1ResultUnit_add']"
			[+] DomCheckBox Show_Log
				[ ] locator "INPUT[@id='quant1ResultUnit_dis*']"
			[+] DomCheckBox Show_Log2
				[ ] locator "INPUT[@id='quant1ResultUnit_dis*'][2]"
			[+] DomListBox Table_Unit
				[ ] locator "SELECT[@id='quant1ResultUnit_units_0']"
			[+] DomListBox Table_Unit2
				[ ] locator "SELECT[@id='quant1ResultUnit_uni*'][2]"
			[+] DomTextField Conversion_Factor
				[ ] locator "INPUT[@id='quant1ResultUnit_conversionFactor_0']"
			[+] DomTextField Conversion_Factor2
				[ ] locator "INPUT[@id='quant1ResultUnit_con*'][2]"
			[+] DomTextField LQL
				[ ] locator "INPUT[@id='quant1ResultUnit_lowerLimit_0']"
			[+] DomTextField LQL2
				[ ] locator "INPUT[@id='quant1ResultUnit_low*'][2]"
			[+] DomTextField UQL
				[ ] locator "INPUT[@id='quant1ResultUnit_upperLimit_0']"
			[+] DomTextField UQL2
				[ ] locator "INPUT[@id='quant1ResultUnit_upp*'][2]"
			[+] DomListBox Quant_Result_Units
				[ ] locator "SELECT[@id='selectedQuantUnits']"
			[+] DomTextField Max_Quant_Delta
				[ ] locator "INPUT[@id='organismInfo_maxQuantitativeDelta']"
			[+] DomTextField Org_Name
				[ ] locator "INPUT[@id='organismInfo_name']"
				[ ] 
			[+] DomButton ResetRange
				[ ] locator "BUTTON[@id='percentRatioDynamicR*']"
			[+] DomTextField Dyn_Rge_Min
				[ ] locator "//INPUT[@id='percentRatioDynamicR*']"
			[+] DomTextField LoDLoQ
				[ ] locator "//INPUT[@id='percentRatioDynamicR*'][2]"
			[+] DomTextField Dyn_Rge_Max
				[ ] locator "//INPUT[@id='percentRatioDynamicR*'][3]"
			[-] DomButton ResetResults
				[ ] locator "BUTTON[@id='defineResultsResultT*']"
			[+] DomListBox ResultText1
				[ ] locator "SELECT[@name='resultText_0']"
			[+] DomListBox ResultText2
				[ ] locator "SELECT[@name='resultText_1']"
			[+] DomListBox ResultText3
				[ ] locator "SELECT[@name='resultText_2']"
			[+] DomListBox ResultColor1
				[ ] locator "SELECT[@name='textColor_0']"
			[+] DomListBox ResultColor2
				[ ] locator "SELECT[@name='textColor_1']"
				[ ] 
			[+] DomListBox ResultColor3
				[ ] locator "SELECT[@name='textColor_2']"
				[ ] 
			[ ] 
			[ ] 
			[ ] //Rules Table
			[-] DomTable Rules_Table
				[ ] locator "TABLE[@class='table table-responsi*']"
			[-] DomButton Add_Rule
				[ ] locator "BUTTON[@id='organismDefineResult*']"
			[ ] 
			[-] DomElement Edit_Rule
				[ ] locator "IMG[@id='organismDefineResults_editButton_0']"
			[-] DomElement Edit_Rule2
				[ ] locator "IMG[@id='organismDefineResults_editButton_1']"
			[-] DomElement Edit_Rule3
				[ ] locator "IMG[@id='organismDefineResults_editButton_2']"
			[-] DomElement Edit_Rule4
				[ ] locator "IMG[@id='organismDefineResults_editButton_3']"
			[-] DomElement Edit_Rule5
				[ ] locator "IMG[@id='organismDefineResults_editButton_4']"
			[-] DomElement Edit_Rule6
				[ ] locator "IMG[@id='organismDefineResults_editButton_5']"
			[-] DomElement Edit_Rule7
				[ ] locator "IMG[@id='organismDefineResults_editButton_6']"
			[-] DomElement Edit_Rule8
				[ ] locator "IMG[@id='organismDefineResults_editButton_7']"
			[ ]  
			[-] DomTextField Rule_Name
				[ ] locator "//INPUT[@name='name_0']"
			[-] DomTextField Rule_Name2
				[ ] locator "//INPUT[@name='name_1']"
			[-] DomTextField Rule_Name3
				[ ] locator "//INPUT[@name='name_2']"
			[-] DomTextField Rule_Name4
				[ ] locator "//INPUT[@name='name_3']"
			[-] DomTextField Rule_Name5
				[ ] locator "//INPUT[@name='name_4']"
			[-] DomTextField Rule_Name6
				[ ] locator "//INPUT[@name='name_5']"
			[-] DomTextField Rule_Name7
				[ ] locator "//INPUT[@name='name_6']"
			[-] DomTextField Rule_Name8
				[ ] locator "//INPUT[@name='name_7']"
			[ ] 
			[-] DomElement Rule_Analyte
				[ ] locator "BUTTON[@id='organismDefineResult*'][2]"
			[+] DomElement Rule_Analyte2
				[ ] locator "BUTTON[@id='organismDefineResult*'][3]"
			[+] DomElement Rule_Analyte3
				[ ] locator "BUTTON[@id='organismDefineResult*'][4]"
			[+] DomElement Rule_Analyte4
				[ ] locator "BUTTON[@id='organismDefineResult*'][5]"
			[+] DomElement Rule_Analyte5
				[ ] locator "BUTTON[@id='organismDefineResult*'][6]"
			[+] DomElement Rule_Analyte6
				[ ] locator "BUTTON[@id='organismDefineResult*'][7]"
			[+] DomElement Rule_Analyte7
				[ ] locator "BUTTON[@id='organismDefineResult*'][8]"
			[+] DomElement Rule_Analyte8
				[ ] locator "BUTTON[@id='organismDefineResult*'][9]"
			[ ] 
			[ ] 
			[-] DomCheckBox Rule_Select_Analyte
				[ ] locator "INPUT[@id='addOrganismForm_anal*']"
			[+] DomCheckBox Rule_Select_Analyte2
				[ ] locator "INPUT[@id='addOrganismForm_anal*'][2]"
			[+] DomCheckBox Rule_Select_Analyte3
				[ ] locator "INPUT[@id='addOrganismForm_anal*'][3]"
			[+] DomCheckBox Rule_Select_Analyte4
				[ ] locator "INPUT[@id='addOrganismForm_anal*'][4]"
			[+] DomCheckBox Rule_Select_Analyte5
				[ ] locator "INPUT[@id='addOrganismForm_anal*'][5]"
			[ ] 
			[ ] 
			[ ] //Rules Dialog that opens when editing
			[+] DomListBox RuleDialog_Units // units within rules table edit
				[ ] locator "SELECT[@id='percentRatioDynamicR*']"
			[+] DomListBox RuleDialog_Log_Transform
				[ ] locator "SELECT[@id='percentRatioDynamicR*'][2]"
			[+] DomButton RuleDialog_Add_Rule
				[ ] locator "BUTTON[@id='ruleTable_addRule']"
			[+] DomButton RuleDialog_Add_Formula //only works after defining the first formula
				[ ] locator "BUTTON[@id='ruleTable_addColumn']"
			[+] DomButton RuleDialog_MoveUp
				[ ] locator "BUTTON[@id='ruleTable_moveUp']"
			[+] DomButton RuleDialog_MoveDown
				[ ] locator "BUTTON[@id='ruleTable_moveDown']"
			[ ] 
			[+] DomListBox RuleDialog_Logic
				[ ] locator "SELECT[@name='ruleAnded0']"
			[+] DomListBox RuleDialog_Logic2
				[ ] locator "SELECT[@name='ruleAnded1']"
			[+] DomListBox RuleDialog_Logic3
				[ ] locator "SELECT[@name='ruleAnded2']"
			[+] DomListBox RuleDialog_Logic4
				[ ] locator "SELECT[@name='ruleAnded3']"
			[+] DomListBox RuleDialog_Logic5
				[ ] locator "SELECT[@name='ruleAnded4']"
			[+] DomListBox RuleDialog_Logic6
				[ ] locator "SELECT[@name='ruleAnded5']"
			[+] DomListBox RuleDialog_Logic7
				[ ] locator "SELECT[@name='ruleAnded6']"
			[+] DomListBox RuleDialog_Logic8
				[ ] locator "SELECT[@name='ruleAnded7']"
				[ ] 
			[ ] 
			[+] DomListBox RuleDialog_CalculationTarget
				[ ] locator "//SELECT[@id='dropdownForm_calcula*']"
			[+] DomListBox RuleDialog_CalculationTarget2
				[ ] locator "SELECT[@id='dropdownForm_calcula*'][2]"
			[+] DomListBox RuleDialog_CalculationTarget3
				[ ] locator "SELECT[@id='dropdownForm_calcula*'][3]"
			[+] DomListBox RuleDialog_CalculationTarget4
				[ ] locator "SELECT[@id='dropdownForm_calcula*'][4]"
			[+] DomListBox RuleDialog_CalculationTarget5
				[ ] locator "SELECT[@id='dropdownForm_calcula*'][5]"
			[+] DomListBox RuleDialog_CalculationTarget6
				[ ] locator "SELECT[@id='dropdownForm_calcula*'][6]"
				[ ] 
			[ ] 
			[+] DomButton RuleDialog_Formula1_1
				[ ] locator "BUTTON[@id='addEditFormula_0_0']"
			[+] DomButton RuleDialog_Formula1_2
				[ ] locator "BUTTON[@id='addEditFormula_1_0']"
			[+] DomButton RuleDialog_Formula1_3
				[ ] locator "BUTTON[@id='addEditFormula_2_0']"
			[+] DomButton RuleDialog_Formula1_4
				[ ] locator "BUTTON[@id='addEditFormula_3_0']"
			[+] DomButton RuleDialog_Formula1_5
				[ ] locator "BUTTON[@id='addEditFormula_4_0']"
			[+] DomButton RuleDialog_Formula1_6
				[ ] locator "BUTTON[@id='addEditFormula_5_0']"
			[ ] 
			[+] DomButton RuleDialog_Formula2_1
				[ ] locator "BUTTON[@id='addEditFormula_0_1']"
			[+] DomButton RuleDialog_Formula2_2
				[ ] locator "BUTTON[@id='addEditFormula_1_1']"
			[+] DomButton RuleDialog_Formula2_3
				[ ] locator "BUTTON[@id='addEditFormula_2_1']"
			[+] DomButton RuleDialog_Formula2_4
				[ ] locator "BUTTON[@id='addEditFormula_3_1']"
			[+] DomButton RuleDialog_Formula2_5
				[ ] locator "BUTTON[@id='addEditFormula_4_1']"
			[+] DomButton RuleDialog_Formula2_6
				[ ] locator "BUTTON[@id='addEditFormula_5_1']"
			[ ] 
			[+] DomButton RuleDialog_Formula3_1
				[ ] locator "BUTTON[@id='addEditFormula_0_2']"
			[+] DomButton RuleDialog_Formula3_2
				[ ] locator "BUTTON[@id='addEditFormula_1_2']"
			[+] DomButton RuleDialog_Formula3_3
				[ ] locator "BUTTON[@id='addEditFormula_2_2']"
			[+] DomButton RuleDialog_Formula3_4
				[ ] locator "BUTTON[@id='addEditFormula_3_2']"
			[+] DomButton RuleDialog_Formula3_5
				[ ] locator "BUTTON[@id='addEditFormula_4_2']"
			[+] DomButton RuleDialog_Formula3_6
				[ ] locator "BUTTON[@id='addEditFormula_5_2']"
			[ ] // 
			[+] DomButton RuleDialog_Formula4_1
				[ ] locator "BUTTON[@id='addEditFormula_0_3']"
			[+] DomButton RuleDialog_Formula4_2
				[ ] locator "BUTTON[@id='addEditFormula_1_3']"
			[+] DomButton RuleDialog_Formula4_3
				[ ] locator "BUTTON[@id='addEditFormula_2_3']"
			[+] DomButton RuleDialog_Formula4_4
				[ ] locator "BUTTON[@id='addEditFormula_3_3']"
			[+] DomButton RuleDialog_Formula4_5
				[ ] locator "BUTTON[@id='addEditFormula_4_3']"
			[+] DomButton RuleDialog_Formula4_6
				[ ] locator "BUTTON[@id='addEditFormula_5_3']"
			[ ] 
			[+] DomButton RuleDialog_Formula5_1
				[ ] locator "BUTTON[@id='addEditFormula_0_4']"
			[+] DomButton RuleDialog_Formula5_2
				[ ] locator "BUTTON[@id='addEditFormula_1_4']"
			[+] DomButton RuleDialog_Formula5_3
				[ ] locator "BUTTON[@id='addEditFormula_2_4']"
			[+] DomButton RuleDialog_Formula5_4
				[ ] locator "BUTTON[@id='addEditFormula_3_4']"
			[+] DomButton RuleDialog_Formula5_5
				[ ] locator "BUTTON[@id='addEditFormula_4_4']"
			[+] DomButton RuleDialog_Formula5_6
				[ ] locator "BUTTON[@id='addEditFormula_5_4']"
			[ ] 
			[+] DomButton RuleDialog_Formula6_1
				[ ] locator "BUTTON[@id='addEditFormula_0_5']"
			[+] DomButton RuleDialog_Formula6_2
				[ ] locator "BUTTON[@id='addEditFormula_1_5']"
			[+] DomButton RuleDialog_Formula6_3
				[ ] locator "BUTTON[@id='addEditFormula_2_5']"
			[+] DomButton RuleDialog_Formula6_4
				[ ] locator "BUTTON[@id='addEditFormula_3_5']"
			[+] DomButton RuleDialog_Formula6_5
				[ ] locator "BUTTON[@id='addEditFormula_4_5']"
			[+] DomButton RuleDialog_Formula6_6
				[ ] locator "BUTTON[@id='addEditFormula_5_5']"
			[ ] 
			[ ] 
			[ ] //Formula Dialog
			[+] DomElement FormulaDialog
				[ ] locator "H3[@textContents='Add Formula']"
			[+] DomListBox Formula_Analyte
				[ ] locator "SELECT[@id='formula_analyte']"
			[+] DomListBox Formula_Interp
				[ ] locator "SELECT[@id='formula_interpretati*']"
			[+] DomCheckBox Forumla_ReasonBox
				[ ] locator "INPUT[@id='formula_usage_0']"
			[+] DomCheckBox Forumla_ReasonBox2
				[ ] locator "INPUT[@id='formula_usage_1']"
			[+] DomCheckBox Forumla_ReasonBox3
				[ ] locator "INPUT[@id='formula_usage_2']"
			[+] DomCheckBox Forumla_ReasonBox4
				[ ] locator "INPUT[@id='formula_usage_3']"
			[+] DomCheckBox Forumla_ReasonBox5
				[ ] locator "INPUT[@id='formula_usage_4']"
			[+] DomCheckBox Forumla_ReasonBox6
				[ ] locator "INPUT[@id='formula_usage_5']"
			[+] DomCheckBox Forumla_ReasonBox7
				[ ] locator "INPUT[@id='formula_usage_6']"
			[+] DomCheckBox Forumla_ReasonBox8
				[ ] locator "INPUT[@id='formula_usage_7']"
			[+] DomCheckBox Forumla_ReasonBox9
				[ ] locator "INPUT[@id='formula_usage_8']"
			[+] DomCheckBox Forumla_ReasonBox10
				[ ] locator "INPUT[@id='formula_usage_9']"
			[+] DomCheckBox Forumla_ReasonBox11
				[ ] locator "INPUT[@id='formula_usage_10']"
			[+] DomButton Formula_Ok
				[ ] locator "BUTTON[@id='formula_ok']"
			[+] DomButton Formula_Cancel
				[ ] locator "BUTTON[@id='formula_back']"
			[ ] 
			[+] DomListBox RuleDialog_ReportingTarget
				[ ] locator "SELECT[@id='dropdownForm_reporti*']"
			[+] DomListBox RuleDialog_ReportingTarget2
				[ ] locator "SELECT[@id='dropdownForm_reporti*'][2]"
			[+] DomListBox RuleDialog_ReportingTarget3
				[ ] locator "SELECT[@id='dropdownForm_reporti*'][3]"
			[+] DomListBox RuleDialog_ReportingTarget4
				[ ] locator "SELECT[@id='dropdownForm_reporti*'][4]"
			[+] DomListBox RuleDialog_ReportingTarget5
				[ ] locator "SELECT[@id='dropdownForm_reporti*'][5]"
			[+] DomListBox RuleDialog_ReportingTarget6
				[ ] locator "SELECT[@id='dropdownForm_reporti*'][6]"
				[ ] 
			[ ] 
			[+] DomListBox RuleDialog_ResultText
				[ ] locator "SELECT[@id='coloredDropdownForm_resultText0']"
			[+] DomListBox RuleDialog_ResultText2
				[ ] locator "SELECT[@id='coloredDropdownForm_resultText1']"
			[+] DomListBox RuleDialog_ResultText3
				[ ] locator "SELECT[@id='coloredDropdownForm_resultText2']"
			[+] DomListBox RuleDialog_ResultText4
				[ ] locator "SELECT[@id='coloredDropdownForm_resultText3']"
			[+] DomListBox RuleDialog_ResultText5
				[ ] locator "SELECT[@id='coloredDropdownForm_resultText4']"
			[+] DomListBox RuleDialog_ResultText6
				[ ] locator "SELECT[@id='coloredDropdownForm_resultText5']"
			[ ] 
			[ ] 
			[+] DomListBox RuleDialog_Result_Color
				[ ] locator "SELECT[@id='colorSelectorForm_textColor0']"
			[+] DomListBox RuleDialog_Result_Color2
				[ ] locator "SELECT[@id='colorSelectorForm_textColor1']"
			[+] DomListBox RuleDialog_Result_Color3
				[ ] locator "SELECT[@id='colorSelectorForm_textColor2']"
			[+] DomListBox RuleDialog_Result_Color4
				[ ] locator "SELECT[@id='colorSelectorForm_textColor3']"
			[+] DomListBox RuleDialog_Result_Color5
				[ ] locator "SELECT[@id='colorSelectorForm_textColor4']"
			[+] // DomListBox RuleDialog_Result_Color6
				[ ] // locator "SELECT[@id='colorSelectorForm_textColor5']"
				[ ] // 
			[+] DomListBox RuleDialog_LastResultText
				[ ] locator "SELECT[@id='defaultRule_resultTe*']"
			[+] DomListBox RuleDialog_LastResultColor
				[ ] locator "SELECT[@id='defaultRule_textColo*']"
			[ ] 
			[ ] //ToDo inform Garry Checkboxes in Analyte Settings have duplicated locators
			[+] DomCheckBox Perform_SLD
				[ ] locator "//INPUT[@id='analysisSettings_isSignalLossDetectionEnabled_0']"
			[+] DomCheckBox Perform_SLD2
				[ ] locator "//INPUT[@id='analysisSettings_isSignalLossDetectionEnabled_1']"
			[+] DomCheckBox Perform_SLD3
				[ ] locator "//INPUT[@id='analysisSettings_isSignalLossDetectionEnabled_2']"
			[+] DomCheckBox Perform_SLD4
				[ ] locator "//INPUT[@id='analysisSettings_isSignalLossDetectionEnabled_3']"
			[+] DomCheckBox Perform_SLD5
				[ ] locator "//INPUT[@id='analysisSettings_isSignalLossDetectionEnabled_4']"
			[+] DomCheckBox Perform_SLD6
				[ ] locator "//INPUT[@id='analysisSettings_isSignalLossDetectionEnabled_5']"
			[+] DomCheckBox Perform_SLD7
				[ ] locator "//INPUT[@id='analysisSettings_isSignalLossDetectionEnabled_6']"
				[ ] 
			[ ] 
			[ ] //Curve Anaylsis workspace
			[-] DomLink CurveAnalysis 
				[ ] locator "A[@id='defineAssays_curveAn*']"
				[ ] 
			[ ] 
			[ ] //Analyte Settings Table
			[-] DomTable Analyte_Settings_Table
				[ ] locator "TABLE[@id='analysisSettings_tab*']"
			[-] DomButton Analyte_Settings
				[ ] locator "BUTTON[@id='analysis_settings']"
			[-] DomTable AnalyteSettings_Table
				[ ] locator "TABLE[@id='analysisSettings_table']"
			[-] DomListBox CurveAnalysis1
				[ ] locator "SELECT[@name='curveAnalysis_0']"
			[-] DomListBox CurveAnalysis2
				[ ] locator "SELECT[@name='curveAnalysis_1']"
			[-] DomListBox CurveAnalysis3
				[ ] locator "SELECT[@name='curveAnalysis_2']"
			[-] DomListBox CurveAnalysis4
				[ ] locator "SELECT[@name='curveAnalysis_3']"
			[-] DomListBox CurveAnalysis5
				[ ] locator "SELECT[@name='curveAnalysis_4']"
			[-] DomListBox CurveAnalysis6
				[ ] locator "SELECT[@name='curveAnalysis_5']"
			[-] DomListBox CurveAnalysis7
				[ ] locator "SELECT[@name='curveAnalysis_6']"
			[-] DomListBox CurveAnalysis8
				[ ] locator "SELECT[@name='curveAnalysis_7']"
			[-] DomTextField Boxcar_Avg1
				[ ] locator "//INPUT[@name='boxcarCycles_0']"
			[+] DomTextField Boxcar_Avg2
				[ ] locator "//INPUT[@name='boxcarCycles_1']"
			[+] DomTextField Boxcar_Avg3
				[ ] locator "//INPUT[@name='boxcarCycles_2']"
			[+] DomTextField Boxcar_Avg4
				[ ] locator "//INPUT[@name='boxcarCycles_3']"
			[+] DomTextField Boxcar_Avg5
				[ ] locator "//INPUT[@name='boxcarCycles_4']"
			[+] DomTextField Boxcar_Avg6
				[ ] locator "//INPUT[@name='boxcarCycles_5']"
			[+] DomTextField Boxcar_Avg7
				[ ] locator "//INPUT[@name='boxcarCycles_6']"
			[+] DomTextField Boxcar_Avg8
				[ ] locator "//INPUT[@name='boxcarCycles_7']"
			[+] DomTextField Boxcar_Avg9
				[ ] locator "//INPUT[@name='boxcarCycles_8']"
			[+] DomTextField Boxcar_Avg10
				[ ] locator "//INPUT[@name='boxcarCycles_9']"
			[-] DomTextField Cycle_if_No_Ct
				[ ] locator "//INPUT[@id='analysisSettings_cycleIfNoCt_0']"
			[ ] 
			[ ] //Curve Fit Settings Table/Button
			[-] DomTable CurveFit_Table
				[ ] locator "TABLE[@id='curveFitSettings_table']"
			[+] DomButton Curve_Fit_Settings
				[ ] locator "BUTTON[@id='curve_fit']"
			[+] DomCheckBox UseCurveFit1
				[ ] locator "//INPUT[@name='useCurveFit_0']"
			[+] DomCheckBox UseCurveFit2
				[ ] locator "//INPUT[@name='useCurveFit_1']"
			[+] DomCheckBox UseCurveFit3
				[ ] locator "//INPUT[@name='useCurveFit_2']"
			[+] DomCheckBox UseCurveFit4
				[ ] locator "//INPUT[@name='useCurveFit_3']"
			[+] DomCheckBox UseCurveFit5
				[ ] locator "//INPUT[@name='useCurveFit_4']"
			[+] DomCheckBox UseCurveFit6
				[ ] locator "//INPUT[@name='useCurveFit_5']"
			[+] DomCheckBox UseCurveFit7
				[ ] locator "//INPUT[@name='useCurveFit_6']"
			[+] DomCheckBox UseCurveFit8
				[ ] locator "//INPUT[@name='useCurveFit_7']"
			[+] DomCheckBox EndData1
				[ ] locator "//INPUT[@name='useCurveFitEndData_0']"
			[+] DomCheckBox EndData2
				[ ] locator "//INPUT[@name='useCurveFitEndData_1']"
			[+] DomCheckBox EndData3
				[ ] locator "//INPUT[@name='useCurveFitEndData_2']"
			[+] DomCheckBox EndData4
				[ ] locator "//INPUT[@name='useCurveFitEndData_3']"
			[+] DomCheckBox EndData5
				[ ] locator "//INPUT[@name='useCurveFitEndData_4']"
			[+] DomCheckBox EndData6
				[ ] locator "//INPUT[@name='useCurveFitEndData_5']"
			[+] DomCheckBox EndData7
				[ ] locator "//INPUT[@name='useCurveFitEndData_6']"
			[+] DomCheckBox EndData8
				[ ] locator "//INPUT[@name='useCurveFitEndData_7']"
			[+] DomTextField StartIndex1
				[ ] locator "//INPUT[@name='curveFitStartIndex_0']"
			[+] DomTextField StartIndex2
				[ ] locator "//INPUT[@name='curveFitStartIndex_1']"
			[+] DomTextField StartIndex3
				[ ] locator "//INPUT[@name='curveFitStartIndex_2']"
			[+] DomTextField StartIndex4
				[ ] locator "//INPUT[@name='curveFitStartIndex_3']"
			[+] DomTextField StartIndex5
				[ ] locator "//INPUT[@name='curveFitStartIndex_4']"
			[+] DomTextField StartIndex6
				[ ] locator "//INPUT[@name='curveFitStartIndex_5']"
			[+] DomTextField StartIndex7
				[ ] locator "//INPUT[@name='curveFitStartIndex_6']"
			[+] DomTextField StartIndex8
				[ ] locator "//INPUT[@name='curveFitStartIndex_7']"
			[+] DomTextField EndIndex1
				[ ] locator "//INPUT[@name='curveFitEndIndex_0']"
			[+] DomTextField EndIndex2
				[ ] locator "//INPUT[@name='curveFitEndIndex_1']"
			[+] DomTextField EndIndex3
				[ ] locator "//INPUT[@name='curveFitEndIndex_2']"
			[+] DomTextField EndIndex4
				[ ] locator "//INPUT[@name='curveFitEndIndex_3']"
			[+] DomTextField EndIndex5
				[ ] locator "//INPUT[@name='curveFitEndIndex_4']"
			[+] DomTextField EndIndex6
				[ ] locator "//INPUT[@name='curveFitEndIndex_5']"
			[+] DomTextField EndIndex7
				[ ] locator "//INPUT[@name='curveFitEndIndex_6']"
			[+] DomTextField EndIndex8
				[ ] locator "//INPUT[@name='curveFitEndIndex_7']"
			[+] DomCheckBox OnCrosstalk1
				[ ] locator "//INPUT[@name='useCurveFitOnCrossta*']"
			[+] DomCheckBox OnCrosstalk2
				[ ] locator "//INPUT[@name='useCurveFitOnCrossta*'][2]"
			[+] DomCheckBox OnCrosstalk3
				[ ] locator "//INPUT[@name='useCurveFitOnCrossta*'][3]"
			[+] DomCheckBox OnCrosstalk4
				[ ] locator "//INPUT[@name='useCurveFitOnCrossta*'][4]"
			[+] DomCheckBox OnCrosstalk5
				[ ] locator "//INPUT[@name='useCurveFitOnCrossta*'][5]"
			[+] DomCheckBox OnCrosstalk6
				[ ] locator "//INPUT[@name='useCurveFitOnCrossta*'][6]"
			[+] DomCheckBox StartBkgnd1
				[ ] locator "//INPUT[@name='useCurveFitStartBack*']"
			[+] DomCheckBox StartBkgnd2
				[ ] locator "//INPUT[@name='useCurveFitStartBack*'][2]"
			[+] DomCheckBox StartBkgnd3
				[ ] locator "//INPUT[@name='useCurveFitStartBack*'][3]"
			[+] DomCheckBox StartBkgnd4
				[ ] locator "//INPUT[@name='useCurveFitStartBack*'][4]"
			[+] DomCheckBox StartBkgnd5
				[ ] locator "//INPUT[@name='useCurveFitStartBack*'][5]"
			[+] DomCheckBox StartBkgnd6
				[ ] locator "//INPUT[@name='useCurveFitStartBack*'][6]"
			[+] DomTextField Min_Shape1
				[ ] locator "INPUT[@name='curveFitMinShapeFact*']"
			[+] DomTextField Min_Shape2
				[ ] locator "INPUT[@name='curveFitMinShapeFact*'][2]"
			[+] DomTextField Min_Shape3
				[ ] locator "INPUT[@name='curveFitMinShapeFact*'][3]"
			[+] DomTextField Min_Shape4
				[ ] locator "INPUT[@name='curveFitMinShapeFact*'][4]"
			[+] DomTextField Min_Shape5
				[ ] locator "INPUT[@name='curveFitMinShapeFact*'][5]"
			[+] DomTextField Min_Shape6
				[ ] locator "INPUT[@name='curveFitMinShapeFact*'][6]"
			[+] DomTextField Max_Shape1
				[ ] locator "INPUT[@name='curveFitMaxShapeFact*']"
			[+] DomTextField Max_Shape2
				[ ] locator "INPUT[@name='curveFitMaxShapeFact*'][2]"
			[+] DomTextField Max_Shape3
				[ ] locator "INPUT[@name='curveFitMaxShapeFact*'][3]"
			[+] DomTextField Max_Shape4
				[ ] locator "INPUT[@name='curveFitMaxShapeFact*'][4]"
			[+] DomTextField Max_Shape5
				[ ] locator "INPUT[@name='curveFitMaxShapeFact*'][5]"
			[+] DomTextField Max_Shape6
				[ ] locator "INPUT[@name='curveFitMaxShapeFact*'][6]"
				[ ] 
				[ ] 
				[ ] 
			[+] DomTextField Max_NRSE1
				[ ] locator "INPUT[@name='curveFitMaxNrse_0']"
			[+] DomTextField Max_NRSE2
				[ ] locator "INPUT[@name='curveFitMaxNrse_1']"
			[+] DomTextField Max_NRSE3
				[ ] locator "INPUT[@name='curveFitMaxNrse_2']"
			[+] DomTextField Max_NRSE4
				[ ] locator "INPUT[@name='curveFitMaxNrse_3']"
			[+] DomTextField Max_NRSE5
				[ ] locator "INPUT[@name='curveFitMaxNrse_4']"
			[+] DomTextField Max_NRSE6
				[ ] locator "INPUT[@name='curveFitMaxNrse_5']"
			[+] DomTextField Max_Slope_to_Ratio1
				[ ] locator "INPUT[@name='curveFitMaxSlopeVsRa*']"
			[+] DomTextField Max_Slope_to_Ratio2
				[ ] locator "INPUT[@name='curveFitMaxSlopeVsRa*'][2]"
			[+] DomTextField Max_Slope_to_Ratio3
				[ ] locator "INPUT[@name='curveFitMaxSlopeVsRa*'][3]"
			[+] DomTextField Max_Slope_to_Ratio4
				[ ] locator "INPUT[@name='curveFitMaxSlopeVsRa*'][4]"
			[+] DomTextField Max_Slope_to_Ratio5
				[ ] locator "INPUT[@name='curveFitMaxSlopeVsRa*'][5]"
			[+] DomTextField Max_Slope_to_Ratio6
				[ ] locator "INPUT[@name='curveFitMaxSlopeVsRa*'][6]"
			[+] DomCheckBox Start_BKgnd
				[ ] locator "//INPUT[@name='useCurveFitStartBack*']"
			[ ] 
			[ ] 
			[ ] //Background Settings Menu and Button
			[-] DomTable BackgroundSettings_Table
				[ ] locator "TABLE[@id='backgroundSettings_table']"
			[-] DomButton BackgroundSettings
				[ ] locator "BUTTON[@id='brackground_settings']"
			[-] DomCheckBox Background_Sub
				[ ] locator "//INPUT[@id='backgroundSub_useBac*']"
			[+] DomTextField MinCycle1
				[ ] locator "//INPUT[@name='backgroundStart_0']"
			[+] DomTextField MinCycle2
				[ ] locator "//INPUT[@name='backgroundStart_1']"
			[+] DomTextField MinCycle3
				[ ] locator "//INPUT[@name='backgroundStart_2']"
			[+] DomTextField MinCycle4
				[ ] locator "//INPUT[@name='backgroundStart_3']"
			[+] DomTextField MinCycle5
				[ ] locator "//INPUT[@name='backgroundStart_4']"
			[+] DomTextField MinCycle6
				[ ] locator "//INPUT[@name='backgroundStart_5']"
			[+] DomTextField MinCycle7
				[ ] locator "//INPUT[@name='backgroundStart_6']"
			[+] DomTextField MinCycle8
				[ ] locator "//INPUT[@name='backgroundStart_7']"
			[+] DomTextField MaxCycle1
				[ ] locator "//INPUT[@name='backgroundEnd_0']"
			[+] DomTextField MaxCycle2
				[ ] locator "//INPUT[@name='backgroundEnd_1']"
			[+] DomTextField MaxCycle3
				[ ] locator "//INPUT[@name='backgroundEnd_2']"
			[+] DomTextField MaxCycle4
				[ ] locator "//INPUT[@name='backgroundEnd_3']"
			[+] DomTextField MaxCycle5
				[ ] locator "//INPUT[@name='backgroundEnd_4']"
			[+] DomTextField MaxCycle6
				[ ] locator "//INPUT[@name='backgroundEnd_5']"
			[+] DomTextField MaxCycle7
				[ ] locator "//INPUT[@name='backgroundEnd_6']"
			[+] DomTextField MaxCycle8
				[ ] locator "//INPUT[@name='backgroundEnd_7']"
			[+] DomTextField MinPoints1
				[ ] locator"INPUT[@name='backgroundMinPoints_*']"
			[+] DomTextField MinPoints2
				[ ] locator"INPUT[@name='backgroundMinPoints_*'][2]"
			[+] DomTextField MinPoints3
				[ ] locator"INPUT[@name='backgroundMinPoints_*'][3]"
			[+] DomTextField MinPoints4
				[ ] locator"INPUT[@name='backgroundMinPoints_*'][4]"
			[+] DomTextField MinPoints5
				[ ] locator"INPUT[@name='backgroundMinPoints_*'][5]"
			[+] DomTextField MinPoints6
				[ ] locator"INPUT[@name='backgroundMinPoints_*'][6]"
			[+] DomTextField LookBack1
				[ ] locator "//INPUT[@name='backgroundLookBack_0']"
			[+] DomTextField LookBack2
				[ ] locator "//INPUT[@name='backgroundLookBack_1']"
			[+] DomTextField LookBack3
				[ ] locator "//INPUT[@name='backgroundLookBack_2']"
			[+] DomTextField LookBack4
				[ ] locator "//INPUT[@name='backgroundLookBack_3']"
			[+] DomTextField LookBack5
				[ ] locator "//INPUT[@name='backgroundLookBack_4']"
			[+] DomTextField LookBack6
				[ ] locator "//INPUT[@name='backgroundLookBack_5']"
			[+] DomTextField LookBack7
				[ ] locator "//INPUT[@name='backgroundLookBack_6']"
			[+] DomTextField LookBack8
				[ ] locator "//INPUT[@name='backgroundLookBack_7']"
			[+] DomCheckBox Validate1
				[ ] locator "//INPUT[@id='backgroundSettings_u*']"
			[+] DomCheckBox Validate2
				[ ] locator "//INPUT[@id='backgroundSettings_u*'][2]"
			[+] DomCheckBox Validate3
				[ ] locator "//INPUT[@id='backgroundSettings_u*'][3]"
			[+] DomCheckBox Validate4
				[ ] locator "//INPUT[@id='backgroundSettings_u*'][4]"
			[+] DomCheckBox Validate5
				[ ] locator "//INPUT[@id='backgroundSettings_u*'][5]"
			[+] DomCheckBox Validate6
				[ ] locator "//INPUT[@id='backgroundSettings_u*'][6]"
			[+] DomTextField MaxSlope1
				[ ] locator "INPUT[@name='backgroundMaxSlope_0']"
			[+] DomTextField MaxSlope2
				[ ] locator "INPUT[@name='backgroundMaxSlope_1']"
			[+] DomTextField MaxSlope3
				[ ] locator "INPUT[@name='backgroundMaxSlope_2']"
			[+] DomTextField MaxSlope4
				[ ] locator "INPUT[@name='backgroundMaxSlope_3']"
			[+] DomTextField MaxSlope5
				[ ] locator "INPUT[@name='backgroundMaxSlope_4']"
			[+] DomTextField MaxSlope6
				[ ] locator "INPUT[@name='backgroundMaxSlope_5']"
			[+] DomTextField MaxRMSError // may be wrong
				[ ] locator "INPUT[@name=backgroundMaxRMSError_0']"
			[ ] 
			[ ] //ToDo inform Garry some Checkboxes in Curve Analysis/Background Subtraction have duplicated locators
			[ ] //Also Min Points textfield uses the identifier @ng-style='??width?:?80??' in silk
			[ ] //Looks like these text feels have not been defined yet.
			[-] DomCheckBox Validate
				[ ] locator "//INPUT[@id='backgroundSettings_u*']"
			[ ] 
			[ ] 
			[ ] // Result Analysis and Probe check work space
			[+] DomTable ResAnalysis_Table
				[ ] locator "//TABLE[@id='resultAnalysisSettings_table']"
			[+] DomLink ResAnalysis_Prbchk 
				[ ] locator "A[@id='defineAssays_resultA*']"
				[ ] 
			[+] DomButton ResultAnalysisSettings
				[ ] locator "BUTTON[@id='analysis_setting']"
			[+] DomTextField ManualThreshFluorUnit1
				[ ] locator "//INPUT[@name='ctThresholdValue_0']"
			[+] DomTextField ManualThreshFluorUnit2
				[ ] locator "//INPUT[@name='ctThresholdValue_1']"
			[+] DomTextField ManualThreshFluorUnit3
				[ ] locator "//INPUT[@name='ctThresholdValue_2']"
			[+] DomTextField ManualThreshFluorUnit4
				[ ] locator "//INPUT[@name='ctThresholdValue_3']"
			[+] DomTextField ManualThreshFluorUnit5
				[ ] locator "//INPUT[@name='ctThresholdValue_4']"
			[+] DomTextField ManualThreshFluorUnit6
				[ ] locator "//INPUT[@name='ctThresholdValue_5']"
			[+] DomTextField ManualThreshFluorUnit7
				[ ] locator "//INPUT[@name='ctThresholdValue_6']"
			[+] DomTextField ManualThreshFluorUnit8
				[ ] locator "//INPUT[@name='ctThresholdValue_7']"
			[+] DomTextField ValidMinCycle1
				[ ] locator "//INPUT[@name='validMin_0']"
			[+] DomTextField ValidMinCycle2
				[ ] locator "//INPUT[@name='validMin_1']"
			[+] DomTextField ValidMinCycle3
				[ ] locator "//INPUT[@name='validMin_2']"
			[+] DomTextField ValidMinCycle4
				[ ] locator "//INPUT[@name='validMin_3']"
			[+] DomTextField ValidMinCycle5
				[ ] locator "//INPUT[@name='validMin_4']"
			[+] DomTextField ValidMinCycle6
				[ ] locator "//INPUT[@name='validMin_5']"
			[+] DomTextField ValidMinCycle7
				[ ] locator "//INPUT[@name='validMin_6']"
			[+] DomTextField ValidMinCycle8
				[ ] locator "//INPUT[@name='validMin_7']"
				[ ] 
			[+] DomTextField ValidMaxCycle1
				[ ] locator "//INPUT[@name='validMax_0']"
			[+] DomTextField ValidMaxCycle2
				[ ] locator "//INPUT[@name='validMax_1']"
			[+] DomTextField ValidMaxCycle3
				[ ] locator "//INPUT[@name='validMax_2']"
			[+] DomTextField ValidMaxCycle4
				[ ] locator "//INPUT[@name='validMax_3']"
			[+] DomTextField ValidMaxCycle5
				[ ] locator "//INPUT[@name='validMax_4']"
			[+] DomTextField ValidMaxCycle6
				[ ] locator "//INPUT[@name='validMax_5']"
			[+] DomTextField ValidMaxCycle7
				[ ] locator "//INPUT[@name='validMax_6']"
			[+] DomTextField ValidMaxCycle8
				[ ] locator "//INPUT[@name='validMax_7']"
			[+] DomCheckBox UseEndpt1
				[ ] locator "//INPUT[@name='useEndpoint_0']"
			[+] DomCheckBox UseEndpt2
				[ ] locator "//INPUT[@name='useEndpoint_1']"
			[+] DomCheckBox UseEndpt3
				[ ] locator "//INPUT[@name='useEndpoint_2']"
			[+] DomCheckBox UseEndpt4
				[ ] locator "//INPUT[@name='useEndpoint_3']"
			[+] DomCheckBox UseEndpt5
				[ ] locator "//INPUT[@name='useEndpoint_4']"
			[+] DomCheckBox UseEndpt6
				[ ] locator "//INPUT[@name='useEndpoint_5']"
			[+] DomCheckBox UseEndpt7
				[ ] locator "//INPUT[@name='useEndpoint_6']"
			[+] DomCheckBox UseEndpt8
				[ ] locator "//INPUT[@name='useEndpoint_7']"
			[+] DomTextField EndPtMin1
				[ ] locator "//INPUT[@name='endPtThreshold_0']"
			[+] DomTextField EndPtMin2
				[ ] locator "//INPUT[@name='endPtThreshold_1']"
			[+] DomTextField EndPtMin3
				[ ] locator "//INPUT[@name='endPtThreshold_2']"
			[+] DomTextField EndPtMin4
				[ ] locator "//INPUT[@name='endPtThreshold_3']"
			[+] DomTextField EndPtMin5
				[ ] locator "//INPUT[@name='endPtThreshold_4']"
			[+] DomTextField EndPtMin6
				[ ] locator "//INPUT[@name='endPtThreshold_5']"
			[+] DomTextField EndPtMin7
				[ ] locator "//INPUT[@name='endPtThreshold_6']"
			[+] DomTextField EndPtMin8
				[ ] locator "//INPUT[@name='endPtThreshold_7']"
			[+] DomTextField PeakHeight1
				[ ] locator "//INPUT[@name='peakHeightMin_0']"
			[+] DomTextField PeakHeight2
				[ ] locator "//INPUT[@name='peakHeightMin_1']"
			[+] DomTextField PeakHeight3
				[ ] locator "//INPUT[@name='peakHeightMin_2']"
			[+] DomTextField PeakHeight4
				[ ] locator "//INPUT[@name='peakHeightMin_3']"
			[+] DomTextField PeakHeight5
				[ ] locator "//INPUT[@name='peakHeightMin_4']"
			[+] DomTextField PeakHeight6
				[ ] locator "//INPUT[@name='peakHeightMin_5']"
			[+] DomTextField PeakHeight7
				[ ] locator "//INPUT[@name='peakHeightMin_6']"
			[+] DomTextField PeakHeight8
				[ ] locator "//INPUT[@name='peakHeightMin_7']"
			[ ] 
			[-] DomTextField E0_1
				[ ] locator "INPUT[@name='e0_0']"
			[+] DomTextField E0_2
				[ ] locator "INPUT[@name='e0_1']"
			[+] DomTextField E0_3
				[ ] locator "INPUT[@name='e0_2']"
			[+] DomTextField E0_4
				[ ] locator "INPUT[@name='e0_3']"
			[+] DomTextField E0_5
				[ ] locator "INPUT[@name='e0_4']"
			[+] DomTextField E0_6
				[ ] locator "INPUT[@name='e0_5']"
			[+] DomTextField E1_1
				[ ] locator "INPUT[@name='e1_0']"
			[+] DomTextField E1_2
				[ ] locator "INPUT[@name='e1_1']"
			[+] DomTextField E1_3
				[ ] locator "INPUT[@name='e1_2']"
			[+] DomTextField E1_4
				[ ] locator "INPUT[@name='e1_3']"
			[+] DomTextField E1_5
				[ ] locator "INPUT[@name='e1_4']"
			[+] DomTextField E1_6
				[ ] locator "INPUT[@name='e1_5']"
			[+] DomTextField E2_1
				[ ] locator "INPUT[@name='e2_0']"
			[+] DomTextField E2_2
				[ ] locator "INPUT[@name='e2_1']"
			[+] DomTextField E2_3
				[ ] locator "INPUT[@name='e2_2']"
			[+] DomTextField E2_4
				[ ] locator "INPUT[@name='e2_3']"
			[+] DomTextField E2_5
				[ ] locator "INPUT[@name='e2_4']"
			[+] DomTextField E2_6
				[ ] locator "INPUT[@name='e2_5']"
			[ ] 
			[+] DomTextField ScalingFactor1
				[ ] locator "//INPUT[@name='scalingFactor_0']"
			[+] DomTextField ScalingFactor2
				[ ] locator "//INPUT[@name='scalingFactor_1']"
			[+] DomTextField ScalingFactor3
				[ ] locator "//INPUT[@name='scalingFactor_2']"
			[+] DomTextField ScalingFactor4
				[ ] locator "//INPUT[@name='scalingFactor_3']"
			[+] DomTextField ScalingFactor5
				[ ] locator "//INPUT[@name='scalingFactor_4']"
			[+] DomTextField ScalingFactor6
				[ ] locator "//INPUT[@name='scalingFactor_5']"
			[+] DomTextField ScalingFactor7
				[ ] locator "//INPUT[@name='scalingFactor_6']"
			[+] DomTextField ScalingFactor8
				[ ] locator "//INPUT[@name='scalingFactor_7']"
			[+] DomTextField DeltaCtEffic1
				[ ] locator "//INPUT[@name='deltaCtEfficiency_0']"
			[+] DomTextField DeltaCtEffic2
				[ ] locator "//INPUT[@name='deltaCtEfficiency_1']"
			[+] DomTextField DeltaCtEffic3
				[ ] locator "//INPUT[@name='deltaCtEfficiency_2']"
			[+] DomTextField DeltaCtEffic4
				[ ] locator "//INPUT[@name='deltaCtEfficiency_3']"
			[+] DomTextField DeltaCtEffic5
				[ ] locator "//INPUT[@name='deltaCtEfficiency_4']"
			[+] DomTextField DeltaCtEffic6
				[ ] locator "//INPUT[@name='deltaCtEfficiency_5']"
			[+] DomTextField DeltaCtEffic7
				[ ] locator "//INPUT[@name='deltaCtEfficiency_6']"
			[+] DomTextField DeltaCtEffic8
				[ ] locator "//INPUT[@name='deltaCtEfficiency_7']"
				[ ] 
			[ ] 
			[ ] //Probe Check Settings in Result Analysis + Probe Check Menu
			[+] DomTable PrbChk_Table
				[ ] locator "//TABLE[@id='probeCheckSettings_table']"
			[+] DomButton ProbeCheckSettings
				[ ] locator "BUTTON[@id='analysis_settings']"
			[+] DomTextField PrbChkOneThreeMin1
				[ ] locator "//INPUT[@name='probeChkLowMin_0']"
			[+] DomTextField PrbChkOneThreeMin2
				[ ] locator "//INPUT[@name='probeChkLowMin_1']"
			[+] DomTextField PrbChkOneThreeMin3
				[ ] locator "//INPUT[@name='probeChkLowMin_2']"
			[+] DomTextField PrbChkOneThreeMin4
				[ ] locator "//INPUT[@name='probeChkLowMin_3']"
			[+] DomTextField PrbChkOneThreeMin5
				[ ] locator "//INPUT[@name='probeChkLowMin_4']"
			[+] DomTextField PrbChkOneThreeMin6
				[ ] locator "//INPUT[@name='probeChkLowMin_5']"
			[+] DomTextField PrbChkOneThreeMin7
				[ ] locator "//INPUT[@name='probeChkLowMin_6']"
			[+] DomTextField PrbChkOneThreeMin8
				[ ] locator "//INPUT[@name='probeChkLowMin_7']"
			[+] DomTextField PrbChkOneThreeMax1
				[ ] locator "//INPUT[@name='probeChkLowMax_0']"
			[+] DomTextField PrbChkOneThreeMax2
				[ ] locator "//INPUT[@name='probeChkLowMax_1']"
			[+] DomTextField PrbChkOneThreeMax3
				[ ] locator "//INPUT[@name='probeChkLowMax_2']"
			[+] DomTextField PrbChkOneThreeMax4
				[ ] locator "//INPUT[@name='probeChkLowMax_3']"
			[+] DomTextField PrbChkOneThreeMax5
				[ ] locator "//INPUT[@name='probeChkLowMax_4']"
			[+] DomTextField PrbChkOneThreeMax6
				[ ] locator "//INPUT[@name='probeChkLowMax_5']"
			[+] DomTextField PrbChkOneThreeMax7
				[ ] locator "//INPUT[@name='probeChkLowMax_6']"
			[+] DomTextField PrbChkOneThreeMax8
				[ ] locator "//INPUT[@name='probeChkLowMax_7']"
			[+] DomTextField PrbChkTwoMin1
				[ ] locator "//INPUT[@name='probeChkHighMin_0']"
			[+] DomTextField PrbChkTwoMin2
				[ ] locator "//INPUT[@name='probeChkHighMin_1']"
			[+] DomTextField PrbChkTwoMin3
				[ ] locator "//INPUT[@name='probeChkHighMin_2']"
			[+] DomTextField PrbChkTwoMin4
				[ ] locator "//INPUT[@name='probeChkHighMin_3']"
			[+] DomTextField PrbChkTwoMin5
				[ ] locator "//INPUT[@name='probeChkHighMin_4']"
			[+] DomTextField PrbChkTwoMin6
				[ ] locator "//INPUT[@name='probeChkHighMin_5']"
			[+] DomTextField PrbChkTwoMin7
				[ ] locator "//INPUT[@name='probeChkHighMin_6']"
			[+] DomTextField PrbChkTwoMin8
				[ ] locator "//INPUT[@name='probeChkHighMin_7']"
			[+] DomTextField PrbChkTwoMax1
				[ ] locator "//INPUT[@name='probeChkHighMax_0']"
			[+] DomTextField PrbChkTwoMax2
				[ ] locator "//INPUT[@name='probeChkHighMax_1']"
			[+] DomTextField PrbChkTwoMax3
				[ ] locator "//INPUT[@name='probeChkHighMax_2']"
			[+] DomTextField PrbChkTwoMax4
				[ ] locator "//INPUT[@name='probeChkHighMax_3']"
			[+] DomTextField PrbChkTwoMax5
				[ ] locator "//INPUT[@name='probeChkHighMax_4']"
			[+] DomTextField PrbChkTwoMax6
				[ ] locator "//INPUT[@name='probeChkHighMax_5']"
			[+] DomTextField PrbChkTwoMax7
				[ ] locator "//INPUT[@name='probeChkHighMax_6']"
			[+] DomTextField PrbChkTwoMax8
				[ ] locator "//INPUT[@name='probeChkHighMax_7']"
				[ ] 
			[+] DomTextField PrbChkDelta1
				[ ] locator "//INPUT[@name='probeChkDelta_0']"
			[+] DomTextField PrbChkDelta2
				[ ] locator "//INPUT[@name='probeChkDelta_1']"
			[+] DomTextField PrbChkDelta3
				[ ] locator "//INPUT[@name='probeChkDelta_2']"
			[+] DomTextField PrbChkDelta4
				[ ] locator "//INPUT[@name='probeChkDelta_3']"
			[+] DomTextField PrbChkDelta5
				[ ] locator "//INPUT[@name='probeChkDelta_4']"
			[+] DomTextField PrbChkDelta6
				[ ] locator "//INPUT[@name='probeChkDelta_5']"
			[+] DomTextField PrbChkDelta7
				[ ] locator "//INPUT[@name='probeChkDelta_6']"
			[+] DomTextField PrbChkDelta8
				[ ] locator "//INPUT[@name='probeChkDelta_7']"
				[ ] 
			[ ] 
			[+] DomCheckBox PrbChkUseDelta1
				[ ] locator "INPUT[@name='analyte.isProbeCheck*']"
			[+] DomCheckBox PrbChkUseDelta2
				[ ] locator "INPUT[@name='analyte.isProbeCheck*'][2]"
			[+] DomCheckBox PrbChkUseDelta3
				[ ] locator "INPUT[@name='analyte.isProbeCheck*'][3]"
			[+] DomCheckBox PrbChkUseDelta4
				[ ] locator "INPUT[@name='analyte.isProbeCheck*'][4]"
			[+] DomCheckBox PrbChkUseDelta5
				[ ] locator "INPUT[@name='analyte.isProbeCheck*'][5]"
			[+] DomCheckBox PrbChkUseDelta6
				[ ] locator "INPUT[@name='analyte.isProbeCheck*'][6]"
			[ ] 
			[+] DomTextField PrbChkMinRatio1
				[ ] locator "INPUT[@name='analyte.probeCheckMi*']"
			[+] DomTextField PrbChkMinRatio2
				[ ] locator "INPUT[@name='analyte.probeCheckMi*'][2]"
			[+] DomTextField PrbChkMinRatio3
				[ ] locator "INPUT[@name='analyte.probeCheckMi*'][3]"
			[+] DomTextField PrbChkMinRatio4
				[ ] locator "INPUT[@name='analyte.probeCheckMi*'][4]"
			[+] DomTextField PrbChkMinRatio5
				[ ] locator "INPUT[@name='analyte.probeCheckMi*'][5]"
			[+] DomTextField PrbChkMinRatio6
				[ ] locator "INPUT[@name='analyte.probeCheckMi*'][6]"
			[ ] 
			[+] DomTextField PrbChkMaxRatio1
				[ ] locator "INPUT[@name='analyte.probeCheckMa*']"
			[+] DomTextField PrbChkMaxRatio2
				[ ] locator "INPUT[@name='analyte.probeCheckMa*'][2]"
			[+] DomTextField PrbChkMaxRatio3
				[ ] locator "INPUT[@name='analyte.probeCheckMa*'][3]"
			[+] DomTextField PrbChkMaxRatio4
				[ ] locator "INPUT[@name='analyte.probeCheckMa*'][4]"
			[+] DomTextField PrbChkMaxRatio5
				[ ] locator "INPUT[@name='analyte.probeCheckMa*'][5]"
			[+] DomTextField PrbChkMaxRatio6
				[ ] locator "INPUT[@name='analyte.probeCheckMa*'][6]"
				[ ] 
			[ ] 
			[+] DomTextField NormFactor1
				[ ] locator "INPUT[@id='probeCheckSettings_n*']"
			[+] DomTextField NormFactor2
				[ ] locator "INPUT[@id='probeCheckSettings_n*'][2]"
			[+] DomTextField NormFactor3
				[ ] locator "INPUT[@id='probeCheckSettings_n*'][3]"
			[+] DomTextField NormFactor4
				[ ] locator "INPUT[@id='probeCheckSettings_n*'][4]"
			[+] DomTextField NormFactor5
				[ ] locator "INPUT[@id='probeCheckSettings_n*'][5]"
			[+] DomTextField NormFactor6
				[ ] locator "INPUT[@id='probeCheckSettings_n*'][6]"
			[ ] 
			[ ] 
			[ ] // ToDo tell Garry that all checkbox locator duplicated for all checkboxes
			[ ] // Also after the Check box all text fields still need to be defined
			[+] DomCheckBox PrbChkUseDelta
				[ ] locator "//INPUT[@name='analyte.isProbeCheck*']"
			[ ] 
			[ ] //Melt Settings workspace
			[-] DomLink MeltSettings //MeltSettings Workspace
				[ ] locator "A[@id='defineAssays_melts']"
			[-] DomTable MeltSettings_Table
				[ ] locator "TABLE[@id='meltSettings_table']"
			[-] DomCheckBox AutoFindMelt
				[ ] locator "//INPUT[@id='meltSettings_useMelt*']"
			[-] DomListBox MeltSlope
				[ ] locator "SELECT[@id='meltSettings_slopePo*']"
			[-] DomTextField BaseStartTemp
				[ ] locator "//INPUT[@id='meltSettings_baselin*']"
			[-] DomTextField BaseLookBack
				[ ] locator "//INPUT[@id='meltSettings_baselin*']"
			[-] DomTextField BaseNumPts
				[ ] locator "//INPUT[@id='meltSettings_baselin*'][3]"
			[-] DomTextField PtsArndPeak
				[ ] locator "//INPUT[@id='meltSettings_pointsA*']"
			[-] DomTextField PeakThrsh
				[ ] locator "//INPUT[@id='meltSettings_pointsA*']"
			[ ] 
			[ ] //Lots workspace
			[-] DomElement Lots_Header
				[ ] locator "LABEL[@textContents='Lots']"
			[-] DomLink Lots //Lots Menu in View Assay
				[ ] locator "A[@id='defineAssays_lots']"
			[-] DomTable Lots_Table
				[ ] locator "TABLE[@id='lots_table']"
				[ ] 
			[-] DomElement Add_Lots // Add Lots Button
				[ ] locator "BUTTON[@id='lots_add']"
				[ ] 
			[-] DomButton Import_Lots //Import lots button
				[ ] locator "BUTTON[@ID='lots_import']"	
				[ ] 
			[-] DomButton Lot_Refresh // Refresh lots page button
				[ ] locator "BUTTON[@id='lots_refresh']"
				[ ] 
			[-] DomButton Scan_Lots // Scan lots button
				[ ] locator "BUTTON[@id='lots_scan']"
				[ ] 
			[-] DomButton Scan_CancelButton // cancel button used in browser menus/dialogs
				[ ] locator "BUTTON[@id='action_cancel']"
			[-] DomElement View_Lot // View lots button, takes you to Result analysis + Probe Check
				[ ] locator "IMG[@id='lots_viewButton_0']"
				[ ] 
			[-] DomElement Add_Lots_Dialog // Add Lots button, creates new window
				[ ] locator "DIV[@class='modal-content']"
				[ ] 
			[-] DomTextField Lot_Number // field within Add Lots window to enter in lot number.
				[ ] locator "//INPUT[@id='lot_Number']"
			[-] DomButton Export_Lot1 // Export lot button on first row, ToDo need to add more 
				[ ] locator "IMG[@id='lots_exportButton_1']"
			[-] DomButton Edit_Lot1 // Edit lot button on first row
				[ ] locator "IMG[@id='lots_editButton_1']"
			[-] DomButton Delete_Lot1 // Delete lot button on first row
				[ ] locator "IMG[@id='lots_deleteButton_1']"
			[-] DomButton Lot_Save // save button on lots tab
				[ ] locator "BUTTON[@id='save_assay']"
			[-] DomElement Scan_Lot_Dialog // scan lot picture dialog thing
				[ ] locator "DIV[@class='ng-scope']/IMG[@src='http://127.0.0.1:888*']"
				[ ] 
			[ ] //Duplicate assay dialog and buttons
			[-] DomLink ActionMenu_Dupl // click to duplicate assay
				[ ] locator "A[@id='assayTable_groupDupl*']"
				[ ] 
			[-] DomElement Dupl_dialog //duplication dialog box
				[ ] locator "DIV[@class='modal-content']"
				[ ] 
			[-] DomTextField AssayTextField //where you name the assay
				[ ] locator "//INPUT[@id='assay_name']"
				[ ] 
			[-] DomButton Confirm_Duplication // confirm duplication button
				[ ] locator "BUTTON[@id='duplicate']"
				[ ] 
			[ ] 
			[ ] // Export Button, refer to saveas windows menu buttons at top of frame
			[+] DomLink ActionMenu_Export // export assay to windows
				[ ] locator "A[@id='assayTable_groupExpo*']"
				[ ] 
			[ ] 
			[ ] //Action Menu Conver Button and workspace
			[+] DomLink ActionMenu_Convert // action menu convert button
				[ ] locator "A[@id='assayTable_groupConv*']"
			[+] DomTextField AssayName_Convert // convert assayname, in convert workspace
				[ ] locator "//INPUT[@id='convertForm_name']"
			[+] DomTextField Shelf_Life_Convert // convert workspace cartridge shelf life 
				[ ] locator "//INPUT[@id='convertForm_prepCart*']"
			[+] DomListBox Convert_Assay_Type // Assay type dropdown.
				[ ] locator "SELECT[@id='convert_assay_select*']"
			[+] DomTextField Lock_Comments // Locked comments text field listing the date
				[ ] locator "TEXTAREA[@id='lockComments']"
			[+] DomTextField AssayDisclaimer_Convert
				[ ] locator "TEXTAREA[@id='assayDisclaimer']"
			[+] DomButton Reset_Default // doesn't seem like this button does anything
				[ ] locator "BUTTON[@textContents='Reset to Default']"
			[+] DomButton Convert_Assay // convert button to convert the newly created assay.
				[ ] locator "BUTTON[@id='convert']"
			[ ] 
			[ ] //Report ActionMenu link, with window buttons
			[-] DomLink ActionMenu_Report // create a report of the assay
				[ ] locator "A[@id='assayTable_groupRepo*']"
				[ ] 
			[-] DomListBox ReagentLotID_ChkBox //checkbox for ReagentLotID
					[ ] locator "SELECT[@id='assay_reports_select*']"
					[ ] 
			[-] DomCheckBox AnalyteSelec_ChkBox // checkbox for Analyteselection
				[ ] locator "//LABEL[@textContents='Analyte Selection']//INPUT[@class='ng-pristine ng-untou*']"
				[ ] 
			[-] DomCheckBox Curvefit_ChkBox // checkbox for curvefit
				[ ] locator "//LABEL[@textContents='Curve Fit Settings']//INPUT[@class='ng-pristine ng-untou*']"
				[ ] 
			[-] DomCheckBox MeltSet_ChkBox //check box for meltsettings
				[ ] locator "//LABEL[@textContents='Melt Settings']//INPUT[@class='ng-pristine ng-untou*']"
				[ ] 
			[-] DomCheckBox ComSeq_ChkBox //check box for Command Sequence
				[ ] locator "//LABEL[@textContents='Command Sequence']//INPUT[@class='ng-pristine ng-untou*']"
				[ ] 
			[-] DomCheckBox AnalyteSet_ChkBox //check box for AnalyteSet
				[ ] locator "//LABEL[@textContents='Analyte Settings']//INPUT[@class='ng-pristine ng-untou*']"
				[ ] 
			[-] DomCheckBox ResultAnalysisSet_ChkBox //check box for ResultAnalysisSet
				[ ] locator "//LABEL[@textContents='Result Analysis Settings']//INPUT[@class='ng-pristine ng-untou*']"
				[ ] 
			[-] DomCheckBox ReportScaling_ChkBox //check box for ReportScaling
				[ ] locator "//LABEL[@textContents='Reporter Scaling']//INPUT[@class='ng-pristine ng-untou*']"
				[ ] 
			[-] DomCheckBox CartridgeInfo_ChkBox //check box for BackgroundSettings
				[ ] locator "//LABEL[@textContents='Cartridge Information']//INPUT[@class='ng-pristine ng-untou*']"
				[ ] 
			[-] DomCheckBox BackgroundSettings_ChkBox //check box for
				[ ] locator "//LABEL[@textContents='Background Settings']//INPUT[@class='ng-pristine ng-untou*']"
				[ ] 
			[-] DomCheckBox ProbeCheckSettings_ChkBox //check box for ProbeCheckSettings
				[ ] locator "//LABEL[@textContents='Probe Check Settings']//INPUT[@class='ng-pristine ng-untou*']"
				[ ] 
			[-] DomCheckBox AdvancetoNewStage_ChkBox //check box for AdvancetoNewStage
				[ ] locator "//LABEL[@textContents='Advnce to New Stage']//INPUT[@class='ng-pristine ng-untou*']"
				[ ] 
			[-] DomCheckBox CustomizeResultText_ChkBox //check box for CustomizeResultText
				[ ] locator "//LABEL[@textContents='Customize Result Text']//INPUT[@class='ng-pristine ng-untou*']"
			[-] DomButton Export_Report // exports the report.
				[ ] locator "BUTTON[@id='download_report']"
			[ ] 
			[ ] //Action Menu Delete button
			[+] DomLink ActionMenu_Delete // delete assay, use delete dialog buttons from above
				[ ] locator "A[@id='assayTable_groupDele*']"
				[ ] 
			[ ] 
			[ ] // ActionMenu_ToTop starts at two because ToTop1 is already on top.
			[+] DomLink ActionMenu_ToTop2 // moves 2nd assay in list to top
				[ ] locator "A[@id='assayTable_1_groupMo*']"
				[ ] 
			[+] DomLink ActionMenu_ToTop3 // moves 3rd assay in list to top
				[ ] locator "A[@id='assayTable_2_groupMo*']"
				[ ] 
			[+] DomLink ActionMenu_ToTop4 // moves 4th assay in list to top
				[ ] locator "A[@id='assayTable_3_groupMo*']"
				[ ] 
			[+] DomLink ActionMenu_ToTop5 // moves 5th assay in list to top
				[ ] locator "A[@id='assayTable_4_groupMo*']"
			[ ] 
			[ ] //Define Cartridge Workspace 
			[-] DomLink Define_Cartridge //Text to help ID Define Cartridge workspace
				[ ] locator "A[@textContents='Define Cartridge']"
			[-] DomTable Cartridges_Table //Table visibile in define cartridge workspace
				[ ] locator "TABLE[@id='cartridgeTable_table']"
			[+] DomElement Cartridge_Name // Cartridge Name header on table
				[ ] locator "SPAN[@textContents='Cartridge Name']"
			[-] DomElement Cartridge_Version // Cartridge Version header on table
				[ ] locator "SPAN[@textContents='Cartridge Version']"
			[+] DomElement CreatedDate // Create Date header on table
				[ ] locator "SPAN[@textContents='Created Date']"
			[+] DomButton Add_Cartridge // Add Cartridge button
				[ ] locator "BUTTON[@id='cartridgeTable_add']"
			[+] DomButton Import_Cartridge // Import Cartridge Button
				[ ] locator "BUTTON[@id='cartridgeTable_impor*']"
			[+] DomButton Delete_Cartridge // Delete Cartridge Button
				[ ] locator "BUTTON[@id='cartridgeTable_delet*']"
				[ ] 
			[+] DomButton Select_All_Carts // checkbox to select all carts
				[ ] locator "INPUT[@id='cartridgeTable_table*']"
			[-] DomElement Cartridge_Action_Menu //Action menu row 1
				[ ] locator "//IMG[@id='cartridgeTable_actionMenu_0']" 
			[-] DomElement Cartridge_Action_Menu1 //Action menu row 2
				[ ] locator "//IMG[@id='cartridgeTable_actionMenu_1']" 
			[-] DomElement Cartridge_Action_Menu2 //Action menu row 3
				[ ] locator "//IMG[@id='cartridgeTable_actionMenu_2']" 
			[-] DomElement Cartridge_Action_Menu3 //Action menu row 4
				[ ] locator "//IMG[@id='cartridgeTable_actionMenu_3']" 
			[-] DomElement Cartridge_Action_Menu4 //Action menu row 5
				[ ] locator "//IMG[@id='cartridgeTable_actionMenu_4']" 
			[-] DomElement Cartridge_Action_Menu5 //Action menu row 6
				[ ] locator "//TR[@id='cartridgeTable_row_5']//IMG[@id='cartridgeTable_actio*']" 
			[+] DomLink Edit_Cartridge // edit cartridge from action menu in define cartridge workspace
				[ ] locator "A[@id='cartridgeTable_group*']"
			[+] DomLink Dupl_Cartridge // Duplicate Cartridge from action menu in define cartridge workspace
				[ ] locator "A[@id='cartridgeTable_group*'][2]"
			[-] DomTextField Dupl_Cart_Name // text field to name duplicated cartridge
				[ ] locator "//INPUT[@id='cartridge_name']"
			[-] DomButton Dupl_Submit // button to submit name for duplication
				[ ] locator "BUTTON[@id='duplicate_cartridge_*'][2]"
			[-] DomLink Export_Cartridge //Export Cartridge from action menu in define cartridge workspace
				[ ] locator "A[@id='cartridgeTable_group*'][3]"
			[+] DomLink Report_Cartridge // report Cartridge from action menu in define cartridge workspace
				[ ] locator "A[@id='cartridgeTable_group*'][4]"
			[ ] //rows in table
			[-] DomElement Cartridge_Name_Row1
				[ ] locator "TD[@id='cartridgeTable_name_cell_0']"
			[+] DomElement Cartridge_Ver_Row1
				[ ] locator "TD[@id='cartridgeTable_cartridgeVersion_cell_0']"
			[+] DomElement Created_Date_Row1
				[ ] locator "TD[@id='cartridgeTable_creationTime_cell_0']"
			[ ] 
			[ ] //New/Edit Cartridge workspace, these are pretty self explanatory.
			[ ] //small clarification, the error refers to the autogenerated text when a value is outside of the inclusive range
			[+] DomLink Chamber_Path // Chamber and Path tab in edit cartridge workspace
				[ ] locator "A[@id='cartridgeTab_chamber*']"
			[+] DomLink Cartridge_Tab // Cartridge tab in edit cartridge workspace
				[ ] locator "A[@id='cartridgeTab_cartrid*']"
			[+] DomTextField New_Cartridge_Name 
				[ ] locator "//INPUT[@id='defineCartridge_name']"
			[+] DomElement Cart_Name_Error
				[ ] locator "//NG-FORM[@name='defineCartridge1']"
			[+] DomElement Version_Num
				[ ] locator "//SPAN[@id='cartridgeForm_cartri*']"
			[+] DomButton Save_Cartridge
				[ ] locator "BUTTON[@id='save_cartridge']"
			[+] DomRadioButton Save_Exist
				[ ] locator "INPUT[@name='choice']"
			[+] DomRadioButton Save_As_Cart
				[ ] locator "INPUT[@name='choice'][2]"
			[ ] 
			[ ] //Cartridge Tab
			[+] DomTextField Syringe_Max_Vol
				[ ] locator "//INPUT[@id='cartridgeForm_syring*']"
			[+] DomElement Syringe_Max_Error
				[ ] locator "SPAN[@textContents='Syringe Max Volume (*']"
			[+] DomTextField Syringe_Min_Transfer
				[ ] locator "//INPUT[@id='cartridgeForm_syring*'][2]"
			[+] DomElement Syringe_Min_Error
				[ ] locator "SPAN[@textContents='Syringe Min Transfer*']"
			[+] DomTextField Plunger_Strip_Position
				[ ] locator "//INPUT[@id='cartridgeForm_plunge*']"
			[+] DomElement Plunger_Strip_Error
				[ ] locator "SPAN[@textContents='Plunger Strip Position*']"
			[+] DomTextField Cartridge_Foot_Height
				[ ] locator "//INPUT[@id='cartridgeForm_cartri*']"
			[+] DomElement Cart_Foot_Height_Error
				[ ] locator "SPAN[@textContents='Cartridge Foot Heigh*']"
			[+] DomTextField Tube_Volume
				[ ] locator "//INPUT[@id='cartridgeForm_tubeVo*']"
			[+] DomElement Tube_Vol_Error
				[ ] locator "SPAN[@textContents='Tube Volume is outsi*']"
			[+] DomTextField Filter_Path
				[ ] locator "//INPUT[@id='cartridgeForm_filter*']"
			[+] DomElement Filter_Path_Error
				[ ] locator "SPAN[@textContents='Filter Path(µL) is o*']"
			[+] DomTextField Tube_Syringe_Path
				[ ] locator "//INPUT[@id='cartridgeForm_tubeSy*']"
			[+] DomElement Tube_Syringe_Path_Error
				[ ] locator "SPAN[@textContents='Tube Syringe Path (µ*']"
			[+] DomTextField Direct_Flow_Rate_Min
				[ ] locator "//INPUT[@id='cartridgeForm_direct*'][2]"
			[+] DomElement Direct_Flow_Rate_Min_Error
				[ ] locator "SPAN[@textContents='Direct Flow Rate Min*']"
			[+] DomTextField Filter_Flow_Rate_Min
				[ ] locator "//INPUT[@id='cartridgeForm_filter*'][2]"
			[+] DomElement Filter_Flow_Rate_Min_Error
				[ ] locator "SPAN[@textContents='Filter Flow Rate Min*']"
			[+] DomTextField Initial_Asp_Vol
				[ ] locator "//INPUT[@id='cartridgeForm_initia*']"
			[+] DomElement Initial_Asp_Error
				[ ] locator "SPAN[@textContents='Initial Aspirate Vol*']"
			[+] DomTextField uL_Per_Rev
				[ ] locator "//INPUT[@id='cartridgeForm_microl*']"
			[+] DomElement uL_Per_Rev_Error
				[ ] locator "SPAN[@textContents='µL Per Revolution is*']"
			[+] DomTextField Min_Press
				[ ] locator "//INPUT[@id='cartridgeForm_minPre*']"
			[+] DomElement Min_Press_Error
				[ ] locator "SPAN[@textContents='Min Pressure is outs*']"
			[+] DomTextField ADC_To_PSI
				[ ] locator "//INPUT[@id='cartridgeForm_adc2Ps*']"
			[+] DomElement ADC_To_PSI_Error
				[ ] locator "SPAN[@textContents='ADC To PSI Conversio*']"
			[+] DomTextField Syringe_Max_Transfer_Vol
				[ ] locator "//INPUT[@id='cartridgeForm_syring*'][3]"
			[+] DomElement Syringe_Max_Transfer_Error
				[ ] locator "SPAN[@textContents='Syringe Max Transfer*']"
			[+] DomTextField Plunger_Pickup_Position
				[ ] locator "//INPUT[@id='cartridgeForm_plunge*'][2]"
			[+] DomElement Plunger_Pickup_Error
				[ ] locator "SPAN[@textContents='Plunger Pickup Posit*']"
			[+] DomTextField Tube_Volume_Press
				[ ] locator "//INPUT[@id='cartridgeForm_tubePr*']"
			[+] DomElement Tube_Volume_Press_Error
				[ ] locator "SPAN[@textContents='Tube Volume (pressur*']"
			[+] DomTextField Direct_Path
				[ ] locator "//INPUT[@id='cartridgeForm_direct*']"
			[+] DomElement Direct_Path_Error
				[ ] locator "SPAN[@textContents='Direct Path(µL) is o*']"
			[+] DomTextField Tube_Chamber_Path
				[ ] locator "//INPUT[@id='cartridgeForm_tubeCh*']"
			[+] DomElement Tube_Chamber_Path_Error
				[ ] locator "SPAN[@textContents='Tube Chamber Path (µ*']"
			[+] DomTextField Direct_Flow_Rate_Max
				[ ] locator "//INPUT[@id='cartridgeForm_direct*'][3]"
			[+] DomElement Direct_Flow_Rate_Max_Error
				[ ] locator "SPAN[@textContents='Direct Flow Rate Max*']"
			[+] DomTextField Filter_Flow_Rate_Max
				[ ] locator "//INPUT[@id='cartridgeForm_filter*'][3]"
			[+] DomElement Filter_Flow_Rate_Max_Error
				[ ] locator "SPAN[@textContents='Filter Flow Rate Max*']"
			[+] DomTextField Initial_Aspirate_Flow_Rate
				[ ] locator "//INPUT[@id='cartridgeForm_initia*'][2]"
			[+] DomElement Initial_Aspirate_Flow_Error
				[ ] locator "SPAN[@textContents='Init. Aspirate Flow *']"
			[+] DomTextField Max_Press
				[ ] locator "//INPUT[@id='cartridgeForm_maxPre*']"
			[+] DomElement Max_Press_Error
				[ ] locator "SPAN[@textContents='Max Pressure is outs*']"
			[ ] 
			[ ] //Chamber & Paths
			[+] DomButton Import_Image //imports image of cartridge
				[ ] locator "BUTTON[@textContents='Import Image']"
			[+] DomListBox Tube_Chamber // Tube Chamber Dropdown menu in Chamber and Paths Tab
				[ ] locator "SELECT[@id='tube_chamber']"
			[+] DomListBox Air_Chamber //  Air Chamber Dropdown menu in Chamber and Paths Tab
				[ ] locator "SELECT[@id='air_chamber']"
			[+] DomListBox Overflow_Chamber // Overflow Chamber Dropdown menu in Chamber and Paths Tab
				[ ] locator "SELECT[@id='overflow_chamber']"
			[+] DomButton Add_Chambers // Adds row to chambers table
				[ ] locator "BUTTON[@id='chambers_add']"
			[+] DomButton Add_Paths // Adds row to the Paths Tabe
				[ ] locator "BUTTON[@id='paths_add']"
			[+] DomButton Chamber_Del // chamber Delete button
				[ ] locator "//IMG[@id='chambers_deleteButto*']"
			[ ] 
			[+] DomElement Min_Vol_Range_Error // Range error for Min Vol in edit cartridge workspace
				[ ] locator "SPAN[@textContents='Min Vol(µL) is outsi*']"
			[-] DomElement Vol_Missing //Empty Text field message for Min Vol
				[ ] locator "SPAN[@textContents='Required number is m*']"
			[+] DomElement Max_Vol_Range_Error //Range Error for Max Vol in edit cartridge workspace
				[ ] locator "SPAN[@textContents='Max Vol(µL) is outsi*']"
			[+] DomElement Max_Vol_Missing//Empty Text field message for Max Vol
				[ ] locator "SPAN[@textContents='Required number is m*'][2]"
			[ ] 
			[+] DomTextField Chamber_Min_Vol // Min volume text field for chamber 1
				[ ] locator "//INPUT[@id='chambers_minVolume_0']"
			[+] DomTextField Chamber_Max_Vol // Max volume text field for chamber 1
				[ ] locator "//INPUT[@id='chambers_maxVolume_0']"
			[+] DomTextField Chamber_Min_Vol1 // Min volume text field for chamber 2
				[ ] locator "//INPUT[@id='chambers_minVolume_1']"
			[+] DomTextField Chamber_Max_Vol1 // Max volume text field for chamber 2
				[ ] locator "//INPUT[@id='chambers_maxVolume_1']"
			[+] DomTextField Chamber_Min_Vol2 // Min volume text field for chamber 3
				[ ] locator "//INPUT[@id='chambers_minVolume_2']"
			[+] DomTextField Chamber_Max_Vol2 // Max volume text field for chamber 3
				[ ] locator "//INPUT[@id='chambers_maxVolume_2']"
			[+] DomTextField Chamber_Min_Vol3 // Min volume text field for chamber 4
				[ ] locator "//INPUT[@id='chambers_minVolume_3']"
			[+] DomTextField Chamber_Max_Vol3 // Max volume text field for chamber 4
				[ ] locator "//INPUT[@id='chambers_maxVolume_3']"
			[+] DomTextField Chamber_Min_Vol4 // Min volume text field for chamber 5
				[ ] locator "//INPUT[@id='chambers_minVolume_4']"
			[+] DomTextField Chamber_Max_Vol4 // Max volume text field for chamber 5
				[ ] locator "//INPUT[@id='chambers_maxVolume_4']"
			[+] DomTextField Chamber_Min_Vol5 // Min volume text field for chamber 6
				[ ] locator "//INPUT[@id='chambers_minVolume_5']"
			[+] DomTextField Chamber_Max_Vol5 // Max volume text field for chamber 6
				[ ] locator "//INPUT[@id='chambers_maxVolume_5']"
			[+] DomTextField Chamber_Min_Vol6 // Min volume text field for chamber 7
				[ ] locator "//INPUT[@id='chambers_minVolume_6']"
			[+] DomTextField Chamber_Max_Vol6 // Max volume text field for chamber 7
				[ ] locator "//INPUT[@id='chambers_maxVolume_6']"
			[+] DomTextField Chamber_Min_Vol7 // Min volume text field for chamber 8
				[ ] locator "//INPUT[@id='chambers_minVolume_7']"
			[+] DomTextField Chamber_Max_Vol7 // Max volume text field for chamber 8
				[ ] locator "//INPUT[@id='chambers_maxVolume_7']"
			[+] DomTextField Chamber_Min_Vol8 // Min volume text field for chamber 9
				[ ] locator "//INPUT[@id='chambers_minVolume_8']"
			[+] DomTextField Chamber_Max_Vol8 // Max volume text field for chamber 9
				[ ] locator "//INPUT[@id='chambers_maxVolume_8']"
			[+] DomTextField Chamber_Min_Vol9 // Min volume text field for chamber 10
				[ ] locator "//INPUT[@id='chambers_minVolume_9']"
			[+] DomTextField Chamber_Max_Vol9 // Max volume text field for chamber 10
				[ ] locator "//INPUT[@id='chambers_maxVolume_9']"
			[+] DomTextField Chamber_Min_Vol10 // Min volume text field for chamber 11
				[ ] locator "//INPUT[@id='chambers_minVolume_10']"
			[+] DomTextField Chamber_Max_Vol10 // Max volume text field for chamber 11
				[ ] locator "//INPUT[@id='chambers_maxVolume_10']"
			[+] DomTextField Chamber_Min_Vol11 // Min volume text field for chamber 12
				[ ] locator "//INPUT[@id='chambers_minVolume_11']"
			[+] DomTextField Chamber_Max_Vol11 // Max volume text field for chamber 12
				[ ] locator "//INPUT[@id='chambers_maxVolume_11']"
			[+] DomTextField Chamber_Min_Vol12 // Min volume text field for chamber 13
				[ ] locator "//INPUT[@id='chambers_minVolume_12']"
			[+] DomTextField Chamber_Max_Vol12 // Max volume text field for chamber 13
				[ ] locator "//INPUT[@id='chambers_maxVolume_12']"
			[+] DomTextField Chamber_Min_Vol13 // Min volume text field for chamber 14
				[ ] locator "//INPUT[@id='chambers_minVolume_13']"
			[+] DomTextField Chamber_Max_Vol13 // Max volume text field for chamber 14
				[ ] locator "//INPUT[@id='chambers_maxVolume_13']"
			[+] DomTextField Chamber_Min_Vol14 // Min volume text field for chamber 15
				[ ] locator "//INPUT[@id='chambers_minVolume_14']"
			[+] DomTextField Chamber_Max_Vol14 // Max volume text field for chamber 15
				[ ] locator "//INPUT[@id='chambers_maxVolume_14']"
			[ ] 
			[+] DomListBox Leads_To // Leads to pulldown row 1
				[ ] locator "//SELECT[@name='pathChamberNum_0']"
			[-] DomListBox Path_Type // the type of path either direct or filter row 1
				[ ] locator "//SELECT[@id='paths_type_0']"
			[-] DomTextField Angular_Offset //I honestly don't know... 
				[ ] locator "//INPUT[@id='paths_angularOffset_0']"
				[ ] 
			[+] DomElement AngOffset_Range_Error // Range error for Path in edit cartridge workspace
				[ ] locator "SPAN[@textContents='Angular Offset is ou*']"
			[+] DomElement AngOffset_Missing_Value
				[ ] locator "SPAN[@textContents='Required number is m*'][3]"
			[+] DomListBox Leads_To1 // Leads to pulldown row 2
				[ ] locator "//SELECT[@name='pathChamberNum_1']"
			[+] DomListBox Leads_To2 // Leads to pulldown row 3
				[ ] locator "//SELECT[@name='pathChamberNum_2']"
			[+] DomListBox Leads_To3 // Leads to pulldown row 4
				[ ] locator "//SELECT[@name='pathChamberNum_3']"
			[+] DomListBox Leads_To4 // Leads to pulldown row 5
				[ ] locator "//SELECT[@name='pathChamberNum_4']"
			[+] DomListBox Leads_To5 // Leads to pulldown row 6
				[ ] locator "//SELECT[@name='pathChamberNum_5']"
			[+] DomListBox Leads_To6 // Leads to pulldown row 7
				[ ] locator "//SELECT[@name='pathChamberNum_6']"
			[+] DomListBox Leads_To7 // Leads to pulldown row 8
				[ ] locator "//SELECT[@name='pathChamberNum_7']"
			[+] DomListBox Leads_To8 // Leads to pulldown row 9
				[ ] locator "//SELECT[@name='pathChamberNum_8']"
			[+] DomListBox Leads_To9 // Leads to pulldown row 10
				[ ] locator "//SELECT[@name='pathChamberNum_9']"
			[+] DomListBox Leads_To10 // Leads to pulldown row 11
				[ ] locator "//SELECT[@name='pathChamberNum_10']"
			[+] DomListBox Leads_To11 // Leads to pulldown row 12
				[ ] locator "//SELECT[@name='pathChamberNum_11']"
			[+] DomListBox Leads_To12 // Leads to pulldown row 13
				[ ] locator "//SELECT[@name='pathChamberNum_12']"
			[+] DomListBox Leads_To13 // Leads to pulldown row 14
				[ ] locator "//SELECT[@name='pathChamberNum_13']"
			[+] DomListBox Leads_To14 // Leads to pulldown row 15
				[ ] locator "//SELECT[@name='pathChamberNum_14']"
			[ ] 
			[-] DomListBox Path_Type1 // the type of path either direct or filter row 2
				[ ] locator "//SELECT[@id='paths_type_1']"
			[+] DomListBox Path_Type2 // the type of path either direct or filter row 3
				[ ] locator "//SELECT[@id='paths_type_2']"
			[+] DomListBox Path_Type3 // the type of path either direct or filter row 4
				[ ] locator "//SELECT[@id='paths_type_3']"
			[+] DomListBox Path_Type4 // the type of path either direct or filter row 4
				[ ] locator "//SELECT[@id='paths_type_4']"
			[+] DomListBox Path_Type5 // the type of path either direct or filter row 5
				[ ] locator "//SELECT[@id='paths_type_5']"
			[+] DomListBox Path_Type6 // the type of path either direct or filter row 6
				[ ] locator "//SELECT[@id='paths_type_6']"
			[+] DomListBox Path_Type7 // the type of path either direct or filter row 7
				[ ] locator "//SELECT[@id='paths_type_7']"
			[+] DomListBox Path_Type8 // the type of path either direct or filter row 8
				[ ] locator "//SELECT[@id='paths_type_8']"
			[+] DomListBox Path_Type9 // the type of path either direct or filter row 9
				[ ] locator "//SELECT[@id='paths_type_9']"
			[+] DomListBox Path_Type10 // the type of path either direct or filter row 10
				[ ] locator "//SELECT[@id='paths_type_10']"
			[+] DomListBox Path_Type11 // the type of path either direct or filter row 11
				[ ] locator "//SELECT[@id='paths_type_11']"
			[+] DomListBox Path_Type12 // the type of path either direct or filter row 12
				[ ] locator "//SELECT[@id='paths_type_12']"
			[+] DomListBox Path_Type13 // the type of path either direct or filter row 13
				[ ] locator "//SELECT[@id='paths_type_13']"
			[+] DomListBox Path_Type14 // the type of path either direct or filter row 14
				[ ] locator "//SELECT[@id='paths_type_14']"
			[ ] 
			[-] DomTextField Angular_Offset1 //I honestly don't know...
				[ ] locator "//INPUT[@id='paths_angularOffset_1]"
			[-] DomTextField Angular_Offset2 //I honestly don't know... 
				[ ] locator "//INPUT[@id='paths_angularOffset_2]"
			[-] DomTextField Angular_Offset3 //I honestly don't know... 
				[ ] locator "//INPUT[@id='paths_angularOffset_3]"
			[-] DomTextField Angular_Offset4 //I honestly don't know... 
				[ ] locator "//INPUT[@id='paths_angularOffset_4]"
			[-] DomTextField Angular_Offset5 //I honestly don't know... 
				[ ] locator "//INPUT[@id='paths_angularOffset_5]"
			[-] DomTextField Angular_Offset6 //I honestly don't know... 
				[ ] locator "//INPUT[@id='paths_angularOffset_6]"
			[-] DomTextField Angular_Offset7 //I honestly don't know... 
				[ ] locator "//INPUT[@id='paths_angularOffset_7]"
			[-] DomTextField Angular_Offset8 //I honestly don't know... 
				[ ] locator "//INPUT[@id='paths_angularOffset_8]"
			[-] DomTextField Angular_Offset9 //I honestly don't know... 
				[ ] locator "//INPUT[@id='paths_angularOffset_9]"
			[-] DomTextField Angular_Offset10 //I honestly don't know... 
				[ ] locator "//INPUT[@id='paths_angularOffset_10]"
			[-] DomTextField Angular_Offset11 //I honestly don't know... 
				[ ] locator "//INPUT[@id='paths_angularOffset_11]"
			[-] DomTextField Angular_Offset12 //I honestly don't know... 
				[ ] locator "//INPUT[@id='paths_angularOffset_12]"
			[-] DomTextField Angular_Offset13 //I honestly don't know... 
				[ ] locator "//INPUT[@id='paths_angularOffset_13]"
			[-] DomTextField Angular_Offset14 //I honestly don't know... 
				[ ] locator "//INPUT[@id='paths_angularOffset_14]"
			[ ] 
			[ ] 
			[ ] //User Management Workspace
			[+] DomLink Users // Text used to ID user management workspace
				[ ] locator "A[@textContents='Users']"
			[+] DomButton Add_User // Add user button
				[ ] locator "BUTTON[@id='users_add']"
			[+] DomElement Add_User_Dialog // dialog that appears when you press add user button
				[ ] locator "H4[@textContents='Add User']"
			[+] DomTextField UserForm_Username // user text field
				[ ] locator "//INPUT[@id='userForm_loginName']"
			[+] DomElement User_WarningText // red text below username text field
				[ ] locator "//NG-FORM[@name='userForm1']/DIV[3]"
			[+] DomTextField UserForm_Pass // password text field
				[ ] locator "//INPUT[@id='userForm_password']"
			[+] DomTextField UserForm_ConfirmPass // confirm password text field in user management
				[ ] locator "//INPUT[@id='userForm_confirmPass*']"
			[+] DomElement Passwords_Match // warning text that passwords must match
				[ ] locator "DIV[@class='col-md-12'][2]"
			[+] DomTextField UserForm_Fullname // full name of user text field
				[ ] locator "//INPUT[@id='userForm_fullName']"
				[ ] 
			[-] DomElement UserNameColumn // first row of users table, user name column
				[ ] locator "TD[@id='users_loginName_cell_0']"
			[-] DomElement UserFNameColumn // first row of user table, User full name column
				[ ] locator "TD[@id='users_fullName_cell_0']"
			[-] DomElement UserTypeColumn // first row of user table, User Type Column
				[ ] locator "TD[@id='users_userType_cell_0']"
			[+] DomElement Fullname_WarningText // red text below password text field
				[ ] locator "NG-FORM[@name='userForm1'][2]/DIV[3]"
			[+] DomElement Password_WarningText // Warning Text under the password text field
				[ ] locator "NG-FORM[@name='userForm1'][3]/DIV[3]"
			[+] DomElement ConfPassword_WarningText // warning text below confirm password.
				[ ] locator "NG-FORM[@name='userForm1'][4]/DIV[3]"
			[+] DomElement Error_Saving // error saving text within dialog, may be universal 
				[ ] locator "//DIV[@textContents='Error saving due to *']"
			[+] DomElement Dupl_User_Error // error saving text within dialog, may be universal 
				[ ] locator "//DIV[@textContents='User named [*']"
			[+] DomElement Delete_User // delete user button on first row in user management workspace
				[ ] locator "IMG[@id='users_deleteButton_0']"
			[-] DomLink UserName_Header //Username Table header in User management workspace
				[ ] locator "A[@id='users_tableHeader_sort_loginName']"
			[-] DomLink UserFullName_Header //User Full name table header in user management workspace
				[ ] locator "A[@id='users_tableHeader_sort_fullName']"
			[-] DomLink UserType_Header //User Full name table header in user management workspace
				[ ] locator "A[@id='users_tableHeader_sort_userType']"
			[ ] 
			[ ] 
			[ ] //Database Management Workspace window thing Comments!
			[+] DomLink Database_Management // title bar link, used to ID page
				[ ] locator "A[@textContents='Database Management']"
			[-] DomButton Backup_Database // button to backup database, opens save as windows window
				[ ] locator "BUTTON[@id='downloadBackup']"
			[-] DomButton Restore_Database // restore database button, creates dialog asking if you'd like to create a backup of the current database
				[ ] locator "BUTTON[@id='restoreDBButton']"
			[+] DomElement Prior_to_Restore // text in first confirm dialog to ID confirm box, asks if you'd like to make a backup of current database prior to restoring a database
				[ ] locator"DIV[@textContents='Do you want to creat*']"
			[+] DomElement Overwrite_Database // text in second confirm dialog to ID confirm box, asks if you'd like to restore a database and overwrite you're current one
				[ ] locator "DIV[@textContents='Database Restore wil*']"
			[-] DomElement BackupProgress_Bar // progress bar that appears once database is saved
				[ ] locator "//DIV[@class='progress-bar']"
			[-] DomElement RestoreProgress_Bar // progress bar that appears once database is saved
				[ ] locator "//DIV[@class='progress-bar']"
			[ ] 
			[ ] //Settings workpsace window
			[+] DomLink General // General tab in settings window
				[ ] locator "A[@id='commandProtocol_general']"
			[+] DomLink Folders // folders tab in settings window
				[ ] locator "A[@id='commandProtocol_folders']"
			[+] DomLink Settings // Settings window, used to ID we are viewing the settings window
				[ ] locator "A[@textContents='Settings']" 
			[+] DomListBox DateFormat // date format dropdown
				[ ] locator "SELECT[@id='dateFormat']"
			[+] DomListBox TimeFormat // time format dropdown
				[ ] locator "SELECT[@id='timeFormat']"
			[+] DomCheckBox Database_Reminder // checkbox to toggle database reminder text and time limit
				[ ] locator "INPUT[@id='settings_reminder_en*']"
			[+] DomTextField Reminder_Days // text field to choose amount of days until reminder is shown
				[ ] locator "//INPUT[@id='settings_reminder_pe*']"
			[+] DomButton Save_Settings // Save Settings button, opens information dialog box
				[ ] locator "SPAN[@textContents='Save Settings']"
			[-] DomTextField ExportFolder //export folder text field in settings workspace
				[ ] locator "INPUT[@id='exportDirectory']"
			[-] DomTextField ReportFolder// report folder text field in setting workspace
				[ ] locator "INPUT[@id='reportDirectory']"
			[-] DomTextField BackupFolder// backup folder text field in settings workspace
				[ ] locator "INPUT[@id='backUpDirectory']"
			[-] DomTextField DBLogFolder// DB Log Folder text field in settings workspace
				[ ] locator "INPUT[@id='dbLogDirectory']"
			[ ] 
			[ ] //About Dialog identifies
			[+] DomElement About_ADK_System // ADK text to check if box is open
				[ ] locator "H4[@textContents='About ADK System']"
				[ ] 
				[ ] 
			[+] DomLink Release_Notes // Link for release notes to open
				[ ] locator "A[@textContents='Release Notes']"
			[+] DomLink License // Link to open license
				[ ] locator"A[@textContents='License']"
			[+] DomElement Cannot_Find // error message that occurs because license isn't implemented yet
				[ ] locator "DIV[@textContents='Cannot find the spec*']"
			[+] DomLink Install_Qual // install qualification link
				[ ] locator "A[@textContents='Installation Qualifi*']"
			[-] DomElement About_Text // this might work...
				[ ] locator "DIV[@class='plate padding-10 mar*']/DIV"
				[ ] 
			[ ] // Brendan unsorted crap
			[+] DomButton Multi_cartridge
				[ ] locator "//INPUT[@id='multi_cartridges']"
			[+] DomTextField Temp_C
				[ ] locator "//INPUT[@name='temperature']"
			[+] DomTextField Temp_C2
				[ ] locator "//INPUT[@name='temperature'][2]"
			[+] DomTextField Seconds
				[ ] locator "//INPUT[@name='seconds']"
			[+] DomTextField Seconds_2
				[ ] locator "//INPUT[@name='seconds'][2]"
			[+] DomElement Http127001888
				[ ] locator "//BUTTON[@id='assayTable_add']/IMG[@src='http://127.0.0.1:888*']"
			[+] DomButton Define_assays_add_ca
				[ ] locator "BUTTON[@id='define_assays_add_ca*']"
			[+] DomTextField Create_new_cartridge
				[ ] locator "INPUT[@id='create_new_cartridge*']"
			[+] DomCheckBox Copy_from_existing_c
				[ ] locator "INPUT[@id='copy_from_existing_c*']"
			[+] DomElement ColMd12Marginb1
				[ ] locator "DIV[@class='col-md-12 margin-b-1*']"
			[+] DomListBox Add_cartridge_from_c
				[ ] locator "SELECT[@id='add_cartridge_from_c*']"
			[+] DomElement Http1270018882
				[ ] locator "//BUTTON[@id='define_assays_add_ca*']/IMG[@src='http://127.0.0.1:888*']"
			[+] DomListBox Add_cartridge_from_a
				[ ] locator "SELECT[@id='add_cartridge_from_a*']"
			[+] DomLink Cart1
				[ ] locator "A[@textContents='Cart-1']"
			[+] DomButton ImageButtonNgScop
				[ ] locator "BUTTON[@class='image-button ng-scop*']"
			[+] DomLink AssayInfoAndResul
				[ ] locator "A[@textContents='Assay Info and Resul*']"
			[+] DomLink Multi_cartridge_defi
				[ ] locator "A[@id='multi_cartridge_defi*']"
			[+] DomButton OrganismDefineResult
				[ ] locator "BUTTON[@id='organismDefineResult*']"
			[+] DomTextField OrganismDefineResultINPUT
				[ ] locator "INPUT[@id='organismDefineResult*']"
			[+] DomButton OrganismDefineResult2
				[ ] locator "BUTTON[@id='organismDefineResult*'][2]"
			[+] DomCheckBox AddOrganismForm_anal
				[ ] locator "//LABEL[@textContents='Cart-1:Target1']/INPUT[@id='addOrganismForm_anal*']"
			[+] DomCheckBox AddOrganismForm_anal2
				[ ] locator "//LABEL[@textContents='Cart-4:Target3']/INPUT[@id='addOrganismForm_anal*']"
			[+] DomCheckBox AddOrganismForm_anal3
				[ ] locator "//LABEL[@textContents='Cart-2:Target1']/INPUT[@id='addOrganismForm_anal*']"
			[+] DomCheckBox AddOrganismForm_anal4
				[ ] locator "//LABEL[@textContents='Cart-3:Target3']/INPUT[@id='addOrganismForm_anal*']"
			[+] DomCheckBox AddOrganismForm_anal5
				[ ] locator "//LABEL[@textContents='Cart-5:Target4']/INPUT[@id='addOrganismForm_anal*']"
			[+] DomElement OrganismDefineResultIMG
				[ ] locator "IMG[@id='organismDefineResult*'][2]"
			[+] DomButton RuleTable_addRule
				[ ] locator "BUTTON[@id='ruleTable_addRule']"
			[+] DomListBox DropdownForm_ruleAnd
				[ ] locator "SELECT[@id='dropdownForm_ruleAnd*']"
			[+] DomButton AddEditFormula_0_0
				[ ] locator "BUTTON[@id='addEditFormula_0_0']"
			[+] DomButton Formula_ok
				[ ] locator "BUTTON[@id='formula_ok']"
			[+] DomButton RuleTable_addColumn
				[ ] locator "BUTTON[@id='ruleTable_addColumn']"
			[+] DomButton AddEditFormula_0_1
				[ ] locator "BUTTON[@id='addEditFormula_0_1']"
			[+] DomListBox Formula_analyte
				[ ] locator "SELECT[@id='formula_analyte']"
			[+] DomListBox DropdownForm_calcula
				[ ] locator "SELECT[@id='dropdownForm_calcula*']"
			[+] DomListBox DropdownForm_reporti
				[ ] locator "SELECT[@id='dropdownForm_reporti*']"
			[+] DomListBox ColorSelectorForm_te
				[ ] locator "SELECT[@id='colorSelectorForm_te*']"
			[+] DomButton AnalyteSettings_add
				[ ] locator "BUTTON[@id='analyteSettings_add']"
			[+] DomLink DefineAnalytes
				[ ] locator "A[@textContents='Define Analytes']"
			[+] DomListBox AnaylteSettings_repo2
				[ ] locator "SELECT[@id='anaylteSettings_repo*'][2]"
			[+] DomListBox AnaylteSettings_repo3
				[ ] locator "SELECT[@id='anaylteSettings_repo*'][3]"
			[+] DomLink CommandSequence
				[ ] locator "A[@textContents='Command Sequence']"
			[+] DomButton CommandProtocol_stagBUTTON
				[ ] locator "BUTTON[@id='commandProtocol_stag*']"
			[+] DomButton PCR_Crosstalk_Factor
				[ ] locator "BUTTON[@id='pcr_crosstalk_factor*']"
			[+] DomButton Melt_Crosstalk_Factor
				[ ] locator "BUTTON[@id='melt_crosstalk_facto*']"
			[+] DomListBox NgPristineNgUntou
				[ ] locator "SELECT[@class='ng-pristine ng-untou*'][3]"
			[-] DomLink CurveAnalysis9
				[ ] locator "A[@textContents='Curve Analysis']"
			[+] DomCheckBox BackgroundSub_useBac
				[ ] locator "INPUT[@id='backgroundSub_useBac*']"
			[+] DomLink ResultAnalysisPr
				[ ] locator "A[@textContents='Result Analysis + Pr*']"
			[ ] 
			[ ] 
[-] window MainWin ASK
	[ ] locator "/MainWin[@caption='Assay Support Kit']"
	[ ] 
	[-] BrowserApplication Web
		[ ] locator "//BrowserApplication"
		[ ] 
		[ ] //ASK Browser window
		[-] BrowserWindow Browser
			[ ] locator "//BrowserWindow"
			[ ] 
			[ ] //ConstantS used by multiple Menus to be added here as they appear
			[+] DomButton CancelButton // cancel button used in browser menus/dialogs
				[ ] locator "BUTTON[@id='cancel']"
			[+] DomButton OkButton // this is an ok button used in all browser menus/dialogs
				[ ] locator "BUTTON[@id='ok']"
			[+] DomButton YesButton // YES button to confirm your excellent choices or LEAVE before people notice your mistakes
				[ ] locator "BUTTON[@id='prompt_yes_button']"
			[+] DomButton NoButton // you made a mistake... you know what you did, click quickly so NO one notices or STAY and fix them.
				[ ] locator "BUTTON[@id='prompt_no_button']"
			[+] DomLink CloseButton // Close button in menu's, specifically the about dialog so far
				[ ] locator "A[@textContents='Close']"
			[+] DomElement Dialogbox // common locator for dialog boxes within ADK, use text in boxes to ID
				[ ] locator "//DIV[@class='modal-content']"
			[+] DomElement Error_Dialog // specific error dialog box header text
				[ ] locator "H3[@textContents='Error']"
			[+] DomElement Dialog_text // body of dialog box, for grabbing text(grab text)
				[ ] locator "DIV[@class='modal-body']"
			[+] DomButton Save_Assay //Save Assay Button
				[ ] locator "BUTTON[@id='save_assay']"
			[+] DomElement Info_Dialog //info dialog box after saving assay
				[ ] locator "H3[@textContents='Information']"
			[+] DomElement Confirm_Dialog //confirm dialog box when leaving an unsaved assay
				[ ] locator "H3[@textContents='Confirm']"
			[+] DomElement Max_Length // max field length red text
				[ ] locator "SPAN[@textContents='Field maximum length*']"
			[ ] 
			[ ] //Login window
			[+] DomElement Username_Text //username text next to field, can click to enter text field
				[ ] locator "LABEL[@textContents='Username']"
			[+] DomTextField LoginName // login name field
				[ ] locator "INPUT[@id='loginForm_loginName']"
			[+] DomElement Password_Text // Password text next to field, can click to enter text field
				[ ] locator "LABEL[@textContents='Password']"
			[+] DomTextField Password // password field
				[ ] locator "INPUT[@id='loginForm_password']"
			[+] DomButton LoginButton // login button
				[ ] locator "BUTTON[@id='loginForm_login']"
			[+] DomElement Remember_Username_Text // Remember username text, can click to check box
				[ ] locator "LABEL[@textContents='Remember username']"
			[+] DomCheckBox Remember_Username // checkbox for remember username
				[ ] locator "INPUT[@ng-model='remember']"
			[+] DomElement Incorrect_Username // Incorrect Username or password error box
				[ ] locator "DIV[@textContents='Incorrect username o*']"
			[ ] 
			[ ] //Home Window
			[+] DomElement Navbar_ApplicationName
				[ ] locator "//LABEL[@textContents='Assay Support Kit']"
			[+] DomLink Navbar_loginName //login name with pulldown button, top right of window
				[ ] locator "A[@id='navbar_loginName']"
			[+] DomLink Navbar_Exit // only option in the drop down menu
					[ ] locator "A[@id='navbar_Exit']"
			[+] DomLink Navbar_Help // help button top right of window
				[ ] locator "A[@id='navbar_help']"
			[+] DomLink Navbar_About // About button, top right of window
				[ ] locator "A[@id='navbar_about']"
			[+] DomLink Navbar_Logout // logout button, top right of window
				[ ] locator "A[@id='navbar_logout']"
			[ ] 
			[ ] //Breadcrumb Bar
			[+] DomLink Breadbar_Home
				[ ] locator "//A[@textContents='Home']"
			[+] DomElement Breadbar_Duplicate
				[ ] locator "//LI[@textContents='Duplicate Selected T*']"
			[ ] 
			[ ] //Search Filter Drop Down Menu Constants
			[+] DomButton DropDownMenu1 // arrow next to filter by text, should use this to open dropdown menu everytime
				[ ] locator "BUTTON[@id='filterDropdown_0']"
			[+] DomButton DropDownMenu2 // if another filter is added, dropdown arrow of the second filter bar
				[ ] locator "BUTTON[@id='filterDropdown_1']"
			[+] DomButton DropDownMenu3 // if a 3rd filter is added, dropdown arrow of the 3rd filter bar
				[ ] locator "BUTTON[@id='filterDropdown_2']"
			[+] DomButton DropDownMenu4 // if a 4th filter is added, dropdown arrow of the 4th filter bar
				[ ] locator "BUTTON[@id='filterDropdown_3']"
			[+] DomButton AddSearchFilter // add search filter button
				[ ] locator "BUTTON[@id='addBtn']"
			[+] DomButton RemoveSearchFilter //remove search filter button
				[ ] locator "BUTTON[@id='removeBtn_0']"
			[+] DomButton RemoveSearchFilter2 // remove second search filter button 2
				[ ] locator "BUTTON[@id='removeBtn_1']"
			[+] DomButton RemoveSearchFilter3 // remove second search filter button 3
				[ ] locator "BUTTON[@id='removeBtn_2']"
			[+] DomButton RemoveSearchFilter4 // remove second search filter button 3
				[ ] locator "BUTTON[@id='removeBtn_3']"
			[+] DomListBox SearchFilter_DropDown // Dropdown for assay version and user type, Click do not DomClick, then enter number of version or letter for user type
				[ ] locator "SELECT[@id='selectedFieldDropDow*']"
			[+] DomTextField SearchFilter_Textfield0 // first text field for search
				[ ] locator "INPUT[@id='searchTextInput_0']"
			[+] DomTextField SearchFilter_Textfield1 // second text field for search
				[ ] locator "INPUT[@id='searchTextInput_1']"
			[+] DomTextField SearchFilter_Textfield2 // third text field for search
				[ ] locator "INPUT[@id='searchTextInput_2']"
			[+] DomTextField SearchFilter_Textfield3 // fourth text field for search
				[ ] locator "INPUT[@id='searchTextInput_3']"
			[+] DomTextField SearchFilter_Textfield4 // fifth text field for search
				[ ] locator "INPUT[@id='searchTextInput_4']"
			[+] DomTextField SearchFilter_Textfield5 // sixth text field for search
				[ ] locator "INPUT[@id='searchTextInput_5']"
			[+] DomTextField SearchFilter_Textfield6 // seventh text field for search
				[ ] locator "INPUT[@id='searchTextInput_6']"
			[+] DomTextField SearchFilter_Textfield7 // eighth text field for search
				[ ] locator "INPUT[@id='searchTextInput_7']"
			[+] DomTextField SearchFilter_Textfield8 // ninth text field for search
				[ ] locator "INPUT[@id='searchTextInput_8']"
			[+] DomTextField SearchFilter_Textfield9 // tenth text field for search
				[ ] locator "INPUT[@id='searchTextInput_9']"
				[ ] 
			[+] DomLink Filter_By_FilterBy // filter by filter by
				[ ] locator "//A[@textContents='Filter By']"
			[+] DomLink Filter_By_PatientID // filter by patient ID
				[ ] locator "A[@textContents='Patient ID']"
			[+] DomLink Filter_By_SampleID // filter by sample ID
				[ ] locator "A[@textContents='Sample ID']"
			[+] DomLink Filter_By_Result // filter by result
				[ ] locator "A[@textContents='Result']"
			[+] DomLink Filter_By_ModuleName // filter by module name
				[ ] locator "A[@textContents='Module Name']"
			[+] DomLink Filter_By_ModuleSerial // filter by module serial
				[ ] locator "A[@textContents='Module Serial #']"
			[+] DomLink Filter_By_User // filter by user
				[ ] locator "A[@textContents='User']"
			[+] DomLink Filter_By_Assay // filter by assay
				[ ] locator "A[@textContents='Assay']"
			[+] DomLink Filter_By_Version // filter by version
				[ ] locator "A[@textContents='Version']"
			[-] DomLink Filter_By_Lot // filter by lot
				[ ] locator "A[@textContents='Lot']"
			[+] DomLink Filter_By_AssayType // filter by assay type
				[ ] locator "A[@textContents='Assay Type']"
			[+] DomLink Filter_By_Status // filter by status
				[ ] locator "A[@textContents='Status']"
			[+] DomLink Filter_By_Error // filter by error
				[ ] locator "A[@textContents='Error']"
			[+] DomLink Filter_By_StartTime // filter by start time
				[ ] locator "A[@textContents='Start Time']"
			[ ] 
			[ ] 
			[ ] // Test checkboxes, up to 10. Can very easily add more
			[-] DomCheckBox CheckAll // checks all rows
				[ ] locator "INPUT[@id='testTable_tableHeade*']"
			[-] DomCheckBox SelectCheck1 // checks the first row
				[ ] locator "INPUT[@id='testTable_selectChec*']"
			[-] DomCheckBox SelectCheck2 // checks the second row
				[ ] locator "INPUT[@id='testTable_selectChec*'][2]"
			[-] DomCheckBox SelectCheck3 // checks the third row
				[ ] locator "INPUT[@id='testTable_selectChec*'][3]"
			[-] DomCheckBox SelectCheck4 // checks the fourth row
				[ ] locator "INPUT[@id='testTable_selectChec*'][4]"
			[-] DomCheckBox SelectCheck5 // checks the fifth row
				[ ] locator "INPUT[@id='testTable_selectChec*'][5]"
			[-] DomCheckBox SelectCheck6 // checks the sixth row
				[ ] locator "INPUT[@id='testTable_selectChec*'][6]"
			[-] DomCheckBox SelectCheck7 // checks the seventh row
				[ ] locator "INPUT[@id='testTable_selectChec*'][7]"
			[-] DomCheckBox SelectCheck8 // checks the eighth row
				[ ] locator "INPUT[@id='testTable_selectChec*'][8]"
			[-] DomCheckBox SelectCheck9 // checks the ninth row
				[ ] locator "INPUT[@id='testTable_selectChec*'][9]"
			[-] DomCheckBox SelectCheck10 // checks the tenth row
				[ ] locator "INPUT[@id='testTable_selectChec*'][10]"
			[ ] 
			[ ] // Test Run buttons
			[+] DomButton SelectHighlighted // button to select the highlighted test runs
				[ ] locator "BUTTON[@id='checkHighlighted']"
			[+] DomButton DeselectHighlighted // button to deselect the highlighted test runs
				[ ] locator "BUTTON[@id='uncheckHighlighted']"
			[+] DomButton GenerateTestSummary // button to generate test summary
				[ ] locator "BUTTON[@id='generateTestSummary']"
			[+] DomButton DuplicateSelectedTests // button duplicate selected tests
				[ ] locator "BUTTON[@id='duplicateTest']"
			[+] DomCheckBox IncludeReplaceTestRuns // checkbox for the Include Replace Test Runs in Test Summary *for multi-cartridge only* option
				[ ] locator "INPUT[@id='includeReplaceRun']"
			[ ] 
			[ ] // Duplicate Select Tests options
			[+] DomElement DuplicateSelectedTestsRadio // radio button to duplicate only selected tests
				[ ] locator "LABEL[@textContents='Duplicate the select*']"
			[+] DomElement DuplicateSelectedAssayTestsRadio // radio button to duplicate all tests from the selected test's assay
				[ ] locator "LABEL[@textContents='Duplicate all tests *']"
			[+] DomButton NextOnSelectTest // button to go to the next page
				[ ] locator "BUTTON[@id='nextOnSelectTest']"
			[+] DomButton CancelSelectTestButton // button to cancel duplicate workflow
				[ ] locator "BUTTON[@id='cancelSelectTest']"
			[ ] // Sample ID Prefix options
			[+] DomTextField SampleIDTextField // text field to enter sample ID prefix for all duplicated tests
				[ ] locator "INPUT[@id='enterSampleId']"
			[+] DomElement MaxLengthMessage // message popup telling the user the max character length
				[ ] locator "//SPAN[@textContents='Field maximum length*']"
			[+] DomElement InvalidCharMessage // message popup telling the user that an input char is invalid
				[ ] locator "//SPAN[@textContents='Input character is i*']"
			[+] DomButton BackOnEnterSIDButton // button to go back to the previous page
				[ ] locator "BUTTON[@id='backOnEnterSID']"
			[+] DomButton NextToEnterAssayNameButton // button to go to the next page
				[ ] locator "BUTTON[@id='nextToEnterAssayName']"
			[+] DomButton CancelEnterSampleIDButton // button to cancel duplicate workflow
				[ ] locator "BUTTON[@id='cancelEnterSampleId']"
			[ ] // Assay Name options
			[+] DomTextField AssayNameTextField // text field to enter assay name for all duplicated tests
				[ ] locator "INPUT[@id='enterAssayName']"
			[+] DomButton BackOnEnterAssayNameButton // button to go back to the previous page
				[ ] locator "BUTTON[@id='backOnEnterAssayName']"
			[+] DomButton CancelEnterAssayNameButton // button to cancel duplicate workflow
				[ ] locator "BUTTON[@id='cancelEnterAssayName']"
			[+] DomButton DuplicateButton // button to duplicate the tests
				[ ] locator "BUTTON[@id='duplicate']"
			[+] DomButton backBtn // button to go back if dupplicate assay name has already been used
				[ ] locator "//BUTTON[@id='backBtn']"
			[ ] // Duplicated option
			[+] DomButton BackToHomeButton // button to go back to home ater tests are duplicated
				[ ] locator "BUTTON[@id='backToHome']"
			[ ] 
			[ ] // Test Summary export options
			[+] DomCheckBox AnalyteResultData
				[ ] locator "INPUT[@id='analyteData']"
			[+] DomCheckBox ProbeCheckData
				[ ] locator "INPUT[@id='probeData']"
			[+] DomCheckBox CurveFitBackground
				[ ] locator "INPUT[@id='curveFitBackground']"
			[ ] 
			[ ] // Test table
			[-] DomTable TestTable
				[ ] locator "//TABLE[@id='testTable_table']"
			[-] DomButton TestTableRefresh // The refresh button for the test table
				[ ] locator "BUTTON[@id='testTable_refresh']"
			[+] DomElement PatientIDHeader // The Patient header for the test table
				[ ] locator "SPAN[@textContents='Patient ID']"
			[+] DomElement SampleIDHeader // The Sample ID header for the test table
				[ ] locator "SPAN[@textContents='Sample ID']"
			[+] DomElement ResultHeader // The Result header for the test table
				[ ] locator "SPAN[@textContents='Result']"
			[+] DomElement ModuleNameHeader // The Module Name header for the test table
				[ ] locator "SPAN[@textContents='Module Name']"
			[+] DomElement ModuleSerialNumber // The Module Serial Number header for the test table
				[ ] locator "SPAN[@textContents='Module Serial #']"
			[+] DomElement UserHeader // The User header for the test table
				[ ] locator "SPAN[@textContents='User']"
			[+] DomElement AssayHeader // The Assay header for the test table
				[ ] locator "SPAN[@textContents='Assay']"
			[-] DomElement VersionHeader // The Version header for the test table
				[ ] locator "SPAN[@textContents='Version']"
			[-] DomElement LotHeader // The Lot header for the test table
				[ ] locator "SPAN[@textContents='Lot']"
			[+] DomElement AssayTypeHeader // The Assay Type header for the test table
				[ ] locator "SPAN[@textContents='Assay Type']"
			[+] DomElement StatusHeader // The Status header for the test table
				[ ] locator "SPAN[@textContents='Status']"
			[+] DomElement ErrorHeader // The Error header for the test table
				[ ] locator "SPAN[@textContents='Error']"
			[+] DomElement StartTimeHeader // The Start Time header for the test table
				[ ] locator "SPAN[@textContents='Start Time']"
			[-] DomButton TestTable_refreshB // The refresh tests button
				[ ] locator "//BUTTON[@id='testTable_refresh']"
			[-] DomElement TestTable_duplicateB // The duplicate test button
				[ ] // locator "//TR[@id='testTable_row_1']//IMG[@id='testTable_duplicateB*']"
				[ ] locator "//TR[@ng-class='??bg-info?: isRowCli*']/TD[@id='testTable_duplicateB*']//IMG[@id='testTable_duplicateB*']"
			[+] DomElement Cancel // One of the cancel buttons
				[ ] locator "SPAN[@textContents='Cancel']"
			[+] DomButton CancelOnEnterSIDPref // Another cancel button on the EnterSID page
				[ ] locator "BUTTON[@id='cancelOnEnterSIDPref*']"
			[ ] 
			[ ] // About Screen
			[ ] // TODO: Get the id instead of the text
			[-] DomElement AboutHeader // The header
				[ ] locator "H4[@textContents='About Assay Support *']"
			[-] DomElement AboutSoftwareName // The software name
				[ ] locator "SPAN[@textContents='Assay Support Kit']"
			[-] DomElement AboutSoftwareVersion // The software version
				[ ] locator "SPAN[@textContents='ASK1.0.378_Demo']"
			[-] DomElement AboutCopyright // The Copyright notice
				[ ] locator "SPAN[@textContents='© 2018 - 2019 Cephei*']"
			[-] DomElement AboutDatabaseVersion // The DB Version
				[ ] locator "SPAN[@textContents='Database Version: gx*']"
			[-] DomElement AboutSQLDatabaseVersion // The SQL Version
				[ ] locator "SPAN[@textContents='SQL Database Version*']"
			[-] DomElement AboutJavaRuntime // The Java Runtime Environment
				[ ] locator "SPAN[@textContents='Java Runtime Environ*']"
			[-] DomElement AboutElectron // The Electron Version
				[ ] locator "SPAN[@textContents='Electron Version: 1.*']"
			[+] DomLink Close // The Close button
				[ ] locator "A[@id='close']"
			[+] DomElement IncorrectUserName
				[ ] locator "DIV[@textContents='Incorrect user name *']"
			[+] DomElement IncorrectUserNameSTRONG
				[ ] locator "STRONG[@textContents='Incorrect user name *']"
			[ ] 
			[ ] // Unsorted / Errors options
			[+] DomButton NextOnEnterAssayNameButton
				[ ] locator "//BUTTON[@id='nextOnEnterAssayName']"
			[+] DomButton NextOnConfirmDuplicateButton
				[ ] locator "//BUTTON[@id='nextOnConfirmDuplica*']"
			[+] DomButton BackOnConfirmDuplicateButton
				[ ] locator "//BUTTON[@id='backOnConfirmDuplica*']"
			[+] DomButton CancelOnConfirmDuplicationButton
				[ ] locator "//BUTTON[@id='cancelOnConfirmDupli*']"
			[+] DomTextField EnterSIDPrefixTextField
				[ ] locator "//INPUT[@id='enterSIDPrefix']"
			[+] DomButton NextOnEnterSIDPrefixButton
				[ ] locator "//BUTTON[@id='nextOnEnterSIDPrefix']"
			[+] DomButton BackOnEnterSIDPrefixButton
				[ ] locator "//BUTTON[@id='backOnEnterSIDPrefix']"
			[+] DomButton NextOnSameSIDButton
				[ ] locator "//BUTTON[@id='nextOnSameSID']"
			[+] DomButton NextOnEnterAssayName
				[ ] locator "BUTTON[@id='nextOnEnterAssayName']"
			[+] DomButton BackOnConfirmDuplicate
				[ ] locator "BUTTON[@id='backOnConfirmDuplica*']"
			[+] DomButton CancelOnEnterAssayName
				[ ] locator "BUTTON[@id='cancelOnEnterAssayNa*']"
			[+] DomButton NextOnConfirmDuplicate
				[ ] locator "BUTTON[@id='nextOnConfirmDuplica*']"
			[+] DomButton BackOnEnterSIDPrefix
				[ ] locator "BUTTON[@id='backOnEnterSIDPrefix']"
			[+] DomButton CancelOnConfirmDuplicate
				[ ] locator "BUTTON[@id='cancelOnConfirmDupli*']"
			[+] DomElement DuplicateSampleIDLabel
				[ ] locator "LABEL[@textContents='Duplicate sample ID *']"
			[-] DomCheckBox TestTable_selectChec
				[ ] locator "//INPUT[@id='testTable_selectChec*']"
			[+] DomButton BackOnConfirmSIDButton
				[ ] locator "//BUTTON[@id='backOnConfirmSID']"
			[+] DomElement TestTable_patientGx
				[ ] locator "TD[@id='testTable_patient.gx*']"
			[+] DomElement TestTable_sampleId_c
				[ ] locator "TD[@id='testTable_sampleId_c*']"
			[+] DomElement TestTable_resultText
				[ ] locator "TD[@id='testTable_resultText*']"
			[+] DomElement TestTable_testDatas
				[ ] locator "TD[@id='testTable_testData.s*']"
			[+] DomElement TestTable_testDatas2
				[ ] locator "TD[@id='testTable_testData.s*'][2]"
			[+] DomElement TestTable_userFullN
				[ ] locator "TD[@id='testTable_user.fullN*']"
			[+] DomElement TestTable_assayName
				[ ] locator "TD[@id='testTable_assay.name*']"
			[+] DomElement TestTable_assayAssa
				[ ] locator "TD[@id='testTable_assay.assa*']"
			[-] DomElement TestTable_rgtLotId_c
				[ ] locator "TD[@id='testTable_rgtLotId_c*']"
			[+] DomElement TestTable_assayAssa2
				[ ] locator "TD[@id='testTable_assay.assa*'][2]"
			[+] DomElement TestTable_testDatas3
				[ ] locator "TD[@id='testTable_testData.s*'][3]"
			[+] DomElement TestTable_errorStatu
				[ ] locator "TD[@id='testTable_errorStatu*']"
			[+] DomElement TestTable_testDatas4
				[ ] locator "TD[@id='testTable_testData.s*'][4]"
			[-] DomElement Http1270018881
				[ ] locator "IMG[@src='http://127.0.0.1:888*']"
			[-] DomElement UseTheLotSpecific
				[ ] locator "LABEL[@textContents='Use the lot specific*']"
			[-] DomElement UseTheCommonAnaly
				[ ] locator "LABEL[@textContents='Use the common analy*']"
			[-] DomButton NextOnSelectAnalysis
				[ ] locator "BUTTON[@id='nextOnSelectAnalysis']"
			[-] DomButton NextOnEnterSIDPrefix
				[ ] locator "BUTTON[@id='nextOnEnterSIDPrefix']"
			[-] DomButton CancelSelectAnalysis
				[ ] locator "BUTTON[@id='cancelSelectAnalysis']"
		[ ] 
	[ ] 
	[+] DialogBox SaveAs
		[ ] locator "Save As"
		[+] TextField TextField
			[ ] locator "//TextField"
	[-] DialogBox ConfirmSaveAs
		[ ] locator "Confirm Save As"
		[-] PushButton Yes
			[ ] locator "//PushButton[@caption='Yes']"
