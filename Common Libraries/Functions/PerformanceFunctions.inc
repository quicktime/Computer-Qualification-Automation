[ ] use "..\..\Common Libraries\MasterUseStmts.inc"
[ ] 
[ ] //sCmd should not contain .exe for both of the following 2 functions
[ ] //Gets the memory usage of a process
[+] String GetMemoryUsage(String sCmd)
	[ ] list of string lsOutput
	[ ] String sRet = ""
	[ ] 
	[ ] SYS_Execute("tasklist /FI ""IMAGENAME eq {sCmd}.exe"" /NH /FO CSV", lsOutput)
	[ ] 
	[+] if(lsOutput[1] == "")
		[ ] ListDelete(lsOutput, 1)
	[ ] 
	[+] do
		[ ] sRet = GetField(lsOutput[1], """,""", 5)
	[+] except
		[ ] 
	[ ] 
	[ ] return StrTran(sRet, """", "")
[ ] 
[ ] //Gets the cpu usage for a particular process
[+] String GetCpuUsage(String sCmd)
	[ ] list of STRING lsOutput
	[ ] String sRet = ""
	[ ] 
	[ ] SYS_Execute("typeperf ""\Process({sCmd})\% processor time"" -sc 1", lsOutput)
	[ ] 
	[+] do
		[ ] sRet = GetField(lsOutput[3],""",""",2)
	[+] except
		[ ] 
	[ ] 
	[ ] return StrTran(sRet, """", "")
[ ] 
[ ] 
[-] CreateTest(out BOOLEAN bTestStarted, INTEGER iCartID)
	[ ] // This function will create a test to be run by the GX Dx application 
	[ ] // assume that the GX Dx is operating in doorless mode so that the operator does not have to close the doors
	[ ] LIST OF STRING lsAssays = {...}
	[ ] LIST OF STRING lsModules = {...}
	[ ] 
	[ ] INTEGER iRand = 0
	[ ] STRING sCartridgeID = '0'
	[ ] STRING sAssayName = ''
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
		[ ] lsAssays = GeneXpertDx.CreateTestWorkspace.SelectAssayComboBox.Items
		[ ] iRand = RandInt(2, ListCount(lsAssays))
		[ ] GeneXpertDx.CreateTestWorkspace.SelectAssayComboBox.Select(iRand)
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
			[+] if GeneXpertDx.SystemMemoryUsageAlert.Exists(2)
				[ ] LogError("The memory usage has been triggered at: {TimeStr()}")
				[ ] GeneXpertDx.SystemMemoryUsageAlert.OKButton.Click()
			[+] else if GeneXpertDx.CartridgeSNUsedWorkspace.Exists()  // This is the Cartridge serial number * has already been used.
				[ ] GeneXpertDx.CartridgeSNUsedWorkspace.OKButton.Click()
				[ ] GeneXpertDx.CreateTestWorkspace.CancelButton.Click()
			[+] else if GeneXpertDx.MissingReagentLotWorkspace.Exists()  // This is the Missing Reagent Lot warning
				[ ] GeneXpertDx.MissingReagentLotWorkspace.OKButton.Click()
				[ ] GeneXpertDx.CreateTestWorkspace.CancelButton.Click()
			[+] else if GeneXpertDx.StartTestWorkspace.Exists(3)  // This is the Rollback should not be called in auto-commit mode warning
				[ ] GeneXpertDx.StartTestWorkspace.OKButton.Click()
				[ ] LogWarning("Message 'Cannot start test rollback() should not be called while in auto-commit mode'")
			[-] else
				[ ] bTestStarted = true
				[ ] sleep(1)
	[ ] GeneXpertDx.SetActive( )
	[-] if !GeneXpertDx.ViewResultsToggleButton.Selected
		[ ] GeneXpertDx.ViewResultsToggleButton.Toggle()
[ ] 
[+] ArchiveTest()
	[ ] // This function will archive one or more tests
	[ ] 
	[ ] INTEGER iRand = 0 
	[ ] 
	[ ] GeneXpertDx.SetActive( )
	[ ] // Select the Archive Test menu item under the Data Management menu
	[ ] GeneXpertDx.DataManagementMenu.ArchiveTest.Select()
	[ ] GeneXpertDx.SelectTestSToBeArchivedWorkspace.SetActive( )
	[ ] iRand = RandInt(1, GeneXpertDx.SelectTestSToBeArchivedWorkspace.TestResultsTable.RowCount)
	[ ] GeneXpertDx.SelectTestSToBeArchivedWorkspace.TestResultsTable.ClickCell(iRand,1)
	[ ] GeneXpertDx.SelectTestSToBeArchivedWorkspace.OKButton.Click()
	[ ] GeneXpertDx.ArchiveTestsWorkspace.SetActive()
	[ ] GeneXpertDx.ArchiveTestsWorkspace.Proceed.Click()
	[ ] // Added code by Steve on 5/5/12
	[-] if GeneXpertDx.SaveDialog.Exists(120)
		[ ] GeneXpertDx.SaveDialog.SetActive( )
		[ ] GeneXpertDx.SaveDialog.SaveButton.Click()
	[ ] // End of added code 5/5/12
	[ ] sleep(2)
	[+] if GeneXpertDx.ReplaceFileDialog.Exists(2)
		[ ] GeneXpertDx.ReplaceFileDialog.YesButton.Click()
	[-] if GeneXpertDx.ArchiveTestsWorkspace.Exists(20)
		[ ] GeneXpertDx.ArchiveTestsWorkspace.SetActive( )
		[ ] GeneXpertDx.ArchiveTestsWorkspace.OKButton.Click()
	[-] if GeneXpertDx.SystemMemoryUsageAlert.Exists(2)
		[ ] LogError("The memory usage has been triggered at: {TimeStr()}")
		[ ] GeneXpertDx.SystemMemoryUsageAlert.OKButton.Click()
		[ ] // Added code by Steve on 5/7/12
		[-] if GeneXpertDx.ArchiveTestsWorkspace.Exists(20)
			[ ] GeneXpertDx.ArchiveTestsWorkspace.SetActive( )
			[ ] GeneXpertDx.ArchiveTestsWorkspace.OKButton.Click()
		[ ] // End of added code 5/7/12
	[ ] GeneXpertDx.SetActive( )
	[+] if !GeneXpertDx.ViewResultsToggleButton.Selected
		[ ] GeneXpertDx.ViewResultsToggleButton.Toggle()
[ ] 
[+] RetrieveTest()
	[ ] // This function will retrieve tests from an archive file
	[ ] 
	[ ] LIST OF STRING lsContents = {...} 
	[ ] INTEGER iRand = 0 
	[ ] INTEGER i = 0
	[ ] 
	[ ] GeneXpertDx.SetActive( )
	[ ] GeneXpertDx.DataManagementMenu.RetrieveTest.Select()
	[ ] sleep(2)
	[-] if GeneXpertDx.Open.Exists(20)
		[ ] GeneXpertDx.Open.SetActive( )
		[ ] lsContents = GeneXpertDx.Open.ListFilesList.Items
		[ ] ListPrint(lsContents)
		[ ] print(ListCount(lsContents))
		[ ] iRand = RandInt(1, ListCount(lsContents))
		[ ] GeneXpertDx.Open.ListFilesList.Select(iRand)
		[ ] // print("This is the filename used for retrieval: {lsContents[iRand]}")
		[ ] GeneXpertDx.Open.OpenButton.Click()
		[ ] sleep(1)
		[+] if GeneXpertDx.RetrieveTestDuplicates.Exists(2)
			[ ] GeneXpertDx.RetrieveTestDuplicates.OKButton.Click()
		[-] if GeneXpertDx.SelectTestSToBeRetrievedWorkspace.Exists(20)
			[ ] GeneXpertDx.SelectTestSToBeRetrievedWorkspace.SetActive( )
			[+] if GeneXpertDx.SelectTestSToBeRetrievedWorkspace.TestResultsTable.RowCount > 10
				[+] for (i = 1; i <=  10; i++)
					[ ] GeneXpertDx.SelectTestSToBeRetrievedWorkspace.TestResultsTable.ClickCell(i,1)
			[+] else
				[ ] GeneXpertDx.SelectTestSToBeRetrievedWorkspace.SelectAllButton.Click()
			[ ] GeneXpertDx.SelectTestSToBeRetrievedWorkspace.OKButton.Click()
			[-] if GeneXpertDx.RetrieveTestConfirmation.Exists(120)
				[ ] GeneXpertDx.RetrieveTestConfirmation.SetActive( )
				[ ] GeneXpertDx.RetrieveTestConfirmation.ProceedButton.Click()
			[-] if GeneXpertDx.RetrieveTestSuccessfulWorkspace.Exists(120)
				[ ] GeneXpertDx.RetrieveTestSuccessfulWorkspace.SetActive( )
				[ ] GeneXpertDx.RetrieveTestSuccessfulWorkspace.OKButton.Click()
		[ ] GeneXpertDx.SetActive( )
	[+] if !GeneXpertDx.ViewResultsToggleButton.Selected
		[ ] GeneXpertDx.ViewResultsToggleButton.Toggle()
		[ ] sleep(1)
[ ] 
[+] UploadTestToHost()
	[ ] // This function will upload 1 or more tests to Host
	[ ] 
	[ ] LIST OF STRING lsContents = {...} 
	[ ] INTEGER iRand = 0 
	[ ] 
	[ ] GeneXpertDx.SetActive( )
	[ ] GeneXpertDx.ViewResultsWorkspace.UploadTestButton.Click()
	[ ] GeneXpertDx.SelectTestsToBeUploaded.SetActive( )
	[ ] sleep(2)
	[ ] iRand = RandInt(1, GeneXpertDx.SelectTestsToBeUploaded.TestResultsTable.RowCount)
	[ ] GeneXpertDx.SelectTestsToBeUploaded.TestResultsTable.ClickCell(iRand,1)
	[ ] GeneXpertDx.SelectTestsToBeUploaded.UploadButton.Click()
	[ ] sleep(1)
	[ ] 
	[+] if GeneXpertDx.NoTestsSelectedDialog.Exists()
		[ ] GeneXpertDx.NoTestsSelectedDialog.OKButton.Click()
		[ ] GeneXpertDx.SelectTestsToBeUploaded.CloseButton.Click()
	[+] else
		[ ] sleep(3)
		[+] if GeneXpertDx.SystemMemoryUsageAlert.Exists(2)
			[ ] LogError("The memory usage has been triggered at: {TimeStr()}")
			[ ] GeneXpertDx.SystemMemoryUsageAlert.OKButton.Click()
		[ ] GeneXpertDx.SelectTestsToBeUploaded.CloseButton.Click()
	[ ] GeneXpertDx.SetActive( )
	[+] if !GeneXpertDx.ViewResultsToggleButton.Selected
		[ ] GeneXpertDx.ViewResultsToggleButton.Toggle()
[ ] 
[+] GenerateTestReport()
	[ ] // This function will generate a test report for the displayed test 
	[ ] 
	[ ] INTEGER iRand = 0 
	[ ] 
	[ ] GeneXpertDx.SetActive( )
	[+] if GeneXpertDx.ViewResultsWorkspace.ReportButton.Exists(5)
		[ ] GeneXpertDx.ViewResultsWorkspace.ReportButton.Click()
		[-] if GeneXpertDx.TestReportWorkspace.Exists(2)
			[ ] GeneXpertDx.TestReportWorkspace.SetActive( )
			[ ] GeneXpertDx.TestReportWorkspace.TestResultsTable.ClickCell(1,1)
			[ ] iRand = RandInt(2, GeneXpertDx.TestReportWorkspace.TestResultsTable.RowCount-1)
			[ ] 
			[ ] // Added by Steve on 4/23/12 to deal with "Please Select a Test" warning message
			[+] // if iRand == 1
				[ ] // iRand = 2
				[ ] // TestReport.ComCepheidGenexpertUiPanel.ClickCell({2,1})
			[ ] // else
			[ ] GeneXpertDx.TestReportWorkspace.TestResultsTable.ClickCell(iRand,1)
			[ ] sleep(0.25)
			[ ] GeneXpertDx.TestReportWorkspace.TestResultsTable.ClickCell(iRand+1,1)
			[ ] // End of added code 4/23/12
			[ ] 
			[ ] GeneXpertDx.TestReportWorkspace.GenerateReportFileButton.Click()
			[ ] // Added by Steve 6-12-2012 to fix "Please Select a test" dialog popup
			[-] if GeneXpertDx.TestReportNoTestSelectedDialog.OKButton.Exists(2)
				[ ] GeneXpertDx.TestReportNoTestSelectedDialog.OKButton.Click()
				[ ] GeneXpertDx.TestReportWorkspace.SetActive( )
				[ ] GeneXpertDx.TestReportWorkspace.TestResultsTable.ClickCell(1,1)
				[ ] GeneXpertDx.TestReportWorkspace.GenerateReportFileButton.Click()
			[ ] // End of added code 6-12-2012
			[ ] 
			[-] if GeneXpertDx.GenerateReportFileWorkspace.Exists(2)
				[ ] // GeneXpertDx.GenerateReportFileWorkspace.SetActive( )
				[ ] // GenerateReportFile.FileName.SetText( "Test Report for Performance Test.pdf" )
				[ ] GeneXpertDx.GenerateReportFileWorkspace.SaveButton.Click()
			[ ] 
			[+] if GeneXpertDx.ReplaceFileDialog.Exists(2)
				[ ] GeneXpertDx.ReplaceFileDialog.YesButton.Click()
			[ ] 
			[+] if GeneXpertDx.SystemMemoryUsageAlert.Exists(5)
				[ ] LogError("The memory usage has been triggered at: {TimeStr()}")
				[ ] GeneXpertDx.SystemMemoryUsageAlert.OKButton.Click()
			[ ] 
			[-] if GeneXpertDx.TestReportUnableToCreateDialog.Exists(2)
				[ ] GeneXpertDx.TestReportUnableToCreateDialog.SetActive()
				[ ] GeneXpertDx.TestReportUnableToCreateDialog.OKButton.Click()
				[ ] LogWarning("Dialog with text 'Unable to Create Test Report - null' is displayed")
				[ ] 
			[-] if GeneXpertDx.TestReportWorkspace.Exists(3)
				[ ] GeneXpertDx.TestReportWorkspace.SetActive( )
				[ ] GeneXpertDx.TestReportWorkspace.CloseButton.Click()
				[ ] GeneXpertDx.SetActive( )
		[-] else
			[ ] LogWarning("Test Report dialog not displayed.")
[ ] 
[+] PrintPreview()
	[ ] // This function will generate a test report for the displayed test 
	[ ] 
	[ ] INTEGER iRand = 0 
	[ ] 
	[ ] GeneXpertDx.SetActive( )
	[ ] GeneXpertDx.ReportButton.Click()
	[ ] GeneXpertDx.TestReportWorkspace.SetActive( )
	[ ] GeneXpertDx.TestReportWorkspace.TestResultsTable.ClickCell(1,1)
	[ ] iRand = RandInt(1, GeneXpertDx.TestReportWorkspace.TestResultsTable.RowCount)
	[ ] GeneXpertDx.TestReportWorkspace.TestResultsTable.ClickCell(iRand,1)
	[ ] 
	[ ] GeneXpertDx.TestReportWorkspace.PreviewPDFButton.Click()
	[ ] sleep(5)
	[+] if GeneXpertDx.SystemMemoryUsageAlert.Exists(2)
		[ ] LogError("The memory usage has been triggered at: {TimeStr()}")
		[ ] GeneXpertDx.SystemMemoryUsageAlert.OKButton.Click()
	[ ] // AdobeReader1.SetActive ()
	[ ] AdobeReaderWindow.Close ()
	[ ] sleep(1)
	[ ] // TestReport.SetActive( )
	[ ] GeneXpertDx.TestReportWorkspace.CloseButton.Click()
	[ ] GeneXpertDx.SetActive( )
	[+] if !GeneXpertDx.ViewResultsToggleButton.Selected
		[ ] GeneXpertDx.ViewResultsToggleButton.Toggle()
[ ] 
[+] PerformanceExportTest()
	[ ] // This function will export the test that is displayed on the View Results screen
	[ ] 
	[ ] INTEGER iRand = 0 
	[ ] 
	[ ] GeneXpertDx.SetActive( )
	[-] if GeneXpertDx.ExportButton.Exists(5)
		[ ] GeneXpertDx.ExportButton.Click()
		[ ] GeneXpertDx.ExportDataDialog.SetActive( )
		[ ] GeneXpertDx.ExportDataDialog.TestResultsTable.ClickCell(1,1)
		[ ] iRand = RandInt(1, GeneXpertDx.ExportDataDialog.TestResultsTable.RowCount)
		[ ] GeneXpertDx.ExportDataDialog.TestResultsTable.ClickCell(iRand,1)
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
	[+] if !GeneXpertDx.ViewResultsToggleButton.Selected
		[ ] GeneXpertDx.ViewResultsToggleButton.Toggle()
	[ ] 
[ ] 
[+] Archive50Tests()
	[ ] // This function will archive one or more tests
	[ ] 
	[ ] INTEGER i = 0 
	[ ] 
	[ ] GeneXpertDx.SetActive( )
	[ ] // Select the Archive Test menu item under the Data Management menu
	[ ] GeneXpertDx.DataManagementMenu.ArchiveTest.Select()
	[ ] GeneXpertDx.SelectTestSToBeArchivedWorkspace.SetActive( )
	[+] for (i = 1; i < GeneXpertDx.SelectTestSToBeArchivedWorkspace.TestResultsTable.RowCount && i < 50; i++)
		[ ] GeneXpertDx.SelectTestSToBeArchivedWorkspace.TestResultsTable.ClickCell(i,1)
	[ ] GeneXpertDx.SelectTestSToBeArchivedWorkspace.OKButton.Click()
	[+] if GeneXpertDx.ArchiveTestsWorkspace.Exists(240)
		[ ] GeneXpertDx.ArchiveTestsWorkspace.SetActive( )
		[ ] GeneXpertDx.ArchiveTestsWorkspace.ProceedButton.Click()
	[ ] // Added code by Steve on 5/5/12
	[+] if GeneXpertDx.SaveDialog.Exists(240)
		[ ] GeneXpertDx.SaveDialog.SetActive( )
		[ ] GeneXpertDx.SaveDialog.SaveButton.Click()
	[ ] // End of added cod 5/5/12
	[ ] sleep(2)
	[+] if GeneXpertDx.ReplaceFileDialog.Exists(2)
		[ ] GeneXpertDx.ReplaceFileDialog.YesButton.Click()
	[+] if GeneXpertDx.ArchiveTestsWorkspace.Exists(120)
		[ ] GeneXpertDx.ArchiveTestsWorkspace.SetActive( )
		[ ] GeneXpertDx.ArchiveTestsWorkspace.OKButton.Click()
	[+] if GeneXpertDx.SystemMemoryUsageAlert.Exists(2)
		[ ] LogError("The memory usage has been triggered at: {TimeStr()}")
		[ ] GeneXpertDx.SystemMemoryUsageAlert.OKButton.Click()
		[ ] // Added code by Steve on 5/7/12
		[+] if GeneXpertDx.ArchiveTestsWorkspace.Exists(220)
			[ ] GeneXpertDx.ArchiveTestsWorkspace.SetActive( )
			[ ] GeneXpertDx.ArchiveTestsWorkspace.OKButton.Click()
		[ ] // End of added code 5/7/12
	[ ] GeneXpertDx.SetActive( )
	[+] if !GeneXpertDx.ViewResultsToggleButton.Selected
		[ ] GeneXpertDx.ViewResultsToggleButton.Toggle()
[ ] 
[-] CreateTestLX(STRING sString, out BOOLEAN bTestStarted)
	[ ] // This function will create a test to be run by the GX Dx application
	[ ] // assume that he Cepheid Link option is enabled
	[ ] // The cartridge barcode header information is entered in the Manual Cartridge Barcode Entry dialog  
	[ ] // assume that the GX Dx is operating in doorless mode so that the operator does not have to close the doors
	[ ] LIST OF STRING lsAssays = {...}
	[ ] LIST OF STRING lsModules = {...}
	[ ] 
	[ ] INTEGER iRand = 0
	[ ] STRING sCartridgeID = '0'
	[ ] STRING sAssayName = ''
	[ ] STRING sReagentLotID = ''
	[ ] STRING sQueryText = ''
	[ ] INTEGER iSampleCount = 0
	[ ] 
	[ ] BOOLEAN bFound = False
	[ ] bTestStarted = false
	[ ] iSampleCount++
	[ ] GeneXpertDx.SetActive( )
	[ ] // Click the Create Test button to display the Create Test dialog
	[ ] GeneXpertDx.CreateTestButton.Click()
	[ ] //sleep(10)
	[-] if GeneXpertDx.CreateTestWorkspace.ScanCartridgeBarcodeDialog.Exists(5)
			[ ] GeneXpertDx.CreateTestWorkspace.ScanCartridgeBarcodeDialog.SetActive( )
			[ ] sleep(2)
			[ ] // Select Manual Entry button
			[ ] GeneXpertDx.CreateTestWorkspace.ScanCartridgeBarcodeDialog.ManualEntryButton.Click()
			[ ] sleep(2)
	[-] if GeneXpertDx.CreateTestWorkspace.ManualCartridgeBarcodeEntryDialog.Exists(5)
			[ ] GeneXpertDx.CreateTestWorkspace.ManualCartridgeBarcodeEntryDialog.SetActive( )
			[ ] GeneXpertDx.CreateTestWorkspace.ManualCartridgeBarcodeEntryDialog.CartridgeBarcodeTextField.SetText(sString)
			[ ] 
			[ ] GeneXpertDx.CreateTestWorkspace.ManualCartridgeBarcodeEntryDialog.OKButton.Click()
		[ ] 
	[ ] //
	[ ] sleep(5)
	[ ] // If message, that sample ID associated with cartridge SN and assay is not found.
	[ ] // Acknowledge the message and start over
	[-] if !GeneXpertDx.CreateTestWorkspace.StartTestButton.Enabled
		[ ] print ("StartTestButton is not Enabled")
		[ ] // Cartridge ID has been used warning is displayed. 
		[-] if GeneXpertDx.ScanCartridgeBarcodeDialog.Exists(2) 
			[ ] GeneXpertDx.ScanCartridgeBarcodeDialog.Close()
			[ ] GeneXpertDx.CreateTestWorkspace.ManualCartridgeBarcodeEntryDialog.CancelButton.Click()
			[ ] GeneXpertDx.CreateTestWorkspace.ScanCartridgeBarcodeDialog.Close()
			[ ] GeneXpertDx.CreateTestWorkspace.Close()
			[ ] 
		[ ] // Sample ID not found for entered cartridge ID
		[ ] 
		[-] if GeneXpertDx.CreateTestWorkspace.SampleIDNotFoundDialog.Exists(70)
				[ ] GeneXpertDx.CreateTestWorkspace.SampleIDNotFoundDialog.SampleIDNotFoundOK.Click()
				[ ] // The following two lines for troubleshooting only. Not needed in the finale draft
				[ ] String text21=GeneXpertDx.CreateTestWorkspace.TextAreaQuery.getText()
				[ ] print ("The host query message:"+CHR(10)+text21)
				[ ] //
				[ ] print("No matching order is found for Cartridge: {sString}")
				[ ] bFound = False
				[ ] 
				[ ] GeneXpertDx.CreateTestWorkspace.ScanCartridgeBarcodeDialog.Close()
				[ ] 
				[ ] GeneXpertDx.CreateTestWorkspace.Close()
		[ ] 
	[-] else
		[ ] sleep(5)
		[ ] // Get query text
		[ ] String selectedSampleID=GeneXpertDx.CreateTestWorkspace.SampleIDTextField.getText()
		[-] if len(selectedSampleID)==0
			[ ] logWarning("There is no sample ID selected, but the start test button is clickable!")
			[ ] sleep(30)
			[ ] // Add on 08/24/16 EG
			[ ] GeneXpertDx.CreateTestWorkspace.Close()
			[ ] sleep(10)
		[+] else
			[ ] print("The currently selected sample id is '"+selectedSampleID+"'")
			[ ] String text22=GeneXpertDx.CreateTestWorkspace.TextAreaQuery.getText()
			[ ] print("The host test area:"+CHR(10)+text22)
			[-] if MatchStr("*1 order(s) have been downloaded.*",text22)
				[ ] print ("Detected orders downloaded")
    
				[ ] sleep(4)
			[ ] GeneXpertDx.CreateTestWorkspace.StartTestButton.Click()
		[ ] 
	[ ] // Check for Memory Usage warning
	[-] if GeneXpertDx.SystemMemoryUsageAlert.Exists(2)
			[ ] LogError("The memory usage has been triggered at: {TimeStr()}")
			[ ] GeneXpertDx.SystemMemoryUsageAlert.Close()
		[ ] sleep(1)
	[ ] 
	[ ] GeneXpertDx.SetActive( )
	[-] if !GeneXpertDx.ViewResultsToggleButton.Selected
		[ ] GeneXpertDx.ViewResultsToggleButton.Toggle()
[ ] 
[ ] 
[ ] 
[ ] 
