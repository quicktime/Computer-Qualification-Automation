[ ] // Testcase Name: GX_COM-1: Communications and Recovery
[ ] // Creator: Brendan Dolan
[ ] // Date Created: 12/19/2018
[ ] 
[ ] // Description:
[ ] // This testcase runs through the GX_COM-1 test case.
[ ] // Works with both Win7 and Win10
[ ] 
[ ] // Areas covered: 
[ ] // instrument communication with the computer under test and recovery of communications in case of a break in the connection between the two.
[ ] 
[ ] use "..\Common Libraries\MasterUseStmts.inc"
[ ] 
[-] testcase COM() appstate none
	[ ] 
	[ ] // STEP 0
	[ ] // Restore a default database from the installer before starting this protocol.
	[ ] 
	[ ] // STEP 1
	[ ] // Connect a GeneXpert instrument to the computer and launch the software in DOS mode.
	[ ] //   The database shall be connected properly (in the DOS window). The instrument's modules shall be recognized and assigned IDs
	[ ] //   starting with "A1". No errors or exceptions shall be displayed in the DOS window.
	[ ] 
	[ ] // STEP 2
	[ ] // With the software running (in DOS mode) and one instrument connected, start a test using all modules.
	[ ] //   The test shall start normally. The Maintenance screen shall display the modules connected. No errors or exceptions shall be
	[ ] //   displayed in the DOS window.
	[ ] 
	[ ] // STEP 3
	[ ] // Stop the test.
	[ ] //   The test shall stop. The Maintenance screen shall still display the modules connected and there shall be no exceptions in the DOS window.
	[ ] 
	[ ] // STEP 4
	[ ] // Connect the maximum number of GeneXperts to the computer and launch the software (in DOS mode).
	[ ] //   All instruments shall be recognized and assigned a letter starting with "A" in the order that they were detected by the software. 
	[ ] //   No errors or exceptions shall be displayed in the DOS window.
	[ ] 
	[ ] // STEP 5
	[ ] // Start tests on all available sites that will run for at least 10 minutes. One minute into the tests, disconnect the communication cables
	[ ] // from all instruments.
	[ ] //   The test shall start. The software shall report a loss of communications when the cable is unplugged.
	[ ] 
	[ ] // STEP 6
	[ ] // Wait five minutes and then reconnect the communication cables to the instruments.
	[ ] //   The data collection for each of the GeneXpert units shall resume. Upon reconnection, the normal process will continue.
[ ] 
