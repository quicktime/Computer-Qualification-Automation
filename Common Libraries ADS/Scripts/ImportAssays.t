[ ] 
[ ] // Imports all assays used for D13037 Organism Based Test Results
[ ] 
[ ] use "..\..\Common Libs Inf-80\MasterUseStmtsInf-80.inc"
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
	[ ] 
	[ ] print ("Retrieving all assays needed to execute {sProjectName}")
	[ ] // MyStartManageAssays()
	[ ] sleep(3)
	[ ] ImportAssayFiles (sPathName, sTabName)
	[ ] // MyExit()
	[ ] 
[ ] 
