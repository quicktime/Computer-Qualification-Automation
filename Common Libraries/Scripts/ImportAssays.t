[ ] 
[ ] // Imports all assays used for D13037 Organism Based Test Results
[ ] // Use of this script requires three input arguments (To be set in Options -> Runtime -> Arguments)
[ ] // 1. Silk Test Project Name i.e. "D2699 Data Reduction"
[ ] // 2. Path Name - path to the import file 
[ ] //    C:\Silk Data Files\D2699 Data Reduction\D2699 Assay List.xls
[ ] // 3. Tab Name - Tab inside the above data sheet i.e. "AssayManifest"
[ ] 
[ ] 
[ ] use "..\..\Common Libraries\MasterUseStmts.inc"
[ ] 
[ ] 
[ ] 
[-] testcase ImportTheAssays() appstate none
	[ ] 
	[ ] LIST OF STRING lsArgs
	[ ] lsArgs = GetArgs ( )
	[ ] STRING sProjectName = ''
	[ ] STRING sPathName = '' 
	[ ] STRING sTabName = '' 
	[ ] 
	[ ] sProjectName = lsArgs[1]
	[ ] sPathName = lsArgs[2]
	[ ] sTabName = lsArgs[3]
	[ ] // print("Processing Import assays for: {sPathName}")
	[ ] // print("From tab: {sTabName}")
	[ ] print ("Pathname: {sPathName}")
	[ ] print ("TabName: {sTabName}")
	[ ] 
	[ ] print ("Retrieving all assays needed to execute {sProjectName}")
	[ ] // MyStartManageAssays()
	[ ] sleep(3)
	[ ] ImportAssayFiles (sPathName, sTabName)
	[ ] // MyExit()
	[ ] 
[ ] 
