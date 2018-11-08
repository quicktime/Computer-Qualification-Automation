[ ]  // Testcase Name: VerifyResults
[ ] // Creator: Steve Bisio
[ ] // Date Created: 12/8/2017
[ ] // Preconditions: Successful execution of importing assays and data injection
[ ] // Data Files: defined in the options file
[ ] 
[ ] // Description: 
[ ] // This testcase will verify all test result information for the list of tests results 
[ ] //    defined in the data file named in the options file.
[ ] 
[ ] // Assumptions: 
[ ] // 1. That all of the assays defined in the data file exist in the database
[ ] // 2. All tests for the above assays have been successfully injected 
[ ] 
[ ] use "..\..\Common Libraries\MasterUseStmts.inc"
[ ] 
[ ] 
[ ] 
[-] testcase VerifyResults() appstate none
	[ ] //
	[ ] // Variable declarations
	[ ] //
	[ ] // Variables to read the arguments and parse them into string variables
	[ ] LIST OF STRING lsArgs
	[ ] STRING sProjectName = ''
	[ ] STRING sPathName = '' 
	[ ] STRING sTabName = '' 
	[ ] 
	[ ] handle hDB, hResult, hDetail
	[ ] REC_RESULT rExpected
	[ ] REC_DETAIL rDetail
	[ ] STRING sPrevSampleID = ' '
	[ ] 
	[ ] INTEGER iAnalytePos = 0
	[ ] 
	[ ] // Function to read the arguments and parse them
	[ ] // Arg[1] = Project Name, Arg[2] = Data File including path, Arg[3] = Tab Name  
	[ ] lsArgs = GetArgs ( )
	[ ] sProjectName = lsArgs[1]
	[ ] sPathName = lsArgs[2]
	[ ] sTabName = lsArgs[3]
	[ ] 
	[ ] // *** DSN ***
	[ ] STRING gsDSNConnect = "DSN=Silk DDA Excel;DBQ={sPathName};UID=;PWD=;"
	[ ] 
	[ ] hDB = DB_Connect (gsDSNConnect)
	[ ] hResult = DB_ExecuteSQL(hDB, "Select * from`{sTabName}$`")
	[ ] 
	[ ] print ("Verifying Results for project: {sProjectName}")
	[ ] print()
	[ ] print ("Reading {sTabName} tab of the spreadsheet {sPathName} ")
	[ ] 
	[-] while (DB_FetchNext (hResult, rExpected))
		[-] if rExpected.sSampleID == null 
			[ ] break
		[ ] // View the correct test on the View Results screen
		[-] if rExpected.sSampleID != sPrevSampleID
			[ ] // Select the correct test result and load into  the View Results screen
			[ ] SelectTest (rExpected.sSampleID)
		[ ] 
		[ ] VerifyTestResultMain (rExpected)
		[ ] 
		[-] if rExpected.sSampleID != sPrevSampleID
			[ ] VerifyErrorStatus (rExpected)
		[ ] 
		[ ] print ()
		[ ] print('---------------------------------------------------------------------------')
		[ ] 
		[-] if rExpected.sSampleID != sPrevSampleID
			[ ] hDetail= DB_ExecuteSQL(hDB, "Select * from`{rExpected.sSampleID}$`")
			[ ] 
			[-] while (DB_FetchNext (hDetail, rDetail))
				[+] if rDetail.sAnalyteName == null 
					[ ] break
				[ ] 
				[ ] print("Analyte Result information")
				[ ] print("  Sample ID: {rExpected.sSampleID}")
				[ ] print("  Analyte Name: {rDetail.sAnalyteName}")
				[ ] print()
				[ ] 
				[ ] FindAnalyteRow(rDetail.sAnalyteName, rExpected.sSampleID,  iAnalytePos)
				[-] if iAnalytePos != 0
					[ ] VerifyAnalyteResult(rDetail, rExpected.sSampleID, iAnalytePos)
				[ ] 
				[ ] 
				[ ] print('---------------------------------------------------------------------------')
				[ ] print("Detail tab information")
				[ ] print("  Sample ID: {rExpected.sSampleID}")
				[ ] print("  Analyte Name: {rDetail.sAnalyteName}")
				[ ] print()
				[ ] 
				[ ] FindAnalyteRowOnDetail(rDetail.sAnalyteName, rExpected.sSampleID,  iAnalytePos)
				[-] if iAnalytePos != 0
					[ ] VerifyDetailTab (rDetail,  rExpected.sSampleID,  iAnalytePos)
				[ ] 
				[-] if rDetail.sMeltPeakTemp != NOTAPPLICABLE
					[ ] FindAnalyteOnMeltTab(rDetail.sAnalyteName, rDetail.sMeltPeakTemp, rExpected.sSampleID,  iAnalytePos)
					[-] if iAnalytePos != 0
						[ ] VerifyMeltTab (rDetail,  rExpected.sSampleID,  iAnalytePos)
				[ ] 
				[ ] print('---------------------------------------------------------------------------')
				[ ] print()
			[ ] 
			[ ] DB_FinishSQL(hDetail)
			[ ] 
		[ ] sPrevSampleID = rExpected.sSampleID
		[ ] 
	[ ] DB_FinishSQL(hResult)
	[ ] DB_Disconnect(hDB)
