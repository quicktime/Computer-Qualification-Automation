[ ] // Testcase Name: GX_MATH-1: International Languages
[ ] // Creator: Brendan Dolan
[ ] // Date Created: 12/20/2018
[ ] 
[ ] // Description:
[ ] // This testcase runs through the GX_MATH-1 test case.
[ ] // Works with both Win7 and Win10
[ ] 
[ ] // Creates 1 test summary of bio functionality tests, and 1 test summary of bio-func tests with "summaryCalc" flag.
[ ] 
[ ] // Areas covered:
[ ] // analysis results for consistency with previously qualified computers and validated software.
[ ] 
[ ] use "..\Common Libraries\MasterUseStmts.inc"
[ ] 
[-] testcase MATH() appstate none
	[ ] // STEP 0
	[ ] // 1. Retrieve a test from Test Archive file creeated during biofunctionality testing with reported Ct and EndPt (use D2709 test protocol
	[ ] // for reference and location of archive files).
	[ ] //
	[ ] // 2. Run Test Summary for the test above. Generate Test Summary file 'Xps_MATH_Before'.
	[ ] //
	[ ] // 3. Run Test Summary with "summaryCalc" added to the .bat file and for the test above Generate Test Summary file 'Xps_MATH_after'.
	[ ] 
	[ ] // STEP 1
	[ ] // Compare the 2 files and verify that Ct and EndPt data are identical.
	[ ] //   The Ct and EndPt data shall be identical.
