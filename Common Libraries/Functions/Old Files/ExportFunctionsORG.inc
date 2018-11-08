[ ] // the first use statement is needed by Silk Central
[ ] use "..\/MasterFrame.inc"
[ ] use "..\constants\Constants.inc"
[ ] use "..\types\ExportTypes.inc"
[ ] 
[ ] // This function will export the displayed sample using the default filename into the default folder
[-] ExportTestOpticsOnly(out STRING FileName)
	[ ] //
	[ ] // Export the file of the test that is displayed on the View Result screen
	[ ] //
	[ ] GeneXpert®DxSystem.Export.Click()
	[ ] sleep(3)
	[+] ExportData.VerifyProperties ({...})
		[ ] ""
		[ ] {}
		[-] {...}
			[-] {"Export", {...}}
				[ ] {"Caption",              "Export"}
			[-] {"Cancel", {...}}
				[ ] {"Caption",              "Cancel"}
	[ ] ExportData.SetActive( )
	[ ] ExportData.AnalysisSettings.Uncheck()
	[ ] ExportData.TestResult.Uncheck()
	[ ] ExportData.Export.Click()
	[ ] sleep(3)
	[ ] ResultExport.SetActive( )
	[+] // ResultExport.VerifyProperties ({...})
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
	[ ] ResultExport.FileName.SetFocus()
	[ ] FileName = ResultExport.FileName.GetText()
	[ ] // ResultExport.TypeKeys("<Tab 2>")
	[ ] ResultExport.Save.Click()
	[ ] sleep(1)
	[-] if (ReplaceFile.Exists())
		[ ] ReplaceFile.Yes.Click()
	[ ] ExportData.SetActive( )
	[ ] ExportData.Cancel.Click()
[ ] 
