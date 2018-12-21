[ ] // Testcase Name: GX_GEN-1: General Acceptance Testing
[ ] // Creator: Brendan Dolan
[ ] // Date Created: 12/19/2018
[ ] 
[ ] // Description:
[ ] // This testcase runs through the GX_GEN-1 test case. Initial installations required.
[ ] // Works with both Win7 and Win10
[ ] 
[ ] // Areas covered: 
[ ] // typical installation of product software; initial software launch without instrument; instrument recognition; instrument recovery; 
[ ] // create user; login; define assay or protocol; create test; stop test; view results; export data; generate report.
[ ] 
[ ] use "..\..\Common Libraries\MasterUseStmts.inc"
[ ] use "..\..\Common Libraries ADS\MasterUseStmtsADS.inc"
[ ] 
[-] testcase GEN() appstate none
	[ ] 
	[ ] BOOLEAN bTestStarted = false
	[ ] 
	[ ] // MANUAL SETUP
	[ ] // Perform a typical installation of all types of software to test that can co-exist on the same computer.  
	[ ] // Record all software and their versions that are simultaneously installed in the comments column at right.
	[ ] 
	[ ] // Step 1
	[ ] // Launch the software with no instruments connected.
	[ ] //   The software shall launch into the first GUI screen without warnings or errors.
	[ ] DisableEthernet("GeneXpert Connection")
	[ ] StartDx()
	[ ] 
	[ ] // Step 2
	[ ] // Attach one instrument and restart the software.
	[ ] //   The software shall launch into the main GUI screen without warnings, errors, or info messages.
	[ ] //   The software shall properly recognize and connect to the instrument attached to the computer
	[ ] //   within 2-3 minutes.
	[ ] EnableEthernet("GeneXpert Connection")
	[ ] CloseDx()
	[ ] StartDx()
	[ ] 
	[ ] // Step 3
	[ ] // After the instrument is initialized and the software is fully launched, disconnect the communications cable.
	[ ] //   The computer shall lose connection with the instrument.
	[ ] DisableEthernet("GeneXpert Connection")
	[ ] 
	[ ] // Step 4
	[ ] // Plug the instrument cable back in. Observe the Maintenance screen.
	[ ] //   Module communication will be restored.
	[ ] EnableEthernet("GeneXpert Connection")
	[ ] 
	[ ] // Step 5
	[ ] // Create a new Admin user.
	[ ] //   The new Admin user shall be created.
	[ ] CreateUser("Admin1", "Admin")
	[ ] 
	[ ] // Step 6
	[ ] // Log in with the new Admin user created above.
	[ ] //   The Admin user shall be logged in successfully.
	[ ] LoginDx("Admin1", "Admin1")
	[ ] 
	[ ] // Step 7
	[ ] // Define a new assay or protocol.
	[ ] //   A new assay or protocol shall be defined by the Admin user.
	[ ] StartADS(ADK)
	[ ] LoginCepheid(ADK)
	[ ] QUANT()
	[ ] 
	[ ] // Step 8
	[ ] // Start two tests with the newly created assay or protocol
	[ ] //   Two new tests shall be started.
	[ ] CreateTestChooseAssay(bTestStarted, "DEMO_GEN-1", "test1", 1)
	[-] if bTestStarted
		[ ] CreateTestChooseAssay(bTestStarted, "DEMO_GEN-1", "test2", 1)
	[ ] 
	[ ] // Step 9 
	[ ] // Stop a test that was just started.
	[ ] //   A test shall be stopped.
	[ ] StopTest("test2")
	[ ] 
	[ ] // Step 10
	[ ] // Allow the other test to finish and then view it at View Results screen.
	[ ] //   The completed test shall be displayed. The status shall indicate that it is finished.
	[ ] Sleep(600)
	[ ] VerifyTestStatus("test1", "Done")
	[ ] 
	[ ] // Step 11
	[ ] // View the other test that was stopped.
	[ ] //   The stopped test shall be displayed. The status shall indicate that it was stopped.
	[ ] VerifyTestStatus("test2", "Stopped")
	[ ] 
	[ ] // Step 12
	[ ] // Export the data for the completed test. View the exported data.
	[ ] //   The exported data file shall open and be readable.
	[ ] ExportTestChooseTest(1)
[ ] 
