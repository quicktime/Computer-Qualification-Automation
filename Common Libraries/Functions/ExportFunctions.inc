[ ] use "..\..\Common Libraries\MasterUseStmts.inc"
[ ] 
[ ] // This function will export the displayed sample using the default filename into the default folder
[-] ExportTestOpticsOnly(out STRING FileName)
	[ ] //
	[ ] // Export the file of the test that is displayed on the View Result screen
	[ ] //
	[ ] GeneXpertDx.Export.Click()
	[ ] sleep(3)
	[+] // GeneXpertDx.ExportDataDialog.VerifyProperties ({...})
		[ ] // ""
		[ ] // {}
		[-] // {...}
			[-] // {"Export", {...}}
				[ ] // {"Caption",              "Export"}
			[-] // {"Cancel", {...}}
				[ ] // {"Caption",              "Cancel"}
	[ ] GeneXpertDx.ExportDataDialog.SetActive( )
	[ ] GeneXpertDx.ExportDataDialog.AnalysisSettings.Uncheck()
	[ ] GeneXpertDx.ExportDataDialog.TestResult.Uncheck()
	[ ] GeneXpertDx.ExportDataDialog.ExportButton.Click()
	[ ] sleep(3)
	[ ] GeneXpertDx.ResultExportDialog.SetActive( )
	[+] // GeneXpertDx.ResultExportDialog.VerifyProperties ({...})
		[ ] // "" 
		[ ] // {...}
		[-] // {...}
			[-] // {"Save", {...}}
				[ ] // {"Caption",            "Save"}
			[-] // {"FileName", {...}}
				[ ] // {"Enabled",            TRUE}
				[ ] // {"Exists",             TRUE}
			[-] // {"JavaJFCPushButton (""Cancel|$javax.swing.JButton[5]"")", {...}}
				[ ] // {"Caption",            "Cancel"}
	[ ] FileName = GeneXpertDx.ResultExportDialog.FileNameTextField.Text
	[ ] // GeneXpertDx.ResultExportDialog.TypeKeys("<Tab 2>")
	[ ] GeneXpertDx.ResultExportDialog.SaveButton.Click()
	[ ] sleep(1)
	[-] if (GeneXpertDx.ReplaceFileDialog.Exists())
		[ ] GeneXpertDx.ReplaceFileDialog.YesButton.Click()
	[ ] GeneXpertDx.ExportDataDialog.SetActive( )
	[ ] GeneXpertDx.ExportDataDialog.CancelButton.Click()
	[ ] sleep(5)
[ ] 
[ ] // Functions for D8380 Probe Check project
[ ] // Export data including melt from the t test that is displayed on the View Result screen
[+] ExportMeltData(out STRING FileName)
	[ ] //
	[ ] // Export the file of the test that is displayed on the View Result screen
	[ ] //
	[ ] GeneXpertDx.Export.Click()
	[ ] sleep(3)
	[+] GeneXpertDx.ExportDataDialog.VerifyProperties ({...})
		[ ] ""
		[ ] {}
		[-] {...}
			[-] {"Export", {...}}
				[ ] {"Caption",              "Export"}
			[-] {"Cancel", {...}}
				[ ] {"Caption",              "Cancel"}
	[ ] GeneXpertDx.ExportDataDialog.SetActive( )
	[ ] GeneXpertDx.ExportDataDialog.AnalysisSettings.Uncheck()
	[ ] GeneXpertDx.ExportDataDialog.TestResult.Uncheck()
	[ ] // GeneXpertDx.ExportDataDialog.OpticalData.Uncheck()
	[ ] GeneXpertDx.ExportDataDialog.MeltData.Check()
	[ ] GeneXpertDx.ExportDataDialog.Export.Click()
	[ ] sleep(8)
	[ ] GeneXpertDx.ResultExportDialog.SetActive( )
	[+] // GeneXpertDx.ResultExportDialog.VerifyProperties ({...})
		[ ] // "" 
		[ ] // {...}
		[-] // {...}
			[-] // {"Save", {...}}
				[ ] // {"Caption",            "Save"}
			[-] // {"FileName", {...}}
				[ ] // {"Enabled",            TRUE}
				[ ] // {"Exists",             TRUE}
			[-] // {"JavaJFCPushButton (""Cancel|$javax.swing.JButton[5]"")", {...}}
				[ ] // {"Caption",            "Cancel"}
	[ ] GeneXpertDx.ResultExportDialog.FileName.SetFocus()
	[ ] FileName = GeneXpertDx.ResultExportDialog.FileName.Text
	[ ] // GeneXpertDx.ResultExportDialog.TypeKeys("<Tab 2>")
	[ ] GeneXpertDx.ResultExportDialog.SaveButton.Click()
	[ ] sleep(1)
	[-] if (GeneXpertDx.ReplaceFileDialog.Exists())
		[ ] GeneXpertDx.ReplaceFileDialog.YesButton.Click()
	[ ] GeneXpertDx.ExportDataDialog.SetActive( )
	[ ] GeneXpertDx.ExportDataDialog.CancelButton.Click()
	[ ] print("from function   {FileName}")
	[ ] sleep(1)
	[ ] //
[ ] 
[ ] 
[ ] // Functions for D8381 Curve Fitting project
[ ] // This function exports Analysis Settings, Test Result, and Optical Data
[-] // ExportTest(out STRING FileName)
	[ ] // //
	[ ] // // Export the file of the test that is displayed on the View Result screen
	[ ] // //
	[ ] // GeneXpert®DxSystem.Export.Click()
	[ ] // sleep(3)
	[+] // ExportData.VerifyProperties ({...})
		[ ] // ""
		[ ] // {}
		[+] // {...}
			[+] // {"Export", {...}}
				[ ] // {"Caption",              "Export"}
			[+] // {"Cancel", {...}}
				[ ] // {"Caption",              "Cancel"}
	[ ] // ExportData.SetActive( )
	[ ] // // ExportData.AnalysisSettings.Uncheck()
	[ ] // // ExportData.TestResult.Uncheck()
	[ ] // ExportData.Export.Click()
	[ ] // sleep(3)
	[ ] // GeneXpertDx.ResultExportDialog.SetActive( )
	[ ] // GeneXpertDx.ResultExportDialog.FileName.SetFocus()
	[ ] // FileName = GeneXpertDx.ResultExportDialog.FileName.GetText()
	[ ] // GeneXpertDx.ResultExportDialog.TypeKeys("<Tab 2>")
	[ ] // GeneXpertDx.ResultExportDialog.Save.Click()
	[ ] // sleep(1)
	[+] // if (ReplaceFile.Exists())
		[ ] // ReplaceFile.Yes.Click()
	[ ] // ExportData.SetActive( )
	[ ] // ExportData.Cancel.Click()
[ ] 
[ ] // Function to Ready and Verify ExportFiles, regardless of number of analytes, or columns
[-] ReadyExportFile(HANDLE hDB, EXPORTMASTER rExportMaster, LIST headers)
	[ ] print(rExportMaster.sTabName)
	[ ] HANDLE hVerifyFile = DB_ExecuteSQL(hDB, "Select * from {rExportMaster.sTabName}")
	[ ] HANDLE hCSVFile, hExpected
	[ ] 
	[ ] STRING sCSVFileName = ''
	[ ] STRING sLine = ""
	[ ] 
	[ ] BOOLEAN bStartLine = FALSE
	[ ] BOOLEAN bBlankLine = FALSE
	[ ] 
	[ ] LIST OF STRING lsExpectedAnalyte
	[ ] 
	[ ] REC_MASTER_BCT rMaster
	[ ] 
	[-] while (DB_FetchNext(hVerifyFile, rMaster))
		[ ] 
		[+] if rMaster.sSampleID == null 
			[ ] break
		[ ] //
		[ ] // Select the test from the View Test screen by the Sample ID
		[ ] //
		[ ] SelectTest (rMaster.sSampleID)
		[ ] //
		[ ] // Export the selected test
		[ ] //
		[ ] ExportTestOpticsOnly(sCSVFileName)
		[ ] //
		[ ] // Open the exported csv file to do the verification
		[ ] // Assumption: The exported file was saved to the default directory i.e. C:\GeneXpert\export
		[ ] SYS_SetDrive ("C")
		[ ] SYS_SetDir("C:\GeneXpert\export")
		[ ] 
		[ ] sCSVFileName = PATH + sCSVFileName
		[ ] hCSVFile = SYS_FileOpen (sCSVFileName, FM_READ)
		[ ] //
		[ ] // Position the pointer in the export file to the first line of the "Optics" section
		[ ] //
		[ ] bStartLine = FALSE
		[-] while (!bStartLine && SYS_FileReadLine(hCSVFile, sLine))
			[-] if (sLine == rMaster.sHeaderLine)
				[ ] bStartLine = TRUE
		[-] if bStartLine != TRUE
			[ ] SYS_FileClose(hCSVFile)
			[ ] hCSVFile = SYS_FileOpen (sCSVFileName, FM_READ)
			[-] while (!bStartLine && SYS_FileReadLine(hCSVFile, sLine))
				[-] if (sLine == rMaster.sHeaderLine)
					[ ] bStartLine = TRUE
		[ ] // Open the correct spreadsheet tab to access the correct expected values for the export file Optics values
		[ ] //
		[ ] hExpected = DB_ExecuteSQL(hDB, "Select * from {rMaster.sExportTab}")
		[ ] // 
		[ ] // Print out the Sample ID that we are processing
		[ ] //
		[ ] print("==========================================")
		[ ] print("Processing for sample ID: {rMaster.sSampleID}")
		[ ] print("==========================================")
		[ ] print()
		[-] while (DB_FetchNext(hExpected, lsExpectedAnalyte))
			[ ] //while (DB_FetchNext(hExpected, rExpectedOptics))
			[ ] 
			[ ] int DEC = StrPos(".", lsExpectedAnalyte[1]) // Gets the position of the decimal point in the element
			[ ] STRING sExpectedCycle = LEFT(lsExpectedAnalyte[1], DEC - 1) // Gets the cycle number from the expected file, excluding the decimal and digits to the right
			[ ] STRING sExportedCycle = GetField(sLine, COMMA, 1) // Gets the cycle number from the export file
			[ ] 
			[-] if lsExpectedAnalyte[1] == null  // if the first element (cycle) is null, break
				[ ] break
			[ ] 
			[ ] ListDelete(lsExpectedAnalyte, 1) // Delete sExpectedCycle
			[ ] 
			[ ] int count = ListCount(lsExpectedAnalyte) // Gets number of elements (used for looping)
			[ ] 
			[ ] FileReadLine(hCSVFile, sLine) // Reads a line from the file into sLine
			[ ] print("This is the export file line: {sLine}")
			[ ] print()
			[ ] 
			[ ] // || GetField(sLine, COMMA, 5) != ZERO || GetField(sLine, COMMA, 5) != ZERO_LONG
			[ ] 
			[ ] // Checks sExpectedCycle first. If the expected and export sExpectedCycles do not match, log an error
			[-] if sExpectedCycle != sExportedCycle
				[ ] LogError("The Cycle {sExpectedCycle} is not in the export file")
			[ ] print("This is the expected cycle number: {sExpectedCycle}")
			[ ] print("This is the exported cycle number: {sExportedCycle}")
			[ ] print("----------------------------------------------------------")
			[ ] 
			[ ] // Check each column for that cycle. If the expected and export columns do not match, log an error
			[ ] INTEGER j
			[-] for (j = 1; j<count; j++)
				[ ] STRING sExpected = LEFT(lsExpectedAnalyte[j], StrPos(".", lsExpectedAnalyte[j]) + 1) // Gets the expected field, the decimal, and one digit to the right (to match the export file)
				[ ] STRING sExported = GetField(sLine, COMMA, j+1) // Gets the exported field
				[ ] STRING sHeader = headers[j]
				[ ] 
				[-] if sExpected != sExported
					[ ] LogError("The {sHeader} value {sExpected} for cycle {sExpectedCycle} does not match the export file")
				[-] else
					[ ] print("The {sHeader} value {sExpected} for cycle {sExpectedCycle} does match the export file")
				[ ] print("This is the expected {sHeader} value: {sExpected}")
				[ ] print("This is the exported {sHeader} value: {sExported}")
				[ ] print("----------------------------------------------------------")
			[ ] print()
		[ ] 
		[ ] print()
		[ ] SYS_FileClose(hCSVFile)
		[ ] DB_FinishSQL(hExpected)
[ ] 
