[ ] use "..\Common Libraries ADS\MasterUseStmtsADS.inc"
[ ] 
[+] PERCENT_RATIO()
	[ ] ADK.Web.Browser.Http127001888.Click() // New Assay button
	[ ] 
	[ ] ADK.Web.Browser.Result_Type.Select("% Ratio")
	[ ] ADK.Web.Browser.YesButton.Click()
	[ ] ADK.Web.Browser.NewAssay_Name.SetText("DEMO_%RATIO_Integration")
	[ ] ADK.Web.Browser.Actions2.Click()
	[ ] ADK.Web.Browser.Multi_cartridges.Click()
	[ ] 
	[ ] // Add Cart-2
	[ ] ADK.Web.Browser.Define_assays_add_ca.Click()
	[ ] ADK.Web.Browser.Create_new_cartridge.SetText("Cart-2")
	[ ] ADK.Web.Browser.Copy_from_existing_c.Select(1)
	[ ] ADK.Web.Browser.ColMd12Marginb1.Click()
	[ ] ADK.Web.Browser.Add_cartridge_from_a.Select("DEMO_MC_%_LR1")
	[ ] ADK.Web.Browser.Add_cartridge_from_c.Select("Cart-2")
	[ ] ADK.Web.Browser.OkButton.Click()
	[ ] 
	[ ] // Add Cart-3
	[ ] ADK.Web.Browser.Define_assays_add_ca.Click()
	[ ] ADK.Web.Browser.Create_new_cartridge.SetText("Cart-3")
	[ ] ADK.Web.Browser.Copy_from_existing_c.Select(1)
	[ ] ADK.Web.Browser.ColMd12Marginb1.Click()
	[ ] ADK.Web.Browser.Add_cartridge_from_a.Select("DEMO_MC_%_LR1")
	[ ] ADK.Web.Browser.Add_cartridge_from_c.Select("Cart-3")
	[ ] ADK.Web.Browser.OkButton.Click()
	[ ] 
	[ ] // Add Cart-4
	[ ] ADK.Web.Browser.Define_assays_add_ca.Click()
	[ ] ADK.Web.Browser.Create_new_cartridge.SetText("Cart-4")
	[ ] ADK.Web.Browser.Copy_from_existing_c.Select(1)
	[ ] ADK.Web.Browser.ColMd12Marginb1.Click()
	[ ] ADK.Web.Browser.Add_cartridge_from_a.Select("DEMO_MC_%_LR1")
	[ ] ADK.Web.Browser.Add_cartridge_from_c.Select("Cart-4")
	[ ] ADK.Web.Browser.OkButton.Click()
	[ ] 
	[ ] // // Add Cart-5
	[ ] // ADK.Web.Browser.Define_assays_add_ca.Click()
	[ ] // ADK.Web.Browser.Create_new_cartridge.SetText("Cart-5")
	[ ] // ADK.Web.Browser.Copy_from_existing_c.Select(1)
	[ ] // ADK.Web.Browser.ColMd12Marginb1.Click()
	[ ] // ADK.Web.Browser.Add_cartridge_from_a.Select("DEMO_MC_%_LR1")
	[ ] // ADK.Web.Browser.Add_cartridge_from_c.Select("Cart-5")
	[ ] // ADK.Web.Browser.OkButton.Click()
	[ ] // 
	[ ] // Add Cart-5
	[ ] ADK.Web.Browser.Define_assays_add_ca.Click()
	[ ] ADK.Web.Browser.Create_new_cartridge.SetText("Cart-5")
	[ ] ADK.Web.Browser.OkButton.Click()
	[ ] ADK.Web.Browser.DefineAnalytes.Click()
	[ ] DefineAnalyte("Target1", "Alx532", "Target", 1)
	[ ] DefineAnalyte("Target2", "Alx647", "Target", 2)
	[ ] DefineAnalyte("Target3", "CF1", "Target", 3)
	[ ] DefineAnalyte("Target4", "CF6", "Target", 4)
	[ ] DefineAnalyte("Target5", "FAM-2", "Target", 5)
	[ ] DefineAnalyte("EC", "TxR", "EC", 6)
	[ ] DefineTarget(1, 0)
	[ ] DefineTarget(1, 1)
	[ ] DefineTarget(1, 2)
	[ ] DefineTarget(1, 3)
	[ ] DefineTarget(1, 4)
	[ ] 
	[ ] // Command Sequence
	[ ] ADK.Web.Browser.CommandSequence.Click()
	[ ] ADK.Web.Browser.AddBefore.Click()
	[ ] ADK.Web.Browser.SelectCommand.Select("Protocol")
	[ ] ADK.Web.Browser.Select_All_ChkBox.Select(1)
	[ ] ADK.Web.Browser.EC_Stages.Click()
	[ ] ADK.Web.Browser.CommandProtocol_stagBUTTON.Click()
	[ ] ADK.Web.Browser.Stage_Type.Select("2-Temperature Cycle")
	[ ] ADK.Web.Browser.Temp_C.SetText("95.0")
	[ ] ADK.Web.Browser.Seconds.SetText("5")
	[ ] ADK.Web.Browser.Temp_C2.SetText("60.0")
	[ ] ADK.Web.Browser.Seconds_2.SetText("10")
	[ ] ADK.Web.Browser.Repeat_Times.SetText("30")
	[ ] ADK.Web.Browser.CrossTalk_Factors.Click()
	[ ] ADK.Web.Browser.Pcr_crosstalk_factor.Click()
	[ ] ADK.Web.Browser.Melt_crosstalk_facto.Click()
	[ ] ADK.Web.Browser.Res_CT.Click()
	[ ] ADK.Web.Browser.AdvToNewStage.Click()
	[ ] ADK.Web.Browser.OkButton.Click()
	[ ] ADK.Web.Browser.NgPristineNgUntou.Select("HP Cartridge w Ch 12 v. 1")
	[ ] ADK.Web.Browser.YesButton.Click()
	[ ] 
	[ ] // Curve Analysis
	[ ] ADK.Web.Browser.CurveAnalysis9.Click()
	[ ] CurveFitSettings(FALSE, FALSE, FALSE, "0", FALSE, "0", "0", "0", "0", "0", 0)
	[ ] CurveFitSettings(FALSE, FALSE, FALSE, "0", FALSE, "0", "0", "0", "0", "0", 1)
	[ ] CurveFitSettings(FALSE, FALSE, FALSE, "0", FALSE, "0", "0", "0", "0", "0", 2)
	[ ] CurveFitSettings(FALSE, FALSE, FALSE, "0", FALSE, "0", "0", "0", "0", "0", 3)
	[ ] CurveFitSettings(FALSE, FALSE, FALSE, "0", FALSE, "0", "0", "0", "0", "0", 4)
	[ ] CurveFitSettings(FALSE, FALSE, FALSE, "0", FALSE, "0", "0", "0", "0", "0", 5)
	[ ] ADK.Web.Browser.BackgroundSub_useBac.Select(2)
	[ ] 
	[ ] // Result Analysis + Probe Check
	[ ] ADK.Web.Browser.ResultAnalysisPr.Click()
	[ ] ResultAnalysisSettings("45.0", "1.0", "60.0", TRUE, "100", "10.0", "0.01", "1.00", 0)
	[ ] ResultAnalysisSettings("45.0", "1.0", "60.0", TRUE, "100", "10.0", "0.01", "1.00", 1)
	[ ] ResultAnalysisSettings("45.0", "1.0", "60.0", TRUE, "100", "10.0", "0.01", "1.00", 2)
	[ ] ResultAnalysisSettings("45.0", "1.0", "60.0", TRUE, "100", "10.0", "0.01", "1.00", 3)
	[ ] ResultAnalysisSettings("45.0", "1.0", "60.0", TRUE, "100", "10.0", "0.01", "1.00", 4)
	[ ] ResultAnalysisSettings("45.0", "1.0", "60.0", TRUE, "100", "10.0", "0.01", "1.00", 5)
	[ ] 
	[ ] // Delete Cart-1
	[ ] ADK.Web.Browser.Cart1.Click()
	[ ] ADK.Web.Browser.ImageButtonNgScop.Click()
	[ ] ADK.Web.Browser.YesButton.Click()
	[ ] 
	[ ] // Add Cart-1
	[ ] ADK.Web.Browser.Define_assays_add_ca.Click()
	[ ] ADK.Web.Browser.Create_new_cartridge.SetText("Cart-1")
	[ ] ADK.Web.Browser.Copy_from_existing_c.Select(1)
	[ ] ADK.Web.Browser.ColMd12Marginb1.Click()
	[ ] ADK.Web.Browser.Add_cartridge_from_a.Select("DEMO_MC_%_LR1")
	[ ] ADK.Web.Browser.Add_cartridge_from_c.Select("Cart-1")
	[ ] ADK.Web.Browser.OkButton.Click()
	[ ] 
	[ ] ADK.Web.Browser.ImageButtonNgScop.Click()
	[ ] ADK.Web.Browser.ImageButtonNgScop.Click()
	[ ] ADK.Web.Browser.ImageButtonNgScop.Click()
	[ ] ADK.Web.Browser.ImageButtonNgScop.Click()
	[ ] 
	[ ] ADK.Web.Browser.AssayInfoAndResul.Click()
	[ ] ADK.Web.Browser.Multi_cartridge_defi.Click()
	[ ] ADK.Web.Browser.OrganismDefineResult.Click()
	[ ] ADK.Web.Browser.OrganismDefineResultINPUT.SetText("Org1")
	[ ] ADK.Web.Browser.OrganismDefineResult2.Click()
	[ ] ADK.Web.Browser.AddOrganismForm_anal.Select(1)
	[ ] ADK.Web.Browser.AddOrganismForm_anal2.Select(1)
	[ ] ADK.Web.Browser.AddOrganismForm_anal3.Select(1)
	[ ] ADK.Web.Browser.AddOrganismForm_anal4.Select(1)
	[ ] ADK.Web.Browser.AddOrganismForm_anal5.Select(1)
	[ ] ADK.Web.Browser.OkButton.Click()
	[ ] ADK.Web.Browser.OrganismDefineResultIMG.Click()
	[ ] ADK.Web.Browser.RuleTable_addRule.Click()
	[ ] ADK.Web.Browser.DropdownForm_ruleAnd.Select("Must have all")
	[ ] ADK.Web.Browser.AddEditFormula_0_0.Click()
	[ ] ADK.Web.Browser.Formula_ok.Click()
	[ ] ADK.Web.Browser.RuleTable_addColumn.Click()
	[ ] ADK.Web.Browser.AddEditFormula_0_1.Click()
	[ ] ADK.Web.Browser.Formula_analyte.Select("Cart-1:SPC1")
	[ ] ADK.Web.Browser.Formula_ok.Click()
	[ ] ADK.Web.Browser.DropdownForm_calcula.Select("Cart-1:Target1")
	[ ] ADK.Web.Browser.DropdownForm_reporti.Select("Cart-1:Target1")
	[ ] ADK.Web.Browser.ColorSelectorForm_te.Select("Red")
	[ ] ADK.Web.Browser.OkButton.Click()
	[ ] ADK.Web.Browser.Save_Assay.Click()
	[ ] ADK.Web.Browser.OkButton.Click()
	[ ] ADK.Web.Browser.Navbar_Burger.Click()
	[ ] ADK.Web.Browser.Burger_DefineAssay.Click()
	[ ] 
	[ ] 
[ ] 
[+] MTB_ULTRA()
	[ ] 
	[ ] STRING sMsg // used to capture that juicy warning and error text
	[ ] STRING sMsg2 // because you can never have too many pokeballs
	[ ] Integer i // going to use it to simplify things, don't worry about it...
	[ ] Integer i2
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
	[ ] ADK.Web.Browser.TypeKeys("org")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.YesButton.DomClick()
	[ ] ADK.Web.Browser.NewAssay_Name.SetText("DEMO_MTB_Ultra")
	[ ] 
	[ ] ADK.Web.Browser.Comments.SetText("P0748 ver 2 generated from base assay attached to ECO-20906")
	[ ] ADK.Web.Browser.Disclaimer.SetText(" For In Vitro Diagnostic Use Only.")
	[ ] 
	[ ] //Define Analytes page
	[ ] ADK.Web.Browser.Define_Analytes.DomClick()
	[ ] //uses the hardcoded values here to create the analyte page
	[+] ARRAY[17] OF STRING Analyte
		[ ] Analyte[1] = "SPC"
		[ ] Analyte[2] = "IS1081-IS6110"
		[ ] Analyte[3] = "rpoB1"
		[ ] Analyte[4] = "rpoB2"
		[ ] Analyte[5] = "rpoB3"
		[ ] Analyte[6] = "rpoB4"
		[ ] Analyte[7] = "QC1"
		[ ] Analyte[8] = "QC2"
		[ ] Analyte[9] = "rpoB1 melt"
		[ ] Analyte[10] = "rpoB2 melt"
		[ ] Analyte[11] = "rpoB3 melt"
		[ ] Analyte[12] = "rpoB4 melt"
		[ ] Analyte[13] = "rpoB1 Mut melt"
		[ ] Analyte[14] = "rpoB2 Mut melt"
		[ ] Analyte[15] = "rpoB3 Mut melt"
		[ ] Analyte[16] = "rpoB4 Mut melt A"
		[ ] Analyte[17] = "rpoB4 Mut melt B"
	[+] ARRAY[17] OF STRING Reporter
		[ ] Reporter[1] = "CF1"
		[ ] Reporter[2] = "FAM-2"
		[ ] Reporter[3] = "alx647"
		[ ] Reporter[4] = "TxR"
		[ ] Reporter[5] = "CF6"
		[ ] Reporter[6] = "Alx532"
		[ ] Reporter[7] = "Alx532"
		[ ] Reporter[8] = "CF6"
		[ ] Reporter[9] = "Alx647"
		[ ] Reporter[10] = "TxR"
		[ ] Reporter[11] = "CF6"
		[ ] Reporter[12] = "Alx532"
		[ ] Reporter[13] = "Alx647"
		[ ] Reporter[14] = "TxR"
		[ ] Reporter[15] = "Cf6"
		[ ] Reporter[16] = "Alx532"
		[ ] Reporter[17] = "Alx532"
	[+] ARRAY[17] OF STRING Usage
		[ ] Usage[1] = "SPC"
		[ ] Usage[2] = "IC"
		[ ] Usage[3] = "Target"
		[ ] Usage[4] = "Target"
		[ ] Usage[5] = "Target"
		[ ] Usage[6] = "Target"
		[ ] Usage[7] = "Probe"
		[ ] Usage[8] = "Probe"
		[ ] Usage[9] = "Melt Target"
		[ ] Usage[10] = "Melt Target"
		[ ] Usage[11] = "Melt Target"
		[ ] Usage[12] = "Melt Target"
		[ ] Usage[13] = "Melt Target"
		[ ] Usage[14] = "Melt Target"
		[ ] Usage[15] = "Melt Target"
		[ ] Usage[16] = "Melt Target"
		[ ] Usage[17] = "Melt Target"
	[ ] 
	[ ] //cycles through each row filling in each column with the correct value
	[ ] i = 0
	[-] while i<17
		[ ] ADK.Web.Browser.Add_Analyte.DomClick()
		[ ] ADK.Web.Browser.Find("//INPUT[@name='analyteName_" + str(i) + "']").SetText(Analyte[i+1])
		[ ] ADK.Web.Browser.Find("//SELECT[@name='reporterName_" + str(i) + "']").Click()
		[ ] ADK.Web.Browser.TypeKeys(Reporter[i+1])
		[ ] ADK.Web.Browser.TypeKeys("<Enter>")
		[ ] ADK.Web.Browser.Find("//SELECT[@name='usage_" + str(i) + "']").Click()
		[ ] ADK.Web.Browser.TypeKeys(Usage[i+1])
		[ ] ADK.Web.Browser.TypeKeys("<Enter>")
		[ ] 
		[ ] i++
		[-] if ADK.Web.Browser.Confirm_Dialog.exists()
			[ ] sMsg=ADK.Web.Browser.Dialog_text.GetText()
			[ ] print ("Confirm text appeared stating:",(sMsg))
			[ ] ADK.Web.Browser.NoButton.DomClick()
		[-] else 
			[ ] continue
	[ ] sleep(1)
	[ ] 
	[ ] //make more efficient
	[ ] ADK.Web.Browser.EditTarget.DomClick()
	[ ] ADK.Web.Browser.EditTargets_Check.DomClick()
	[ ] ADK.Web.Browser.EditTargets_Check2.DomClick()
	[ ] ADK.Web.Browser.EditTargets_Check3.DomClick()
	[ ] ADK.Web.Browser.EditTargets_Check4.DomClick()
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] ADK.Web.Browser.EditTarget2.DomClick()
	[ ] ADK.Web.Browser.EditTargets_Check.DomClick()
	[ ] ADK.Web.Browser.EditTargets_Check2.DomClick()
	[ ] ADK.Web.Browser.EditTargets_Check3.DomClick()
	[ ] ADK.Web.Browser.EditTargets_Check4.DomClick()
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] 
	[ ] 
	[ ] //Command Sequence
	[ ] ADK.Web.Browser.Command_Sequence.DomClick()
	[ ] 
	[ ] //Cartridge Settings
	[ ] ADK.Web.Browser.CartridgeType.Click()
	[ ] ADK.Web.Browser.TypeKeys("test")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.YesButton.Click()
	[ ] 
	[+] ARRAY[12] OF STRING Chamber
		[ ] Chamber[1] = "SPC"
		[ ] Chamber[2] = "Reagent 1"
		[ ] Chamber[3] = "Sample"
		[ ] Chamber[4] = ""
		[ ] Chamber[5] = "Reagent 2"
		[ ] Chamber[6] = "Air2"
		[ ] Chamber[7] = "Master Mix"
		[ ] Chamber[8] = "Waste"
		[ ] Chamber[9] = "Bead Set 1"
		[ ] Chamber[10] = "Lysate"
		[ ] Chamber[11] = "Bead Set 2"
		[ ] Chamber[12] = "Air"
	[ ] i = 0
	[-] while i<12
		[ ] ADK.Web.Browser.Find("//INPUT[@id='chambers_name_" + str(i) + "']").SetText(Chamber[i+1])
		[ ] i++
	[ ] ADK.Web.Browser.InitialVol2.SetText("4000")
	[ ] ADK.Web.Browser.InitialVol3.SetText("2000")
	[ ] ADK.Web.Browser.InitialVol5.SetText("4000")
	[ ] 
	[ ] ADK.Web.Browser.AirChamber.Click()
	[ ] ADK.Web.Browser.TypeKeys("6")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] 
	[ ] 
	[ ] //command sequence
	[ ] //1 CIT
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("Cartridge")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.CITMode.Click()
	[ ] ADK.Web.Browser.TypeKeys("Custom")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("225")
	[ ] ADK.Web.Browser.SecondCompVol.SetText("195")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //2 Pressure Values
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("Pressure Values")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.MinPressure.SetText("-200")
	[ ] ADK.Web.Browser.MaxPressure.SetText("200")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //3 Log Pressure on
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("log pressure")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.LogInterval.SetText("500")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //4 Aspirate default is direct path
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("2")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("120")
	[ ] ADK.Web.Browser.FlowRate.SetText("60")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //5 Dispense
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("dispense")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("8")
	[ ] ADK.Web.Browser.Volume.SetText("120")
	[ ] ADK.Web.Browser.FlowRate.SetText("40")
	[ ] ADK.Web.Browser.Path.Click()
	[ ] ADK.Web.Browser.TypeKeys("f")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //6 Aspirate
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.TypeKeys("3")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("200")
	[ ] ADK.Web.Browser.FlowRate.SetText("20")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //7 Dispense
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("Dispense")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("1")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("140")
	[ ] ADK.Web.Browser.FlowRate.SetText("20")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //8 Wait
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("wait")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Time_Sec.SetText("20.0")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //9 Toggle
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("toggle")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Count_Times.SetText("12")
	[ ] ADK.Web.Browser.DispenseVolume.SetText("140")
	[ ] ADK.Web.Browser.DispenseFlowRate.SetText("40")
	[ ] ADK.Web.Browser.Aspirate_Vol.SetText("140")
	[ ] ADK.Web.Browser.Aspirate_FlowRate.SetText("40")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //10 Dispense
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("Dispense")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("40")
	[ ] ADK.Web.Browser.FlowRate.SetText("20")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //11 Wait
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("wait")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Time_Sec.SetText("20.0")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //12 Toggle
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("toggle")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Count_Times.SetText("12")
	[ ] ADK.Web.Browser.DispenseVolume.SetText("180")
	[ ] ADK.Web.Browser.DispenseFlowRate.SetText("40")
	[ ] ADK.Web.Browser.Aspirate_Vol.SetText("180")
	[ ] ADK.Web.Browser.Aspirate_FlowRate.SetText("40")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //13 Aspirate
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("3")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("180")
	[ ] ADK.Web.Browser.FlowRate.SetText("40")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //14 Toggle
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("toggle")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("8")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Count_Times.SetText("4")
	[ ] ADK.Web.Browser.DispenseVolume.SetText("60")
	[ ] ADK.Web.Browser.DispenseFlowRate.SetText("20")
	[ ] ADK.Web.Browser.Aspirate_Vol.SetText("10")
	[ ] ADK.Web.Browser.Aspirate_FlowRate.SetText("20")
	[ ] ADK.Web.Browser.Path.Click()
	[ ] ADK.Web.Browser.TypeKeys("f")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //15 start Repeat
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("start repeat")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Count_Times.SetText("19")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //16 Aspirate
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("3")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("70")
	[ ] ADK.Web.Browser.FlowRate.SetText("40")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //17 Toggle
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("toggle")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Start_With.Click()
	[ ] ADK.Web.Browser.TypeKeys("d")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("8")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Count_Times.SetText("3")
	[ ] ADK.Web.Browser.DispenseVolume.SetText("30")
	[ ] ADK.Web.Browser.DispenseFlowRate.SetText("20")
	[ ] ADK.Web.Browser.Aspirate_Vol.SetText("10")
	[ ] ADK.Web.Browser.Aspirate_FlowRate.SetText("20")
	[ ] ADK.Web.Browser.Path.Click()
	[ ] ADK.Web.Browser.TypeKeys("f")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //18Dispense
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("Dispense")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("8")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("40")
	[ ] ADK.Web.Browser.FlowRate.SetText("20")
	[ ] ADK.Web.Browser.Path.Click()
	[ ] ADK.Web.Browser.TypeKeys("f")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //19End Repeat
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("End Repeat")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //20Wait
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("wait")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Time_Sec.SetText("1.0")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //21Aspirate
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("2")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("450")
	[ ] ADK.Web.Browser.FlowRate.SetText("60")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //22Start Repeat
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("start repeat")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Count_Times.SetText("2")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //23Aspirate
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("2")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("450")
	[ ] ADK.Web.Browser.FlowRate.SetText("60")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //24Toggle
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("toggle")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("8")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Start_With.Click()
	[ ] ADK.Web.Browser.TypeKeys("d")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Count_Times.SetText("2")
	[ ] ADK.Web.Browser.DispenseVolume.SetText("225")
	[ ] ADK.Web.Browser.DispenseFlowRate.SetText("30")
	[ ] ADK.Web.Browser.Aspirate_Vol.SetText("10")
	[ ] ADK.Web.Browser.Aspirate_FlowRate.SetText("30")
	[ ] ADK.Web.Browser.Path.Click()
	[ ] ADK.Web.Browser.TypeKeys("f")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //25Dispense
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("Dispense")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("8")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("20")
	[ ] ADK.Web.Browser.FlowRate.SetText("30")
	[ ] ADK.Web.Browser.Path.Click()
	[ ] ADK.Web.Browser.TypeKeys("f")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //26EndRepeat
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("End Repeat")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //27 Aspirate
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("2")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("100")
	[ ] ADK.Web.Browser.FlowRate.SetText("40")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //28Toggle
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("toggle")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Start_With.Click()
	[ ] ADK.Web.Browser.TypeKeys("d")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("7")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Count_Times.SetText("2")
	[ ] ADK.Web.Browser.DispenseVolume.SetText("80")
	[ ] ADK.Web.Browser.DispenseFlowRate.SetText("80")
	[ ] ADK.Web.Browser.Aspirate_Vol.SetText("80")
	[ ] ADK.Web.Browser.Aspirate_FlowRate.SetText("80")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //29 Dispense
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("Dispense")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("8")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("100")
	[ ] ADK.Web.Browser.FlowRate.SetText("80")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //30 Aspirate Air
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("Aspirate air")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("7")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("50")
	[ ] ADK.Web.Browser.FlowRate.SetText("50")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //31 Dispense Air
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("Dispense air")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("8")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("50")
	[ ] ADK.Web.Browser.FlowRate.SetText("50")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //32 Wait
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("wait")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Time_Sec.SetText("1.0")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //33 Aspirate
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("2")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("100")
	[ ] ADK.Web.Browser.FlowRate.SetText("40")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //34 Toggle
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("toggle")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Start_With.Click()
	[ ] ADK.Web.Browser.TypeKeys("d")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("10")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Count_Times.SetText("2")
	[ ] ADK.Web.Browser.DispenseVolume.SetText("80")
	[ ] ADK.Web.Browser.DispenseFlowRate.SetText("80")
	[ ] ADK.Web.Browser.Aspirate_Vol.SetText("80")
	[ ] ADK.Web.Browser.Aspirate_FlowRate.SetText("80")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //35 Dispense
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("Dispense")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("8")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("100")
	[ ] ADK.Web.Browser.FlowRate.SetText("80")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //36 Aspirate Air
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("Aspirate air")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("10")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("50")
	[ ] ADK.Web.Browser.FlowRate.SetText("50")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //37 Dispense Air
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("Dispense air")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("8")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("50")
	[ ] ADK.Web.Browser.FlowRate.SetText("50")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //38 Wait
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("wait")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Time_Sec.SetText("1.0")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //39 Aspirate
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("2")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("300")
	[ ] ADK.Web.Browser.FlowRate.SetText("40")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //40 Toggle
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("toggle")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Start_With.Click()
	[ ] ADK.Web.Browser.TypeKeys("d")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Count_Times.SetText("4")
	[ ] ADK.Web.Browser.DispenseVolume.SetText("250")
	[ ] ADK.Web.Browser.DispenseFlowRate.SetText("80")
	[ ] ADK.Web.Browser.Aspirate_Vol.SetText("250")
	[ ] ADK.Web.Browser.Aspirate_FlowRate.SetText("80")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //41 Toggle
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("toggle")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("8")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Count_Times.SetText("6")
	[ ] ADK.Web.Browser.DispenseVolume.SetText("60")
	[ ] ADK.Web.Browser.DispenseFlowRate.SetText("40")
	[ ] ADK.Web.Browser.Aspirate_Vol.SetText("10")
	[ ] ADK.Web.Browser.Aspirate_FlowRate.SetText("40")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //42 Aspirate Air
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("Aspirate air")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("50")
	[ ] ADK.Web.Browser.FlowRate.SetText("50")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //43 Dispense Air
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("Dispense air")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("8")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("50")
	[ ] ADK.Web.Browser.FlowRate.SetText("50")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //44 Wait
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("wait")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Time_Sec.SetText("1.0")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //45 Start Repeat
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("start repeat")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Count_Times.SetText("5")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //46 Aspirate
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("2")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("450")
	[ ] ADK.Web.Browser.FlowRate.SetText("60")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //47 Toggle
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("toggle")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Start_With.Click()
	[ ] ADK.Web.Browser.TypeKeys("d")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("8")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Count_Times.SetText("2")
	[ ] ADK.Web.Browser.DispenseVolume.SetText("60")
	[ ] ADK.Web.Browser.DispenseFlowRate.SetText("40")
	[ ] ADK.Web.Browser.Aspirate_Vol.SetText("10")
	[ ] ADK.Web.Browser.Aspirate_FlowRate.SetText("40")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //48 Dispense
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("Dispense")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("8")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("20")
	[ ] ADK.Web.Browser.FlowRate.SetText("30")
	[ ] ADK.Web.Browser.Path.Click()
	[ ] ADK.Web.Browser.TypeKeys("f")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //49 EndRepeat
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("End Repeat")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //50 Start Repeat
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("start repeat")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Count_Times.SetText("7")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //51 Aspirate
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("5")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("450")
	[ ] ADK.Web.Browser.FlowRate.SetText("60")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //52 Toggle
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("toggle")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Start_With.Click()
	[ ] ADK.Web.Browser.TypeKeys("d")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("2")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Count_Times.SetText("2")
	[ ] ADK.Web.Browser.DispenseVolume.SetText("225")
	[ ] ADK.Web.Browser.DispenseFlowRate.SetText("30")
	[ ] ADK.Web.Browser.Aspirate_Vol.SetText("10")
	[ ] ADK.Web.Browser.Aspirate_FlowRate.SetText("30")
	[ ] ADK.Web.Browser.Path.Click()
	[ ] ADK.Web.Browser.TypeKeys("f")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //53 Dispense
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("Dispense")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("2")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("20")
	[ ] ADK.Web.Browser.FlowRate.SetText("30")
	[ ] ADK.Web.Browser.Path.Click()
	[ ] ADK.Web.Browser.TypeKeys("f")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //54 End Repeat
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("End Repeat")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //55 Wait
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("wait")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Time_Sec.SetText("1.0")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //56 Dispense
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("Dispense")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("8")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("20")
	[ ] ADK.Web.Browser.FlowRate.SetText("10")
	[ ] ADK.Web.Browser.Path.Click()
	[ ] ADK.Web.Browser.TypeKeys("f")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //57 Sonicate
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("sonicate")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Amplitude.SetText("40")
	[ ] ADK.Web.Browser.Period.SetText("15")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //58 Wait
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("wait")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Time_Sec.SetText("5.0")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //59 Aspirate
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("5")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("60")
	[ ] ADK.Web.Browser.FlowRate.SetText("40")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //60 Dispense
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("Dispense")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("5")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("10")
	[ ] ADK.Web.Browser.FlowRate.SetText("20")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //61 Dispense
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("Dispense")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("10")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("50")
	[ ] ADK.Web.Browser.FlowRate.SetText("10")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //62 Aspirate Air
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("Aspirate air")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("6")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("30")
	[ ] ADK.Web.Browser.FlowRate.SetText("20")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //63 Dispense Air
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("Dispense air")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("20")
	[ ] ADK.Web.Browser.FlowRate.SetText("10")
	[ ] ADK.Web.Browser.TypeKeys("f")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //64 Dispense Air
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("Dispense Air")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("8")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("10")
	[ ] ADK.Web.Browser.FlowRate.SetText("10")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //65 Aspirate
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("2")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("60")
	[ ] ADK.Web.Browser.FlowRate.SetText("40")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //66 Dispense
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("Dispense")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("5")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("10")
	[ ] ADK.Web.Browser.FlowRate.SetText("20")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //67 Dispense
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("Dispense")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("10")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("40")
	[ ] ADK.Web.Browser.FlowRate.SetText("10")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //68 Toggle
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("toggle")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("10")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Count_Times.SetText("3")
	[ ] ADK.Web.Browser.DispenseVolume.SetText("80")
	[ ] ADK.Web.Browser.DispenseFlowRate.SetText("60")
	[ ] ADK.Web.Browser.Aspirate_Vol.SetText("80")
	[ ] ADK.Web.Browser.Aspirate_FlowRate.SetText("100")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //69 Aspirate
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("10")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("90")
	[ ] ADK.Web.Browser.FlowRate.SetText("10")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //70 Dispense
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("Dispense")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("10")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("20")
	[ ] ADK.Web.Browser.FlowRate.SetText("10")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //71 Dispense
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("Dispense")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("9")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("50")
	[ ] ADK.Web.Browser.FlowRate.SetText("10")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //72 Wait
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("wait")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Time_Sec.SetText("20.0")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //73 Toggle
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("toggle")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("9")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Count_Times.SetText("3")
	[ ] ADK.Web.Browser.DispenseVolume.SetText("40")
	[ ] ADK.Web.Browser.DispenseFlowRate.SetText("100")
	[ ] ADK.Web.Browser.Aspirate_Vol.SetText("40")
	[ ] ADK.Web.Browser.Aspirate_FlowRate.SetText("20")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //74 Dispense
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("Dispense")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("9")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("25")
	[ ] ADK.Web.Browser.FlowRate.SetText("20")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //75 Wait
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("wait")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Time_Sec.SetText("20.0")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //76 Toggle
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("toggle")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("9")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Count_Times.SetText("5")
	[ ] ADK.Web.Browser.DispenseVolume.SetText("70")
	[ ] ADK.Web.Browser.DispenseFlowRate.SetText("100")
	[ ] ADK.Web.Browser.Aspirate_Vol.SetText("70")
	[ ] ADK.Web.Browser.Aspirate_FlowRate.SetText("20")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //77 Aspirate
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("9")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("75")
	[ ] ADK.Web.Browser.FlowRate.SetText("20")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //78 Dispense
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("Dispense")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("7")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("80")
	[ ] ADK.Web.Browser.FlowRate.SetText("20")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //79 Wait
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("wait")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Time_Sec.SetText("3.0")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //80 Aspirate Air
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("Aspirate air")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("6")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("100")
	[ ] ADK.Web.Browser.FlowRate.SetText("40")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //81 Wait
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("wait")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Time_Sec.SetText("1.0")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //82 Aspirate
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("tube")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("80")
	[ ] ADK.Web.Browser.FlowRate.SetText("7")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //83 Wait
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("wait")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Time_Sec.SetText("3.0")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //84 Pressurize Tube
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("pressurize tube")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("100")
	[ ] ADK.Web.Browser.FlowRate.SetText("35")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //85 Log Pressure Off
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("log pressure off")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //86 Protocol
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("pr")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "commandProtocol_analyte_" + str(6)+"']").DomClick()
	[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "commandProtocol_analyte_" + str(7)+"']").DomClick()
	[ ] ADK.Web.Browser.EC_Stages.DomClick()
	[ ] ADK.Web.Browser.EC_AddStage.DomClick()
	[ ] ADK.Web.Browser.EC_AddStage.DomClick()
	[ ] ADK.Web.Browser.Stage_Type.Click()
	[ ] ADK.Web.Browser.TypeKeys("probe")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Temp_1C.SetText("75.0")
	[ ] ADK.Web.Browser.Temp_1C2.SetText("75.0")
	[ ] ADK.Web.Browser.Temp_1C3.SetText("75.0")
	[ ] ADK.Web.Browser.Temp_2C.SetText("97.0")
	[ ] ADK.Web.Browser.Seconds1.SetText("10")
	[ ] ADK.Web.Browser.Seconds1_2.SetText("10")
	[ ] ADK.Web.Browser.Seconds1_3.SetText("10")
	[ ] ADK.Web.Browser.Seconds2.SetText("30")
	[ ] sleep(0.5)
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //87 Protocol
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("pr")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.EC_Stages.DomClick()
	[ ] ADK.Web.Browser.EC_AddStage.DomClick()
	[ ] ADK.Web.Browser.Stage_Type.Click()
	[ ] ADK.Web.Browser.TypeKeys("2-")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Temp_1C.SetText("97.0")
	[ ] ADK.Web.Browser.Temp_1C2.SetText("72.0")
	[ ] ADK.Web.Browser.Seconds1.SetText("3")
	[ ] ADK.Web.Browser.Seconds1.SetText("20")
	[ ] ADK.Web.Browser.Repeat_Times.SetText("31")
	[ ] ADK.Web.Browser.Optics_ChkBox2.DomClick()
	[ ] sleep(0.5)
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //88  Log Pressure On
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("log pressure on")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.LogInterval.SetText("500")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //89 Depressurize Tube
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("Depressurize Tube")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //90 Dispense
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("Dispense")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("tube")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("80")
	[ ] ADK.Web.Browser.FlowRate.SetText("10")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //91 Aspirate Air
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("Aspirate air")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("6")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("30")
	[ ] ADK.Web.Browser.FlowRate.SetText("35")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //32 Dispense Air
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("Dispense air")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("tube")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("100")
	[ ] ADK.Web.Browser.FlowRate.SetText("35")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //93 Protocol
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("pr")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.EC_Stages.DomClick()
	[ ] ADK.Web.Browser.EC_AddStage.DomClick()
	[ ] ADK.Web.Browser.Stage_Type.Click()
	[ ] ADK.Web.Browser.TypeKeys("2-")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Temp_1C.SetText("95.0")
	[ ] ADK.Web.Browser.Temp_1C2.SetText("50.0")
	[ ] ADK.Web.Browser.Seconds1.SetText("5")
	[ ] ADK.Web.Browser.Seconds1_2.SetText("1")
	[ ] ADK.Web.Browser.Repeat_Times.SetText("1")
	[ ] ADK.Web.Browser.Optics_ChkBox2.DomClick()
	[ ] sleep(0.5)
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //94 Dispense Air
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("Dispense air")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("2")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("20")
	[ ] ADK.Web.Browser.FlowRate.SetText("25")
	[ ] ADK.Web.Browser.Path.Click()
	[ ] ADK.Web.Browser.TypeKeys("f")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //95 Wait
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("wait")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Time_Sec.SetText("1.0")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //96 Dispense Air
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("Dispense air")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("8")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("10")
	[ ] ADK.Web.Browser.FlowRate.SetText("20")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //97 Aspirate
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("5")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("80")
	[ ] ADK.Web.Browser.FlowRate.SetText("20")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //98 Dispense
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("Dispen")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("5")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("10")
	[ ] ADK.Web.Browser.FlowRate.SetText("10")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //99 Wait
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("wait")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Time_Sec.SetText("1.0")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //100 Dispense
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("Dispen")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("11")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("50")
	[ ] ADK.Web.Browser.FlowRate.SetText("20")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //101 Wait
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("wait")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Time_Sec.SetText("20.0")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //102 Toggle
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("toggle")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("11")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Count_Times.SetText("4")
	[ ] ADK.Web.Browser.DispenseVolume.SetText("40")
	[ ] ADK.Web.Browser.DispenseFlowRate.SetText("100")
	[ ] ADK.Web.Browser.Aspirate_Vol.SetText("40")
	[ ] ADK.Web.Browser.Aspirate_FlowRate.SetText("20")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //103 Dispense
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("Dispen")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("11")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("15")
	[ ] ADK.Web.Browser.FlowRate.SetText("20")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //104 Wait
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("wait")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Time_Sec.SetText("20.0")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //105 Toggle
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("toggle")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("11")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Count_Times.SetText("5")
	[ ] ADK.Web.Browser.DispenseVolume.SetText("60")
	[ ] ADK.Web.Browser.DispenseFlowRate.SetText("100")
	[ ] ADK.Web.Browser.Aspirate_Vol.SetText("60")
	[ ] ADK.Web.Browser.Aspirate_FlowRate.SetText("20")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //106 Dispense
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("Dispen")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("11")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("5")
	[ ] ADK.Web.Browser.FlowRate.SetText("5")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //107 Wait
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("wait")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Time_Sec.SetText("4.0")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //108 Aspirate Air
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("Aspirate air")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("6")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("130")
	[ ] ADK.Web.Browser.FlowRate.SetText("30")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //109 Aspirate
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("11")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("70")
	[ ] ADK.Web.Browser.FlowRate.SetText("10")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //110 Wait
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("wait")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Time_Sec.SetText("4.0")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //111 Dispense
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("Dispen")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("tube")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("70")
	[ ] ADK.Web.Browser.FlowRate.SetText("7")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //112 Dispense Air
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("Dispense air")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("tube")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("30")
	[ ] ADK.Web.Browser.FlowRate.SetText("20")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //113 Wait
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("wait")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Time_Sec.SetText("1.0")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //114 Protocol
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("pr")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.EC_Stages.DomClick()
	[ ] ADK.Web.Browser.EC_AddStage.DomClick()
	[ ] ADK.Web.Browser.Temp_1C.SetText("50.0")
	[ ] ADK.Web.Browser.Seconds1.SetText("30")
	[ ] sleep(0.5)
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //115 Aspirate
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.ChamberNum.Click()
	[ ] ADK.Web.Browser.TypeKeys("tube")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("40")
	[ ] ADK.Web.Browser.FlowRate.SetText("7")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //116 Wait
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("wait")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Time_Sec.SetText("1.0")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //117 Pressurize Tube
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("pressurize tube")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Volume.SetText("100")
	[ ] ADK.Web.Browser.FlowRate.SetText("40")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //118 Log Pressure Off
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("log pressure off")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] 
	[ ] //119 Protocol the big one...
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("pr")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] //Adds Stages and selects correct analyte
	[ ] i=0
	[-] while i<6
		[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "commandProtocol_analyte_" + str(i)+"']").DomClick()
		[ ] ADK.Web.Browser.EC_Stages.DomClick()
		[ ] ADK.Web.Browser.EC_AddStage.DomClick()
		[ ] ADK.Web.Browser.EC_Analytes.DomClick()
		[ ] i++
	[ ] //selects stage names and enters temp and time
	[ ] ADK.Web.Browser.EC_Stages.DomClick()
	[ ] ADK.Web.Browser.Stage_Type.Click()
	[ ] ADK.Web.Browser.TypeKeys("probe")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Stage_Type2.Click()
	[ ] ADK.Web.Browser.TypeKeys("hold")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Stage_Type3.Click()
	[ ] ADK.Web.Browser.TypeKeys("2-")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Stage_Type4.Click()
	[ ] ADK.Web.Browser.TypeKeys("3-")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Stage_Type5.Click()
	[ ] ADK.Web.Browser.TypeKeys("3-")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Stage_Type6.Click()
	[ ] ADK.Web.Browser.TypeKeys("hold")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Temp_1C.SetText("64.0")
	[ ] ADK.Web.Browser.Temp_1C2.SetText("74.0")
	[ ] ADK.Web.Browser.Temp_1C3.SetText("64.0")
	[ ] ADK.Web.Browser.Temp_2C.SetText("97.0")
	[ ] ADK.Web.Browser.Temp_3C.SetText("64.0")
	[ ] ADK.Web.Browser.Temp_3C2.SetText("64.0")
	[ ] ADK.Web.Browser.Temp_4C.SetText("97.0")
	[ ] ADK.Web.Browser.Temp_4C2.SetText("64.0")
	[ ] ADK.Web.Browser.Temp_4C3.SetText("74.0")
	[ ] ADK.Web.Browser.Temp_5C.SetText("97.0")
	[ ] ADK.Web.Browser.Temp_5C2.SetText("64.0")
	[ ] ADK.Web.Browser.Temp_5C3.SetText("74.0")
	[ ] ADK.Web.Browser.Temp_6C.SetText("74.0")
	[ ] ADK.Web.Browser.Seconds1.SetText("10")
	[ ] ADK.Web.Browser.Seconds1_2.SetText("10")
	[ ] ADK.Web.Browser.Seconds1_3.SetText("10")
	[ ] ADK.Web.Browser.Seconds2.SetText("30")
	[ ] ADK.Web.Browser.Seconds3.SetText("5")
	[ ] ADK.Web.Browser.Seconds3_2.SetText("5")
	[ ] ADK.Web.Browser.Seconds4.SetText("3")
	[ ] ADK.Web.Browser.Seconds4_2.SetText("10")
	[ ] ADK.Web.Browser.Seconds4_3.SetText("10")
	[ ] ADK.Web.Browser.Seconds5.SetText("3")
	[ ] ADK.Web.Browser.Seconds5_2.SetText("10")
	[ ] ADK.Web.Browser.Seconds5_3.SetText("10")
	[ ] ADK.Web.Browser.Seconds6.SetText("2")
	[ ] ADK.Web.Browser.Repeat_Times.SetText("15")
	[ ] ADK.Web.Browser.Repeat_Times2.SetText("24")
	[ ] ADK.Web.Browser.Repeat_Times3.SetText("1")
	[ ] sleep(0.5)
	[ ] //crosstalk page
	[ ] ADK.Web.Browser.CrossTalk_Factors.DomClick()
	[ ] ADK.Web.Browser.PCR_CT.DomClick()
	[ ] ADK.Web.Browser.CT_Textfield4.SetText("-1.5")
	[ ] ADK.Web.Browser.CT_Textfield8.SetText("1.9")
	[ ] ADK.Web.Browser.CT_Textfield10.SetText("-0.6")
	[ ] ADK.Web.Browser.CT_Textfield18.SetText("-2.0")
	[ ] ADK.Web.Browser.CT_Textfield21.SetText("-0.5")
	[ ] ADK.Web.Browser.CT_Textfield26.SetText("0.7")
	[ ] ADK.Web.Browser.CT_Textfield27.SetText("-11.6")
	[ ] ADK.Web.Browser.CT_Textfield29.SetText("-1.3")
	[ ] 
	[ ] //advance to new stage
	[ ] ADK.Web.Browser.AdvToNewStage.DomClick()
	[ ] ADK.Web.Browser.AddNewStage.DomClick()
	[ ] ADK.Web.Browser.ANS_Analyte.Click()
	[ ] ADK.Web.Browser.TypeKeys("is108")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ANS_Monitor.Click()
	[ ] ADK.Web.Browser.TypeKeys("5")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ANS_AdvToStage.Click()
	[ ] ADK.Web.Browser.TypeKeys("6")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.ANS_StopNoCT.DomClick()
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] 
	[ ] // //120 Decision
	[ ] // ADK.Web.Browser.AddAfter.DomClick()
	[ ] // ADK.Web.Browser.SelectCommand.Click()
	[ ] // ADK.Web.Browser.TypeKeys("decision")
	[ ] // ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] // ADK.Web.Browser.DM_Covert_To_Rules.DomClick()
	[ ] // i=0
	[+] // while i<6
		[ ] // ADK.Web.Browser.DM_Add_Rule.DomClick()
		[-] // if i == 0 
			[ ] // ADK.Web.Browser.Find("//SELECT[@id='" + "dropdownForm_decision" + str(i) +"']").Click()
			[ ] // ADK.Web.Browser.TypeKeys("stop")
			[ ] // ADK.Web.Browser.TypeKeys("<Enter>")
			[ ] // i++
		[-] // else
			[ ] // ADK.Web.Browser.Find("//SELECT[@id='" + "dropdownForm_decision" + str(i-1) +"']").Click()
			[ ] // ADK.Web.Browser.TypeKeys("stop")
			[ ] // ADK.Web.Browser.TypeKeys("<Enter>")
			[ ] // ADK.Web.Browser.Find("//SELECT[@id='" + "dropdownForm_isAnd" + str(i-1) +"']").Click()
			[ ] // ADK.Web.Browser.TypeKeys("must")
			[ ] // ADK.Web.Browser.TypeKeys("<Enter>")
			[ ] // 
		[ ] // i++
	[ ] // //column 1
	[ ] // //row 1
	[ ] // ADK.Web.Browser.DM_Formula1_0.DomClick()
	[ ] // ADK.Web.Browser.Formula_Analyte.Click()
	[ ] // ADK.Web.Browser.TypeKeys("rpob1")
	[ ] // ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] // ADK.Web.Browser.Formula_Interp.Click()
	[ ] // ADK.Web.Browser.TypeKeys("is inv")
	[ ] // ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] // ADK.Web.Browser.OkButton.DomClick()
	[ ] // //row 2
	[ ] // ADK.Web.Browser.DM_Formula2_0.DomClick()
	[ ] // ADK.Web.Browser.Formula_Analyte.Click()
	[ ] // ADK.Web.Browser.TypeKeys("rpob1")
	[ ] // ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] // ADK.Web.Browser.Formula_Interp.Click()
	[ ] // ADK.Web.Browser.TypeKeys("is neg")
	[ ] // ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] // ADK.Web.Browser.OkButton.DomClick()
	[ ] // //row 3
	[ ] // ADK.Web.Browser.DM_Formula3_0.DomClick()
	[ ] // ADK.Web.Browser.Formula_Analyte.Click()
	[ ] // ADK.Web.Browser.TypeKeys("rpob1")
	[ ] // ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] // ADK.Web.Browser.Formula_Interp.Click()
	[ ] // ADK.Web.Browser.TypeKeys("is neg")
	[ ] // ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] // ADK.Web.Browser.OkButton.DomClick()
	[ ] // //row 4
	[ ] // ADK.Web.Browser.DM_Formula4_0.DomClick()
	[ ] // ADK.Web.Browser.Formula_Analyte.Click()
	[ ] // ADK.Web.Browser.TypeKeys("rpob1")
	[ ] // ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] // ADK.Web.Browser.Formula_Interp.Click()
	[ ] // ADK.Web.Browser.TypeKeys("is neg")
	[ ] // ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] // ADK.Web.Browser.OkButton.DomClick()
	[ ] // //row 5
	[ ] // ADK.Web.Browser.DM_Formula5_0.DomClick()
	[ ] // ADK.Web.Browser.Formula_Analyte.Click()
	[ ] // ADK.Web.Browser.TypeKeys("rpob2")
	[ ] // ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] // ADK.Web.Browser.Formula_Interp.Click()
	[ ] // ADK.Web.Browser.TypeKeys("is neg")
	[ ] // ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] // ADK.Web.Browser.OkButton.DomClick()
	[ ] // 
	[ ] // ADK.Web.Browser.DM_Add_Formula.DomClick()
	[ ] // //column 2
	[ ] // //row 5
	[ ] // ADK.Web.Browser.DM_Formula5_1.DomClick()
	[ ] // ADK.Web.Browser.Formula_Analyte.Click()
	[ ] // ADK.Web.Browser.TypeKeys("rpob3")
	[ ] // ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] // ADK.Web.Browser.Formula_Interp.Click()
	[ ] // ADK.Web.Browser.TypeKeys("is neg")
	[ ] // ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] // ADK.Web.Browser.OkButton.DomClick()
	[ ] // //row 4
	[ ] // ADK.Web.Browser.DM_Formula4_1.DomClick()
	[ ] // ADK.Web.Browser.Formula_Analyte.Click()
	[ ] // ADK.Web.Browser.TypeKeys("rpob3")
	[ ] // ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] // ADK.Web.Browser.Formula_Interp.Click()
	[ ] // ADK.Web.Browser.TypeKeys("is neg")
	[ ] // ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] // ADK.Web.Browser.OkButton.DomClick()
	[ ] // //row 3
	[ ] // ADK.Web.Browser.DM_Formula3_1.DomClick()
	[ ] // ADK.Web.Browser.Formula_Analyte.Click()
	[ ] // ADK.Web.Browser.TypeKeys("rpob2")
	[ ] // ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] // ADK.Web.Browser.Formula_Interp.Click()
	[ ] // ADK.Web.Browser.TypeKeys("is neg")
	[ ] // ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] // ADK.Web.Browser.OkButton.DomClick()
	[ ] // //row 2
	[ ] // ADK.Web.Browser.DM_Formula2_1.DomClick()
	[ ] // ADK.Web.Browser.Formula_Analyte.Click()
	[ ] // ADK.Web.Browser.TypeKeys("rpob2")
	[ ] // ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] // ADK.Web.Browser.Formula_Interp.Click()
	[ ] // ADK.Web.Browser.TypeKeys("is neg")
	[ ] // ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] // ADK.Web.Browser.OkButton.DomClick()
	[ ] // //row 1
	[ ] // ADK.Web.Browser.DM_Formula1_1.DomClick()
	[ ] // ADK.Web.Browser.Formula_Analyte.Click()
	[ ] // ADK.Web.Browser.TypeKeys("rpob2")
	[ ] // ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] // ADK.Web.Browser.Formula_Interp.Click()
	[ ] // ADK.Web.Browser.TypeKeys("is inv")
	[ ] // ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] // ADK.Web.Browser.OkButton.DomClick()
	[ ] // 
	[ ] // //column 3
	[ ] // //row 1
	[ ] // ADK.Web.Browser.DM_Formula1_1.DomClick()
	[ ] // ADK.Web.Browser.Formula_Analyte.Click()
	[ ] // ADK.Web.Browser.TypeKeys("rpob3")
	[ ] // ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] // ADK.Web.Browser.Formula_Interp.Click()
	[ ] // ADK.Web.Browser.TypeKeys("is inv")
	[ ] // ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] // ADK.Web.Browser.OkButton.DomClick()
	[ ] // //row 2
	[ ] // ADK.Web.Browser.DM_Formula2_1.DomClick()
	[ ] // ADK.Web.Browser.Formula_Analyte.Click()
	[ ] // ADK.Web.Browser.TypeKeys("rpob3")
	[ ] // ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] // ADK.Web.Browser.Formula_Interp.Click()
	[ ] // ADK.Web.Browser.TypeKeys("is neg")
	[ ] // ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] // ADK.Web.Browser.OkButton.DomClick()
	[ ] // //row 3
	[ ] // ADK.Web.Browser.DM_Formula3_1.DomClick()
	[ ] // ADK.Web.Browser.Formula_Analyte.Click()
	[ ] // ADK.Web.Browser.TypeKeys("rpob4")
	[ ] // ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] // ADK.Web.Browser.Formula_Interp.Click()
	[ ] // ADK.Web.Browser.TypeKeys("is neg")
	[ ] // ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] // ADK.Web.Browser.OkButton.DomClick()
	[ ] // //row 4
	[ ] // ADK.Web.Browser.DM_Formula4_1.DomClick()
	[ ] // ADK.Web.Browser.Formula_Analyte.Click()
	[ ] // ADK.Web.Browser.TypeKeys("rpob4")
	[ ] // ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] // ADK.Web.Browser.Formula_Interp.Click()
	[ ] // ADK.Web.Browser.TypeKeys("is neg")
	[ ] // ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] // ADK.Web.Browser.OkButton.DomClick()
	[ ] // //row 5
	[ ] // ADK.Web.Browser.DM_Formula5_1.DomClick()
	[ ] // ADK.Web.Browser.Formula_Analyte.Click()
	[ ] // ADK.Web.Browser.TypeKeys("rpob4")
	[ ] // ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] // ADK.Web.Browser.Formula_Interp.Click()
	[ ] // ADK.Web.Browser.TypeKeys("is neg")
	[ ] // ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] // ADK.Web.Browser.OkButton.DomClick()
	[ ] // //column 4
	[ ] // //row 1
	[ ] // ADK.Web.Browser.DM_Formula1_1.DomClick()
	[ ] // ADK.Web.Browser.Formula_Analyte.Click()
	[ ] // ADK.Web.Browser.TypeKeys("rpob4")
	[ ] // ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] // ADK.Web.Browser.Formula_Interp.Click()
	[ ] // ADK.Web.Browser.TypeKeys("is inv")
	[ ] // ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] // ADK.Web.Browser.OkButton.DomClick()
	[ ] // ADK.Web.Browser.OkButton.DomClick()
	[ ] //121 Protocol 
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("pr")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] //Adds Stages and selects correct analyte
	[ ] 
	[ ] ADK.Web.Browser.Select_All_ChkBox.DomClick()
	[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "commandProtocol_analyte_" + str(6)+"']").DomClick()
	[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "commandProtocol_analyte_" + str(7)+"']").DomClick()
	[ ] ADK.Web.Browser.EC_Stages.DomClick()
	[ ] i=0
	[+] while i<4
		[ ] ADK.Web.Browser.EC_AddStage.DomClick()
		[ ] i++
	[ ] //selects stage names and enters temp and time
	[ ] ADK.Web.Browser.Stage_Type.Click()
	[ ] ADK.Web.Browser.TypeKeys("2-")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Stage_Type2.Click()
	[ ] ADK.Web.Browser.TypeKeys("hold")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Stage_Type3.Click()
	[ ] ADK.Web.Browser.TypeKeys("hold")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Stage_Type4.Click()
	[ ] ADK.Web.Browser.TypeKeys("melt cu")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.Temp_1C.SetText("95.0")
	[ ] ADK.Web.Browser.Temp_1C2.SetText("68.0")
	[ ] ADK.Web.Browser.Temp_2C.SetText("95.0")
	[ ] ADK.Web.Browser.Temp_3C.SetText("50.0")
	[ ] ADK.Web.Browser.Start.SetText("50.0")
	[ ] ADK.Web.Browser.End.SetText("85.0")
	[ ] ADK.Web.Browser.Degrees_per_second.SetText("0.10")
	[ ] ADK.Web.Browser.Seconds1.SetText("5")
	[ ] ADK.Web.Browser.Seconds1_2.SetText("20")
	[ ] ADK.Web.Browser.Seconds2.SetText("120")
	[ ] ADK.Web.Browser.Seconds3.SetText("10")
	[ ] ADK.Web.Browser.Repeat_Times.SetText("5")
	[ ] ADK.Web.Browser.Optics_ChkBox2.DomClick()
	[ ] 
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] //122 Depressurize Tube
	[ ] ADK.Web.Browser.AddAfter.DomClick()
	[ ] ADK.Web.Browser.SelectCommand.Click()
	[ ] ADK.Web.Browser.TypeKeys("Depressurize Tube")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] 
	[ ] 
	[ ] 
	[ ] 
	[ ] 
	[ ] 
	[ ] //Define Results
	[ ] ADK.Web.Browser.Define_Results.DomClick()
	[ ] i=0
	[+] while i<3
		[ ] ADK.Web.Browser.Add_Rule.DomClick()
		[ ] i++
	[ ] 
	[ ] //Row 1
	[ ] ADK.Web.Browser.Organism_Name1.SetText("MTB")
	[ ] 
	[ ] ADK.Web.Browser.Rule_Analyte.DomClick()
	[ ] ADK.Web.Browser.Rule_Select_Analyte.DomClick()
	[ ] ADK.Web.Browser.Rule_Select_Analyte2.DomClick()
	[ ] ADK.Web.Browser.Rule_Select_Analyte3.DomClick()
	[ ] ADK.Web.Browser.Rule_Select_Analyte4.DomClick()
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] sleep(0.5)
	[ ] ADK.Web.Browser.Type1.Select("Semi-Quant")
	[ ] // ADK.Web.Browser.TypeKeys("sem")
	[ ] // ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.YesButton.DomClick()
	[ ] 
	[ ] //Row 2
	[ ] ADK.Web.Browser.Organism_Name2.SetText("MTB Trace")
	[ ] ADK.Web.Browser.Rule_Analyte2.DomClick()
	[ ] ADK.Web.Browser.Rule_Select_Analyte.DomClick()
	[ ] ADK.Web.Browser.Rule_Select_Analyte2.DomClick()
	[ ] ADK.Web.Browser.Rule_Select_Analyte3.DomClick()
	[ ] ADK.Web.Browser.Rule_Select_Analyte4.DomClick()
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] 
	[ ] //Row 3
	[ ] ADK.Web.Browser.Organism_Name3.SetText("RIF Resistance")
	[ ] ADK.Web.Browser.Rule_Analyte3.DomClick()
	[ ] i=0
	[+] while i<13
		[ ] ADK.Web.Browser.Find("//INPUT[@id='addOrganismForm_analyte_" + str(i) + "']").DomClick()
		[ ] i++
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] ADK.Web.Browser.YesButton.DomClick()
	[ ] 
	[ ] 
	[ ] //Edit Rules 1
	[ ] ADK.Web.Browser.Edit_Rule.DomClick()
	[ ] ADK.Web.Browser.MediumCT.SetText("19.0")
	[ ] sleep(0.5)
	[ ] ADK.Web.Browser.LowCT.SetText("25.0")
	[ ] ADK.Web.Browser.VeryLowCT.SetText("29.0")
	[ ] 
	[ ] ADK.Web.Browser.SemiQuant_Result_Text.DomClick()
	[ ] ADK.Web.Browser.TypeKeys("Dete")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.DeltaCTMin.SetText("40")
	[ ] ADK.Web.Browser.Rule_Radio.DomClick()
	[ ] ADK.Web.Browser.YesButton.DomClick()
	[ ] 
	[ ] i=0
	[+] while i<7
		[ ] ADK.Web.Browser.RuleDialog_Add_Rule.DomClick()
		[-] if i==0
			[ ] ADK.Web.Browser.Find("//SELECT[@id='" + "coloredDropdownForm_resultText" + str(i) +"']").Click()
			[ ] ADK.Web.Browser.TypeKeys("inval")
			[ ] ADK.Web.Browser.TypeKeys("<Enter>")
			[ ] ADK.Web.Browser.Find("//SELECT[@id='" + "colorSelectorForm_textColor" + str(i) +"']").Click()
			[ ] ADK.Web.Browser.TypeKeys("inv")
			[ ] ADK.Web.Browser.TypeKeys("<Enter>")
			[ ] 
		[-] if i>0
			[ ] ADK.Web.Browser.Find("//SELECT[@name='" + "ruleAnded" + str(i) +"']").Click()
			[ ] ADK.Web.Browser.TypeKeys("must")
			[ ] ADK.Web.Browser.TypeKeys("<Enter>")
			[-] if i == 1
				[ ] ADK.Web.Browser.Find("//SELECT[@id='" + "coloredDropdownForm_resultText" + str(i) +"']").Click()
				[ ] ADK.Web.Browser.TypeKeys("inval")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Find("//SELECT[@id='" + "colorSelectorForm_textColor" + str(i) +"']").Click()
				[ ] ADK.Web.Browser.TypeKeys("light g")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
			[-] if i == 2 
				[ ] ADK.Web.Browser.Find("//SELECT[@id='" + "coloredDropdownForm_resultText" + str(i) +"']").Click()
				[ ] ADK.Web.Browser.TypeKeys("not det")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Find("//SELECT[@id='" + "colorSelectorForm_textColor" + str(i) +"']").Click()
				[ ] ADK.Web.Browser.TypeKeys("gree")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
			[-] if i>2
				[ ] ADK.Web.Browser.Find("//SELECT[@id='" + "coloredDropdownForm_resultText" + str(i) +"']").Click()
				[ ] ADK.Web.Browser.TypeKeys("prob")
				[ ] sleep(0.5)
				[ ] ADK.Web.Browser.TypeKeys("<Down 1>")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Find("//SELECT[@id='" + "colorSelectorForm_textColor" + str(i) +"']").Click()
				[ ] ADK.Web.Browser.TypeKeys("white")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] 
		[ ] i++
	[ ] 
	[ ] i=0
	[ ] i2=0
	[+] while i<7 || i2<7
		[+] if i==0 && i2<7
			[ ] ADK.Web.Browser.Find("//BUTTON[@id='" + "addEditFormula_" + str(i2)+ "_" + str(i) +"']").DomClick()
			[+] if i2 == 0
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob1")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is In")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Forumla_ReasonBox6.Check()
				[ ] ADK.Web.Browser.Forumla_ReasonBox7.Check()
				[ ] ADK.Web.Browser.Forumla_ReasonBox8.Check()
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
				[ ] 
				[ ] 
			[+] else if i2 == 1
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob1")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is ne")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
				[ ] 
			[+] else if i2 == 2
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("is108")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is fa")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
				[ ] 
			[+] else if i2 == 3 
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob1")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is ne")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
			[+] else if i2 == 4
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob1")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is ne")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
			[+] else if i2 == 5
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob1")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is ne")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
				[ ] 
			[+] else if i2 == 6
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob2")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is ne")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2=0
				[ ] i++
			[ ] 
		[+] if i==1 && i2<7
			[ ] ADK.Web.Browser.RuleDialog_Add_Formula.DomClick()
			[ ] ADK.Web.Browser.Find("//BUTTON[@id='" + "addEditFormula_" + str(i2)+ "_" + str(i) +"']").DomClick()
			[+] if i2 == 0
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob2")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is In")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Forumla_ReasonBox6.Check()
				[ ] ADK.Web.Browser.Forumla_ReasonBox7.Check()
				[ ] ADK.Web.Browser.Forumla_ReasonBox8.Check()
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
				[ ] 
				[ ] 
			[+] else if i2 == 1
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob2")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is ne")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
				[ ] 
			[-] else if i2 == 2
				[ ] ADK.Web.Browser.Formula_Cancel.DomClick()
				[ ] i2++
			[+] else if i2 == 3 
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob2")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is ne")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
			[+] else if i2 == 4
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob2")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is ne")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
			[+] else if i2 ==  5
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob3")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is ne")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
				[ ] 
			[+] else if i2 == 6
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob3")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is ne")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2=0
				[ ] i++
		[+] if i==2 && i2<7
			[ ] ADK.Web.Browser.RuleDialog_Add_Formula.DomClick()
			[ ] ADK.Web.Browser.Find("//BUTTON[@id='" + "addEditFormula_" + str(i2)+ "_" + str(i) +"']").DomClick()
			[+] if i2 == 0
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob3")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is In")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Forumla_ReasonBox6.Check()
				[ ] ADK.Web.Browser.Forumla_ReasonBox7.Check()
				[ ] ADK.Web.Browser.Forumla_ReasonBox8.Check()
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
				[ ] 
				[ ] 
			[+] else if i2 == 1
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob3")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is ne")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2=3
				[ ] 
			[+] else if i2 == 3 
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob3")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is ne")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
			[+] else if i2 == 4
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob4")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is ne")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
			[+] else if i2 == 5
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob4")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is ne")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
				[ ] 
			[+] else if i2 == 6
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob4")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is ne")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2=0
				[ ] i++
		[+] if i==3 && i2<7
			[ ] ADK.Web.Browser.RuleDialog_Add_Formula.DomClick()
			[ ] ADK.Web.Browser.Find("//BUTTON[@id='" + "addEditFormula_" + str(i2)+ "_" + str(i) +"']").DomClick()
			[+] if i2 == 0
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob4")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is In")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Forumla_ReasonBox6.Check()
				[ ] ADK.Web.Browser.Forumla_ReasonBox7.Check()
				[ ] ADK.Web.Browser.Forumla_ReasonBox8.Check()
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
				[ ] 
				[ ] 
			[+] else if i2 == 1
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob4")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is ne")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2=3
				[ ] 
			[+] else if i2 == 3 
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("is108")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is pa")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
			[+] else if i2 == 4
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("is108")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is pa")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
			[+] else if i2 == 5
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("is108")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is pa")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
				[ ] 
			[+] else if i2 == 6
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("is108")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is pa")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2=0
				[ ] i++
		[+] if i==4 && i2<7
			[ ] ADK.Web.Browser.RuleDialog_Add_Formula.DomClick()
			[ ] ADK.Web.Browser.Find("//BUTTON[@id='" + "addEditFormula_" + str(i2)+ "_" + str(i) +"']").DomClick()
			[+] if i2 == 0
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("is108")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is fa")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Forumla_ReasonBox9.Check()
				[ ] ADK.Web.Browser.Forumla_ReasonBox10.Check()
				[ ] ADK.Web.Browser.Forumla_ReasonBox11.Check()
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
				[ ] 
				[ ] 
			[-] else if i2 == 1
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("is108")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is fa")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2=0
				[ ] i++
		[+] if i==5 && i2<7
			[ ] ADK.Web.Browser.Find("//BUTTON[@id='" + "addEditFormula_" + str(i2)+ "_" + str(i) +"']").DomClick()
			[-] if i2 == 0
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is fa")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Forumla_ReasonBox9.Check()
				[ ] ADK.Web.Browser.Forumla_ReasonBox10.Check()
				[ ] ADK.Web.Browser.Forumla_ReasonBox11.Check()
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
				[ ] 
				[ ] 
			[+] else if i2 == 1
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is fa")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2=7
				[ ] i=7
	[ ] 
	[ ] sleep(0.5)
	[ ] ADK.Web.Browser.RuleDialog_LastResultText.Click()
	[ ] ADK.Web.Browser.TypeKeys("Dete")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] 
	[ ] ADK.Web.Browser.RuleDialog_LastResultColor.Click()
	[ ] ADK.Web.Browser.TypeKeys("re")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] 
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] 
	[ ] //Edit Rules 2
	[ ] ADK.Web.Browser.Edit_Rule2.DomClick()
	[ ] 
	[ ] ADK.Web.Browser.Rule_Radio.DomClick()
	[ ] ADK.Web.Browser.YesButton.DomClick()
	[ ] 
	[ ] i=0
	[-] while i<4
		[ ] ADK.Web.Browser.RuleDialog_Add_Rule.DomClick()
		[-] if i>=0
			[ ] ADK.Web.Browser.Find("//SELECT[@name='" + "ruleAnded" + str(i) +"']").Click()
			[ ] ADK.Web.Browser.TypeKeys("must")
			[ ] ADK.Web.Browser.TypeKeys("<Enter>")
			[ ] ADK.Web.Browser.Find("//SELECT[@id='" + "coloredDropdownForm_resultText" + str(i) +"']").Click()
			[ ] ADK.Web.Browser.TypeKeys("det")
			[ ] ADK.Web.Browser.TypeKeys("<Enter>")
			[ ] ADK.Web.Browser.Find("//SELECT[@id='" + "colorSelectorForm_textColor" + str(i) +"']").Click()
			[ ] ADK.Web.Browser.TypeKeys("red")
			[ ] ADK.Web.Browser.TypeKeys("<Enter>")
			[ ] 
		[ ] i++
	[ ] 
	[ ] i=0
	[ ] i2=0
	[-] while i<4 || i2<4
		[-] if i==0 && i2<4
			[ ] ADK.Web.Browser.Find("//BUTTON[@id='" + "addEditFormula_" + str(i2)+ "_" + str(i) +"']").DomClick()
			[-] if i2 == 0
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob1")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is ne")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
				[ ] 
				[ ] 
			[-] else if i2 == 1
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob1")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is ne")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
				[ ] 
			[-] else if i2 == 2
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob1")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is ne")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
				[ ] 
			[-] else if i2 == 3 
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob2")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is ne")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2=0
				[ ] i++
			[ ] 
		[+] if i==1 && i2<4
			[ ] ADK.Web.Browser.RuleDialog_Add_Formula.DomClick()
			[ ] ADK.Web.Browser.Find("//BUTTON[@id='" + "addEditFormula_" + str(i2)+ "_" + str(i) +"']").DomClick()
			[+] if i2 == 0
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob2")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is neg")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
				[ ] 
				[ ] 
			[+] else if i2 == 1
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob2")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is ne")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
				[ ] 
			[+] else if i2 == 2
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob3")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is ne")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
			[+] else if i2 == 3 
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob2")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is ne")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2=0
				[ ] i++
		[+] if i==2 && i2<4
			[ ] ADK.Web.Browser.RuleDialog_Add_Formula.DomClick()
			[ ] ADK.Web.Browser.Find("//BUTTON[@id='" + "addEditFormula_" + str(i2)+ "_" + str(i) +"']").DomClick()
			[+] if i2 == 0
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob3")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is neg")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
				[ ] 
				[ ] 
			[+] else if i2 == 1
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob4")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is ne")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
				[ ] 
			[+] else if i2 == 2 
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob4")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is ne")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
			[+] else if i2 == 3
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob4")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is ne")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2=0
				[ ] i++
		[+] if i==3 && i2<4
			[ ] ADK.Web.Browser.RuleDialog_Add_Formula.DomClick()
			[ ] ADK.Web.Browser.Find("//BUTTON[@id='" + "addEditFormula_" + str(i2)+ "_" + str(i) +"']").DomClick()
			[-] if i2 == 0
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("is108")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is pas")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
				[ ] 
				[ ] 
			[-] else if i2 == 1
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("is108")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is pas")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
				[ ] 
			[-] else if i2 == 2 
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("is108")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is pa")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
			[-] else if i2 == 3
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("is108")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is pa")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2=4
				[ ] i=4
				[ ] 
		[ ] 
	[ ] 
	[ ] sleep(0.5)
	[ ] ADK.Web.Browser.RuleDialog_LastResultText.Click()
	[ ] ADK.Web.Browser.TypeKeys("prob")
	[ ] ADK.Web.Browser.TypeKeys("<Down 1>")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] 
	[ ] ADK.Web.Browser.RuleDialog_LastResultColor.Click()
	[ ] ADK.Web.Browser.TypeKeys("white")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] 
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] 
	[ ] // //edit rule 3
	[ ] ADK.Web.Browser.Edit_Rule3.DomClick()
	[ ] i=0
	[+] while i<19
		[ ] ADK.Web.Browser.RuleDialog_Add_Rule.DomClick()
		[+] if i==0
			[ ] ADK.Web.Browser.Find("//SELECT[@id='" + "coloredDropdownForm_resultText" + str(i) +"']").Click()
			[ ] ADK.Web.Browser.TypeKeys("prob")
			[ ] ADK.Web.Browser.TypeKeys("<Down 1>")
			[ ] ADK.Web.Browser.TypeKeys("<Enter>")
			[ ] ADK.Web.Browser.Find("//SELECT[@id='" + "colorSelectorForm_textColor" + str(i) +"']").Click()
			[ ] ADK.Web.Browser.TypeKeys("whi")
			[ ] ADK.Web.Browser.TypeKeys("<Enter>")
			[ ] 
		[-] if 0<i && i<5
			[ ] ADK.Web.Browser.Find("//SELECT[@id='" + "coloredDropdownForm_resultText" + str(i) +"']").Click()
			[ ] ADK.Web.Browser.TypeKeys("indeter")
			[ ] ADK.Web.Browser.TypeKeys("<Enter>")
			[ ] ADK.Web.Browser.Find("//SELECT[@id='" + "colorSelectorForm_textColor" + str(i) +"']").Click()
			[ ] ADK.Web.Browser.TypeKeys("yellow")
			[ ] ADK.Web.Browser.TypeKeys("<Enter>")
		[+] if 4<i && i<10 
			[ ] ADK.Web.Browser.Find("//SELECT[@id='" + "coloredDropdownForm_resultText" + str(i) +"']").Click()
			[ ] ADK.Web.Browser.TypeKeys("det")
			[ ] ADK.Web.Browser.TypeKeys("<Enter>")
			[ ] ADK.Web.Browser.Find("//SELECT[@id='" + "colorSelectorForm_textColor" + str(i) +"']").Click()
			[ ] ADK.Web.Browser.TypeKeys("red")
			[ ] ADK.Web.Browser.TypeKeys("<Enter>")
		[+] if 9<i && i<13
			[ ] ADK.Web.Browser.Find("//SELECT[@id='" + "coloredDropdownForm_resultText" + str(i) +"']").Click()
			[ ] ADK.Web.Browser.TypeKeys("indeter")
			[ ] ADK.Web.Browser.TypeKeys("<Enter>")
			[ ] ADK.Web.Browser.Find("//SELECT[@id='" + "colorSelectorForm_textColor" + str(i) +"']").Click()
			[ ] ADK.Web.Browser.TypeKeys("yellow")
			[ ] ADK.Web.Browser.TypeKeys("<Enter>")
		[+] if 12<i && i<17
			[ ] ADK.Web.Browser.Find("//SELECT[@id='" + "coloredDropdownForm_resultText" + str(i) +"']").Click()
			[ ] ADK.Web.Browser.TypeKeys("indeter")
			[ ] ADK.Web.Browser.TypeKeys("<Enter>")
			[ ] ADK.Web.Browser.Find("//SELECT[@id='" + "colorSelectorForm_textColor" + str(i) +"']").Click()
			[ ] ADK.Web.Browser.TypeKeys("yellow")
			[ ] ADK.Web.Browser.TypeKeys("<Enter>")
			[ ] 
		[+] if i==18
			[ ] ADK.Web.Browser.Find("//SELECT[@id='" + "coloredDropdownForm_resultText" + str(i) +"']").Click()
			[ ] ADK.Web.Browser.TypeKeys("not det")
			[ ] ADK.Web.Browser.TypeKeys("<Enter>")
			[ ] ADK.Web.Browser.Find("//SELECT[@id='" + "colorSelectorForm_textColor" + str(i) +"']").Click()
			[ ] ADK.Web.Browser.TypeKeys("gree")
			[-] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] 
		[ ] i++
	[ ] // // //TODO start here
	[ ] i=0
	[ ] i2=0
	[-] while i<4 || i2<19
		[+] if i==0 && i2<19
			[ ] ADK.Web.Browser.Find("//BUTTON[@id='" + "addEditFormula_" + str(i2)+ "_" + str(i) +"']").DomClick()
			[-] if i2 == 0
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("is108")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is fa")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
				[ ] 
				[ ] 
			[-] else if i2 == 1
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob1")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is ne")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
				[ ] 
			[-] else if i2 == 2
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob1")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is ne")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
				[ ] 
			[-] else if i2 == 3 
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob1")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is ne")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
			[-] else if i2 == 4
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob2")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("is neg")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
			[-] else if i2 == 5
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob4 mu")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("melt peak foun")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
				[ ] 
			[-] else if i2 == 6
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob4 mu")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("melt peak foun")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
			[-] else if i2 == 7
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob4 mu")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("melt peak foun")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
			[-] else if i2 == 8
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob4 mu")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("melt peak foun")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
			[-] else if i2 == 9
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob4 melt")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("melt peak not")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
			[-] else if i2 == 10
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob1 me")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("melt peak not")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
				[ ] 
			[-] else if i2 == 11
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob2 me")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("melt peak not")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
				[ ] 
			[-] else if i2 == 12
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob3 me")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("melt peak not")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
				[ ] 
			[-] else if i2 == 13
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob4 mut ")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("melt peak foun")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
				[ ] 
			[-] else if i2 == 14
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob4 mut melt b")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("melt peak foun")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
			[-] else if i2 == 15
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob1 mu")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("melt peak foun")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
			[-] else if i2 == 16
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob2 mu")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("melt peak foun")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
			[-] else if i2 == 17
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob3 mu")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("melt peak foun")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2++
			[-] else if i2 == 18
				[ ] ADK.Web.Browser.Formula_Analyte.Click()
				[ ] ADK.Web.Browser.TypeKeys("rpob1 me")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Interp.Click()
				[ ] ADK.Web.Browser.TypeKeys("melt peak foun")
				[ ] ADK.Web.Browser.TypeKeys("<Enter>")
				[ ] ADK.Web.Browser.Formula_Ok.DomClick()
				[ ] i2=0
				[ ] i++
				[ ] 
			[ ] 
		[+] if i==1 && i2<19
			[ ] ADK.Web.Browser.RuleDialog_Add_Formula.DomClick()
			[+] if ADK.Web.Browser.Find("//BUTTON[@id='" + "addEditFormula_" + str(i2)+ "_" + str(i) +"']").Exists()
				[ ] ADK.Web.Browser.Find("//BUTTON[@id='" + "addEditFormula_" + str(i2)+ "_" + str(i) +"']").DomClick()
				[+] if i2 == 0
					[ ] i2++
				[+] else if i2 == 1
					[ ] ADK.Web.Browser.Formula_Analyte.Click()
					[ ] ADK.Web.Browser.TypeKeys("rpob2")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Interp.Click()
					[ ] ADK.Web.Browser.TypeKeys("is ne")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Ok.DomClick()
					[ ] i2++
					[ ] 
				[+] else if i2 == 2
					[ ] ADK.Web.Browser.Formula_Analyte.Click()
					[ ] ADK.Web.Browser.TypeKeys("rpob2")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Interp.Click()
					[ ] ADK.Web.Browser.TypeKeys("is ne")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Ok.DomClick()
					[ ] i2++
				[+] else if i2 == 3 
					[ ] ADK.Web.Browser.Formula_Analyte.Click()
					[ ] ADK.Web.Browser.TypeKeys("rpob3")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Interp.Click()
					[ ] ADK.Web.Browser.TypeKeys("is ne")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Ok.DomClick()
					[ ] i2++
				[+] else if i2 == 4
					[ ] ADK.Web.Browser.Formula_Analyte.Click()
					[ ] ADK.Web.Browser.TypeKeys("rpob3")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Interp.Click()
					[ ] ADK.Web.Browser.TypeKeys("is ne")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Ok.DomClick()
					[ ] i2++
				[+] else if i2 == 5
					[ ] ADK.Web.Browser.Formula_Analyte.Click()
					[ ] ADK.Web.Browser.TypeKeys("rpob1 mel")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Interp.Click()
					[ ] ADK.Web.Browser.TypeKeys("melt peak fou")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Ok.DomClick()
					[ ] i2++
					[ ] 
				[+] else if i2 == 6
					[ ] ADK.Web.Browser.Formula_Analyte.Click()
					[ ] ADK.Web.Browser.TypeKeys("rpob1 mut")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Interp.Click()
					[ ] ADK.Web.Browser.TypeKeys("melt peak found")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Ok.DomClick()
					[ ] i2++
				[+] else if i2 == 7
					[ ] ADK.Web.Browser.Formula_Analyte.Click()
					[ ] ADK.Web.Browser.TypeKeys("rpob1 me")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Interp.Click()
					[ ] ADK.Web.Browser.TypeKeys("melt peak found")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Ok.DomClick()
					[ ] i2++
				[+] else if i2 == 8
					[ ] ADK.Web.Browser.Formula_Analyte.Click()
					[ ] ADK.Web.Browser.TypeKeys("rpob1 mu")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Interp.Click()
					[ ] ADK.Web.Browser.TypeKeys("melt peak found")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Ok.DomClick()
					[ ] i2++
				[+] else if i2 == 9
					[ ] ADK.Web.Browser.Formula_Analyte.Click()
					[ ] ADK.Web.Browser.TypeKeys("rpob4 mu")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Interp.Click()
					[ ] ADK.Web.Browser.TypeKeys("melt peak not")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Ok.DomClick()
					[ ] i2++
				[+] else if i2 == 10
					[ ] ADK.Web.Browser.Formula_Analyte.Click()
					[ ] ADK.Web.Browser.TypeKeys("rpob1 mu")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Interp.Click()
					[ ] ADK.Web.Browser.TypeKeys("melt peak not")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Ok.DomClick()
					[ ] i2++
				[+] else if i2 == 11
					[ ] ADK.Web.Browser.Formula_Analyte.Click()
					[ ] ADK.Web.Browser.TypeKeys("rpob2 mu")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Interp.Click()
					[ ] ADK.Web.Browser.TypeKeys("melt peak not")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Ok.DomClick()
					[ ] i2++
				[+] else if i2 == 12
					[ ] ADK.Web.Browser.Formula_Analyte.Click()
					[ ] ADK.Web.Browser.TypeKeys("rpob3 mu")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Interp.Click()
					[ ] ADK.Web.Browser.TypeKeys("melt peak not")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Ok.DomClick()
					[ ] i2=18
				[-] else if i2 == 18
					[ ] ADK.Web.Browser.Formula_Analyte.Click()
					[ ] ADK.Web.Browser.TypeKeys("rpob2 me")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Interp.Click()
					[ ] ADK.Web.Browser.TypeKeys("melt peak foun")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Ok.DomClick()
					[ ] i2=1
					[ ] i++
					[ ] 
			[+] else
				[ ] i2++
		[+] if i==2 && i2<19
			[ ] ADK.Web.Browser.RuleDialog_Add_Formula.DomClick()
			[-] if ADK.Web.Browser.Find("//BUTTON[@id='" + "addEditFormula_" + str(i2)+ "_" + str(i) +"']").Exists()
				[ ] ADK.Web.Browser.Find("//BUTTON[@id='" + "addEditFormula_" + str(i2)+ "_" + str(i) +"']").DomClick()
				[+] if i2 == 0
					[ ] i2++
				[+] else if i2 == 1
					[ ] ADK.Web.Browser.Formula_Analyte.Click()
					[ ] ADK.Web.Browser.TypeKeys("rpob3")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Interp.Click()
					[ ] ADK.Web.Browser.TypeKeys("is ne")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Ok.DomClick()
					[ ] i2++
					[ ] 
				[+] else if i2 == 2
					[ ] ADK.Web.Browser.Formula_Analyte.Click()
					[ ] ADK.Web.Browser.TypeKeys("rpob4")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Interp.Click()
					[ ] ADK.Web.Browser.TypeKeys("is ne")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Ok.DomClick()
					[ ] i2++
					[ ] 
				[+] else if i2 == 3 
					[ ] ADK.Web.Browser.Formula_Analyte.Click()
					[ ] ADK.Web.Browser.TypeKeys("rpob4")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Interp.Click()
					[ ] ADK.Web.Browser.TypeKeys("is ne")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Ok.DomClick()
					[ ] i2++
					[ ] 
				[+] else if i2 == 4
					[ ] ADK.Web.Browser.Formula_Analyte.Click()
					[ ] ADK.Web.Browser.TypeKeys("rpob4")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Interp.Click()
					[ ] ADK.Web.Browser.TypeKeys("is ne")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Ok.DomClick()
					[ ] i2++
					[ ] 
				[+] else if i2 == 5
					[ ] ADK.Web.Browser.Formula_Analyte.Click()
					[ ] ADK.Web.Browser.TypeKeys("rpob2 melt")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Interp.Click()
					[ ] ADK.Web.Browser.TypeKeys("melt peak fo")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Ok.DomClick()
					[ ] i2++
					[ ] 
				[+] else if i2 == 6
					[ ] ADK.Web.Browser.Formula_Analyte.Click()
					[ ] ADK.Web.Browser.TypeKeys("rpob2 melt")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Interp.Click()
					[ ] ADK.Web.Browser.TypeKeys("melt peak fo")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Ok.DomClick()
					[ ] i2++
					[ ] 
				[+] else if i2 == 7
					[ ] ADK.Web.Browser.Formula_Analyte.Click()
					[ ] ADK.Web.Browser.TypeKeys("rpob2 mu")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Interp.Click()
					[ ] ADK.Web.Browser.TypeKeys("melt peak fo")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Ok.DomClick()
					[ ] i2++
					[ ] 
				[+] else if i2 == 8
					[ ] ADK.Web.Browser.Formula_Analyte.Click()
					[ ] ADK.Web.Browser.TypeKeys("rpob2 mu")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Interp.Click()
					[ ] ADK.Web.Browser.TypeKeys("melt peak fo")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Ok.DomClick()
					[ ] i2++
					[ ] 
				[+] else if i2 == 9
					[ ] ADK.Web.Browser.Formula_Analyte.Click()
					[ ] ADK.Web.Browser.TypeKeys("rpob4 mut melt B")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Interp.Click()
					[ ] ADK.Web.Browser.TypeKeys("melt peak not")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Ok.DomClick()
					[ ] i2=18
					[ ] 
				[+] else if i2 == 18
					[ ] ADK.Web.Browser.Formula_Analyte.Click()
					[ ] ADK.Web.Browser.TypeKeys("rpob3 melt ")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Interp.Click()
					[ ] ADK.Web.Browser.TypeKeys("melt peak fou")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Ok.DomClick()
					[ ] i2=1
					[ ] i++
				[ ] 
			[+] else
				[ ] i2++
		[+] if i==3 && i2<19
			[ ] ADK.Web.Browser.RuleDialog_Add_Formula.DomClick()
			[-] if ADK.Web.Browser.Find("//BUTTON[@id='" + "addEditFormula_" + str(i2)+ "_" + str(i) +"']").Exists()
				[ ] ADK.Web.Browser.Find("//BUTTON[@id='" + "addEditFormula_" + str(i2)+ "_" + str(i) +"']").DomClick()
				[-] if i2 == 0
					[ ] i2++
				[-] else if i2 == 1
					[ ] ADK.Web.Browser.Formula_Analyte.Click()
					[ ] ADK.Web.Browser.TypeKeys("is10")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Interp.Click()
					[ ] ADK.Web.Browser.TypeKeys("is pass")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Ok.DomClick()
					[ ] i2++
					[ ] 
				[-] else if i2 == 2
					[ ] ADK.Web.Browser.Formula_Analyte.Click()
					[ ] ADK.Web.Browser.TypeKeys("is10")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Interp.Click()
					[ ] ADK.Web.Browser.TypeKeys("is pass")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Ok.DomClick()
					[ ] i2++
				[-] else if i2 == 3
					[ ] ADK.Web.Browser.Formula_Analyte.Click()
					[ ] ADK.Web.Browser.TypeKeys("is10")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Interp.Click()
					[ ] ADK.Web.Browser.TypeKeys("is pass")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Ok.DomClick()
					[ ] i2++
					[ ] 
				[-] else if i2 == 4
					[ ] ADK.Web.Browser.Formula_Analyte.Click()
					[ ] ADK.Web.Browser.TypeKeys("is10")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Interp.Click()
					[ ] ADK.Web.Browser.TypeKeys("is pass")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Ok.DomClick()
					[ ] i2=18
					[ ] 
				[-] else if i2 == 18
					[ ] ADK.Web.Browser.Formula_Analyte.Click()
					[ ] ADK.Web.Browser.TypeKeys("rpob4 melt")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Interp.Click()
					[ ] ADK.Web.Browser.TypeKeys("melt peak found")
					[ ] ADK.Web.Browser.TypeKeys("<Enter>")
					[ ] ADK.Web.Browser.Formula_Ok.DomClick()
					[ ] i2=19
					[ ] i=4
			[+] else
				[ ] i2++
	[ ] 
	[ ] sleep(1)
	[-] if ADK.Web.Browser.FormulaDialog.Exists()
		[ ] ADK.Web.Browser.Formula_Cancel.DomClick()
	[ ] sleep(0.5)
	[ ] ADK.Web.Browser.RuleDialog_LastResultText.Click()
	[ ] ADK.Web.Browser.TypeKeys("indetermin")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] 
	[ ] ADK.Web.Browser.RuleDialog_LastResultColor.Click()
	[ ] ADK.Web.Browser.TypeKeys("light gr")
	[ ] ADK.Web.Browser.TypeKeys("<Enter>")
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] 
	[ ] //Curve Analysis
	[ ] ADK.Web.Browser.CurveAnalysis.DomClick()
	[ ] 
	[ ] i=0
	[-] while i<6
		[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "backgroundSettings_backgroundStart_" + str(i) +"']").SetText("9")
		[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "backgroundSettings_backgroundEnd_" + str(i) +"']").SetText("14")
		[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "backgroundSettings_backgroundMinPoints_" + str(i) +"']").SetText("3")
		[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "backgroundSettings_backgroundLookBack_" + str(i) +"']").SetText("10")
		[ ] i++
		[ ] 
	[ ] //Result Analysis and Probe Check
	[ ] ADK.Web.Browser.ResAnalysis_Prbchk.DomClick()
	[ ] i=0
	[-] while i<6
		[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "resultAnalysisSettings_ctThresholdValue_" + str(i) +"']").SetText("20.0")
		[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "resultAnalysisSettings_validMin_" + str(i) +"']").SetText("3.0")
		[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "resultAnalysisSettings_validMax_" + str(i) +"']").SetText("60.0")
		[ ] i++
	[ ] 
	[ ] //Probe Check settings
	[ ] i=0
	[-] while i<17
		[ ] 
		[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "probeCheckSettings_probeChkLowMin_" + str(i) +"']").SetText("0")
		[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "probeCheckSettings_probeChkLowMax_" + str(i) +"']").SetText("0")
		[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "probeCheckSettings_probeChkHighMin_" + str(i) +"']").SetText("0")
		[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "probeCheckSettings_probeChkHighMax_" + str(i) +"']").SetText("0")
		[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "probeCheckSettings_probeChkDelta_" + str(i) +"']").SetText("0")
		[-] if 5<i && i<8
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "probeCheckSettings_analyte.probeCheckMinRatio_" + str(i) +"']").SetText("0.25")
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "probeCheckSettings_analyte.probeCheckMaxRatio_" + str(i) +"']").SetText("4.00")
		[-] else
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "probeCheckSettings_analyte.probeCheckMinRatio_" + str(i) +"']").SetText("0.40")
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "probeCheckSettings_analyte.probeCheckMaxRatio_" + str(i) +"']").SetText("1.75")
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "probeCheckSettings_normalizationFactor_" + str(i) +"']").SetText("0")
		[ ] i++
	[ ] 
	[ ] //Melt Settings
	[ ] ADK.Web.Browser.MeltSettings.DomClick()
	[ ] ADK.Web.Browser.AutoFindMelt.DomClick()
	[ ] 
	[ ] i=0
	[-] while i<9
		[ ] ADK.Web.Browser.Find("//SELECT[@id='" + "meltSettings_slopePositive_" + str(i) +"']").Select("Negative")
		[ ] // ADK.Web.Browser.TypeKeys("n")
		[ ] // ADK.Web.Browser.TypeKeys("<Enter>")
		[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "meltSettings_baselineNumPoints_" + str(i) +"']").SetText("4")
		[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "meltSettings_pointsAroundPeak_" + str(i) +"']").SetText("5")
		[ ] 
		[+] if i == 0
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "meltSettings_baselineStartTemp_" + str(i) +"']").SetText("56.0")
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "meltSettings_baselineLookBack_" + str(i) +"']").SetText("5.0")
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "meltSettings_peakThreshold_" + str(i) +"']").SetText("10.0")
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "meltSettings_peakRangeMin_" + str(i) +"']").SetText("67.4")
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "meltSettings_peakRangeMax_" + str(i) +"']").SetText("72.0")
			[ ] i++
		[+] else if i == 1
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "meltSettings_baselineStartTemp_" + str(i) +"']").SetText("52.0")
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "meltSettings_baselineLookBack_" + str(i) +"']").SetText("5.0")
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "meltSettings_peakThreshold_" + str(i) +"']").SetText("10.0")
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "meltSettings_peakRangeMin_" + str(i) +"']").SetText("71.4")
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "meltSettings_peakRangeMax_" + str(i) +"']").SetText("76.0")
			[ ] i++
		[+] else if i == 2
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "meltSettings_baselineStartTemp_" + str(i) +"']").SetText("52.0")
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "meltSettings_baselineLookBack_" + str(i) +"']").SetText("5.0")
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "meltSettings_peakThreshold_" + str(i) +"']").SetText("10.0")
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "meltSettings_peakRangeMin_" + str(i) +"']").SetText("74.2")
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "meltSettings_peakRangeMax_" + str(i) +"']").SetText("77.0")
			[ ] i++
		[+] else if i == 3
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "meltSettings_baselineStartTemp_" + str(i) +"']").SetText("57.6")
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "meltSettings_baselineLookBack_" + str(i) +"']").SetText("5.0")
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "meltSettings_peakThreshold_" + str(i) +"']").SetText("10.0")
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "meltSettings_peakRangeMin_" + str(i) +"']").SetText("65.0")
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "meltSettings_peakRangeMax_" + str(i) +"']").SetText("69.0")
			[ ] i++
		[+] else if i == 4
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "meltSettings_baselineStartTemp_" + str(i) +"']").SetText("56.0")
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "meltSettings_baselineLookBack_" + str(i) +"']").SetText("5.0")
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "meltSettings_peakThreshold_" + str(i) +"']").SetText("10.0")
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "meltSettings_peakRangeMin_" + str(i) +"']").SetText("61.0")
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "meltSettings_peakRangeMax_" + str(i) +"']").SetText("67.2")
			[ ] i++
		[+] else if i == 5
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "meltSettings_baselineStartTemp_" + str(i) +"']").SetText("52.0")
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "meltSettings_baselineLookBack_" + str(i) +"']").SetText("5.0")
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "meltSettings_peakThreshold_" + str(i) +"']").SetText("10.0")
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "meltSettings_peakRangeMin_" + str(i) +"']").SetText("64.0")
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "meltSettings_peakRangeMax_" + str(i) +"']").SetText("71.2")
			[ ] i++
		[+] else if i == 6
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "meltSettings_baselineStartTemp_" + str(i) +"']").SetText("52.0")
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "meltSettings_baselineLookBack_" + str(i) +"']").SetText("5.0")
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "meltSettings_peakThreshold_" + str(i) +"']").SetText("10.0")
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "meltSettings_peakRangeMin_" + str(i) +"']").SetText("69.0")
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "meltSettings_peakRangeMax_" + str(i) +"']").SetText("74.0")
			[ ] i++
		[+] else if i == 7
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "meltSettings_baselineStartTemp_" + str(i) +"']").SetText("65.0")
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "meltSettings_baselineLookBack_" + str(i) +"']").SetText("2.5")
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "meltSettings_peakThreshold_" + str(i) +"']").SetText("10.0")
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "meltSettings_peakRangeMin_" + str(i) +"']").SetText("70.0")
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "meltSettings_peakRangeMax_" + str(i) +"']").SetText("76.0")
			[ ] i++
			[ ] 
		[+] else if i == 8
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "meltSettings_baselineStartTemp_" + str(i) +"']").SetText("52.0")
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "meltSettings_baselineLookBack_" + str(i) +"']").SetText("2.5")
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "meltSettings_peakThreshold_" + str(i) +"']").SetText("8.0")
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "meltSettings_peakRangeMin_" + str(i) +"']").SetText("59.0")
			[ ] ADK.Web.Browser.Find("//INPUT[@id='" + "meltSettings_peakRangeMax_" + str(i) +"']").SetText("64.5")
			[ ] i++
		[ ] 
		[ ] ADK.Web.Browser.Save_Assay.DomClick()
		[ ] 
		[ ] ADK.Web.Browser.OkButton.DomClick()
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
	[ ] ADK.Web.Browser.NewAssay_Name.SetText("DEMO_Q1_2Targs3")
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
[+] IMPORT_ASSAYS()
	[ ] LIST OF STRING lsArgs
	[ ] lsArgs = GetArgs ( )
	[ ] STRING sProjectName = ''
	[ ] STRING sPathName = '' 
	[ ] STRING sTabName = '' 
	[ ] 
	[ ] sProjectName = lsArgs[1]
	[ ] sPathName = lsArgs[2]
	[ ] sTabName = lsArgs[3]
	[ ] // print("Processing Import assays for: {sPathName}")
	[ ] // print("From tab: {sTabName}")
	[ ] 
	[ ] print ("Retrieving all assays needed to execute {sProjectName}")
	[ ] //MyStartManageAssays()
	[ ] // sleep(3)
	[ ] ImportAssayFiles (sPathName, sTabName)
	[ ] // MyExit()
[ ] 
[+] EXPORT_QUANT_REPORT()
	[ ] ADK.Web.Browser.Navbar_Burger.DomClick()
	[ ] ADK.Web.Browser.Burger_DefineAssay.DomClick()
	[ ] ADK.Web.Browser.Filter_By.DomClick()
	[ ] ADK.Web.Browser.AssayName.DomClick()
	[ ] ADK.Web.Browser.SearchFilter_Textfield.SetText("Demo_q")
	[ ] ADK.Web.Browser.ActionMenu.DomClick()
	[ ] ADK.Web.Browser.ActionMenu_Report.DomClick()
	[ ] ADK.Web.Browser.Export_Report.DomClick()
	[ ] 
	[ ] ADK.SaveAs.WinSave.Click()
	[ ] 
	[ ] ADK.Web.Browser.Navbar_Burger.DomClick()
	[ ] ADK.Web.Browser.Burger_DefineAssay.DomClick()
[ ] 
[+] EXPORT_RATIO_REPORT()
	[ ] ADK.Web.Browser.Navbar_Burger.DomClick()
	[ ] ADK.Web.Browser.Burger_DefineAssay.DomClick()
	[ ] ADK.Web.Browser.Filter_By.DomClick()
	[ ] ADK.Web.Browser.AssayName.DomClick()
	[ ] ADK.Web.Browser.SearchFilter_Textfield.SetText("Demo_%RATIO_Integration")
	[ ] ADK.Web.Browser.ActionMenu.DomClick()
	[ ] ADK.Web.Browser.ActionMenu_Report.DomClick()
	[ ] ADK.Web.Browser.Export_Report.DomClick()
	[ ] 
	[ ] ADK.SaveAs.WinSave.Click()
	[ ] 
[ ] 
[+] DEFINE_CARTRIDGES()
	[ ] STRING s1
	[ ] STRING s2
	[ ] STRING s3
	[ ] STRING value
	[ ] STRING value1
	[ ] Int i
	[ ] Int i2
	[ ] Int i3
	[ ] Int i4
	[ ] STRING sMsg // used to capture that juicy warning and error text
	[ ] STRING sMsg2 // because you can never have too many pokeballs
	[ ] 
	[ ] 
	[ ] ADK.Web.Browser.Navbar_Burger.DomClick()
	[ ] ADK.Web.Browser.Define_Cartridge.DomClick()
	[ ] // 
	[ ] //Table Headers
	[ ] sleep(.5)
	[ ] ADK.Web.Browser.Cartridge_Name.DomClick()
	[ ] ADK.Web.Browser.Cartridge_Version.DomClick()
	[ ] ADK.Web.Browser.Created_Date.DomClick()
	[ ] ADK.Web.Browser.Cartridge_Name.DomClick()
	[ ] ADK.Web.Browser.Cartridge_Version.DomClick()
	[ ] ADK.Web.Browser.Created_Date.DomClick()
	[ ] 
	[ ] //Search Filter stuff
	[ ] ADK.Web.Browser.Filter_By.DomClick()
	[ ] ADK.Web.Browser.CartridgeName.DomClick()
	[ ] ADK.Web.Browser.AddSearchFilter.DomClick()
	[ ] ADK.Web.Browser.Filter_By1.DomClick()
	[ ] ADK.Web.Browser.CreatedDate.DomClick()
	[ ] ADK.Web.Browser.AddSearchFilter.DomClick()
	[ ] ADK.Web.Browser.Filter_By2.DomClick()
	[ ] ADK.Web.Browser.CartridgeVersion.DomClick()
	[ ] ADK.Web.Browser.To_Date.DomClick()
	[ ] 
	[ ] //ADK.Web.Browser.Month_Year.DomClick()
	[ ] //The month year button is currently defined with a random number, so use the month
	[ ] // this section will need to be edited to the apporpriate months everytime you run it for now.
	[ ] ADK.Web.Browser.Calendar_Today.DomClick()
	[ ] ADK.Web.Browser.From_Date.DomClick()
	[ ] ADK.Web.Browser.Prev_MonthYear.DomClick(4)
	[ ] ADK.Web.Browser.D18.DomClick()
	[ ] ADK.Web.Browser.Version_Number.SetText("1")
	[ ] ADK.Web.Browser.RemoveSearchFilter2.DomClick()
	[ ] // 
	[ ] //New Cartridge
	[ ] //TODO try to create an Array to accomplish this, for now lets just make it work.
	[ ] ADK.Web.Browser.Add_Cartridge.DomClick()
	[ ] ADK.Web.Browser.New_Cartridge_Name.SetText("THISNAMEISTOOLONGFORTHISFIELDOMGWHATSHAPPENING")
	[ ] sMsg = ADK.Web.Browser.Cart_Name_Error.GetText()
	[ ] print ("Error due to exceeding character limit states:", sMsg)
	[ ] ADK.Web.Browser.New_Cartridge_Name.SetText("DEMO_DELETEME")
	[ ] 
	[ ] //chamber default value check
	[+] if ADK.Web.Browser.Version_Num.GetText() == "1"
		[ ] print ("Version number of cartridge is the correct default value of 1.")
	[+] else
		[ ] print ("The version number is something other then 1 an error has occured.")
	[ ] 
	[ ] value = ADK.Web.Browser.Syringe_Max_Vol.GetText()
	[+] if value == "1"
		[ ] print ("Default Value is present:", value)
		[ ] ADK.Web.Browser.Syringe_Max_Vol.SetText("2100")
		[-] if ADK.Web.Browser.Syringe_Max_Error.Exists()
			[ ] value1 =ADK.Web.Browser.Syringe_Max_Error.GetText()
			[ ] print ("Error text if value is out of range displayed, it reads: ", value1)
			[ ] ADK.Web.Browser.Syringe_Max_Vol.SetText("1")
	[+] else
		[ ] print ("Value is different then the expected result")
		[ ] 
	[ ] 
	[ ] value = ADK.Web.Browser.Syringe_Min_Transfer.GetText()
	[+] if value == "1"
		[ ] print ("Default Value is present:", value)
		[ ] ADK.Web.Browser.Syringe_Min_Transfer.SetText("2100")
		[-] if ADK.Web.Browser.Syringe_Min_Error.Exists()
			[ ] value1 = ADK.Web.Browser.Syringe_Min_Error.GetText()
			[ ] print ("Error text if value is out of range displayed, it reads: ", value1)
			[ ] ADK.Web.Browser.Syringe_Min_Transfer.SetText("1")
	[+] else 
		[ ] print ("Value is different then the expected result")
	[ ] 
	[ ] value = ADK.Web.Browser.Plunger_Strip_Position.GetText()
	[+] if value == "55,000"
		[ ] print ("Default Value is present:", value)
		[ ] ADK.Web.Browser.Plunger_Strip_Position.SetText("110000")
		[-] if ADK.Web.Browser.Plunger_Strip_Error.Exists()
			[ ] value1 = ADK.Web.Browser.Plunger_Strip_Error.GetText()
			[ ] print ("Error text if value is out of range displayed, it reads: ", value1)
			[ ] ADK.Web.Browser.Plunger_Strip_Position.Settext("55000")
	[+] else 
		[ ] print ("Value is different then the expected result")
	[ ] 
	[ ] value = ADK.Web.Browser.Cartridge_Foot_Height.GetText()
	[+] if value == "2,500"
		[ ] print ("Default Value is present:", value)
		[ ] ADK.Web.Browser.Cartridge_Foot_Height.SetText("11000")
		[-] if ADK.Web.Browser.Cart_Foot_Height_Error.Exists()
			[ ] value1 = ADK.Web.Browser.Cart_Foot_Height_Error.GetText()
			[ ] print ("Error text if value is out of range displayed, it reads: ", value1)
			[ ] ADK.Web.Browser.Cartridge_Foot_Height.Settext("2500")
	[+] else 
		[ ] print ("Value is different then the expected result")
	[ ] 
	[ ] value = ADK.Web.Browser.Tube_Volume.GetText()
	[+] if value == "1"
		[ ] print ("Default Value is present:", value)
		[ ] ADK.Web.Browser.Tube_Volume.SetText("10000")
		[-] if ADK.Web.Browser.Tube_Vol_Error.Exists()
			[ ] value1 = ADK.Web.Browser.Tube_Vol_Error.GetText()
			[ ] print ("Error text if value is out of range displayed, it reads: ", value1)
			[ ] ADK.Web.Browser.Tube_Volume.SetText("1")
	[+] else 
		[ ] print ("Value is different then the expected result")
	[ ] 
	[ ] value = ADK.Web.Browser.Filter_Path.GetText()
	[+] if value == "0"
		[ ] print ("Default Value is present:", value)
		[ ] ADK.Web.Browser.Filter_Path.SetText("100000")
		[-] if ADK.Web.Browser.Filter_Path_Error.Exists()
			[ ] value1 = ADK.Web.Browser.Filter_Path_Error.GetText()
			[ ] print ("Error text if value is out of range displayed, it reads: ", value1)
			[ ] ADK.Web.Browser.Filter_Path.SetText("0")
	[+] else 
		[ ] print ("Value is different then the expected result")
	[ ] 
	[ ] value = ADK.Web.Browser.Tube_Syringe_Path.GetText()
	[+] if value == "0"
		[ ] print ("Default Value is present:", value)
		[ ] ADK.Web.Browser.Tube_Syringe_Path.SetText("100000")
		[-] if ADK.Web.Browser.Tube_Syringe_Path_Error.Exists()
			[ ] value1 = ADK.Web.Browser.Tube_Syringe_Path_Error.GetText()
			[ ] print ("Error text if value is out of range displayed, it reads: ", value1)
			[ ] ADK.Web.Browser.Tube_Syringe_Path.SetText("0")
	[+] else 
		[ ] print ("Value is different then the expected result")
	[ ] 
	[ ] value = ADK.Web.Browser.Direct_Flow_Rate_Min.GetText()
	[+] if value == "1"
		[ ] print ("Default Value is present:", value)
		[ ] ADK.Web.Browser.Direct_Flow_Rate_Min.SetText("100000")
		[-] if ADK.Web.Browser.Direct_Flow_Rate_Min_Error.Exists()
			[ ] value1 = ADK.Web.Browser.Direct_Flow_Rate_Min_Error.GetText()
			[ ] print ("Error text if value is out of range displayed, it reads: ", value1)
			[ ] ADK.Web.Browser.Direct_Flow_Rate_Min.SetText("1")
	[+] else 
		[ ] print ("Value is different then the expected result")
	[ ] 
	[ ] value = ADK.Web.Browser.Filter_Flow_Rate_Min.GetText()
	[+] if value == "1"
		[ ] print ("Default Value is present:", value)
		[ ] ADK.Web.Browser.Filter_Flow_Rate_Min.SetText("100000")
		[-] if ADK.Web.Browser.Filter_Flow_Rate_Min_Error.Exists()
			[ ] value1 = ADK.Web.Browser.Filter_Flow_Rate_Min_Error.GetText()
			[ ] print ("Error text if value is out of range displayed, it reads: ", value1)
			[ ] ADK.Web.Browser.Filter_Flow_Rate_Min.SetText("1")
	[+] else 
		[ ] print ("Value is different then the expected result")
	[ ] 
	[ ] value = ADK.Web.Browser.Initial_Asp_Vol.GetText()
	[+] if value == "1"
		[ ] print ("Default Value is present:", value)
		[ ] ADK.Web.Browser.Initial_Asp_Vol.SetText("1000000")
		[-] if ADK.Web.Browser.Initial_Asp_Error.Exists()
			[ ] value1 = ADK.Web.Browser.Initial_Asp_Error.GetText()
			[ ] print ("Error text if value is out of range displayed, it reads: ", value1)
			[ ] ADK.Web.Browser.Initial_Asp_Vol.SetText("1")
	[+] else 
		[ ] print ("Value is different then the expected result")
	[ ] 
	[ ] value = ADK.Web.Browser.uL_Per_Rev.GetText()
	[+] if value == "1.0"
		[ ] print ("Default Value is present:", value)
		[ ] ADK.Web.Browser.uL_Per_Rev.SetText("1000000")
		[-] if ADK.Web.Browser.uL_Per_Rev_Error.Exists()
			[ ] value1 = ADK.Web.Browser.uL_Per_Rev_Error.GetText()
			[ ] print ("Error text if value is out of range displayed, it reads: ", value1)
			[ ] ADK.Web.Browser.uL_Per_Rev.SetText("1.0")
	[+] else 
		[ ] print ("Value is different then the expected result")
	[ ] 
	[ ] value = ADK.Web.Browser.Min_Press.GetText()
	[+] if value == "-200"
		[ ] print ("Default Value is present:", value)
		[ ] ADK.Web.Browser.Min_Press.SetText("1000000")
		[-] if ADK.Web.Browser.Min_Press_Error.Exists()
			[ ] value1 = ADK.Web.Browser.Min_Press_Error.GetText()
			[ ] print ("Error text if value is out of range displayed, it reads: ", value1)
			[ ] ADK.Web.Browser.Min_Press.SetText("-200")
	[+] else 
		[ ] print ("Value is different then the expected result")
	[ ] 
	[ ] value = ADK.Web.Browser.ADC_To_PSI.GetText()
	[+] if value == "26.2"
		[ ] print ("Default Value is present:", value)
		[ ] ADK.Web.Browser.ADC_To_PSI.SetText("100000")
		[-] if ADK.Web.Browser.ADC_To_PSI_Error.Exists()
			[ ] value1 = ADK.Web.Browser.ADC_To_PSI_Error.GetText()
			[ ] print ("Error text if value is out of range displayed, it reads: ", value1)
			[ ] ADK.Web.Browser.ADC_To_PSI.SetText("26.2")
	[+] else 
		[ ] print ("Value is different then the expected result")
	[ ] 
	[ ] value = ADK.Web.Browser.Syringe_Max_Transfer_Vol.GetText()
	[+] if value == "1"
		[ ] print ("Default Value is present:", value)
		[ ] ADK.Web.Browser.Syringe_Max_Transfer_Vol.SetText("100000")
		[-] if ADK.Web.Browser.Syringe_Max_Transfer_Error.Exists()
			[ ] value1 = ADK.Web.Browser.Syringe_Max_Transfer_Error.GetText()
			[ ] print ("Error text if value is out of range displayed, it reads: ", value1)
			[ ] ADK.Web.Browser.Syringe_Max_Transfer_Vol.SetText("1")
	[+] else 
		[ ] print ("Value is different then the expected result")
	[ ] 
	[ ] value = ADK.Web.Browser.Plunger_Pickup_Position.GetText()
	[+] if value == "2,000"
		[ ] print ("Default Value is present:", value)
		[ ] ADK.Web.Browser.Plunger_Pickup_Position.SetText("100000")
		[-] if ADK.Web.Browser.Plunger_Pickup_Error.Exists()
			[ ] value1 = ADK.Web.Browser.Plunger_Pickup_Error.GetText()
			[ ] print ("Error text if value is out of range displayed, it reads: ", value1)
			[ ] ADK.Web.Browser.Plunger_Pickup_Position.SetText("2000")
	[+] else 
		[ ] print ("Value is different then the expected result")
	[ ] 
	[ ] value = ADK.Web.Browser.Tube_Volume_Press.GetText()
	[+] if value == "1"
		[ ] print ("Default Value is present:", value)
		[ ] ADK.Web.Browser.Tube_Volume_Press.SetText("1000000")
		[-] if ADK.Web.Browser.Tube_Volume_Press_Error.Exists()
			[ ] value1 = ADK.Web.Browser.Tube_Volume_Press_Error.GetText()
			[ ] print ("Error text if value is out of range displayed, it reads: ", value1)
			[ ] ADK.Web.Browser.Tube_Volume_Press.SetText("1")
	[+] else 
		[ ] print ("Value is different then the expected result")
	[ ] 
	[ ] value = ADK.Web.Browser.Direct_Path.GetText()
	[-] if value == "0"
		[ ] print ("Default Value is present:", value)
		[ ] ADK.Web.Browser.Direct_Path.SetText("1000000")
		[-] if ADK.Web.Browser.Direct_Path_Error.Exists()
			[ ] value1 = ADK.Web.Browser.Direct_Path_Error.GetText()
			[ ] print ("Error text if value is out of range displayed, it reads: ", value1)
			[ ] ADK.Web.Browser.Direct_Path.SetText("0")
	[-] else 
		[ ] print ("Value is different then the expected result")
	[ ] 
	[ ] value = ADK.Web.Browser.Tube_Chamber_Path.GetText()
	[+] if value == "0"
		[ ] print ("Default Value is present:", value)
		[ ] ADK.Web.Browser.Tube_Chamber_Path.SetText("1000000")
		[-] if ADK.Web.Browser.Tube_Chamber_Path_Error.Exists()
			[ ] value1 = ADK.Web.Browser.Tube_Chamber_Path_Error.GetText()
			[ ] print ("Error text if value is out of range displayed, it reads: ", value1)
			[ ] ADK.Web.Browser.Tube_Chamber_Path.SetText("0")
			[ ] 
	[+] else 
		[ ] print ("Value is different then the expected result")
	[ ] 
	[ ] value = ADK.Web.Browser.Direct_Flow_Rate_Max.GetText()
	[+] if value == "1"
		[ ] print ("Default Value is present:", value)
		[ ] ADK.Web.Browser.Direct_Flow_Rate_Max.SetText("1000000")
		[-] if ADK.Web.Browser.Direct_Flow_Rate_Max_Error.Exists()
			[ ] value1 = ADK.Web.Browser.Direct_Flow_Rate_Max_Error.GetText()
			[ ] print ("Error text if value is out of range displayed, it reads: ", value1)
			[ ] ADK.Web.Browser.Direct_Flow_Rate_Max.SetText("1")
	[+] else 
		[ ] print ("Value is different then the expected result")
	[ ] 
	[ ] value = ADK.Web.Browser.Filter_Flow_Rate_Max.GetText()
	[+] if value == "1"
		[ ] print ("Default Value is present:", value)
		[ ] ADK.Web.Browser.Filter_Flow_Rate_Max.SetText("1000000")
		[-] if ADK.Web.Browser.Filter_Flow_Rate_Max_Error.Exists()
			[ ] value1 = ADK.Web.Browser.Filter_Flow_Rate_Max_Error.GetText()
			[ ] print ("Error text if value is out of range displayed, it reads: ", value1)
			[ ] ADK.Web.Browser.Filter_Flow_Rate_Max.SetText("1")
	[+] else 
		[ ] print ("Value is different then the expected result")
	[ ] 
	[ ] value = ADK.Web.Browser.Initial_Aspirate_Flow_Rate.GetText()
	[+] if value == "1"
		[ ] print ("Default Value is present:", value)
		[ ] ADK.Web.Browser.Initial_Aspirate_Flow_Rate.SetText("1000000")
		[-] if ADK.Web.Browser.Initial_Aspirate_Flow_Error.Exists()
			[ ] value1 = ADK.Web.Browser.Initial_Aspirate_Flow_Error.GetText()
			[ ] print ("Error text if value is out of range displayed, it reads: ", value1)
			[ ] ADK.Web.Browser.Initial_Aspirate_Flow_Rate.SetText("1")
	[+] else 
		[ ] print ("Value is different then the expected result")
	[ ] 
	[ ] value = ADK.Web.Browser.Max_Press.GetText()
	[+] if value == "200"
		[ ] print ("Default Value is present:", value)
		[ ] ADK.Web.Browser.Max_Press.SetText("1000000")
		[-] if ADK.Web.Browser.Max_Press_Error.Exists()
			[ ] value1 = ADK.Web.Browser.Max_Press_Error.GetText()
			[ ] print ("Error text if value is out of range displayed, it reads: ", value1)
			[ ] ADK.Web.Browser.Max_Press.SetText("200")
	[+] else 
		[ ] print ("Value is different then the expected result")
	[ ] 
	[ ] //Chamber and Paths
	[ ] ADK.Web.Browser.Chamber_Path.DomClick()
	[ ] //creates 15 chambers and paths and fills them with default/acceptable values
	[ ] s1 = "chambers_minVolume_"
	[ ] s2 = "chambers_maxVolume_"
	[ ] i = 0
	[-] while i < 15
		[ ] i2 = RandInt(0,15000)
		[ ] i3 = RandInt(15000, 25000) 
		[ ] ADK.Web.Browser.Add_Chambers.DomClick()
		[ ] ADK.Web.Browser.Find("//INPUT[@id='" + s1 + str(i)+"']").SetText("{i2}")
		[ ] ADK.Web.Browser.Find("//INPUT[@id='" + s2 + str(i)+"']").SetText("{i3}")
		[ ] 
		[ ] i++
	[ ] s1 = "pathChamberNum_"
	[ ] s2 = "paths_type_"
	[ ] s3 = "angularOffset_"
	[ ] i=0
	[+] while i <15
		[ ] i2 = RandInt(0,1)
		[ ] i3 = RandInt(0,350)
		[ ] ADK.Web.Browser.Add_Paths.DomClick()
		[ ] ADK.Web.Browser.Find("//SELECT[@name='" + s1 + str(i)+"']").TypeKeys("<Down {i+1}>")
		[ ] ADK.Web.Browser.Find("//SELECT[@id='" + s2 + str(i)+"']").TypeKeys("<Down {i2}>")
		[ ] ADK.Web.Browser.Find("//INPUT[@name='" + s3 + str(i)+"']").SetText("{i3}")
		[ ] 
		[ ] i++
	[ ] //Generate Errors for Tube chamber matching Air chamber and overflow chamber
	[ ] ADK.Web.Browser.Save_Cartridge.DomClick()
	[ ] sMsg = ADK.Web.Browser.Dialog_text.GetText()
	[ ] print (" Warning due to Tube Chamber equally Air Chamber and Overflow Chamber states:", sMsg)
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] ADK.Web.Browser.Tube_Chamber.DomClick()
	[ ] ADK.Web.Browser.TypeKeys("<Down 3>")
	[ ] ADK.Web.Browser.Air_Chamber.TypeKeys("<Down 1>")
	[ ] ADK.Web.Browser.Overflow_Chamber.TypeKeys("<Down 5>")
	[ ] 
	[ ] //Import Image
	[ ] ADK.Web.Browser.Import_Image.DomClick()
	[ ] ADK.OpenFile.FileNameTextField.SetText("11chamberB.jpg")
	[ ] ADK.OpenFile.TypeKeys("<ENTER>")
	[ ] 
	[ ] //Save Cartridge
	[ ] ADK.Web.Browser.Save_Cartridge.DomClick()
	[ ] sMsg = ADK.Web.Browser.Dialog_text.GetText()
	[ ] print ("Succesful cartridge creation dialog appears with text: ", sMsg)
	[ ] ADK.Web.Browser.OkButton.DomClick()
	[ ] 
	[ ] //Return to define cartridge workspace
	[ ] ADK.Web.Browser.Navbar_Burger.DomClick()
	[ ] ADK.Web.Browser.Define_Cartridge.DomClick()
	[ ] ADK.Web.Browser.SearchFilter_Textfield.SetText("Delete")
	[ ] ADK.Web.Browser.Cartridge_Action_Menu.DomClick()
	[ ] ADK.Web.Browser.Edit_Cartridge.DomClick()
	[ ] 
	[ ] //Duplicate cartridge
	[ ] ADK.Web.Browser.Navbar_Burger.DomClick()
	[ ] ADK.Web.Browser.Define_Cartridge.DomClick()
	[ ] ADK.Web.Browser.SearchFilter_Textfield.SetText("Delete")
	[ ] ADK.Web.Browser.Cartridge_Action_Menu.DomClick()
	[ ] ADK.Web.Browser.Dupl_Cartridge.DomClick()
	[ ] ADK.Web.Browser.Dupl_Cart_Name.SetText("DEMO_DeleteMe2")
	[ ] ADK.Web.Browser.Dupl_Submit.DomClick()
	[ ] 
	[ ] //Export cartridge
	[ ] ADK.Web.Browser.Navbar_Burger.DomClick()
	[ ] ADK.Web.Browser.Define_Cartridge.DomClick()
	[ ] ADK.Web.Browser.SearchFilter_Textfield.SetText("Delete")
	[ ] ADK.Web.Browser.Cartridge_Action_Menu.DomClick()
	[ ] ADK.Web.Browser.Export_Cartridge.DomClick()
	[ ] ADK.SaveAs.WinSave.Click()
	[ ] 
	[ ] //Generate Report
	[ ] ADK.Web.Browser.Navbar_Burger.DomClick()
	[ ] ADK.Web.Browser.Define_Cartridge.DomClick()
	[ ] ADK.Web.Browser.SearchFilter_Textfield.SetText("Delete")
	[ ] ADK.Web.Browser.Cartridge_Action_Menu.DomClick()
	[ ] ADK.Web.Browser.Report_Cartridge.DomClick()
	[ ] ADK.SaveAs.WinSave.Click()
[ ] 
[+] CREATE_USERS()
	[ ] STRING sMsg
	[ ] BOOLEAN bFound
	[ ] 
	[ ] //Get to Datamanagement workspace
	[ ] ADK.Web.Browser.Navbar_Burger.DomClick()
	[ ] ADK.Web.Browser.Burger_UserManagement.DomClick()
	[ ] ADK.Web.Browser.Add_User.DomClick()
	[ ] 
	[ ] 
	[ ] //Users
	[ ] ADK.Web.Browser.UserForm_Username.SetText('jasonbgreen')
	[ ] ADK.Web.Browser.UserForm_Fullname.SetText('Jason Bryan Green')
	[ ] ADK.Web.Browser.UserForm_Pass.SetText('asdfasdf1')
	[ ] ADK.Web.Browser.UserForm_ConfirmPass.SetText('asdfasdf1')
	[ ] 
	[ ] ADK.Web.Browser.SaveButton.DomClick()
	[ ] ADK.Web.Browser.Add_User.DomClick()
	[ ] ADK.Web.Browser.UserForm_Username.SetText('Batman')
	[ ] ADK.Web.Browser.UserForm_Fullname.SetText('Bruce Wayne')
	[ ] ADK.Web.Browser.UserForm_Pass.SetText('Martha')
	[ ] ADK.Web.Browser.UserForm_ConfirmPass.SetText('Martha')
	[ ] 
	[ ] ADK.Web.Browser.SaveButton.DomClick()
	[ ] ADK.Web.Browser.Add_User.DomClick()
	[ ] ADK.Web.Browser.UserForm_Username.SetText('Superman')
	[ ] ADK.Web.Browser.UserForm_Fullname.SetText('Clark Kent')
	[ ] ADK.Web.Browser.UserForm_Pass.SetText('Martha')
	[ ] ADK.Web.Browser.UserForm_ConfirmPass.SetText('Martha')
	[ ] 
	[ ] ADK.Web.Browser.SaveButton.DomClick()
	[ ] 
	[ ] 
[ ] 
[+] TEST_SUMMARY()
	[ ] STRING sampleID = "BCR-ABL 082712160745" // sample ID for the test to be generated throughout
	[ ] 
	[ ] GenerateTestSummary(sampleID, "Test Summary", TRUE, TRUE)
	[ ] 
	[ ] CloseADS(ASK)
	[ ] StartCurveFitADS(ASK)
	[ ] LoginCepheid(ASK)
	[ ] 
	[ ] GenerateTestSummaryCurveFit(sampleID, TRUE)
	[ ] 
	[ ] CloseADS(ASK)
	[ ] StartEngrADS(ASK)
	[ ] LoginCepheid(ASK)
	[ ] 
	[ ] GenerateTestSummary(sampleID, "Engr", TRUE, TRUE)
	[ ] 
	[ ] CloseADS(ASK)
	[ ] StartQuantADS(ASK)
	[ ] LoginCepheid(ASK)
	[ ] 
	[ ] GenerateTestSummary(sampleID, "show_target_quant_values", TRUE, TRUE)
	[ ] 
	[ ] CloseADS(ASK)
	[ ] StartResCorrOutputADS(ASK)
	[ ] LoginCepheid(ASK)
	[ ] 
	[ ] GenerateTestSummary(sampleID, "resCorrOutput", TRUE, TRUE)
	[ ] 
	[ ] CloseADS(ASK)
	[ ] StartSummaryCalcADS(ASK)
	[ ] LoginCepheid(ASK)
	[ ] 
	[ ] GenerateTestSummary(sampleID, "summaryCalc", TRUE, TRUE)
	[ ] 
	[ ] CloseADS(ASK)
	[ ] StartSummaryCalcRecalcADS(ASK)
	[ ] LoginCepheid(ASK)
	[ ] 
	[ ] GenerateTestSummary(sampleID, "summaryCalcRecalc", TRUE, TRUE)
	[ ] 
[ ] 
[+] TEST_DUPLICATION()
	[ ] ASK.SetActive()
	[ ] STRING sampleID = "Reference"
	[ ] 
	[ ] // 7.4.1 Single Test Duplication
	[ ] ASK.Web.Browser.DropDownMenu1.Click()
	[ ] ASK.Web.Browser.Filter_By_SampleID.Click()
	[ ] ASK.Web.Browser.SearchFilter_Textfield0.SetText(sampleID)
	[ ] ASK.Web.Browser.SelectCheck1.Check()
	[ ] ASK.Web.Browser.DuplicateSelectedTests.Click()
	[ ] ASK.Web.Browser.CancelSelectTestButton.Click()
	[ ] ASK.Web.Browser.DropDownMenu1.Click()
	[ ] ASK.Web.Browser.Filter_By_SampleID.Click()
	[ ] ASK.Web.Browser.SearchFilter_Textfield0.SetText(sampleID)
	[ ] ASK.Web.Browser.TestTable_duplicateB.Click()
	[ ] ASK.Web.Browser.CancelSelectTestButton.Click()
	[ ] 
	[ ] // 7.4.2 Multiple Tests Duplication
	[ ] ASK.Web.Browser.DropDownMenu1.Click()
	[ ] ASK.Web.Browser.Filter_By_Assay.Click()
	[ ] ASK.Web.Browser.SearchFilter_Textfield0.SetText("REFERENCE2")
	[ ] ASK.Web.Browser.SelectCheck1.Check()
	[ ] ASK.Web.Browser.SelectCheck2.Check()
	[ ] ASK.Web.Browser.DuplicateSelectedTests.Click()
	[ ] ASK.Web.Browser.CancelSelectTestButton.Click()
	[ ] 
	[ ] // 7.4.3 Breadcrumb Bar
	[ ] ASK.Web.Browser.DropDownMenu1.Click()
	[ ] ASK.Web.Browser.Filter_By_SampleID.Click()
	[ ] ASK.Web.Browser.SearchFilter_Textfield0.SetText(sampleID)
	[ ] ASK.Web.Browser.SelectCheck1.Check()
	[ ] ASK.Web.Browser.DuplicateSelectedTests.Click()
	[+] if !ASK.Web.Browser.Breadbar_Duplicate.exists()
		[ ] LogError("Breadcrumb bar -- Duplicate selected tests does not exist")
	[ ] ASK.Web.Browser.Breadbar_Home.DomClick()
	[ ] 
	[ ] // 7.4.4 Copy Assay as a Research Assay
	[ ] 	// TODO: Figure out requirements
	[ ] 
	[ ] // 7.4.5 Duplicate the selected test(s) or all tests
	[ ] FilterSampleID(sampleID)
	[ ] STRING sDuplicateSelectedTestsRadio = ASK.Web.Browser.DuplicateSelectedTestsRadio.GetText()
	[ ] STRING sDuplicateSelectedAssayTestsRadio = ASK.Web.Browser.DuplicateSelectedAssayTestsRadio.GetText()
	[-] // if !sDuplicateSelectedTestsRadio.matches("Duplicate the selected test(s) for assay")
		[ ] // LogError("Duplicate selected tests radio button text is not the same")
	[-] // if !sDuplicateSelectedAssayTestsRadio.contains("Duplicate all tests associated to assay")
		[ ] // LogError("Duplicate all tests radio button text is not the same")
	[ ] ASK.Web.Browser.NextOnSelectTest.Click()
	[ ] ASK.Web.Browser.BackOnEnterSIDButton.Click()
	[ ] ASK.Web.Browser.CancelSelectTestButton.Click()
	[ ] 	// TODO: 7.4.5.6 Database size check
	[ ] 
	[ ] // 7.4.6 Enter New Unique Sample ID (single test duplication)
	[ ] FilterSampleID(sampleID)
	[ ] ASK.Web.Browser.NextOnSelectTest.DomClick()
	[ ] ASK.Web.Browser.BackOnEnterSIDButton.Click()
	[ ] ASK.Web.Browser.NextOnSelectTest.Click()
	[ ] 	// TODO: Verify default sampleID shows “copy_<Original Sample ID>”
	[ ] ASK.Web.Browser.NextToEnterAssayNameButton.Click()
	[-] if ASK.Web.Browser.DuplicateSampleIDLabel.exists()
		[ ] DuplicateSampleIDError()
	[ ] ASK.Web.Browser.BackOnEnterAssayNameButton.Click()
	[ ] ASK.Web.Browser.CancelEnterSampleIDButton.Click()
	[ ] 
	[ ] // 7.4.7 Enter New Unique Assay Name (multiple or all tests duplication)
	[ ] FilterSampleIDMultiTest(sampleID)
	[ ] ASK.Web.Browser.NextOnSelectTest.Click()
	[ ] ASK.Web.Browser.BackOnEnterAssayNameButton.Click()
	[ ] ASK.Web.Browser.NextOnSelectTest.Click()
	[ ] ASK.Web.Browser.NextOnEnterAssayName.Click()
	[ ] ASK.Web.Browser.BackOnConfirmDuplicate.Click()
	[ ] ASK.Web.Browser.CancelOnEnterAssayName.Click()
	[ ] 
	[ ] // 7.4.8 Confirm to duplicate all tests (multiple or all tests duplication)
	[ ] FilterSampleIDMultiTest(sampleID)
	[ ] ASK.Web.Browser.NextOnSelectTest.Click()
	[ ] ASK.Web.Browser.NextOnEnterAssayName.Click()
	[ ] // TODO: default assay names
	[ ] ASK.Web.Browser.NextOnConfirmDuplicate.Click()
	[ ] ASK.Web.Browser.BackOnEnterSIDPrefix.Click()
	[ ] ASK.Web.Browser.BackOnConfirmDuplicate.Click()
	[ ] ASK.Web.Browser.NextOnEnterAssayName.Click()
	[ ] ASK.Web.Browser.CancelOnConfirmDuplicate.Click()
	[ ] 
	[ ] // 7.4.9 Enter New Assay Name (single test duplication)
	[ ] FilterSampleID(sampleID)
	[ ] ASK.Web.Browser.NextOnSelectTest.Click()
	[ ] ASK.Web.Browser.NextToEnterAssayNameButton.Click()
	[+] if ASK.Web.Browser.DuplicateSampleIDLabel.exists()
		[ ] DuplicateSampleIDError()
	[ ] // TODO: default assay names
	[ ] ASK.Web.Browser.BackOnEnterAssayNameButton.Click()
	[ ] ASK.Web.Browser.NextToEnterAssayNameButton.Click()
	[ ] ASK.Web.Browser.CancelEnterAssayNameButton.Click()
	[ ] FilterSampleID(sampleID)
	[ ] ASK.Web.Browser.NextOnSelectTest.Click()
	[ ] ASK.Web.Browser.NextToEnterAssayNameButton.Click()
	[-] if ASK.Web.Browser.DuplicateSampleIDLabel.exists()
		[ ] DuplicateSampleIDError()
	[ ] ASK.Web.Browser.DuplicateButton.Click()
	[-] if ASK.Web.Browser.backBtn.exists()
		[ ] DuplicateSingleAssayNameError()
		[ ] ASK.Web.Browser.DuplicateButton.Click()
	[ ] ASK.Web.Browser.BackToHomeButton.DomClick()
	[ ] 
	[ ] //7.4.10 Enter Sample ID prefix (multiple or all tests duplication)
	[ ] FilterSampleIDMultiTest(sampleID)
	[ ] ASK.Web.Browser.NextOnSelectTest.Click()
	[ ] ASK.Web.Browser.NextOnEnterAssayName.Click()
	[ ] ASK.Web.Browser.NextOnConfirmDuplicate.Click()
	[ ] ASK.Web.Browser.BackOnEnterSIDPrefix.Click()
	[ ] ASK.Web.Browser.NextOnConfirmDuplicate.Click()
	[ ] ASK.Web.Browser.CancelOnEnterSIDPref.Click()
	[ ] DuplicateMultipleTestsFilteredBySampleID(sampleID)
	[ ] 
	[ ] // 7.4.11 Confirm some new tests have same Sample ID (all tests duplication)
	[ ] ASK.Web.Browser.DropDownMenu1.Click()
	[ ] ASK.Web.Browser.Filter_By_SampleID.Click()
	[ ] ASK.Web.Browser.SearchFilter_Textfield0.SetText("copy_")
	[-] if !ASK.Web.Browser.SelectCheck1.exists()
		[ ] LogError("No tests were duplicated")
	[-] else
		[ ] print("Tests were successfully duplicated")
	[ ] // int rowCount = ASK.Web.Browser.TestTable.GetRowCount()
	[-] // if (rowCount == 0)
		[ ] // LogError("No tests were duplicated")
	[ ] 
	[ ] // 7.4.12 Duplication success message
	[ ] // Tested in earlier steps
	[ ] 
	[ ] // 7.4.13 Duplicate Sample ID found
	[ ] // Tested in DuplicationErrors.t
	[ ] 
	[ ] // 7.4.14 Duplicate Assay Name found
	[ ] // Tested in DuplicationErrors.t
	[ ] 
