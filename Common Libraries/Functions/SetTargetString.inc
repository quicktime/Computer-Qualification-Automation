[ ] use "..\..\Common Libraries\MasterUseStmts.inc"
[ ] 
[ ] // 
[ ] // This is a series of functions called SetTargetString... that sets a list of numbers that will be used to build a list of targets that 
[ ] // will then be used by the main program to set the targets for IC, EC or SPC channels. 
[-] SetTargetString12Analytes (inout LIST OF STRING myList, 
    INTEGER iTarget1, INTEGER iTarget2 NULL, INTEGER iTarget3 NULL,INTEGER iTarget4 NULL,INTEGER iTarget5 NULL, INTEGER iTarget6 NULL, INTEGER iTarget7 NULL, 
    INTEGER iTarget8 NULL, INTEGER iTarget9 NULL, INTEGER iTarget10 NULL, INTEGER iTarget11 NULL,
    INTEGER iUseTarget1, INTEGER iUseTarget2 NULL, INTEGER iUseTarget3 NULL, INTEGER iUseTarget4 NULL,
    INTEGER iUseTarget5 NULL, INTEGER iUseTarget6 NULL, INTEGER iUseTarget7 NULL, INTEGER iUseTarget8 NULL, INTEGER iUseTarget9 NULL,
     INTEGER iUseTarget10 NULL,INTEGER iUseTarget11 NULL,INTEGER iTarget)
	[ ] 
	[ ] myList = {}
	[-] if (iUseTarget1 == iTarget)
		[ ] ListAppend(myList, Str(iTarget1, NULL, 2))
	[-] if (iUseTarget2 == iTarget)
		[ ] ListAppend(myList, Str(iTarget2, NULL, 2))
	[-] if (iUseTarget3 == iTarget)
		[ ] ListAppend(myList, Str(iTarget3, NULL, 2))
	[-] if (iUseTarget4 == iTarget)
		[ ] ListAppend(myList, Str(iTarget4, NULL, 2))
	[-] if (iUseTarget5 == iTarget)
		[ ] ListAppend(myList, Str(iTarget5, NULL, 2))
	[-] if (iUseTarget6 == iTarget)
		[ ] ListAppend(myList, Str(iTarget6, NULL, 2))
	[-] if (iUseTarget7 == iTarget)
		[ ] ListAppend(myList, Str(iTarget7, NULL, 2))
	[-] if (iUseTarget8 == iTarget)
		[ ] ListAppend(myList, Str(iTarget8, NULL, 2))
	[-] if (iUseTarget9 == iTarget)
		[ ] ListAppend(myList, Str(iTarget9, NULL, 2))
	[-] if (iUseTarget10 == iTarget)
		[ ] ListAppend(myList, Str(iTarget10, NULL, 2))
	[-] if (iUseTarget11 == iTarget)
		[ ] ListAppend(myList, Str(iTarget11, NULL, 2))
		[ ] 
[ ] 
[-] SetTargetString8Analytes (inout LIST OF STRING myList, 
    INTEGER iTarget1, INTEGER iTarget2 NULL, INTEGER iTarget3 NULL,INTEGER iTarget4 NULL,INTEGER iTarget5 NULL, INTEGER iTarget6 NULL, INTEGER iTarget7 NULL, 
    INTEGER iUseTarget1, INTEGER iUseTarget2 NULL, INTEGER iUseTarget3 NULL, INTEGER iUseTarget4 NULL,
    INTEGER iUseTarget5 NULL, INTEGER iUseTarget6 NULL, INTEGER iUseTarget7 NULL, INTEGER iTarget)
	[ ] 
	[ ] myList = {}
	[-] if (iUseTarget1 == iTarget)
		[ ] ListAppend(myList, Str(iTarget1, NULL, 2))
	[-] if (iUseTarget2 == iTarget)
		[ ] ListAppend(myList, Str(iTarget2, NULL, 2))
	[-] if (iUseTarget3 == iTarget)
		[ ] ListAppend(myList, Str(iTarget3, NULL, 2))
	[-] if (iUseTarget4 == iTarget)
		[ ] ListAppend(myList, Str(iTarget4, NULL, 2))
	[-] if (iUseTarget5 == iTarget)
		[ ] ListAppend(myList, Str(iTarget5, NULL, 2))
	[-] if (iUseTarget6 == iTarget)
		[ ] ListAppend(myList, Str(iTarget6, NULL, 2))
	[-] if (iUseTarget7 == iTarget)
		[ ] ListAppend(myList, Str(iTarget7, NULL, 2))
[ ] 
[+] SetTargetString6Analytes (inout LIST OF STRING myList, 
    INTEGER iTarget1, INTEGER iTarget2 NULL, INTEGER iTarget3 NULL,INTEGER iTarget4 NULL,INTEGER iTarget5 NULL, 
    INTEGER iUseTarget1, INTEGER iUseTarget2 NULL, INTEGER iUseTarget3 NULL, INTEGER iUseTarget4 NULL,
    INTEGER iUseTarget5 NULL, INTEGER iTarget)
	[ ] 
	[ ] myList = {}
	[-] if (iUseTarget1 == iTarget)
		[ ] ListAppend(myList, Str(iTarget1, NULL, 2))
	[-] if (iUseTarget2 == iTarget)
		[ ] ListAppend(myList, Str(iTarget2, NULL, 2))
	[-] if (iUseTarget3 == iTarget)
		[ ] ListAppend(myList, Str(iTarget3, NULL, 2))
	[-] if (iUseTarget4 == iTarget)
		[ ] ListAppend(myList, Str(iTarget4, NULL, 2))
	[-] if (iUseTarget5 == iTarget)
		[ ] ListAppend(myList, Str(iTarget5, NULL, 2))
[ ] 
[+] SetTargetString5Analytes (inout LIST OF STRING myList, 
    INTEGER iTarget1, INTEGER iTarget2 NULL, INTEGER iTarget3 NULL,INTEGER iTarget4 NULL, 
    INTEGER iUseTarget1, INTEGER iUseTarget2 NULL, INTEGER iUseTarget3 NULL, INTEGER iUseTarget4 NULL, INTEGER iTarget)
	[ ] 
	[ ] myList = {}
	[-] if (iUseTarget1 == iTarget)
		[ ] ListAppend(myList, Str(iTarget1, NULL, 2))
	[-] if (iUseTarget2 == iTarget)
		[ ] ListAppend(myList, Str(iTarget2, NULL, 2))
	[-] if (iUseTarget3 == iTarget)
		[ ] ListAppend(myList, Str(iTarget3, NULL, 2))
	[-] if (iUseTarget4 == iTarget)
		[ ] ListAppend(myList, Str(iTarget4, NULL, 2))
[ ] 
[+] SetTargetString4Analytes (inout LIST OF STRING myList, 
    INTEGER iTarget1, INTEGER iTarget2 NULL, INTEGER iTarget3 NULL,
    INTEGER iUseTarget1, INTEGER iUseTarget2 NULL, INTEGER iUseTarget3 NULL, INTEGER iTarget)
	[ ] 
	[ ] myList = {}
	[-] if (iUseTarget1 == iTarget)
		[ ] ListAppend(myList, Str(iTarget1, NULL, 2))
	[-] if (iUseTarget2 == iTarget)
		[ ] ListAppend(myList, Str(iTarget2, NULL, 2))
	[-] if (iUseTarget3 == iTarget)
		[ ] ListAppend(myList, Str(iTarget3, NULL, 2))
[ ] 
[+] SetTargetString3Analytes (inout LIST OF STRING myList, 
    INTEGER iTarget1, INTEGER iTarget2 NULL, 
    INTEGER iUseTarget1, INTEGER iUseTarget2 NULL, INTEGER iTarget)
	[ ] 
	[ ] myList = {}
	[-] if (iUseTarget1 == iTarget)
		[ ] ListAppend(myList, Str(iTarget1, NULL, 2))
	[-] if (iUseTarget2 == iTarget)
		[ ] ListAppend(myList, Str(iTarget2, NULL, 2))
[ ] 
[+] SetTargetString2Analytes (inout LIST OF STRING myList, 
    INTEGER iTarget1,INTEGER iUseTarget1, INTEGER iTarget)
	[ ] 
	[ ] myList = {}
	[-] if (iUseTarget1 == iTarget)
		[ ] ListAppend(myList, Str(iTarget1, NULL, 2))
[ ] 
[ ] // This is a series of functions called SetMinTargetDeltaCt... that sets the "Use Min Target Delta Ct" & "Min Target Delta Ct" 
[ ] // columns in the Define Assays screen. 
[ ] // parameter iSelectTarget is used to indicate which analyte (row) of the table will be changed
[ ] // The series of UseDeltaCt... parameters are used for the checkbox in the column "Use Min Target Delta Ct" 
[ ] // The series of DeltaCt... parameters contain the values that will be used in the column "Min Target Delta Ct" 
[ ] 
[+] SetMinTargetDeltaCt6Analytes(INTEGER iSelectTarget, INTEGER sUseDeltaCt1 NULL, INTEGER sUseDeltaCt2 NULL,INTEGER sUseDeltaCt3 NULL,
    INTEGER sUseDeltaCt4 NULL, INTEGER sUseDeltaCt5 NULL,INTEGER sUseDeltaCt6 NULL, STRING DeltaCt1 NULL, STRING DeltaCt2 NULL, 
    STRING DeltaCt3 NULL, STRING DeltaCt4 NULL, STRING DeltaCt5 NULL, STRING DeltaCt6 NULL )
	[ ] 
	[ ] GeneXpert®DxSystem .SetActive( )
	[ ] 
	[-] switch (iSelectTarget)
		[-] case 1
			[-] if sUseDeltaCt1 == 1
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {1,10} )
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {1,11} )
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(DeltaCt1)
		[-] case 2
			[-] if sUseDeltaCt2 == 1
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {2,10} )
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {2,11} )
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(DeltaCt2)
		[-] case 3
			[-] if sUseDeltaCt3 == 1
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {3,10} )
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {3,11} )
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(DeltaCt3)
		[-] case 4
			[-] if sUseDeltaCt4 == 1
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {4,10} )
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {4,11} )
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(DeltaCt4)
		[-] case 5
			[-] if sUseDeltaCt5 == 1
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {5,10} )
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {5,11} )
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(DeltaCt5)
		[-] case 6
			[-] if sUseDeltaCt6 == 1
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {6,10} )
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {6,11} )
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(DeltaCt6)
[ ] 
[+] SetMinTargetDeltaCt5Analytes(INTEGER iSelectTarget, INTEGER sUseDeltaCt1 NULL, INTEGER sUseDeltaCt2 NULL,INTEGER sUseDeltaCt3 NULL,
    INTEGER sUseDeltaCt4 NULL, INTEGER sUseDeltaCt5 NULL,STRING DeltaCt1 NULL, STRING DeltaCt2 NULL, 
    STRING DeltaCt3 NULL, STRING DeltaCt4 NULL, STRING DeltaCt5 NULL)
	[ ] 
	[ ] GeneXpert®DxSystem .SetActive( )
	[ ] 
	[-] switch (iSelectTarget)
		[-] case 1
			[-] if sUseDeltaCt1 == 1
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {1,10} )
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {1,11} )
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(DeltaCt1)
		[-] case 2
			[-] if sUseDeltaCt2 == 1
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {2,10} )
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {2,11} )
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(DeltaCt2)
		[-] case 3
			[-] if sUseDeltaCt3 == 1
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {3,10} )
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {3,11} )
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(DeltaCt3)
		[-] case 4
			[-] if sUseDeltaCt4 == 1
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {4,10} )
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {4,11} )
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(DeltaCt4)
		[-] case 5
			[-] if sUseDeltaCt5 == 1
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {5,10} )
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {5,11} )
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(DeltaCt5)
[ ] 
[+] SetMinTargetDeltaCt4Analytes (INTEGER iSelectTarget, INTEGER sUseDeltaCt1 NULL, INTEGER sUseDeltaCt2 NULL,
    INTEGER sUseDeltaCt3 NULL,INTEGER sUseDeltaCt4 NULL, STRING DeltaCt1 NULL, STRING DeltaCt2 NULL, 
    STRING DeltaCt3 NULL, STRING DeltaCt4 NULL )
	[ ] 
	[ ] GeneXpert®DxSystem .SetActive( )
	[ ] 
	[-] switch (iSelectTarget)
		[-] case 1
			[-] if sUseDeltaCt1 == 1
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {1,10} )
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {1,11} )
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(DeltaCt1)
		[-] case 2
			[-] if sUseDeltaCt2 == 1
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {2,10} )
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {2,11} )
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(DeltaCt2)
		[-] case 3
			[-] if sUseDeltaCt3 == 1
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {3,10} )
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {3,11} )
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(DeltaCt3)
		[-] case 4
			[-] if sUseDeltaCt4 == 1
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {4,10} )
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {4,11} )
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(DeltaCt4)
[ ] 
[+] SetMinTargetDeltaCt3Analytes (INTEGER iSelectTarget, INTEGER sUseDeltaCt1 NULL, INTEGER sUseDeltaCt2 NULL,
    INTEGER sUseDeltaCt3 NULL, STRING DeltaCt1 NULL, STRING DeltaCt2 NULL, STRING DeltaCt3 NULL )
	[ ] 
	[ ] GeneXpert®DxSystem .SetActive( )
	[ ] 
	[-] switch (iSelectTarget)
		[-] case 1
			[-] if sUseDeltaCt1 == 1
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {1,10} )
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {1,11} )
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(DeltaCt1)
		[-] case 2
			[-] if sUseDeltaCt2 == 1
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {2,10} )
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {2,11} )
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(DeltaCt2)
		[-] case 3
			[-] if sUseDeltaCt3 == 1
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {3,10} )
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {3,11} )
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(DeltaCt3)
[ ] 
[+] SetMinTargetDeltaCt2Analytes (INTEGER iSelectTarget, INTEGER sUseDeltaCt1 NULL, INTEGER sUseDeltaCt2 NULL,
    STRING DeltaCt1 NULL, STRING DeltaCt2 NULL )
	[ ] 
	[ ] GeneXpert®DxSystem .SetActive( )
	[ ] 
	[-] switch (iSelectTarget)
		[-] case 1
			[-] if sUseDeltaCt1 == 1
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {1,10} )
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {1,11} )
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(DeltaCt1)
		[-] case 2
			[-] if sUseDeltaCt2 == 1
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {2,10} )
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {2,11} )
				[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(DeltaCt2)
[ ] 
