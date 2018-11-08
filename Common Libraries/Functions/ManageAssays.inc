[ ] use "..\..\Common Libraries\MasterUseStmts.inc"
[ ] 
[ ] 
[ ] 
[ ] 
[ ] 
[ ] // Finds and selects the given assay in the table of the Manage assays workspace.
[+] SelectAssayFromList(STRING sAssayName)
	[ ] // Finds the cell containing the specified assay name and then highlights it
	[ ] TABLECELL tcCell
	[ ] 
	[ ] GeneXpertDx.SetActive( )
	[ ] sleep(2)
	[ ] //Get to the Manage Assays workspace if not there already
	[ ] //if !GeneXpertDx.ManageAssaysText.Exists()
	[ ] GeneXpertDx.SetActive( )
	[ ] sleep(2)
	[ ] //GeneXpertDx.HomeDashboardIcon.Click()
	[ ] print("Went to Home screen")
	[ ] sleep(2)
	[ ] print()
	[ ] GeneXpertDx.SetupButton.Click()
	[ ] 
	[ ] print("Went to Setup Menu")
	[ ] sleep(2)
	[ ] GeneXpertDx.ManageAssaysButton.Click()
	[ ] print("Went to Manage Assays")
	[ ] print()
	[ ] sleep(2)
	[ ] 
	[ ] 
	[ ] // Find the assay in the list of active assays and click the assay name 
	[-] do
		[ ] print("Find Cell For Assay {sAssayName}")
		[ ] sleep(2)
		[ ] tcCell=GeneXpertDx.ManageAssaysTable.FindCell(sAssayName) 
		[ ] print("It appears to be in row {tcCell.Row} and column {tcCell.Col}")
		[ ] sleep(2)
		[ ] GeneXpertDx.SetActive( )
		[ ] print ("Set GX active")
		[ ] //GeneXpertDx.ManageAssaysTable.ClickCell ({1,1})
		[ ] sleep(2)
		[ ] GeneXpertDx.ManageAssaysTable.ClickCell (tcCell.Row,tcCell.Col)
		[ ] Print("Clicked on the cell for the assay")
		[ ] sleep(2)
	[-] except
		[ ] LogError("{sAssayName} was not found in the list of assays in the Manage Assays workspace.")
	[ ] 
[ ] 
[ ] 
[ ] 
[+] SetQuantUnits(STRING sAssayName, STRING sQuantUnit)
	[ ] Agent.SetOption (OPT_VERIFY_EXPOSED, FALSE)
	[ ] print ("Changing Quant Unit")
	[ ] SelectAssayFromList(sAssayName)
	[ ] sleep (2)
	[ ] 
	[-] do
		[ ] sleep(1)
		[ ] GeneXpertDx.EditButton.Click()
		[ ] sleep (2)
		[ ] print("The previously selected unit is:")
		[ ] print(GeneXpertDx.QuantUnitComboBox.SelectedItem)
		[ ] print()
		[ ] print("The options are:")
		[ ] print(GeneXpertDx.QuantUnitComboBox.Items)
		[ ] print()
		[ ] 
		[ ] 
		[ ] GeneXpertDx.QuantUnitComboBox.Select(sQuantUnit)
		[ ] 
		[ ] print("The currently selected unit is:")
		[ ] print(GeneXpertDx.QuantUnitComboBox.SelectedItem)
		[ ] sleep (4)
		[ ] GeneXpertDx.SaveButton.Click()
		[ ] sleep (2)
		[ ] GeneXpertDx.OkButton.Click()
		[ ] sleep (2)
		[ ] //GeneXpertDx.HomeDashboardIcon.Click()
		[ ] 
		[ ] 
	[-] except
		[ ] LogError("Could not change quant unit to {sQuantUnit} for assay {sAssayName}")
	[ ] 
	[ ] 
[ ] 
[ ] 
[ ] // Reads a list of assays and lots to import, and then attempts to retrieve the files
[-] ImportAssayFiles (STRING sExcelFileName, String sTabName)
	[ ] 
	[ ] print ("Reading {sTabName} tab of the spreadsheet {sExcelFileName} ")
	[ ] 
	[ ] //Variables
	[ ] handle hdbc, hAssay
	[ ] REC_GXA_MANIFEST recGXA
	[ ] INTEGER iAssayID=NULL
	[ ] 
	[ ] hdbc = DB_Connect ("DSN=Silk DDA Excel;DBQ={sExcelFileName};UID=;PWD=;")
	[ ] hAssay = DB_ExecuteSQL(hdbc, "Select * from`{sTabName}$`")
	[-] while (DB_FetchNext (hAssay,recGXA))
		[-] if recGXA.sAssayName == NULL
			[ ] break
		[ ] 
		[ ] print("----------------------------------")
		[-] if recGXA.sAssayName!=NULL
			[ ] print ("Importing an assay named: {recGXA.sAssayName}")
			[ ] 
			[ ] //If assay file name is specified in excel sheet...
			[-] if recGXA.sAssayFileName!=NULL
				[ ] Print("Assay file name has been provided:")
				[ ] print("{recGXA.sAssayFileName}")
			[ ] //Otherwise, build a file name based on assay name and version..
			[-] else
				[ ] print("Must build the Filename:")
				[+] if recGXA.iVersion == 0 || recGXA.iVersion == NULL
					[ ]  
					[ ] recGXA.sAssayFileName=PATH+recGXA.sAssayName+".gxa"
					[ ] print(recGXA.sAssayFileName)
				[-] else
					[-] if recGXA.iVersion<0
						[ ] LogWarning("Invalid version number provided for assay {recGXA.sAssayName}")
					[-] else
						[ ] recGXA.sAssayFileName= PATH+recGXA.sAssayName+"_{(recGXA.iVersion)}.gxa"
						[ ] print(recGXA.sAssayFileName)
						[ ] 
			[ ] //CALL TO ATTEMPT TO IMPORT A GIVEN FILENAME
			[ ] ImportAssayFile(recGXA.sAssayFileName)
			[ ] 
			[ ] //See if there is a lot to import
			[-] if  recGXA.iLot!= NULL 
				[-] if recGXA.iLot > 0
					[ ] 
					[ ] INTEGER i=-1
					[ ] STRING sCartForFileName=''
					[-] if recGXA.iCart != null
						[-] if recGXA.iCart > 0
							[ ] i=recGXA.iCart
							[ ] sCartForFileName='_'+recGXA.sCart+'_{recGXA.iCart}'
					[ ] 
					[ ] 
					[ ] 
					[-] if recGXA.iLot > 0 && recGXA.iVersion > 0
						[ ] print()
						[ ] print ("Trying to import lot # {recGXA.iLot} for this assay...")
						[ ] 
						[ ] //If a file name is provided for the lot:
						[-] if recGXA.sLotFileName!=NULL
							[ ] print("Lot file name has been provided:")
							[ ] print("{recGXA.sLotFileName}")
							[ ] 
						[ ] //Otherwise, Let's build a file name based on the assay name, version, and lot #s
						[-] else
							[ ] print("Must build the Filename:")
							[ ] //OTC-03_20_Cart-1_1_lot_600.gxr
							[ ] recGXA.sLotFileName=PATH+ recGXA.sAssayName + "_"+str(recGXA.iVersion)+sCartForFileName+'_lot_' + str(recGXA.iLot) + ".gxr"
							[ ] print("{recGXA.sLotFileName}")
						[ ] 
						[ ] //Now that we have a filename, attempt to import
						[ ] print ("")
						[ ] Print("Importing file:")
						[ ] print("{recGXA.sLotFileName}")
						[ ] 
						[ ] sleep(1)
						[ ] ImportLot(recGXA.sAssayName,recGXA.sLotFileName,i)
						[ ] sleep(3)
				[-] else
					[ ] LogWarning("Invalid lot # specified, skipped retrieving LSPs for assay {recGXA.sAssayName}")
				[ ] 
			[ ] //Otherwise, skip lot import
			[-] else
				[ ] print("No lot specified, skipped retrieving LSPs for assay {recGXA.sAssayName}")
		[-] else
			[ ] LogError("Tried to load an assay without a name specified in {sExcelFileName}")
[ ] 
[ ] 
[ ] // Attempts to import assays with the specified name
[ ] // and handles possible error conditions
[+] ImportAssayFile(STRING sAssayImportFileName)
	[ ] STRING sMsg // Stores any warning or error message that is displayed
	[ ] 
	[ ] // Alter the Silk options to allow us to get to "unexposed" GUI elements
	[ ] BOOLEAN bVerifyExposed=Agent.GetOption(OPT_VERIFY_EXPOSED)
	[ ] Agent.SetOption(OPT_VERIFY_EXPOSED, FALSE)
	[ ] 
	[ ] 
	[ ] GeneXpertDx.SetActive( )
	[ ] sleep(1)
	[ ] //Get to the Manage Assays workspace if not there already
	[+] //if !GeneXpertDx.ManageAssaysTable.Exists()
		[ ] //GeneXpertDx.SetActive( )
		[ ] //sleep(3)
		[ ] //GeneXpertDx.HomeDashboardIcon.Click()
		[ ] //sleep(3)
		[ ] //GeneXpertDx.SetupButton.Click()
		[ ] //sleep(3)
		[ ] //GeneXpertDx.ManageAssaysButton.Click()
		[ ] //sleep(2)
	[ ] 
	[ ] //Change the directory to the export PATH 
	[ ] ImportAssay(PATH)
	[ ] sleep(1)
	[ ] //Enter in the filename and click OkButton
	[ ] ImportAssay(sAssayImportFileName)
	[ ] 
	[ ] //Wait to see if any issue arose
	[ ] sleep(1)
	[ ] //handle any issues
	[+] if GeneXpertDx.ImportAssayDialog.Exists()
		[ ] sMsg=GeneXpertDx.ImportAssayDialog.getText()
		[ ] print (sMsg)
		[ ] //File not found
		[-] if (SUBSTR(sMsg,1,19)=="Could not read file")
			[ ] LogError(sMsg+'!')
			[ ] GeneXpertDx.OkButton.Click()
			[ ] sleep(2)
			[ ] GeneXpertDx.CancelButton.Click()
		[ ] 
		[ ] //If the version is higher...
		[-] if (substr(sMsg,1,25)=="Would you like to replace")
			[ ] GeneXpertDx.YesButton.Click()
			[ ] sleep(2)
			[ ] GeneXpertDx.OkButton.Click()
			[ ] sleep(2)
			[ ] LogWarning("Replaced an existing lower version of an assay with the version found in the file ["+sAssayImportFileName+"]")
		[ ] //Duplicate assay
		[-] if (MatchStr("*uplicate*",sMsg))//SUBSTR(sMsg,1,15)=="Duplicate assay"
			[ ] LogWarning(sMsg)
			[ ] GeneXpertDx.OkButton.Click()
			[ ] sleep(2)
			[ ] 
			[ ] 
		[ ] //Lower version already exist
		[-] if (MatchStr("*with a lower version number*",sMsg))
			[ ] LogError(sMsg) 
			[ ] GeneXpertDx.OkButton.Click()
			[ ] sleep(2)
			[ ] GeneXpertDx.CancelButton.Click()
			[ ] sleep(2)
			[ ] 
	[ ] 
	[ ] //Cleanup and revert silk settings
	[ ] Agent.SetOption(OPT_VERIFY_EXPOSED, bVerifyExposed)
	[ ] sleep(2)
[ ] 
[ ] 
[ ] // Performs the actual filechooser operations of importing an assay
[ ] // Assumes that the user is either in the import dialog or the Manage Assays workspace
[+] ImportAssay(STRING sAssayImportFileName)
	[ ] BOOLEAN bVerifyExposed=Agent.GetOption(OPT_VERIFY_EXPOSED)
	[ ] Agent.SetOption(OPT_VERIFY_EXPOSED, FALSE)
	[ ] GeneXpertDx.SetActive( )
	[ ] // Get the file chooser if it isnt already open
	[-] if GeneXpertDx.ImportButton.Exists() && !GeneXpertDx.ImportAssayDialog.Exists()
		[ ] sleep(2)
		[ ] GeneXpertDx.ImportButton.Click()
		[ ] //sleep(2)
		[ ] 
	[ ] GeneXpertDx.FileNameTextField.SetText(sAssayImportFileName)
	[ ] sleep(2)
	[ ] GeneXpertDx.SetActive( )
	[ ] sleep(2)
	[ ] GeneXpertDx.ImportAssayDialog.ImportButton.Click()
	[ ] sleep(2)
	[ ] Agent.SetOption(OPT_VERIFY_EXPOSED, bVerifyExposed)
[ ] 
[ ] // Selects the specified assay name in Manage assays and attempts to open the specified gxr
[ ] // Assumes manage assays is open
[-] ImportLot(STRING sAssayName, STRING sLotFileName, INTEGER iCart)
	[ ] STRING sMsg
	[ ] BOOLEAN bVerifyExposed=Agent.GetOption(OPT_VERIFY_EXPOSED)
	[ ] Agent.SetOption(OPT_VERIFY_EXPOSED, FALSE)
	[ ] 
	[ ] 
	[ ] GeneXpertDx.SetActive( )
	[ ] sleep(2)
	[ ] // SelectAssayFromList(sAssayName) // I am alredy in the DEfine Assay screen and the requested assay is selected. Commented for testin  EG
	[ ] sleep(2)
	[ ] GeneXpertDx.LotSpecificParamtersButton.Click()
	[ ] sleep(2)
	[ ] print (iCart)
	[ ] 
	[+] if iCart >-1
		[+] if GeneXpertDx.AssayCartridgeLSPTable.exists(10)
			[ ] GeneXpertDx.AssayCartridgeLSPTable.ClickCell(iCart,1)
			[ ] Sleep(2)
			[ ] GeneXpertDx.LotSpecificParamtersButton.Click()
			[ ] 
			[ ] 
			[ ] 
	[ ] 
	[ ] 
	[ ] 
	[ ] sleep(2)
	[ ] GeneXpertDx.ReagentLotSpecificParameters.ImportButton.Click()
	[ ] sleep(2)
	[ ] GeneXpertDx.FileNameTextField.SetText(PATH)
	[ ] sleep(2)
	[ ] GeneXpertDx.OpenButton.Click()
	[ ] sleep(2)
	[ ] GeneXpertDx.FileNameTextField.SetText(sLotFileName)
	[ ] sleep(2)
	[ ] GeneXpertDx.OpenButton.Click()
	[ ] sleep(2)
	[ ] 
	[ ] // See if any problems came up before trying to leave the LSP workspace
	[-] if GeneXpertDx.NotificationTextArea.Exists()
		[ ] sMsg=GeneXpertDx.NotificationTextArea.GetText()
		[ ] // Duplicate LSPs
		[+] if (MatchStr("Duplicate lot specific parameters for lot number [*] found.",sMsg))
			[ ] LogWarning(sMsg)
			[ ] GeneXpertDx.SetActive()
			[ ] sleep(2)
			[ ] // GeneXpertDx.OkButton.Click()
			[ ] sleep(2)
		[ ] // File cannot be used
		[+] if (MatchStr("Invalid file selected with filename *",sMsg))
			[ ] LogError(sMsg)
			[ ] GeneXpertDx.SetActive()
			[ ] sleep(2)
			[ ] GeneXpertDx.OkButton.Click()
			[ ] sleep(2)
		[ ] // File cannot be read
		[-] if (MatchStr("Could not read file *",sMsg))
			[ ] LogError(sMsg)
			[ ] GeneXpertDx.SetActive()
			[ ] sleep(2)
			[ ] GeneXpertDx.OkButton.Click()
			[ ] sleep(2)
	[ ] 
	[ ] // Now that any issues are resolved, leave 
	[ ] // Following 3 lines commented by EG because clicking on [OK] will close a error message and software is in Define Assay screen.  
	[ ] // sleep(2)
	[ ] // GeneXpertDx.CloseButton.Click()
	[ ] // sleep(2)
	[ ] 
	[ ] 
	[-] if iCart >-1
		[ ] GeneXpertDx.CloseButton.Click()
		[ ] sleep(2)
		[ ] 
	[ ] sleep(2)
	[ ] 
	[ ] //Reset agent options
	[ ] Agent.SetOption(OPT_VERIFY_EXPOSED, bVerifyExposed)
	[ ] sleep(3)
