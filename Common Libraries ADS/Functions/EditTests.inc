[ ] use "..\..\Common Libraries ADS\MasterUseStmtsADS.inc"
[ ] 
[ ] // Edits an assay in Dx, saves it, checks the test in ASK
[-] EditTestDx(STRING sSampleID)
	[ ] 
	[ ] SelectTest(sSampleID)
	[ ] 
	[ ] GeneXpertDx.PatientID.SetText("test")
	[ ] print("Patient ID updated to 'test'")
	[ ] GeneXpertDx.SampleID.SetText("{sSampleID}_test")
	[ ] print("Sample ID updated to '{sSampleID}_test'")
	[ ] //GeneXpertDx.ReagentLotID.SetText("00111")
	[ ] //print("Reagent Lot ID updated to '00111'")
	[ ] GeneXpertDx.SaveChanges.Select()
	[ ] GeneXpertDx.SaveDialog.Yes.Select()
	[ ] print("Test changes have been saved.")
	[ ] 
	[ ] 
