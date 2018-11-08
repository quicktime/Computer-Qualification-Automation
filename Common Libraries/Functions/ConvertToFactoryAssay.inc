[ ] use "..\..\Common Libraries\MasterUseStmts.inc"
[ ] 
[+] SelectAssayFromListAF(STRING sAssayName)
	[ ] // 
	[ ] // Variables
	[ ] //
	[ ] TABLECELL tcCell
	[ ] 
	[ ] GeneXpert®AssayFactory.SetActive( )
	[ ] 
	[ ] // Find the assay in the list of active assays and click the assay name 
	[ ] tcCell = GeneXpert®AssayFactory.Assay1.FindCell(sAssayName) 
	[ ] GeneXpert®AssayFactory.Assay1.ClickCell (tcCell)
[ ] 
[ ] // This function takes an assay name (must exist) and converts it to a Factory Assay according to the type parameter. 
[ ] // This is not to be used to convert an assay to Reference or Template
[-] ConvertAssaywithoutLSP(REC_ASSAY_NONLSP rAssay)
	[ ] 
	[ ] // Select the passed asssy from the list
	[ ] SelectAssayFromListAF(rAssay.sSourceName)
	[ ] 
	[ ] GeneXpert®AssayFactory.Convert.Click()
	[ ] ConvertAssay.SetActive( )
	[ ] ConvertAssay.AssayType.Select( rAssay.sAssayType )
	[+] ConvertAssay.VerifyProperties ({...})
		[ ] ""
		[-] {...}
			[ ] {"Caption",              "Convert Assay"}
			[ ] {"Enabled",              TRUE}
		[-] {...}
			[-] {'JavaJFCStaticText ("Product Code")', {...}}
				[ ] {"Text",                 "Product Code"}
			[-] {'JavaJFCTextField ("Product Code")', {...}}
				[ ] {"SelText",              ""}
				[ ] {"Text",                 ""}
			[-] {'JavaJFCStaticText ("Version")', {...}}
				[ ] {"Text",                 "Version"}
			[-] {'JavaJFCTextField ("Version")', {...}}
				[ ] {"Enabled",              FALSE}
			[-] {'JavaJFCStaticText ("Assay Name")', {...}}
				[ ] {"Text",                 "Assay Name"}
			[-] {'JavaJFCTextField ("Assay Name")', {...}}
				[ ] {"Enabled",              TRUE}
			[-] {'JavaJFCCheckBox ("Need Lot Specific Parameters")', {...}}
				[ ] {"Enabled",              TRUE}
				[ ] {"State",                TRUE}
			[-] {'JavaJFCPushButton ("OK")', {...}}
				[ ] {"Caption",              "OK"}
			[-] {'JavaJFCPushButton ("Cancel")', {...}}
				[ ] {"Caption",              "Cancel"}
	[ ] ConvertAssay.AssayName.SetPosition( 1, 9 )
	[ ] ConvertAssay.AssayName.SetSelRange( 1, 1, 1, 11 )
	[ ] ConvertAssay.AssayName.SetText( rAssay.sDestName )
	[ ] ConvertAssay.ProductCode.SetPosition( 1, 1 )
	[ ] ConvertAssay.ProductCode.SetText( CEPHEIDPRODUCTCODE )
	[ ] ConvertAssay.NeedLotSpecificParameters.Uncheck()
	[-] if rAssay.sDisclaimer != NOTAPPLICABLE
		[-] if rAssay.sDisclaimer == 'BLANK'
			[ ] ConvertAssay.AssayDisclaimer.SetText('')
		[-] else
			[ ] ConvertAssay.AssayDisclaimer.SetText(rAssay.sDisclaimer)
	[ ] ConvertAssay.OK.Click()
[ ] 
[ ] // This function takes an assay name (must exist) and converts it to a Factory Assay according to the type parameter. 
[ ] // This is not to be used to convert an assay to Reference or Template
[+] ConvertAssaywithLSP(STRING sSourceAssayName, STRING sAssayType, STRING sDestinationAssayName)
	[ ] 
	[ ] // Select the passed asssy from the list
	[ ] SelectAssayFromListAF(sSourceAssayName)
	[ ] 
	[ ] GeneXpert®AssayFactory.Convert.Click()
	[ ] ConvertAssay.SetActive( )
	[ ] ConvertAssay.AssayType.Select( sAssayType )
	[+] ConvertAssay.VerifyProperties ({...})
		[ ] ""
		[-] {...}
			[ ] {"Caption",              "Convert Assay"}
			[ ] {"Enabled",              TRUE}
		[-] {...}
			[-] {'JavaJFCStaticText ("Product Code")', {...}}
				[ ] {"Text",                 "Product Code"}
			[-] {'JavaJFCTextField ("Product Code")', {...}}
				[ ] {"SelText",              ""}
				[ ] {"Text",                 ""}
			[-] {'JavaJFCStaticText ("Version")', {...}}
				[ ] {"Text",                 "Version"}
			[-] {'JavaJFCTextField ("Version")', {...}}
				[ ] {"Enabled",              FALSE}
			[-] {'JavaJFCStaticText ("Assay Name")', {...}}
				[ ] {"Text",                 "Assay Name"}
			[-] {'JavaJFCTextField ("Assay Name")', {...}}
				[ ] {"Enabled",              TRUE}
			[-] {'JavaJFCCheckBox ("Need Lot Specific Parameters")', {...}}
				[ ] {"Enabled",              TRUE}
				[ ] {"State",                TRUE}
			[-] {'JavaJFCPushButton ("OK")', {...}}
				[ ] {"Caption",              "OK"}
			[-] {'JavaJFCPushButton ("Cancel")', {...}}
				[ ] {"Caption",              "Cancel"}
	[ ] ConvertAssay.AssayName.SetPosition( 1, 9 )
	[ ] ConvertAssay.AssayName.SetSelRange( 1, 1, 1, 11 )
	[ ] ConvertAssay.AssayName.SetText( sDestinationAssayName )
	[ ] ConvertAssay.ProductCode.SetPosition( 1, 1 )
	[ ] ConvertAssay.ProductCode.SetText( CEPHEIDPRODUCTCODE )
	[ ] ConvertAssay.OK.Click()
[ ] 
[ ] // This function takes an assay name (must exist) and converts it to a Reference or Template according to the type parameter. 
[ ] // This is not to be used to convert an assay to a Factory Assay
[+] ConvertAssay(STRING sSourceAssayName, STRING sAssayType, STRING sDestinationAssayName)
	[ ] 
	[ ] // Select the passed asssy from the list
	[ ] SelectAssayFromListAF(sSourceAssayName)
	[ ] 
	[ ] GeneXpert®AssayFactory.Convert.Click()
	[ ] ConvertAssay.SetActive( )
	[ ] ConvertAssay.AssayType.Select( sAssayType )
	[+] ConvertAssay.VerifyProperties ({...})
		[ ] ""
		[ ] {}
		[-] {...}
			[-] {"AssayNameText", {...}}
				[ ] {"Text",                 "Assay Name"}
			[-] {"AssayName", {...}}
				[ ] {"Enabled",              TRUE}
			[-] {"AssayTypeText", {...}}
				[ ] {"Text",                 "Assay Type"}
			[-] {"OK", {...}}
				[ ] {"Caption",              "OK"}
			[-] {"Cancel", {...}}
				[ ] {"Caption",              "Cancel"}
	[ ] ConvertAssay.AssayName.SetPosition( 1, 9 )
	[ ] ConvertAssay.AssayName.SetSelRange( 1, 1, 1, 11 )
	[ ] ConvertAssay.AssayName.SetText( sDestinationAssayName )
	[ ] ConvertAssay.OK.Click()
[ ] 
[ ] // This function will create the lot that is specificed in the parameter string on the assay name that is also passed in as a parameter
[+] CreateLot(STRING sAssayName, STRING sLotNumber)
	[ ] 
	[ ] // Select the passed asssy from the list
	[ ] SelectAssayFromListAF(sAssayName)
	[ ] 
	[ ] GeneXpert®AssayFactory.Lot.Click()
	[ ] ReagentLotSpecificParameterAF.SetActive( )
	[ ] ReagentLotSpecificParameterAF.New.Click()
	[ ] NewReagentLot.SetActive( )
	[ ] NewReagentLot.ReagentLotNumber.SetText(sLotNumber)
	[ ] print(sLotNumber)
	[ ] NewReagentLot.OK.Click()
	[ ] // GeneXpert®AssayFactory.SetActive( )
	[ ] 
[ ] // This function selects the specified lot after selecting the Assay from the list of assays 
[ ] 
[+] SelectLot(STRING sAssayName, inout STRING sLotNumber)
	[ ] // Variables
	[ ] INTEGER iPos = 0
	[ ] 
	[ ] // Select the passed asssy from the list
	[ ] SelectAssayFromListAF(sAssayName)
	[ ] 
	[ ] // Select the specified lot number for the assay
	[ ] GeneXpert®AssayFactory.SetActive( )
	[ ] GeneXpert®AssayFactory.Lot.Click()
	[ ] ReagentLotSpecificParameterAF.SetActive( )
	[ ] iPos = StrPos(DEC, sLotNumber)
	[ ] sLotNumber = SubStr(sLotNumber, 1, iPos - 1)
	[ ] ReagentLotSpecificParameterAF.SelectReagentLotNumber.Select(sLotNumber)
	[ ] ReagentLotSpecificParameterAF.Edit.Click()
	[ ] // 
[ ] 
[-] EditLot(DETAIL_CHANGES rDetail)
	[ ] // 
	[ ] // Variables
	[ ] //
	[ ] TABLECELL tcCell
	[ ] INTEGER iRow = 0
	[ ] INTEGER iPos = 0
	[ ] 
	[ ] GeneXpert®AssayFactory.SetActive( )
	[ ] 
	[ ] // Find the analyte row in the Universal Analysis Settings table and place value into iRow
	[ ] GeneXpert®AssayFactory.AssayName2.UniversalAnalysisSettings.SetFocusColumn(1)
	[ ] tcCell = GeneXpert®AssayFactory.AssayName2.UniversalAnalysisSettings.FindCell(rDetail.sAnalyteName) 
	[ ] iRow = tcCell.Row
	[ ] 
	[ ] // Sets the Norm. Factor value
	[-] if rDetail.sNormFactor != NOTAPPLICABLE
		[ ] GeneXpert®AssayFactory.AssayName2.UniversalAnalysisSettings.ClickCell( {iRow, 10} )
		[ ] iPos = StrPos(DEC, rDetail.sNormFactor)
		[ ] rDetail.sNormFactor = SubStr(rDetail.sNormFactor, 1, iPos - 1)
		[ ] GeneXpert®AssayFactory.AssayName2.UniversalAnalysisSettings.ComCepheidGenexpertUiUtil.SetText(rDetail.sNormFactor)
	[ ] 
	[ ] // Sets the Prb Chk 1,3 Max value
	[-] if rDetail.sPrbChk13Max != NOTAPPLICABLE
		[ ] GeneXpert®AssayFactory.AssayName2.ResultAnalysisSettings.ClickCell( {iRow, 7} )
		[ ] iPos = StrPos(DEC, rDetail.sPrbChk13Max)
		[ ] rDetail.sPrbChk13Max = SubStr(rDetail.sPrbChk13Max, 1, iPos - 1)
		[ ] GeneXpert®AssayFactory.AssayName2.ResultAnalysisSettings.ComCepheidGenexpertUiUtil.SetText(rDetail.sPrbChk13Max)
	[ ] 
	[ ] // Sets the Prb Chk 2 Min value
	[-] if rDetail.sPrbChk2Min  != NOTAPPLICABLE
		[ ] GeneXpert®AssayFactory.AssayName2.ResultAnalysisSettings.ClickCell( {iRow, 8} )
		[ ] iPos = StrPos(DEC, rDetail.sPrbChk2Min)
		[ ] rDetail.sPrbChk2Min = SubStr(rDetail.sPrbChk2Min, 1, iPos - 1)
		[ ] GeneXpert®AssayFactory.AssayName2.ResultAnalysisSettings.ComCepheidGenexpertUiUtil.SetText(rDetail.sPrbChk2Min)
	[ ] 
	[ ] // Sets the Delta CtE value
	[-] if rDetail.sDeltaCtE  != NOTAPPLICABLE
		[ ] GeneXpert®AssayFactory.AssayName2.ResultAnalysisSettings.ClickCell( {iRow, 12} )
		[ ] iPos = StrPos(DEC, rDetail.sDeltaCtE)
		[ ] rDetail.sDeltaCtE = SubStr(rDetail.sDeltaCtE, 1, iPos + 2)
		[ ] GeneXpert®AssayFactory.AssayName2.ResultAnalysisSettings.ComCepheidGenexpertUiUtil.SetText(rDetail.sDeltaCtE)
	[ ] 
	[ ] // Sets the Scaling Factor value
	[-] if rDetail.sScalingFactor  != NOTAPPLICABLE
		[ ] GeneXpert®AssayFactory.AssayName2.ResultAnalysisSettings.ClickCell( {iRow, 13} )
		[ ] iPos = StrPos(DEC, rDetail.sScalingFactor)
		[ ] rDetail.sDeltaCtE = SubStr(rDetail.sScalingFactor, 1, iPos + 2)
		[ ] GeneXpert®AssayFactory.AssayName2.ResultAnalysisSettings.ComCepheidGenexpertUiUtil.SetText(rDetail.sScalingFactor)
	[ ] 
