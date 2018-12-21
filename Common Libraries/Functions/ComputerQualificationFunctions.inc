[ ] use "..\..\Common Libraries ADS\MasterUseStmtsADS.inc"
[ ] use "..\..\Common Libraries\MasterUseStmts.inc"
[ ] 
[+] CreateTestChooseAssay(out BOOLEAN bTestStarted, STRING sAssayName, STRING sSampleID, INTEGER iCartID)
	[ ] // This function will create a test to be run by the GX Dx application 
	[ ] // assume that the GX Dx is operating in doorless mode so that the operator does not have to close the doors
	[ ] LIST OF STRING lsModules = {...}
	[ ] 
	[ ] INTEGER iRand = 0
	[ ] STRING sCartridgeID = '0'
	[ ] STRING sReagentLotID = ''
	[ ] INTEGER iSampleCount = 0
	[ ] 
	[ ] bTestStarted = false
	[ ] iSampleCount++
	[ ] GeneXpertDx.SetActive( )
	[ ] // Click the Create Test button to display the Create Test dialog
	[ ] GeneXpertDx.CreateTestButton.Click()
	[-] if GeneXpertDx.CreateTestWorkspace.Exists(120)
		[ ] GeneXpertDx.CreateTestWorkspace.SetActive( )
		[ ] // Select an assay
		[ ] GeneXpertDx.CreateTestWorkspace.SelectAssayComboBox.Select(sAssayName)
		[ ] // See if the list of modules is blank
		[ ] //     if yes then exit the dialog because there isn't a module that can run this assay
		[ ] //     if no then select one to run the test
		[ ] lsModules = GeneXpertDx.CreateTestWorkspace.SelectModuleComboBox.Items
		[-] if ListCount(lsModules) == 0 
			[ ] GeneXpertDx.CreateTestWorkspace.CancelButton.Click()
			[ ] bTestStarted = false
		[-] else
			[ ] // Select the first displayed module
			[ ] // print(lsModules)
			[ ] // CreateTestWorkspace.SelectModule.Select( lsModules[1] )
			[ ] // Get the next Cartridge ID
			[ ] // sCartridgeID = GetNextCartridgeID()
			[ ] GeneXpertDx.CreateTestWorkspace.SampleIDTextField.SetText(sSampleID)
			[ ] GeneXpertDx.CreateTestWorkspace.CartridgeSerialNumberTextField.SetText( "{iCartID}" )
			[ ] // Check to see if this assay needs LSPs
			[ ] // sAssayName = GeneXpertDx.CreateTestWorkspace.SelectAssayComboBox.SelectedItem
			[ ] //sReagentLotID = '00132'//BuildLSP(sAssayName)
			[-] //if sReagentLotID != '0'
				[ ] //GeneXpertDx.CreateTestWorkspace.ReagentLotIDTextField.SetText(sReagentLotID)
			[ ] // Click to start the test
			[ ] GeneXpertDx.CreateTestWorkspace.StartTestButton.Click()
			[ ] 	// Temporary change to script to Cancel the Create Test dialog without starting a test
			[ ] // CreateTestWorkspace.Cancel.Click()
			[ ] sleep(1)
			[ ] // Check for Memory Usage warning
			[-] if GeneXpertDx.SystemMemoryUsageAlert.Exists(2)
				[ ] LogError("The memory usage has been triggered at: {TimeStr()}")
				[ ] GeneXpertDx.SystemMemoryUsageAlert.OKButton.Click()
			[-] else if GeneXpertDx.CartridgeSNUsedWorkspace.Exists()  // This is the Cartridge serial number * has already been used.
				[ ] GeneXpertDx.CartridgeSNUsedWorkspace.OKButton.Click()
				[ ] GeneXpertDx.CreateTestWorkspace.CancelButton.Click()
			[-] else if GeneXpertDx.MissingReagentLotWorkspace.Exists()  // This is the Missing Reagent Lot warning
				[ ] GeneXpertDx.MissingReagentLotWorkspace.OKButton.Click()
				[ ] GeneXpertDx.CreateTestWorkspace.CancelButton.Click()
			[-] else if GeneXpertDx.StartTestWorkspace.Exists(3)  // This is the Rollback should not be called in auto-commit mode warning
				[ ] GeneXpertDx.StartTestWorkspace.OKButton.Click()
				[ ] LogWarning("Message 'Cannot start test rollback() should not be called while in auto-commit mode'")
			[-] else
				[ ] bTestStarted = true
				[ ] sleep(1)
	[ ] GeneXpertDx.SetActive( )
	[-] if !GeneXpertDx.ViewResultsToggleButton.Selected
		[ ] GeneXpertDx.ViewResultsToggleButton.Toggle()
	[ ] 
[ ] 
[+] ExportTestChooseTest(INTEGER iRow)
	[ ] // This function will export the test that is displayed on the View Results screen
	[ ] 
	[ ] INTEGER iRand = 0 
	[ ] 
	[ ] GeneXpertDx.SetActive( )
	[-] if GeneXpertDx.ExportButton.Exists(5)
		[ ] GeneXpertDx.ExportButton.Click()
		[ ] GeneXpertDx.ExportDataDialog.SetActive( )
		[ ] GeneXpertDx.ExportDataDialog.TestResultsTable.ClickCell(1,1)
		[ ] GeneXpertDx.ExportDataDialog.TestResultsTable.ClickCell(iRow,1)
		[ ] GeneXpertDx.ExportDataDialog.ExportButton.Click()
		[+] if GeneXpertDx.SystemMemoryUsageAlert.Exists(5)
			[ ] LogError("The memory usage has been triggered at: {TimeStr()}")
			[ ] GeneXpertDx.SystemMemoryUsageAlert.OKButton.Click()
		[-] if GeneXpertDx.ResultExportDialog.Exists(4)
			[ ] GeneXpertDx.ResultExportDialog.SetActive( )
			[ ] GeneXpertDx.ResultExportDialog.SaveButton.Click()
		[+] if GeneXpertDx.ReplaceFileDialog.Exists(4)
			[ ] GeneXpertDx.ReplaceFileDialog.YesButton.Click()
		[+] if GeneXpertDx.SystemMemoryUsageAlert.Exists(5)
			[ ] LogError("The memory usage has been triggered at: {TimeStr()}")
			[ ] GeneXpertDx.SystemMemoryUsageAlert.OKButton.Click()
		[+] if GeneXpertDx.ExportTestDataDialog.Exists(5)
			[ ] LogWarning("Dialog with text: 'Unable to export the amount of data for the selected test(s).' is displayed.")
			[ ] GeneXpertDx.ExportTestDataDialog.OKButton.Click()
		[ ] GeneXpertDx.ExportDataDialog.SetActive( )
		[ ] GeneXpertDx.ExportDataDialog.CancelButton.Click()
		[ ] GeneXpertDx.SetActive( )
	[-] if !GeneXpertDx.ViewResultsToggleButton.Selected
		[ ] GeneXpertDx.ViewResultsToggleButton.Toggle()
[ ] 
[+] QUANT()
	[ ] STRING sMsg // used to capture that juicy warning and error text
	[ ] STRING sMsg2 // because you can never have too many pokeballs
	[ ] Integer i // going to use it to simplify things, don't worry about it...
	[ ] 
	[ ] //go to the Define Assay Page, script can be ran from any starting page
	[ ] ADK.Web.Browser.Navbar_Burger.DomClick()
	[ ] ADK.Web.Browser.Burger_DefineAssay.DomClick()
	[ ] 
	[ ] //incase there are unsaved changes made to the page
	[+] if ADK.Web.Browser.Confirm_Dialog.exists()
		[ ] ADK.Web.Browser.YesButton.DomClick()
	[ ] 
	[ ] //Create assay
	[ ] //Assay Info page.
	[ ] ADK.Web.Browser.DAT_CreateAssay.DomClick()
	[ ] ADK.Web.Browser.Result_Type.Click()
	[ ] ADK.Web.Browser.TypeKeys("qu")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.YesButton.DomClick()
	[ ] ADK.Web.Browser.NewAssay_Name.SetText("DEMO_GEN-1")
	[ ] 
	[ ] //Comments and disclaimer, TODO check SRS to see what restrictions are in palce on character limits and whatever
	[ ] //ADK.Web.Browser.Comments.SetText("GXDR-56b")
	[ ] 
	[ ] //Define analytes page
	[ ] ADK.Web.Browser.Define_Analytes.DomClick()
	[ ] 
	[ ] i = 0
	[-] while i<5
		[ ] ADK.Web.Browser.Add_Analyte.DomClick()
		[ ] i++
		[-] if ADK.Web.Browser.Confirm_Dialog.exists()
			[ ] sMsg=ADK.Web.Browser.Dialog_text.GetText()
			[ ] print ("Confirm text appeared stating:",(sMsg))
			[ ] ADK.Web.Browser.NoButton.DomClick()
		[-] else 
			[ ] continue
	[ ] sleep(1)
	[ ] 
	[ ] //Row 1
	[ ] ADK.Web.Browser.AnalyteName.SetText("IQS_LQ")
	[ ] ADK.Web.Browser.Reporter.Click()
	[ ] ADK.Web.Browser.TypeKeys("tx")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Usage.Click()
	[ ] ADK.Web.Browser.TypeKeys("IQS_LQ")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] 
	[ ] //Row two
	[ ] ADK.Web.Browser.AnalyteName2.SetText("Targ1")
	[ ] ADK.Web.Browser.Reporter2.Click()
	[ ] ADK.Web.Browser.TypeKeys("alx5")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] 
	[ ] //Row 3
	[ ] ADK.Web.Browser.AnalyteName3.SetText("IQS_HQ")
	[ ] ADK.Web.Browser.Reporter3.Click()
	[ ] ADK.Web.Browser.TypeKeys("alx6")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Usage3.Click()
	[ ] ADK.Web.Browser.TypeKeys("IQS_HQ")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] 
	[ ] //Row four
	[ ] ADK.Web.Browser.AnalyteName4.SetText("Targ2")
	[ ] ADK.Web.Browser.Reporter4.Click()
	[ ] ADK.Web.Browser.TypeKeys("Cf1")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Usage4.Click()
	[ ] 
	[ ] //Row 5
	[ ] ADK.Web.Browser.AnalyteName5.SetText("IC")
	[ ] ADK.Web.Browser.Reporter5.Click()
	[ ] ADK.Web.Browser.TypeKeys("cf6")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Usage5.Click()
	[ ] ADK.Web.Browser.TypeKeys("IC")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] 
	[ ] 
	[ ] //adding targets
	[ ] ADK.Web.Browser.EditTarget.DomClick()
	[ ] ADK.Web.Browser.EditTargets_Check.DomClick()
	[ ] ADK.Web.Browser.EditTargets_Check2.DomClick()
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] ADK.Web.Browser.EditTarget2.DomClick()
	[ ] ADK.Web.Browser.EditTargets_Check.DomClick()
	[ ] ADK.Web.Browser.EditTargets_Check2.DomClick()
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] ADK.Web.Browser.EditTarget3.DomClick()
	[ ] ADK.Web.Browser.EditTargets_Check.DomClick()
	[ ] ADK.Web.Browser.EditTargets_Check2.DomClick()
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] // //Row six
	[ ] // ADK.Web.Browser.AnalyteName6.SetText("TxR")
	[ ] // ADK.Web.Browser.Reporter6.Click()
	[ ] // ADK.Web.Browser.TypeKeys("<Down 12>")
	[ ] // ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] // ADK.Web.Browser.Usage6.Click()
	[ ] // ADK.Web.Browser.TypeKeys("<Down 3>")
	[ ] // ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] 
	[ ] // ADK.Web.Browser.EditTarget.DomClick()
	[ ] // ADK.Web.Browser.EditTargets_Check.DomClick()
	[ ] // ADK.Web.Browser.EditTargets_Check2.DomClick()
	[ ] // ADK.Web.Browser.EditTargets_Check3.DomClick()
	[ ] // ADK.Web.Browser.EditTargets_Check4.DomClick()
	[ ] // ADK.Web.Browser.EditTargets_Check5.DomClick()
	[ ] // ADK.Web.Browser.OkButton.DomClick()
	[ ] 
	[ ] 
	[ ] //Command Sequence
	[ ] //Protocol
	[ ] ADK.Web.Browser.Command_Sequence.DomClick()
	[ ] ADK.Web.Browser.CartridgeType.Click()
	[ ] ADK.Web.Browser.TypeKeys("dvt")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.AddBefore.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("pr")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] 
	[ ] //submenu
	[ ] ADK.Web.Browser.Select_All_ChkBox.DomClick()
	[ ] ADK.Web.Browser.EC_Stages.DomClick()
	[ ] ADK.Web.Browser.EC_AddStage.DomClick()
	[ ] ADK.Web.Browser.Stage_Type.Click()
	[ ] ADK.Web.Browser.TypeKeys("pr")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.EC_AddStage.DomClick()
	[ ] ADK.Web.Browser.Stage_Type2.Click()
	[ ] ADK.Web.Browser.TypeKeys("2")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Repeat_Times.SetText("45")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //ADK.Web.Browser.YesButton.DomClick()
	[ ] // 
	[ ] //Define Results Table
	[ ] ADK.Web.Browser.Define_Results.DomClick()
	[ ] ADK.Web.Browser.Add_Quant1_Result.DomClick()
	[ ] ADK.Web.Browser.Add_Quant1_Result.DomClick()
	[ ] ADK.Web.Browser.Table_Unit.Click()
	[ ] ADK.Web.Browser.TypeKeys("c")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] sleep(0.5)
	[ ] ADK.Web.Browser.Table_Unit2.Click()
	[ ] ADK.Web.Browser.TypeKeys("iu")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Conversion_Factor2.SetText("7.25")
	[ ] ADK.Web.Browser.LQL.SetText("8.97e+3")
	[ ] ADK.Web.Browser.LQL2.SetText("6.50e+4")
	[ ] ADK.Web.Browser.UQL.SetText("1.70e+5")
	[ ] ADK.Web.Browser.UQL2.SetText("1.23e+6")
	[ ] ADK.Web.Browser.Show_Log.DomClick()
	[ ] ADK.Web.Browser.Show_Log2.DomClick()
	[ ] ADK.Web.Browser.Quant_Result_Units.Click()
	[ ] ADK.Web.Browser.TypeKeys("c")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Max_Quant_Delta.SetText("1.50")
	[ ] ADK.Web.Browser.Org_Name.SetText("Q1_2Targs3")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] 
	[ ] //Curve Analysis
	[ ] ADK.Web.Browser.CurveAnalysis.DomClick()
	[ ] ADK.Web.Browser.Perform_SLD.DomClick()
	[ ] ADK.Web.Browser.Perform_SLD2.DomClick()
	[ ] ADK.Web.Browser.Perform_SLD3.DomClick()
	[ ] ADK.Web.Browser.Perform_SLD4.DomClick()
	[ ] ADK.Web.Browser.Perform_SLD5.DomClick()
	[ ] 
	[ ] 
	[ ] ADK.Web.Browser.UseCurveFit1.DomClick()
	[ ] ADK.Web.Browser.UseCurveFit3.DomClick()
	[ ] ADK.Web.Browser.UseCurveFit5.DomClick()
	[ ] 
	[ ] ADK.Web.Browser.OnCrosstalk2.DomClick()
	[ ] ADK.Web.Browser.OnCrosstalk4.DomClick()
	[ ] ADK.Web.Browser.StartBkgnd2.DomClick()
	[ ] ADK.Web.Browser.StartBkgnd4.DomClick()
	[ ] 
	[ ] ADK.Web.Browser.Min_Shape2.SetText("2.0")
	[ ] ADK.Web.Browser.Max_Shape2.SetText("4.1")
	[ ] ADK.Web.Browser.Max_Shape4.SetText("4.1")
	[ ] ADK.Web.Browser.Max_NRSE2.SetText("2.5")
	[ ] ADK.Web.Browser.Max_NRSE4.SetText("1.5")
	[ ] ADK.Web.Browser.Max_Slope_to_Ratio2.SetText("0.03")
	[ ] ADK.Web.Browser.Max_Slope_to_Ratio4.SetText("0.03")
	[ ] 
	[ ] 
	[ ] //background settings
	[ ] ADK.Web.Browser.MinPoints1.SetText("5")
	[ ] ADK.Web.Browser.MinPoints1.SetText("5")
	[ ] ADK.Web.Browser.MinPoints1.SetText("5")
	[ ] ADK.Web.Browser.LookBack4.SetText("5")
	[ ] ADK.Web.Browser.LookBack5.SetText("5")
	[ ] 
	[ ] ADK.Web.Browser.Validate1.DomClick()
	[ ] ADK.Web.Browser.Validate2.DomClick()
	[ ] ADK.Web.Browser.Validate3.DomClick()
	[ ] ADK.Web.Browser.Validate4.DomClick()
	[ ] ADK.Web.Browser.Validate5.DomClick()
	[ ] 
	[ ] //Result Analysis and Probe Check
	[ ] ADK.Web.Browser.ResAnalysis_Prbchk.DomClick()
	[ ] 
	[ ] ADK.Web.Browser.ManualThreshFluorUnit1.SetText("30.0")
	[ ] ADK.Web.Browser.ManualThreshFluorUnit2.SetText("30.0")
	[ ] ADK.Web.Browser.ManualThreshFluorUnit3.SetText("30.0")
	[ ] ADK.Web.Browser.ManualThreshFluorUnit4.SetText("30.0")
	[ ] ADK.Web.Browser.ManualThreshFluorUnit5.SetText("20.0")
	[ ] 
	[ ] ADK.Web.Browser.ValidMinCycle1.SetText("25.0")
	[ ] ADK.Web.Browser.ValidMinCycle2.SetText("22.0")
	[ ] ADK.Web.Browser.ValidMinCycle3.SetText("25.0")
	[ ] ADK.Web.Browser.ValidMinCycle4.SetText("22.0")
	[ ] ADK.Web.Browser.ValidMinCycle5.SetText("3.0")
	[ ] 
	[ ] ADK.Web.Browser.ValidMaxCycle1.SetText("40.0")
	[ ] ADK.Web.Browser.ValidMaxCycle2.SetText("38.0")
	[ ] ADK.Web.Browser.ValidMaxCycle3.SetText("40.0")
	[ ] ADK.Web.Browser.ValidMaxCycle4.SetText("38.0")
	[ ] ADK.Web.Browser.ValidMaxCycle5.SetText("40.0")
	[ ] 
	[ ] ADK.Web.Browser.UseEndpt1.DomClick()
	[ ] ADK.Web.Browser.UseEndpt2.DomClick()
	[ ] ADK.Web.Browser.UseEndpt3.DomClick()
	[ ] ADK.Web.Browser.UseEndpt4.DomClick()
	[ ] ADK.Web.Browser.UseEndpt5.DomClick()
	[ ] 
	[ ] ADK.Web.Browser.EndPtMin1.SetText("300")
	[ ] ADK.Web.Browser.EndPtMin2.SetText("250")
	[ ] ADK.Web.Browser.EndPtMin3.SetText("300")
	[ ] ADK.Web.Browser.EndPtMin4.SetText("300")
	[ ] ADK.Web.Browser.EndPtMin5.SetText("5")
	[ ] 
	[ ] ADK.Web.Browser.E0_2.SetText("4.00000")
	[ ] ADK.Web.Browser.E0_4.SetText("3.00000")
	[ ] ADK.Web.Browser.E1_2.SetText("0.30000")
	[ ] ADK.Web.Browser.E1_4.SetText("0.00768")
	[ ] ADK.Web.Browser.E2_2.SetText("0.00000")
	[ ] ADK.Web.Browser.E2_4.SetText("0.00000")
	[ ] 
	[ ] ADK.Web.Browser.PrbChkOneThreeMin1.SetText("0")
	[ ] ADK.Web.Browser.PrbChkOneThreeMin2.SetText("0")
	[ ] ADK.Web.Browser.PrbChkOneThreeMin3.SetText("0")
	[ ] 
	[ ] ADK.Web.Browser.PrbChkTwoMax1.SetText("0")
	[ ] ADK.Web.Browser.PrbChkTwoMax2.SetText("0")
	[ ] ADK.Web.Browser.PrbChkTwoMax3.SetText("0")
	[ ] 
	[ ] ADK.Web.Browser.Save_Assay.DomClick()
	[ ] ADK.Web.Browser.YesButton.DomClick()
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] 
[ ] 
[+] StopTest(STRING sSampleID)
	[ ] LIST of INTEGER liCell = GeneXpertDx.StopTestDialog.JTableSorted.FindCell(sSampleID)
	[ ] GeneXpertDx.StopTestDialog.JTableSorted.ClickCell(liCell[1], liCell[2])
	[ ] GeneXpertDx.StopTestDialog.Stop.click()
[ ] 
[+] VerifyTestStatus(STRING sSampleID, STRING sStatus)
	[ ] SelectTest(sSampleID)
	[-] if GeneXpertDx.ViewResultsWorkspace.TestStatusTextField.GetText() != sStatus
		[ ] LogError("The completed test status is not '{sStatus}', it is : {GeneXpertDx.ViewResultsWorkspace.TestStatusTextField.GetText()}")
	[-] else
		[ ] print("The completed test status is '{sStatus}'!")
	[ ] 
[ ] 
[+] CreateUser(STRING sUserName, STRING sUserType)
	[ ] GeneXpertDx.SetupMenu.Click()
	[ ] GeneXpertDx.SetupMenu.UserAdministration.Click()
	[ ] 
	[ ] // ***Todo: make user creation function and a loop***
	[ ] // Create Admin user
	[ ] GeneXpertDx.AddUserButton.Click()
	[ ] GeneXpertDx.LoginTextField.SetText(sUserName)
	[ ] GeneXpertDx.PasswordTextField.SetText(sUserName)
	[ ] GeneXpertDx.ConfirmPasswordTextField.SetText(sUserName)
	[ ] GeneXpertDx.UserTypeComboBox.Select(sUserType)
	[ ] GeneXpertDx.OkButton.Click()
	[ ] print ("{sUserType} user created.")
	[ ] 
[ ] 
[+] LoginDx(STRING sUserName, STRING sPassword)
	[ ] GeneXpertDx.UserMenu.Login.Select()
	[ ] GeneXpertDx.LoginDialog.UserNameTextField.SetText(sUserName)
	[ ] GeneXpertDx.LoginDialog.PasswordTextField.SetText(sPassword)
	[ ] GeneXpertDx.LoginDialog.OK.Click()
	[ ] print("{sUserName} logged in successfully")
[ ] 
