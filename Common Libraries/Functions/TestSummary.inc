[ ] use "..\..\Common Libraries\MasterUseStmts.inc"
[ ] 
[ ] // Launches GX Summary tool.  If no arguments are passed, creates a summary with all tests and default filename
[ ] // If only filename is passed as an argument, then all tests are put in a summary by that name.
[ ] // If both a filename and list of strings is passed, a summary with only select tests is generated.
[ ] 
[ ] 
[ ] 
[ ] 
[-] STRING GenerateTestSummaryFile(STRING sFilename  optional, LIST OF STRING lsSampleIDs  optional)
	[ ] MyStartTestSummary()
	[ ] GXTestSummary.SetActive()
	[-] if GXTestSummary.AdvancedButton.Exists(5)
		[ ] GXTestSummary.AdvancedButton.Click()
	[ ] GXTestSummary.SetActive()
	[ ] sleep(2)
	[ ] 
	[-] if lsSampleIDs!=NULL
		[ ] STRING sSampleID=''
		[ ] TABLECELL tcCell
		[-] for each sSampleID in lsSampleIDs
			[ ] // find cell
			[-] do
				[ ] tcCell=GXTestSummary.TestTable.FindCell(sSampleID)
				[ ] GXTestSummary.TestTable.ClickCell(tcCell.Row,1)
				[ ] print("Selected test with SID={sSampleID}")
			[-] except
				[ ] LogError("Could not find test with SID={sSampleID}")
	[-] else
		[ ] GXTestSummary.SelectAllButton.Click()
	[ ] 
	[ ] sleep(2)
	[ ] GXTestSummary.GenerateTestSummaryButton.Click()
	[-] if GXTestSummary.ExportTestData.Exists()
		[ ] GXTestSummary.ExportTestData.OkButton.Click()
	[-] else
		[ ] GXTestSummary.TestSummarySaveDialog.SaveButton.Click()
	[ ] 
	[ ] sleep(5)
	[ ] //moved from old position here JG 8/14/17
	[-] if GXTestSummary.TestSummaryReplaceFileDialog.Exists(1)//.JavaDialogBox("Replace File?")
		[ ] GXTestSummary.TestSummaryReplaceFileDialog.YesButton.Click()
		[ ] LogWarning("Overwrote existing file '{sFilename}'")
	[ ] 
	[ ] // Wait for the tests to get prepped.
	[ ] integer iLoopCountA =0
	[-] while iLoopCountA < 150
		[-] if GXTestSummary.GenerateTestSummaryDialog.Exists(10)//JavaMainWin("GeneXpert®//  Test Summary").JavaDialogBox("Generate Test Summary").Exists()
			[ ] print ("The Test Summary preparation progress bar exists at {TimeStr ( )}")
		[-] else
			[ ] print ("The Test Summary preparation progress bar does NOT exist at {TimeStr ( )}")
			[ ] iLoopCountA=500
		[ ] sleep(15)
		[ ] iLoopCountA++
	[ ] 
	[ ] GXTestSummary.TypeKeys ("<Enter 1>")
	[ ] 
	[+] // if GXTestSummary.TestSummarySaveDialog.Filename.Exists(600)
		[-] // if sFilename!=NULL
			[-] // if LEN(sFilename)>0
				[ ] // GXTestSummary.TestSummarySaveDialog.Filename.SetText(sFilename)
		[ ] // print ()
		[ ] // sFilename=GXTestSummary.TestSummarySaveDialog.Filename.GetText()
		[ ] // 
		[ ] // 
		[ ] // GXTestSummary.TestSummarySaveDialog.SaveButton.Click()
		[ ] // 
		[ ] // 
		[ ] // sleep (20)
		[ ] // 
		[ ] // Wait for the file to be generated
		[ ] // integer iLoopCountB =0
		[-] // while iLoopCountB < 150
			[-] // if GXTestSummary.GenerateTestSummaryDialog.exists()//JavaMainWin("GeneXpert®//  Test Summary").JavaDialogBox("Generate Test Summary").Exists()
				[ ] // print ("The Test Summary generation progress bar exists at {TimeStr ( )}")
			[-] // else
				[ ] // print ("The Test Summary generation progress bar does NOT exist at {TimeStr ( )}")
				[ ] // iLoopCountB=500
			[ ] // sleep(15)
			[ ] // iLoopCountB++
		[ ] 
		[ ] 
		[ ] 
		[ ] 
		[ ] 
		[-] // while GXTestSummary.TestSummarySaveDialog.Processtext.Exists(600)//JavaMainWin("GeneXpert®  Test Summary").JavaDialogBox("Generate Test Summary")
			[ ] // continue
		[ ] 
		[ ] GXTestSummary.SetActive()
		[ ] GXTestSummary.CloseButton.Click()
		[ ] 
		[-] //if !JavaMainWin("GeneXpert®  Test Summary").JavaDialogBox("Generate Test Summary").Exists()
			[ ] //GXTestSummary.SetActive()
			[ ] //GXTestSummary.CloseButton.Click()
		[-] ////else
			[ ] //LogError("The test summary tool took an abnormally long time to write to the summary file.")
		[ ] 
		[ ] return sFilename
	[-] // else 
		[ ] // LogError("The test summary tool took an abnormally long time to prepare the summary.")
		[ ] // return ""
[ ] 
[ ] 
