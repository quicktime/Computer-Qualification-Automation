[ ] //Created by: Garry Howe
[ ] //Last Updated on April 2015
[ ] //Last Updated for: GX Xpertise 6.3
[ ] 
[ ] // Description: Verifies test result and details for Dnnnn Test Cases TC-x
[ ] 
[ ] 
[ ] 
[ ] // Assumptions: 
[ ] // 1. That all of the assays defined in the data file exist  
[ ] // 2. CSV files for test data set have been injected successfully
[ ] // 3. Assay cartridge selection drop down menu is available.
[ ] 
[ ] use "..\..\Common Libs Inf-80\MasterUseStmtsInf-80.inc"
[ ] 
[ ] // *** DSN ***
[ ] STRING sDSNConnect = "DSN=Silk DDA Excel;DBQ=C:\Silk Data Files\Dnnnn Protocol\Dnnnn Verification.xls;UID=;PWD=;"
[ ] STRING sTestRecSheetName='AllTestResults'
[ ] STRING sExpectedErrorsTestRecSheetName='AllErrors'
[ ] 
[-] testcase VerifyMultiCartTestResults () appstate none
	[ ] 
	[ ] print ("Verifying test and analyte results for Dnnnn test cases TC-x through TC-y")
	[ ] 
	[ ] MyStartViewResults()
	[ ] 
	[ ] // Get to view results
	[ ] GeneXpertInfinity.SetActive( )
	[ ] 
	[ ] 
	[ ] GeneXpertInfinity.VIEW_ANOTHER_TEST_DB.Click()
	[ ] 
	[ ] // Variable Declarations
	[ ] // handles to database, test result, and test detail objects
	[ ] handle hDB, hResult, hDetail, hErrors
	[ ] REC_RESULT rExpectedResult
	[ ] REC_DETAIL rDetails
	[ ] REC_TEST_ERROR_MESSAGE rExpectedError
	[ ] 
	[ ] STRING sPreviousSampleID=''
	[ ] INTEGER iAnalytePos = 0
	[ ] 
	[ ] 
	[ ] //Connect to Excel and get expected results spreadsheet
	[ ] hDB = DB_Connect (sDSNConnect)
	[ ] //Select from the appropriate tab of the spreadsheet
	[ ] hResult = DB_ExecuteSQL(hDB, "Select * from`{sTestRecSheetName}$`")
	[ ]  
	[ ] 
	[ ] 
	[-] while (DB_FetchNext (hResult, rExpectedResult))
		[ ] 
		[-] if rExpectedResult.sSampleID == null 
			[ ] break
			[ ] // no more Sample IDs are found, stop loop
		[-] if rExpectedResult.sSampleID != sPreviousSampleID 
			[ ] // View the correct test on the View Results screen
			[ ] print ("Selecting test {rExpectedResult.sSampleID} ... ")
			[ ] SelectTest (rExpectedResult.sSampleID)
		[ ] 
		[ ] // Return to the View Results screen with the correct test displayed
		[ ] GeneXpertInfinity.SetActive( )
		[ ] GeneXpertInfinity.TestResult.Select(TEST_RESULT_TAB)
		[ ] VerifyTestResultMain (rExpectedResult)
		[ ] 
		[ ] 
		[ ] //If this is the first time looing at the SID
		[-] if rExpectedResult.sSampleID != sPreviousSampleID 
			[ ] //Check for disclaimers at this step
			[ ] VerifyTestDisclaimer(rExpectedResult)
			[ ] //Check Error Status 
			[ ] VerifyErrorStatus(rExpectedResult)
			[ ] 
			[ ] //Check Error Messages if desired
			[ ] hErrors= DB_ExecuteSQL(hDB, "Select * from`{sExpectedErrorsTestRecSheetName}$` where Sample_ID='{rExpectedResult.sSampleID}'")
			[-] while (DB_FetchNext (hErrors, rExpectedError))
				[ ] VerifyError(rExpectedError)
			[ ] 
			[ ] 
		[ ] 
		[ ] print ()
		[ ] print('---------------------------------------------------------------------------')
		[ ] 
		[ ] 
		[ ] hDetail = DB_ExecuteSQL(hDB, "Select * from`{rExpectedResult.sSampleID}$`")
		[ ] 
		[ ] // Now verify the analytes and their result values
		[ ] GeneXpertInfinity.SetActive( )
		[ ] 
		[ ] //Iterate through the analytes if this is the first time the test has been examined
		[-] if rExpectedResult.sSampleID != sPreviousSampleID
			[ ] 
			[ ] 
			[-] while (DB_FetchNext (hDetail, rDetails))
				[-] if rDetails.sAnalyteName == null 
					[ ] break
				[ ] 
				[ ] print("Analyte Result Information")
				[ ] print("  Sample ID: {rExpectedResult.sSampleID}")
				[ ] print("  Analyte Name: {rDetails.sAnalyteName}")
				[ ] print()
				[ ] 
				[ ] 
				[ ] 
				[ ] // Verify analyte results if desired (here we check for an expected Ct, and skip non-PCR analytes)
				[-] if rDetails.sCt!=DBNULLVALUE
					[ ] GeneXpertInfinity.TestResult.Select( ANALYTE_RESULT_TAB)
					[ ] FindAnalyteRowInfinity(rDetails.sAnalyteName,rExpectedResult.sSampleID,iAnalytePos, iAnalytePos)
					[ ] print ('Looking at ANALYTE RESULTS of Analyte {rDetails.sAnalyteName} in row # {iAnalytePos}')
					[ ] VerifyAnalyteResultInf80 (rDetails, rExpectedResult.sSampleID, iAnalytePos)
					[ ] 
					[ ] 
				[ ] //Check detail tab, if desired
				[-] if true
					[ ] GeneXpertInfinity.TestResult.Select( DETAIL_TAB)
					[ ] FindAnalyteRowOnDetailInfinity(rDetails.sAnalyteName,rExpectedResult.sSampleID,iAnalytePos, iAnalytePos)
					[ ] print ('Looking at DETAILS for analyte {rDetails.sAnalyteName} in row # {iAnalytePos}')
					[ ] VerifyDetailTabInf80(rDetails,rExpectedResult.sSampleID,iAnalytePos)
				[ ] 
				[ ] 
				[ ] // Check melt tab here, only if a melt peak is defined (skip for PCR-Analytes)
				[-] if rDetails.sMeltPeakHght!=DBNULLVALUE && rDetails.sMeltPeakTemp != NOTAPPLICABLE
					[ ] GeneXpertInfinity.TestResult.Select( MELT_PEAKS_TAB)
					[ ] FindAnalyteRowOnMeltInfinity(rDetails.sAnalyteName, rDetails.sMeltPeakTemp,rExpectedResult.sSampleID, iAnalytePos, iAnalytePos)
					[ ] print ('Looking for {rDetails.sAnalyteName} MELT PEAKS in row # {iAnalytePos}')
					[ ] VerifyMeltTabInf80(rDetails,rExpectedResult.sSampleID,iAnalytePos)
				[ ] 
				[ ] 
				[ ] print('---------------------------------------------------------------------------')
				[ ] print()
				[ ] 
			[ ] DB_FinishSQL(hDetail)
			[ ] sPreviousSampleID=rExpectedResult.sSampleID
			[ ] 
			[ ] 
	[ ] DB_FinishSQL(hResult)
	[ ] DB_Disconnect(hDB)
	[ ] 
	[ ] 
	[ ] MyExit()
[ ] 
