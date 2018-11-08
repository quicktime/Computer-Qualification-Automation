[ ] use "..\..\Common Libraries\MasterUseStmts.inc"
[ ] 
[+] STRING GetSystemName()
	[ ] // This function returns the system name stored in the  gx_assay  database config table
	[ ] 
	[ ] // Variables
	[ ] HANDLE hDB, hInfoDB
	[ ] STRING sSystemName = ''
	[ ] 
	[ ] STRING sSelect = "SELECT param_val From config where param_key = 'ac_system_name'"
	[ ] 
	[ ] hDB = DB_Connect("DSN=gx_db;UID=sa;PWD={DB_PASSWORD}")
	[ ] 
	[ ] hInfoDB = DB_ExecuteSQL(hDB, sSelect )
	[ ] DB_FetchNext(hInfoDB, sSystemName)
	[ ] 
	[ ] DB_FinishSQL(hInfoDB)
	[ ] 
	[ ] // Destroy all SQL queries and close all excel/db connections 
	[ ] DB_Disconnect(hDB)
	[ ] 
	[ ] return sSystemName
	[ ] 
[ ] 
[ ] // This function creates the export filename based on the given information and the start time of the test (gotten from the GUI)
[ ] // this function assumes that the start time is in MM/DD/YY order
[+] GetExportFileName(STRING sSampleID, STRING sFileEnding, out STRING sFileName)
	[ ] STRING sStartTime = ''
	[ ] 
	[ ] sFileName = ''
	[ ] sStartTime = GeneXpertDx.ViewResultsWorkspace.StartTimeTextField.Text
	[ ] // Convert the start time into the middle part of the export filename
	[ ] sStartTime = StrTran(sStartTime, "/", ".")
	[ ] sStartTime = StrTran(sStartTime, ":", ".")
	[ ] sStartTime = StrTran(sStartTime, " ", "_")
	[ ] // Create the filename based on the Sample ID + Start Time + File ending
	[ ] // e.g. 76081538-rpt_2009.04.09_08.13.37-basic.csv
	[ ] sFileName = sSampleID + '_20' + SubStr(sStartTime,7,2) + '.' + SubStr(sStartTime, 1,5) + '_' + SubStr(sStartTime,10,8)  + sFileEnding
	[ ] print("The export filename is: {sFileName}")
[ ] 
[+] ProcessHeaderLine1(STRING sLine)
	[ ] //Compare the first line of the export i.e. the header field
	[-] if Trim(GetField(sLine, COMMA, 2)) != HEADER
		[ ] LogError("The header field '{HEADER}' is not in the export file")
	[ ] print("This is the expected header: {HEADER}")
	[ ] print("This is the exported header: {Trim(GetField(sLine, COMMA, 2))}")
	[ ] print("----------------------------------------------------------")
	[ ] 
[ ] 
[+] ProcessSystemName(STRING sLine)
	[ ] //Compare the second line of the export i.e. the system name
	[-] if Trim(GetField(sLine, COMMA, 2)) != GetSystemName()
		[ ] LogError("The system name field  '{GetSystemName()}' is not in the export file")
	[ ] print("This is the expected system name: {GetSystemName()}")
	[ ] print("This is the exported system name: {Trim(GetField(sLine, COMMA, 2))}")
	[ ] print("----------------------------------------------------------")
	[ ] 
	[ ] 
[ ] 
[+] ProcessReportUserName(STRING sLine, STRING sUserType)
	[ ] //Compare the fourth line of the export i.e. the report user name
	[-] if Trim(GetField(sLine, COMMA, 2)) != sUserType
		[ ] LogError("The report user name field  '{sUserType}' is not in the export file")
	[ ] print("This is the expected report user name: {sUserType}")
	[ ] print("This is the exported report user  name: {Trim(GetField(sLine, COMMA, 2))}")
	[ ] print("----------------------------------------------------------")
	[ ] 
[ ] 
[+] ProcessAssayName(STRING sLine)
	[ ] //Compare the Assay Name  line of the export
	[ ] INT i1 = 0, i2 = 0
	[ ] 
	[ ] i1 = StrPos('"', sLine)
	[-] if i1 != 0
		[ ] i2 = StrPos('"', sLine, TRUE)
		[ ] sLine = SubStr(sLine, i1+1, (i2 - i1)-1)
		[-] if sLine != GeneXpertDx.AssayNameTextField.Text
			[ ] LogError("The Assay name field on the View Results screen does not match the one in the export file")
		[ ] print("This is the expected Assay name: {GeneXpertDx.AssayNameTextField.Text}")
		[ ] print("This is the exported Assay  name: {sLine}")
		[ ] print("----------------------------------------------------------")
	[-] else
		[-] if Trim(GetField(sLine, COMMA, 2)) != GeneXpertDx.AssayNameTextField.Text
			[ ] LogError("The Assay name field on the View Results screen does not match the one in the export file")
		[ ] print("This is the expected Assay name: {GeneXpertDx.AssayNameTextField.Text}")
		[ ] print("This is the exported Assay  name: {Trim(GetField(sLine, COMMA, 2))}")
		[ ] print("----------------------------------------------------------")
[ ] 
[+] ProcessAssayVersion(STRING sLine)
	[ ] //Compare the Assay Version  line of the export
	[-] if Trim(GetField(sLine, COMMA, 2)) != GeneXpertDx.AssayVersionTextField.Text
		[ ] LogError("The Assay version field on the View Results screen does not match the one in the export file")
	[ ] print("This is the expected Assay version: {GeneXpertDx.AssayVersionTextField.Text}")
	[ ] print("This is the exported Assay  version: {Trim(GetField(sLine, COMMA, 2))}")
	[ ] print("----------------------------------------------------------")
	[ ] 
[ ] 
[+] ProcessAssayType(STRING sLine)
	[ ] //Compare the Assay Type  line of the export
	[-] if Trim(GetField(sLine, COMMA, 2)) != GeneXpertDx.ViewResultsWorkspace.AssayTypeTextField.Text
		[ ] LogError("The Assay Type field on the View Results screen does not match the one in the export file")
	[ ] print("This is the expected Assay Type: {GeneXpertDx.ViewResultsWorkspace.AssayTypeTextField.Text}")
	[ ] print("This is the exported Assay  Type: {Trim(GetField(sLine, COMMA, 2))}")
	[ ] print("----------------------------------------------------------")
	[ ] 
[ ] 
[+] ProcessReagentLotID(STRING sLine)
	[ ] //Compare the Reagent Lot ID  line of the export
	[ ] // If the Reagent Lot ID on the left hand panel = BLANK and the Reagent Lot ID of the 
	[ ] // export file = 'common' then they are equal 
	[ ] // else
	[ ] //Reagent Lot ID is 5 characters long but we extract the middle nonzero integers.
	[ ] //e.g. if on screen it looks like 01011 then the Reagent Lot ID is 10
	[ ] 
	[ ] STRING sReagentLotID = ''
	[ ] STRING sAssayDisclaimer = ''
	[ ] 
	[ ] sReagentLotID = GeneXpertDx.ViewResultsWorkspace.ReagentLotIDTextField.Text
	[-] if sReagentLotID == BLANK && Trim(GetField(sLine, COMMA, 2)) == 'common'
		[ ] print("This is the expected Reagent Lot ID: {sReagentLotID}")
		[ ] print("This is the exported Reagent Lot ID: {Trim(GetField(sLine, COMMA, 2))}")
		[ ] print("----------------------------------------------------------")
	[-] else
		[-] if SubStr(sReagentLotID,1,1) != '0'
			[ ] sReagentLotID = SubStr(sReagentLotID,1,3)
		[-] else if SubStr(sReagentLotID,2,1) != '0'
			[ ] sReagentLotID = SubStr(sReagentLotID,2,2)
		[-] else
			[ ] sReagentLotID = SubStr(sReagentLotID,3,1)
		[-] if Trim(GetField(sLine, COMMA, 2)) != sReagentLotID
			[ ] LogError("The Reagent Lot ID  field on the View Results screen does not match the one in the export file")
		[ ] print("This is the expected Reagent Lot ID: {sReagentLotID}")
		[ ] print("This is the exported Reagent Lot ID: {Trim(GetField(sLine, COMMA, 2))}")
		[ ] print("----------------------------------------------------------")
	[ ] 
[ ] 
[+] ProcessAssayDisclaimer(STRING sLine)
	[ ] 
	[ ] STRING sAssayDisclaimer = ''
	[ ] 
	[ ] GeneXpertDx.SetActive()
	[ ] //Compare the Assay Disclaimer  line of the export
	[ ] sAssayDisclaimer = GeneXpertDx.DisclaimerText.Text
	[-] if Trim(GetField(sLine, COMMA, 2)) != Trim(sAssayDisclaimer)
		[ ] LogError("The Assay Disclaimer  field on the View Results screen does not match the one in the export file")
	[ ] print("This is the expected Assay Disclaimer: {Trim(sAssayDisclaimer)}")
	[ ] print("This is the exported Assay Disclaimer: {Trim(GetField(sLine, COMMA, 2))}")
	[ ] print("----------------------------------------------------------")
	[ ] 
[ ] 
[+] ProcessSampleID(STRING sLine)
	[ ] //Compare the Sample ID  line of the export
	[-] if Trim(GetField(sLine, COMMA, 2)) != Trim(GeneXpertDx.ViewResultsWorkspace.SampleIDTextField.Text)
		[ ] LogError("The Sample ID  field on the View Results screen does not match the one in the export file")
	[ ] print("This is the expected Sample ID: {Trim(GeneXpertDx.ViewResultsWorkspace.SampleIDTextField.Text)}")
	[ ] print("This is the exported Sample ID: {Trim(GetField(sLine, COMMA, 2))}")
	[ ] print("----------------------------------------------------------")
	[ ] 
[ ] 
[+] ProcessPatientID(STRING sLine)
	[ ] //Compare the Patient ID  line of the export if it is not NULL
	[-] if StrPos(COMMA, sLine) 
		[-] if Trim(GetField(sLine, COMMA, 2)) != Trim(GeneXpertDx.ViewResultsWorkspace.PatientIDTextField.Text)
			[ ] LogError("The Patient  ID  field on the View Results screen does not match the one in the export file")
		[ ] print("This is the expected Patient  ID: {Trim(GeneXpertDx.ViewResultsWorkspace.PatientIDTextField.Text)}")
		[ ] print("This is the exported Patient  ID: {Trim(GetField(sLine, COMMA, 2))}")
		[ ] print("----------------------------------------------------------")
	[ ] 
[ ] 
[+] ProcessSampleType(STRING sLine)
	[ ] //Compare the Sample Type  line of the export
	[-] if StrPos(COMMA, sLine)
		[-] if Trim(GetField(sLine, COMMA, 2)) != Trim(GeneXpertDx.ViewResultsWorkspace.OtherSampleTypeTextField.Text)
			[ ] LogError("The Other Sample Type  field on the View Results screen does not match the one in the export file")
		[ ] print("This is the expected Other Sample Type: {Trim(GeneXpertDx.ViewResultsWorkspace.OtherSampleTypeTextField.getText())}")
		[ ] print("This is the exported Other Sample Type: {Trim(GetField(sLine, COMMA, 2))}")
		[ ] print("----------------------------------------------------------")
	[ ] 
[ ] 
[+] ProcessTestType(STRING sLine)
	[ ] //Compare the Test Type  line of the export
	[-] if Trim(GetField(sLine, COMMA, 2)) != Trim(GeneXpertDx.ViewResultsWorkspace.TestTypeComboBox.SelectedItem)
		[ ] LogError("The Test Type  field on the View Results screen does not match the one in the export file")
	[ ] print("This is the expected Test Type: {Trim(GeneXpertDx.ViewResultsWorkspace.TestTypeComboBox.SelectedItem)}")
	[ ] print("This is the exported Test Type: {Trim(GetField(sLine, COMMA, 2))}")
	[ ] print("----------------------------------------------------------")
	[ ] 
[ ] 
[+] ProcessUserName(STRING sLine)
	[ ] //Compare the User Name  line of the export
	[-] if Trim(GetField(sLine, COMMA, 2)) != Trim(GeneXpertDx.ViewResultsWorkspace.UserNameTextField.Text)
		[ ] LogError("The User Name  field on the View Results screen does not match the one in the export file")
	[ ] print("This is the expected User Name: {Trim(GeneXpertDx.ViewResultsWorkspace.UserNameTextField.Text)}")
	[ ] print("This is the exported User Name: {Trim(GetField(sLine, COMMA, 2))}")
	[ ] print("----------------------------------------------------------")
	[ ] 
[ ] 
[+] ProcessStatus(STRING sLine)
	[ ] //Compare the Status  line of the export
	[-] if Trim(GetField(sLine, COMMA, 2)) != Trim(GeneXpertDx.ViewResultsWorkspace.TestStatusTextField.Text)
		[ ] LogError("The Status  field on the View Results screen does not match the one in the export file")
	[ ] print("This is the expected Status: {Trim(GeneXpertDx.ViewResultsWorkspace.TestStatusTextField.Text)}")
	[ ] print("This is the exported Status: {Trim(GetField(sLine, COMMA, 2))}")
	[ ] print("----------------------------------------------------------")
	[ ] 
	[ ] 
[ ] 
[+] ProcessNotes(STRING sLine)
	[ ] //Compare the Notes  line of the export if it is not NULL
	[-] if StrPos(COMMA, sLine) 
		[ ] STRING sNotes = ''
		[ ] sNotes = StrTran (GeneXpertDx.ViewResultsWorkspace.NotesTextArea.Text, chr(10), ' ')
		[ ] print("Notes field: {sNotes}")
		[-] if Trim(GetField(sLine, COMMA, 2)) != Trim(sNotes)
			[ ] LogError("The Notes  field on the View Results screen does not match the one in the export file")
		[ ] print("This is the expected Notes: {Trim(sNotes)}")
		[ ] print("This is the exported Notes: {Trim(GetField(sLine, COMMA, 2))}")
		[ ] print("----------------------------------------------------------")
	[ ] 
[ ] 
[+] ProcessStartTime(STRING sLine)
	[ ] //Compare the Start Time  line of the export
	[-] if Trim(GetField(sLine, COMMA, 2)) != Trim(GeneXpertDx.ViewResultsWorkspace.StartTimeTextField.Text)
		[ ] LogError("The Start Time  field on the View Results screen does not match the one in the export file")
	[ ] print("This is the expected Start Time: {Trim(GeneXpertDx.ViewResultsWorkspace.StartTimeTextField.Text)}")
	[ ] print("This is the exported Start Time: {Trim(GetField(sLine, COMMA, 2))}")
	[ ] print("----------------------------------------------------------")
	[ ] 
[ ] 
[+] ProcessEndTime(STRING sLine)
	[ ] //Compare the End Time  line of the export
	[-] if Trim(GetField(sLine, COMMA, 2)) != Trim(GeneXpertDx.ViewResultsWorkspace.EndTimeTextField.Text)
		[ ] LogError("The Start Time  field on the View Results screen does not match the one in the export file")
	[ ] print("This is the expected End Time: {Trim(GeneXpertDx.ViewResultsWorkspace.EndTimeTextField.Text)}")
	[ ] print("This is the exported End Time: {Trim(GetField(sLine, COMMA, 2))}")
	[ ] print("----------------------------------------------------------")
	[ ] 
[ ] 
[+] ProcessErrorStatus(STRING sLine)
	[ ] //Compare the Error Status  line of the export
	[-] if Trim(GetField(sLine, COMMA, 2)) != GeneXpertDx.ViewResultsWorkspace.ErrorStatusTextField.Text
		[ ] LogError("The Error Status field on the View Results screen does not match the one in the export file")
	[ ] print("This is the expected Error Status: {GeneXpertDx.ViewResultsWorkspace.ErrorStatusTextField.Text}")
	[ ] print("This is the exported Error Status: {Trim(GetField(sLine, COMMA, 2))}")
	[ ] print("----------------------------------------------------------")
	[ ] 
[ ] 
[+] ProcessReagentLSP(STRING sLine)
	[ ] //Compare the Reagent Lot ID  line of the export
	[-] if Trim(GetField(sLine, COMMA, 2)) != GeneXpertDx.ViewResultsWorkspace.ReagentLotIDTextField.Text
		[ ] LogError("The Reagent Lot ID field on the View Results screen does not match the one in the export file")
	[ ] print("This is the expected Reagent Lot ID: {GeneXpertDx.ViewResultsWorkspace.ReagentLotIDTextField.Text}")
	[ ] print("This is the exported Reagent Lot ID: {Trim(GetField(sLine, COMMA, 2))}")
	[ ] print("----------------------------------------------------------")
	[ ] 
[ ] 
[+] ProcessExpirationDate(STRING sLine)
	[ ] //Compare the Expiration Date  line of the export
	[-] if Trim(GetField(sLine, COMMA, 2)) != GeneXpertDx.ViewResultsWorkspace.ExpirationDateTextField.Text
		[ ] LogError("The Expiration Date field on the View Results screen does not match the one in the export file")
	[ ] print("This is the expected Expiration Date: {GeneXpertDx.ViewResultsWorkspace.ExpirationDateTextField.Text}")
	[ ] print("This is the exported Expiration Date: {Trim(GetField(sLine, COMMA, 2))}")
	[ ] print("----------------------------------------------------------")
	[ ] 
[ ] 
[+] ProcessCartridgeSN(STRING sLine)
	[ ] STRING sExpectedCartSN = ''
	[ ] //Compare the Cartridge S/N  line of the export
	[-] if GeneXpertDx.ViewResultsWorkspace.CartridgeSNTextField.Text == ''
		[ ] sExpectedCartSN = '-1'
	[-] else
		[ ] sExpectedCartSN = GeneXpertDx.ViewResultsWorkspace.CartridgeSNTextField.Text
	[-] if Trim(GetField(sLine, COMMA, 2)) != sExpectedCartSN
		[ ] LogError("The Cartridge S/N field on the View Results screen does not match the one in the export file")
	[ ] print("This is the expected Cartridge S/N: {sExpectedCartSN}")
	[ ] print("This is the exported Cartridge S/N: {Trim(GetField(sLine, COMMA, 2))}")
	[ ] print("----------------------------------------------------------")
	[ ] 
[ ] 
[+] ProcessModuleName(STRING sLine)
	[ ] //Compare the Module Name  line of the export
	[-] if Trim(GetField(sLine, COMMA, 2)) != GeneXpertDx.ViewResultsWorkspace.ModuleNameTextField.Text
		[ ] LogError("The Module Name field on the View Results screen does not match the one in the export file")
	[ ] print("This is the expected Module Name: {GeneXpertDx.ViewResultsWorkspace.ModuleNameTextField.Text}")
	[ ] print("This is the exported Module Name: {Trim(GetField(sLine, COMMA, 2))}")
	[ ] print("----------------------------------------------------------")
	[ ] 
[ ] 
[+] ProcessModuleSN(STRING sLine)
	[ ] //Compare the Module S/N  line of the export
	[-] if Trim(GetField(sLine, COMMA, 2)) != GeneXpertDx.ViewResultsWorkspace.ModuleSNTextField.Text
		[ ] LogError("The Module S/N field on the View Results screen does not match the one in the export file")
	[ ] print("This is the expected Module S/N: {GeneXpertDx.ViewResultsWorkspace.ModuleSNTextField.Text}")
	[ ] print("This is the exported Module S/N: {Trim(GetField(sLine, COMMA, 2))}")
	[ ] print("----------------------------------------------------------")
	[ ] 
[ ] 
[+] ProcessInstrumentSN(STRING sLine)
		[ ] //Compare the Instrument S/N  line of the export
		[-] if Trim(GetField(sLine, COMMA, 2)) != GeneXpertDx.ViewResultsWorkspace.InstrumentSNTextField.Text
			[ ] LogError("The Instrument S/N field on the View Results screen does not match the one in the export file")
		[ ] print("This is the expected Instrument S/N: {GeneXpertDx.ViewResultsWorkspace.InstrumentSNTextField.Text}")
		[ ] print("This is the exported Instrument S/N: {Trim(GetField(sLine, COMMA, 2))}")
		[ ] print("----------------------------------------------------------")
	[ ] 
[ ] 
[+] ProcessSWVersion(STRING sLine)
	[ ] //Compare the S/W Version  line of the export
	[-] if Trim(GetField(sLine, COMMA, 2)) != GeneXpertDx.ViewResultsWorkspace.SWVersionTextField.Text
		[ ] LogError("The S/W Version field on the View Results screen does not match the one in the export file")
	[ ] print("This is the expected S/W Version: {GeneXpertDx.ViewResultsWorkspace.SWVersionTextField.Text}")
	[ ] print("This is the exported S/W Version: {Trim(GetField(sLine, COMMA, 2))}")
	[ ] print("----------------------------------------------------------")
	[ ] 
[ ] 
[+] ProcessTestResult(STRING sLine, STRING sSampleID)
	[ ] INTEGER  i = 0, iSemiCount = 0
	[ ] STRING sCompleteTestResult = ''
	[ ] // Added by Steve 10/22/2014 to process the export test result; delimiter changed form ; to |
	[ ] const VERT_BAR = '|'
	[ ] 
	[ ] // Code added for blank test result by Steve 5/2/2013
	[-] if sLine == 'Test Result'
		[ ] print("This is the expected Result Text: ")
		[ ] print("This is the actual Result Text:")
		[ ] print("----------------------------------------------------------")
		[ ] 
	[-] else
		[ ] iSemiCount = 0
		[ ] sCompleteTestResult = Trim(GetField(sLine, COMMA,2))
		[-] for (i = 1; i <= LEN(sCompleteTestResult); i++)
			[-] if (sCompleteTestResult[i] == VERT_BAR)
				[ ] iSemiCount++
			[ ] 
		[-] if iSemiCount == 0
			[ ] VerifyTestResultMainBD (Trim(sCompleteTestResult),  sSampleID)
		[-] else
			[-] for (i = 1; i <= iSemiCount ; i++)
				[ ] VerifyTestResultMainBD(Trim(GetField(sCompleteTestResult, VERT_BAR, i)) + SEMICOLON, sSampleID)
			[ ] // Send to the function one last time since the last test result does not have the SEMICOLON on the end of it
			[ ] VerifyTestResultMainBD(Trim(GetField(sCompleteTestResult, VERT_BAR, i)), sSampleID)
[ ] 
[+] ProcessAnalyteName(STRING sLine, STRING sSampleID, INTEGER i)
	[ ] // Verify the Analyte Name
	[-] if Trim(GetField(sLine,COMMA,1)) != GeneXpertDx.ViewResultsWorkspace.ResultsTable.GetCellText(i, 1)
		[ ] LogError("Analyte name is not valid for sample: {sSampleID}")
	[ ] print("This is the expected Analyte Name: " + GeneXpertDx.ViewResultsWorkspace.ResultsTable.GetCellText(i, 1))
	[ ] print("This is the exported Analyte Name: {Trim(GetField(sLine, COMMA, 1))}")
	[ ] print("----------------------------------------------------------")
	[ ] 
[ ] 
[+] ProcessCt(STRING sLine, STRING sSampleID, INTEGER i)
	[ ] // Verify the Ct
	[-] if Trim(GetField(sLine,COMMA,2)) != GeneXpertDx.ViewResultsWorkspace.ResultsTable.GetCellText(i, 3)
		[ ] LogError("Ct is not valid for sample: {sSampleID}")
	[ ] print("This is the expected Ct: " + GeneXpertDx.ViewResultsWorkspace.ResultsTable.GetCellText(i, 3))
	[ ] print("This is the exported Ct: {Trim(GetField(sLine, COMMA, 2))}")
	[ ] print("----------------------------------------------------------")
	[ ] 
[ ] 
[+] ProcessEndPt(STRING sLine, STRING sSampleID, INTEGER i)
	[ ] // Verify the EndPt
	[-] if Trim(GetField(sLine,COMMA,3)) != GeneXpertDx.ViewResultsWorkspace.ResultsTable.GetCellText(i, 4)
		[ ] LogError("EndPt is not valid for sample: {sSampleID}")
	[ ] print("This is the expected EndPt: " + GeneXpertDx.ViewResultsWorkspace.ResultsTable.GetCellText(i, 4))
	[ ] print("This is the exported EndPt: {Trim(GetField(sLine, COMMA, 3))}")
	[ ] print("----------------------------------------------------------")
	[ ] 
[ ] 
[+] ProcessInterpretation(STRING sLine, STRING sSampleID, INTEGER i)
	[ ] //Compare the Notes  line of the export if it is not NULL
	[-] if StrPos(COMMA, sLine) 
		[ ] // Verify the Interpretation
		[-] if Trim(GetField(sLine,COMMA,4)) != GeneXpertDx.ViewResultsWorkspace.ResultsTable.GetCellText(i, 5)
			[ ] LogError("Interpretation is not valid for sample: {sSampleID}")
		[ ] print("This is the expected Interpretation: " + GeneXpertDx.ViewResultsWorkspace.ResultsTable.GetCellText(i, 5))
		[ ] print("This is the exported Interpretation: {Trim(GetField(sLine, COMMA, 4))}")
		[ ] print("----------------------------------------------------------")
		[ ] 
[ ] 
[+] ProcessReason(STRING sLine, STRING sSampleID, INTEGER i)
	[ ] //Compare the Notes  line of the export if it is not NULL
	[-] if StrPos(COMMA, sLine) 
		[ ] // Verify the Reason
		[-] if Trim(GetField(sLine,COMMA,5)) != GeneXpertDx.ViewResultsWorkspace.ResultsTable.GetCellText(i, 6)
			[ ] LogError("Reason is not valid for sample: {sSampleID}")
		[ ] print("This is the expected Reason: " + GeneXpertDx.ViewResultsWorkspace.ResultsTable.GetCellText(i, 6))
		[ ] print("This is the exported Reason: {Trim(GetField(sLine, COMMA, 5))}")
		[ ] print("----------------------------------------------------------")
		[ ] 
[ ] 
[+] ProcessAnalyteResult(STRING sLine, STRING sSampleID, INTEGER i, STRING sUserType, STRING sAssayType)
	[ ] // Verify the Analyte Result for the basic report this is the second value on the sLine for detail it is the fourth value
	[-] if sUserType == BASIC_USER
		[-] if Trim(GetField(sLine,COMMA,2)) != GeneXpertDx.ViewResultsWorkspace.ResultsTable.GetCellText(i, 7)
			[ ] LogError("Analyte result is not valid for sample: {sSampleID}")
		[ ] print("This is the expected Analyte Result: " + GeneXpertDx.ViewResultsWorkspace.ResultsTable.GetCellText(i, 7))
		[ ] print("This is the exported Analyte Result: {Trim(GetField(sLine, COMMA, 2))}")
		[ ] print("----------------------------------------------------------")
	[-] else
		[-] if sAssayType == 'Research'
			[-] if Trim(GetField(sLine,COMMA,6)) != GeneXpertDx.ViewResultsWorkspace.ResultsTable.GetCellText(i, 7)
				[ ] LogError("Analyte result is not valid for sample: {sSampleID}")
			[ ] print("This is the expected Analyte Result: " + GeneXpertDx.ViewResultsWorkspace.ResultsTable.GetCellText(i, 7))
			[ ] print("This is the exported Analyte Result: {Trim(GetField(sLine, COMMA, 6))}")
			[ ] print("----------------------------------------------------------")
		[-] else
			[-] if Trim(GetField(sLine,COMMA,4)) != GeneXpertDx.ViewResultsWorkspace.ResultsTable.GetCellText(i, 7)
				[ ] LogError("Analyte result is not valid for sample: {sSampleID}")
			[ ] print("This is the expected Analyte Result: " + GeneXpertDx.ViewResultsWorkspace.ResultsTable.GetCellText(i, 7))
			[ ] print("This is the exported Analyte Result: {Trim(GetField(sLine, COMMA, 4))}")
			[ ] print("----------------------------------------------------------")
[ ] 
[-] ProcessProbeCheck(STRING sLine, STRING sSampleID, INTEGER i, STRING sAssayType)
	[ ] // Verify the Probe Check Result for the basic report this is the third value on the sLine for detail it is the fifth value
	[-] if Trim(GetField(sLine,COMMA,7)) != ''
		[-] if sAssayType == 'Research'
			[-] if Trim(GetField(sLine,COMMA,7)) != GeneXpertDx.ViewResultsWorkspace.ResultsTable.GetCellText(i, 8)
				[ ] LogError("Probe Check result is not valid for sample: {sSampleID}")
			[ ] print("This is the expected Probe Check Result: " + GeneXpertDx.ViewResultsWorkspace.ResultsTable.GetCellText(i, 8))
			[ ] print("This is the exported Probe Check Result: {Trim(GetField(sLine, COMMA, 3))}")
			[ ] print("----------------------------------------------------------")
		[-] else
			[-] if Trim(GetField(sLine,COMMA,5)) != GeneXpertDx.ViewResultsWorkspace.ResultsTable.GetCellText(i, 8)
				[ ] LogError("Probe Check result is not valid for sample: {sSampleID}")
			[ ] print("This is the expected Probe Check Result: " + GeneXpertDx.ViewResultsWorkspace.ResultsTable.GetCellText(i, 8))
			[ ] print("This is the exported Probe Check Result: {Trim(GetField(sLine, COMMA, 5))}")
			[ ] print("----------------------------------------------------------")
		[ ] 
[ ] 
[+] ProcessProbeCheck1(STRING sLine,STRING sSampleID, INTEGER i)
	[ ] // Verify the Probe Check 1 value
	[-] if Trim(GetField(sLine, COMMA, 2)) == '0'
		[-] if GeneXpertDx.ViewResultsWorkspace.ResultsTable.GetCellText(i, 3) == ZERO ||
    GeneXpertDx.ViewResultsWorkspace.ResultsTable.GetCellText(i, 3) == ZERO_LONG
			[ ] 
		[-] else
			[ ] LogError("Probe Check 1 is not valid for sample: {sSampleID}")
	[-] else if Trim(GetField(sLine,COMMA,2)) != GeneXpertDx.ViewResultsWorkspace.ResultsTable.GetCellText(i, 3)
		[ ] LogError("Probe Check 1 is not valid for sample: {sSampleID}")
	[ ] print("This is the expected Probe Check 1: " + GeneXpertDx.ViewResultsWorkspace.ResultsTable.GetCellText(i, 3))
	[ ] print("This is the exported Probe Check 1: {Trim(GetField(sLine, COMMA, 2))}")
	[ ] print("----------------------------------------------------------")
	[ ] 
[ ] 
[+] ProcessProbeCheck2(STRING sLine,STRING sSampleID, INTEGER i)
	[ ] // Verify the Probe Check 2 value
	[-] if Trim(GetField(sLine, COMMA, 2)) == '0'
		[-] if GeneXpertDx.ViewResultsWorkspace.ResultsTable.GetCellText(i, 4) == ZERO ||
    GeneXpertDx.ViewResultsWorkspace.ResultsTable.GetCellText(i, 4) == ZERO_LONG
			[ ] 
		[-] else
			[ ] LogError("Probe Check 2 is not valid for sample: {sSampleID}")
	[-] else if Trim(GetField(sLine,COMMA,3)) != GeneXpertDx.ViewResultsWorkspace.ResultsTable.GetCellText(i, 4)
		[ ] LogError("Probe Check 2 is not valid for sample: {sSampleID}")
	[ ] print("This is the expected Probe Check 2: " + GeneXpertDx.ViewResultsWorkspace.ResultsTable.GetCellText(i, 4))
	[ ] print("This is the exported Probe Check 2: {Trim(GetField(sLine, COMMA, 3))}")
	[ ] print("----------------------------------------------------------")
	[ ] 
[ ] 
[+] ProcessProbeCheck3(STRING sLine,STRING sSampleID, INTEGER i)
	[ ] // Verify the Probe Check 3 value
	[-] if Trim(GetField(sLine, COMMA, 2)) == '0'
		[-] if GeneXpertDx.ViewResultsWorkspace.ResultsTable.GetCellText(i, 5) == ZERO ||
    GeneXpertDx.ViewResultsWorkspace.ResultsTable.GetCellText(i, 5) == ZERO_LONG
			[ ] 
		[-] else
			[ ] LogError("Probe Check 3 is not valid for sample: {sSampleID}")
	[-] else if Trim(GetField(sLine,COMMA,4)) != GeneXpertDx.ViewResultsWorkspace.ResultsTable.GetCellText(i, 5)
		[ ] LogError("Probe Check 3 is not valid for sample: {sSampleID}")
	[ ] print("This is the expected Probe Check 3: " + GeneXpertDx.ViewResultsWorkspace.ResultsTable.GetCellText(i, 5))
	[ ] print("This is the exported Probe Check 3: {Trim(GetField(sLine, COMMA, 4))}")
	[ ] print("----------------------------------------------------------")
	[ ] 
[ ] 
[-] ProcessProbeCheckResult(STRING sLine, STRING sSampleID, INTEGER i)
	[ ] // Verify the Probe Check Result  value
	[-] if Trim(GetField(sLine,COMMA,5)) != GeneXpertDx.ViewResultsWorkspace.ResultsTable.GetCellText(i, 6)
		[ ] LogError("Probe Check Result is not valid for sample: {sSampleID}")
	[ ] print("This is the expected Probe Check Result: " + GeneXpertDx.ViewResultsWorkspace.ResultsTable.GetCellText(i, 6))
	[ ] print("This is the exported Probe Check Result: {Trim(GetField(sLine, COMMA, 5))}")
	[ ] print("----------------------------------------------------------")
	[ ] 
[ ] 
[ ] // This function takes the expected values for Sample ID, Status, Assay Name (Right and Left panel verifications), 
[ ] // Test Result Text, Test Result Color & Test Result Font Color and verifies them against the GUI 
[+] VerifyTestResultMainBD (STRING sResultText, STRING sSampleID)
	[ ] //
	[ ] // Constants
	[ ] //
	[ ] const PAD = '          '
	[ ] const ENDTABLETAG = '</table>'
	[ ] //
	[ ] // Variable declarations
	[ ] //
	[ ] LIST OF STRING lsHTMLTestResult
	[ ] INTEGER iPos = 0
	[ ] 
	[ ] // Added to deal with > and < characters for a Quant-1 test result 5/7/12
	[ ] sResultText = StrTran(sResultText, ">", "&gt;")
	[ ] sResultText = StrTran(sResultText, "<", "&lt;")
	[ ] // End of added code 5/7/12
	[ ] 
	[ ] // Verify information on the Test Result tab i.e. Assay Name, Result Text & Result color
	[ ] // Result Text and Result Color are part of a series of html tags.
	[ ] // HTML tag that contains the result color and the result font color looks like below
	[ ] // e.g.    tr.row0 { color: #FFFFFF; background-color: #00E600 }
	[ ] 
	[ ] // Changed to recognize the new field name changed for GX Dx 4.7 for the Test Result on the View Results screen 10/22/2014
	[ ] // lsHTMLTestResult = GeneXpert®DxSystem.UserNone.PatientID2.JavaxSwingJSplitPane1.TestResult.JavaxSwingJEditorPane.GetMultiText()
	[ ] lsHTMLTestResult = GeneXpertDx.ViewResultsWorkspace.TestResultTextPane.GetMultiText()
	[ ] 
	[ ] // ListPrint(lsHTMLTestResult)
	[ ] // print()
	[ ] 
	[-] if sResultText != NULL
		[ ] sResultText = PAD + sResultText 
		[ ] iPos = ListFind(lsHTMLTestResult, sResultText)
		[-] if iPos == 0
			[ ] LogError("Result text is not valid for sample: {sSampleID}")
			[ ] print("Expected Result Text: {sResultText}")
			[ ] print("Actual Result Text:  <Not Valid>")
			[ ] print("----------------------------------------------------------")
		[-] else
			[ ] print("Expected Result Text: {sResultText}")
			[ ] print("Actual Result Text: { lsHTMLTestResult[iPos]}")
			[ ] print("----------------------------------------------------------")
		[ ] 
	[-] else
		[ ] iPos = ListFind(lsHTMLTestResult, ENDTABLETAG)
		[-] if iPos != 0
			[ ] LogError("Result text is not valid for sample: {sSampleID}")
			[ ] ListPrint(lsHTMLTestResult)
		[ ] print("Expected Result Text: NULL")
		[ ] print("Actual Result Text: NULL")
		[ ] print("----------------------------------------------------------")
		[ ] 
[ ] 
