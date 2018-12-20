[ ] // Testcase Name: GX_LANGUAGE-1: International Languages
[ ] // Creator: Brendan Dolan
[ ] // Date Created: 11/08/2018
[ ] 
[ ] // Description:
[ ] // This testcase runs through the GX_LANGUAGE-1 test case. Some manual steps are required.
[ ] // Works with both Win7 and Win10
[ ] 
[ ] // Sets up the computer with different languages. Creates a test, enters information in different languages, scans barcodes, runs tests.
[ ] 
[ ] // Areas covered:
[ ] // symbology related features for the GX Dx application for international languages.  Scanning, manual entry using international keyboards, 
[ ] // and creation of reports using international characters.  International Languages are not applicable to Japanese computer systems, 
[ ] // write N/A in the Pass and Fail columns of this test case.
[ ] 
[ ] use "..\..\Common Libraries\MasterUseStmts.inc"
[ ] 
[-] testcase LANGUAGE() appstate none
	[ ] 
	[ ] // STEP 0
	[ ] // Configure the computer according to GX DX Internationalization Instruction (301-0903), start GX Dx using a Unicode Language (e.g. French).
	[ ] // Record languag used in comments.
	[ ] 
	[ ] // STEP 1
	[ ] // Navigate to Create Test workspace, scan a 32 character Patient ID barcode, in the language selected in setup.
	[ ] //   Patient ID field shall be populated with correct information from the scanned barcode.
	[ ] 
	[ ] // STEP 2
	[ ] // Manually enter a 25 character Sample ID, using characters specific to that language.
	[ ] //   The Sample ID field shall be displayed correctly.
	[ ] 
	[ ] // STEP 3
	[ ] // Scan cartridge barcode.
	[ ] //   Verify the correct cartridge information is displayed in Create Test workspace.
	[ ] 
	[ ] // STEP 4
	[ ] // Start the test.
	[ ] //   The test shall be started.
	[ ] 
	[ ] // MANUAL STEPS
	[ ] //   STEP 5
	[ ] //   Upon test completion, create a report.
	[ ] //     Verify text in report matches the view results screen
	[ ] 
	[ ] //   STEP 6
	[ ] //   Restart the test computer.
	[ ] //     The computer shall restart.
	[ ] 
	[ ] //   STEP 7
	[ ] //   On the windows login screen, click the two letter icon in the top left corner (See the image in 301-0903, section 6.1.10) and select 
	[ ] //   “EN English (United States)” option.  Type in cephid user’s password and login.
	[ ] 
	[ ] // REPEAT STEPS 0 - 7 with other languages (CHINESE)
	[ ] 
	[ ] 
[ ] 
