[ ] use "..\..\Common Libraries\MasterUseStmts.inc"
[ ] 
[+] GetTestID (STRING sSampleID, out INTEGER iTestID)
	[ ] // This function takes a Sample ID and returns the test_ID DB value
	[ ] 
	[ ] // Variables
	[ ] HANDLE hDB, hInfoDB
	[ ] 
	[ ] STRING sSelect = "SELECT Test_ID  FROM test WHERE Sample_ID = '" + sSampleID + "'"
	[ ] 
	[ ] hDB = DB_Connect("DSN=gx_assay;UID=sa;PWD={DB_PASSWORD}")
	[ ] 
	[ ] hInfoDB = DB_ExecuteSQL(hDB, sSelect )
	[ ] DB_FetchNext(hInfoDB, iTestID)
	[ ] 
	[ ] DB_FinishSQL(hInfoDB)
	[ ] 
	[ ] // Destroy all SQL queries and close all excel/db connections 
	[ ] DB_Disconnect(hDB)
	[ ] 
[ ] 
[+] GetAssayID (STRING sAssayName, out INTEGER iAssayID)
	[ ] // This function takes an Assay Name and returns the Assay_ID DB value
	[ ] 
	[ ] // Variables
	[ ] HANDLE hDB, hInfoDB
	[ ] 
	[ ] STRING sSelect = "SELECT Assay_ID  FROM assay WHERE name = '" + sAssayName + "'"
	[ ] 
	[ ] hDB = DB_Connect("DSN=gx_assay;UID=sa;PWD={DB_PASSWORD}")
	[ ] 
	[ ] hInfoDB = DB_ExecuteSQL(hDB, sSelect )
	[ ] DB_FetchNext(hInfoDB, iAssayID)
	[ ] 
	[ ] DB_FinishSQL(hInfoDB)
	[ ] 
	[ ] // Destroy all SQL queries and close all excel/db connections 
	[ ] DB_Disconnect(hDB)
	[ ] 
[ ] 
[+] // GetInterpretation(INTEGER iTestID, INTEGER iAssayID, out LIST OF INTERPRETATION liInterpretation)
	[ ] // 
	[ ] // // Variables
	[ ] // STRING sSelect =  "Select a.analyte_name, ar.interpretation, a.usage FROM analyte a INNER JOIN analyte_result ar ON a.analyte_id = ar.analyte_id WHERE ar.test_ID = " 
    // + Str(iTestID) + " AND a.assay_ID =" + Str(iAssayID) + " ORDER BY ar.analyte_id"
	[ ] // INTERPRETATION rDBRecord
	[ ] // 
	[ ] // HANDLE hDB, hInfoDB
	[ ] // 
	[ ] // hDB = DB_Connect("DSN=gx_assay;UID=sa;PWD={DB_PASSWORD}")
	[ ] // 
	[ ] // hInfoDB = DB_ExecuteSQL(hDB, sSelect )
	[-] // while(DB_FetchNext(hInfoDB, rDBRecord))
		[ ] // ListAppend(liInterpretation, rDBRecord)
	[ ] // 
	[ ] // DB_FinishSQL(hInfoDB)
	[ ] // 
	[ ] // // Destroy all SQL queries and close all excel/db connections 
	[ ] // DB_Disconnect(hDB)
[ ] 
[+] GetDBVersion (out DBVERSION rDBVersion)
	[ ] // This function returns the version of the gx_assay  database
	[ ] // It will return major_version, minor_version, build_number, fix_number from the config table
	[ ] 
	[ ] // Variables
	[ ] HANDLE hDB, hInfoDB
	[ ] 
	[ ] STRING sMajor = "SELECT param_val  FROM config WHERE param_key = 'major_version'"
	[ ] STRING sMinor = "SELECT param_val  FROM config WHERE param_key = 'minor_version'"
	[ ] STRING sBuild = "SELECT param_val  FROM config WHERE param_key = 'build_number'"
	[ ] STRING sFixNum = "SELECT param_val  FROM config WHERE param_key = 'fix_number'"
	[ ] 
	[ ] STRING sParamVal = ''
	[ ] 
	[ ] hDB = DB_Connect("DSN=gx_assay;UID=sa;PWD={DB_PASSWORD}")
	[ ] 
	[ ] // Select the Major version number from the config table
	[ ] hInfoDB = DB_ExecuteSQL(hDB, sMajor)
	[ ] DB_FetchNext(hInfoDB, sParamVal)
	[ ] rDBVersion.iMajor = Val(sParamVal)
	[ ] DB_FinishSQL(hInfoDB)
	[ ] 
	[ ] // Select the Minor version number from the config table
	[ ] hInfoDB = DB_ExecuteSQL(hDB, sMinor)
	[ ] DB_FetchNext(hInfoDB, sParamVal)
	[ ] rDBVersion.iMinor = Val(sParamVal)
	[ ] DB_FinishSQL(hInfoDB)
	[ ] 
	[ ] // Select the Build number from the config table
	[ ] hInfoDB = DB_ExecuteSQL(hDB, sBuild)
	[ ] DB_FetchNext(hInfoDB, sParamVal)
	[ ] rDBVersion.iBuild = Val(sParamVal)
	[ ] DB_FinishSQL(hInfoDB)
	[ ] 
	[ ] // Select the Fix number from the config table
	[ ] hInfoDB = DB_ExecuteSQL(hDB, sFixNum)
	[ ] DB_FetchNext(hInfoDB, sParamVal)
	[ ] rDBVersion.iFix = Val(sParamVal)
	[ ] DB_FinishSQL(hInfoDB)
	[ ] 
	[ ] // Destroy all SQL queries and close all excel/db connections 
	[ ] DB_Disconnect(hDB)
	[ ] 
[ ] 
[+] CompareDBVersion(INTEGER iDBMajor, INTEGER iDBMinor, INTEGER iDBBuild, INTEGER iDBFix)
	[ ] 
	[ ] DBVERSION rDBVersion = {...}
	[ ] 
	[ ] // Gets DB Version from the database config table
	[ ] GetDBVersion(rDBVersion)
	[ ] 
	[ ] // Compare the db version in the database with the parameters passed to the testcase
	[-] if (rDBVersion.iMajor != iDBMajor || rDBVersion.iMinor != iDBMinor 
    || rDBVersion.iBuild != iDBBuild || rDBVersion.iFix != iDBFix)
		[ ] LogError("The restored database version does not match the expected version")
	[ ] Print("DB version of the restored database: {rDBVersion.iMajor}.{rDBVersion.iMinor}.{rDBVersion.iBuild}.{rDBVersion.iFix}")
	[ ] Print("DB version of the expected database: {iDBMajor}.{iDBMinor}.{iDBBuild}.{iDBFix}")
[ ] 
[+] INTEGER VerifyOrganisms(INTEGER iAssayID, ORGANISM_DB rOrganisms)
	[ ] 
	[ ] // Variables
	[ ] INTEGER iCount = -1
	[ ] 
	[ ] // This should return 0 since we are listing all of the organism names in the WHERE clause
	[ ] STRING sWhere = "AND name not in ('" + rOrganisms.sOrganism1 + "' , '" + rOrganisms.sOrganism2 + "' , '" + rOrganisms.sOrganism3 + "')"
	[ ] STRING sSelect =  "Select Count(*) FROM organism WHERE Assay_ID = " + Str(iAssayID) + sWhere
	[ ] 
	[ ] HANDLE hDB, hInfoDB
	[ ] 
	[ ] hDB = DB_Connect("DSN=gx_assay;UID=sa;PWD={DB_PASSWORD}")
	[ ] 
	[ ] hInfoDB = DB_ExecuteSQL(hDB, sSelect)
	[ ] 
	[ ] DB_FetchNext(hInfoDB, iCount)
	[ ] 
	[ ] DB_FinishSQL(hInfoDB)
	[ ] 
	[ ] // Destroy all SQL queries and close all excel/db connections 
	[ ] DB_Disconnect(hDB)
	[ ] 
	[ ] // Return the value of the count of the SQL statement
	[ ] return iCount
[ ] 
[-] STRING GetSystemName()
	[ ] // This function returns the system name stored in the  gx_assay  database config table
	[ ] 
	[ ] // Variables
	[ ] HANDLE hDB, hInfoDB
	[ ] STRING sSystemName = ''
	[ ] 
	[ ] STRING sSelect = "SELECT param_val From config where param_key = 'system_name'"
	[ ] 
	[ ] hDB = DB_Connect("DSN=gx_assay;UID=sa;PWD={DB_PASSWORD}")
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
[+]  GetControlAnalyte(STRING sAssayName, out LIST OF ANALYTE lrAnalyte)
	[ ] // This function returns the controls either IC/SPC(s) for the given assay name
	[ ] 
	[ ] // Variables
	[ ] HANDLE hDB, hInfoDB
	[ ] ANALYTE rAnalyte = {}
	[ ] 
	[ ] lrAnalyte = {}
	[ ] 
	[ ] STRING sSelect = "SELECT an.analyte_id, an.analyte_name FROM analyte AS an INNER JOIN assay AS a ON an.assay_ID = a.assay_ID WHERE (an.usage IN (1, 2)) AND (a.name = '" + sAssayName + "')"
	[ ] 
	[ ] hDB = DB_Connect("DSN=gx_assay;UID=sa;PWD={DB_PASSWORD}")
	[ ] 
	[ ] hInfoDB = DB_ExecuteSQL(hDB, sSelect )
	[ ] 
	[-] while (DB_FetchNext(hInfoDB, rAnalyte))
		[ ] ListAppend(lrAnalyte, rAnalyte)
	[ ] 
	[ ] DB_FinishSQL(hInfoDB)
	[ ] 
	[ ] // Destroy all SQL queries and close all excel/db connections 
	[ ] DB_Disconnect(hDB)
	[ ] 
[ ] 
[+]  GetAnalyteInterpretation(STRING sSampleID,  out LIST  OF CONTROL_INTERPRETATION  lrAnalyteInterp)
	[ ] // This function returns a list of the analyte results for a given Sample ID
	[ ] // It will return the values Test ID, Assay ID, Sample ID, Target Result, IC Result, SPC Result, Interpretation
	[ ] // Analyte Index, Usage & Analyte Name
	[ ] // This list of values is used as the results for a given sample and the Target Result, IC Result and SPC Result 
	[ ] // columns are verified
	[ ] 
	[ ] // Variables
	[ ] HANDLE hDB, hInfoDB
	[ ] CONTROL_INTERPRETATION rAnalyteInterp = {}
	[ ] 
	[ ] lrAnalyteInterp = {}
	[ ] 
	[ ] STRING sSelectStmt = "SELECT ar.test_ID, t.assay_ID, t.sample_ID,CASE WHEN ar.target_result = 0 THEN 'INVALID' " +
    "WHEN ar.target_result = 1 THEN 'NA' WHEN ar.target_result = 2 THEN 'FAIL' WHEN ar.target_result = 3 THEN 'PASS' " +
    "WHEN ar.target_result = 4 THEN 'NEG' WHEN ar.target_result = 5 THEN 'POS' WHEN ar.target_result = 6 THEN 'NO_RESULT' " +
    "ELSE 'Other' END AS 'Target Result',CASE WHEN ar.ic_result = 0 THEN 'INVALID' WHEN ar.ic_result = 1 THEN 'NA' "+
    "WHEN ar.ic_result = 2 THEN 'FAIL' WHEN ar.ic_result = 3 THEN 'PASS' WHEN ar.ic_result = 4 THEN 'NEG' "+
    "WHEN ar.ic_result = 5 THEN 'POS' WHEN ar.ic_result = 6 THEN 'NO_RESULT' ELSE 'Other' END AS 'IC Result',"+
    "CASE WHEN ar.spc_result = 0 THEN 'INVALID' WHEN ar.spc_result = 1 THEN 'NA' WHEN ar.spc_result = 2 THEN 'FAIL' "+
    "WHEN ar.spc_result = 3 THEN 'PASS' WHEN ar.spc_result = 4 THEN 'NEG' WHEN ar.spc_result = 5 THEN 'POS' "+
    "WHEN ar.spc_result = 6 THEN 'NO_RESULT' ELSE 'Other' END AS 'SPC Result', CASE "+
    "WHEN ar.interpretation = 0 THEN 'INVALID' WHEN ar.interpretation = 1 THEN 'NA' WHEN ar.interpretation = 2 THEN 'FAIL' "+
    "WHEN ar.interpretation = 3 THEN 'PASS' WHEN ar.interpretation = 4 THEN 'NEG' WHEN ar.interpretation = 5 THEN 'POS' "+
    "WHEN ar.interpretation = 6 THEN 'NO_RESULT' ELSE 'Other' END AS 'Interpretation' , ar.analyte_id, CASE "+
    "WHEN usage = 0 THEN 'Target' WHEN usage = 1 THEN 'IC' WHEN usage = 2 THEN 'SPC' WHEN usage = 3 THEN 'EC' "+
    "END AS 'Usage', a.analyte_name FROM analyte a, analyte_result AS ar INNER JOIN test AS t ON ar.test_ID = t.test_ID "+
    "WHERE t.assay_ID = a.assay_ID AND ar.analyte_id = a.analyte_id AND t.sample_ID = '" + sSampleID + "' "
	[ ] 
	[ ] hDB = DB_Connect("DSN=gx_assay;UID=sa;PWD={DB_PASSWORD}")
	[ ] 
	[ ] // print("This is the select statement: {sSelectStmt}")
	[ ] 
	[ ] hInfoDB = DB_ExecuteSQL(hDB, sSelectStmt)
	[ ] 
	[-] while (DB_FetchNext(hInfoDB, rAnalyteInterp))
		[ ] ListAppend(lrAnalyteInterp, rAnalyteInterp)
	[ ] 
	[ ] DB_FinishSQL(hInfoDB)
	[ ] 
	[ ] // Destroy all SQL queries and close all excel/db connections 
	[ ] DB_Disconnect(hDB)
	[ ] 
[ ] 
[+] SetAssayTypeToResearch()
	[ ] // This function sets all assays in the gx_assay database to Research type assays
	[ ] // it also sets OFF The Need_LSP flag and sets the assay version to -1
	[ ] // product_code = -1 and company_code = -1
	[ ] // It will change the assay.assay_type = 0 for all rows in the assay table
	[ ] 
	[ ] // Variables
	[ ] HANDLE hDB, hInfoDB
	[ ] 
	[ ] STRING sUpdate = "Update assay set assay_type = 0, version = -1, product_code = -1, company_code = -1"
	[ ] 
	[ ] hDB = DB_Connect("DSN=gx_assay;UID=sa;PWD={DB_PASSWORD}")
	[ ] 
	[ ] hInfoDB = DB_ExecuteSQL(hDB, sUpdate)
	[ ] 
	[ ] DB_FinishSQL(hInfoDB)
	[ ] 
	[ ] // Destroy all SQL queries and close all excel/db connections 
	[ ] DB_Disconnect(hDB)
	[ ] 
	[ ] 
[ ] 
[+] SetNeedLSP()
	[ ] // This function sets all assays in the gx_assay database to need_lot_parameters OFF
	[ ] 
	[ ] // Variables
	[ ] HANDLE hDB, hInfoDB
	[ ] 
	[ ] STRING sUpdate = "Update assay set need_lot_parameters = 0"
	[ ] 
	[ ] hDB = DB_Connect("DSN=gx_assay;UID=sa;PWD={DB_PASSWORD}")
	[ ] 
	[ ] hInfoDB = DB_ExecuteSQL(hDB, sUpdate)
	[ ] 
	[ ] DB_FinishSQL(hInfoDB)
	[ ] 
	[ ] // Destroy all SQL queries and close all excel/db connections 
	[ ] DB_Disconnect(hDB)
	[ ] 
	[ ] 
[ ] 
[+] STRING BuildLSP(STRING sAssayName)
	[ ] // This function returns a valid Reagent Lot ID given an assay name
	[ ] // First it finds any reagent lot number for a given assay name then 
	[ ] // it builds the reagent Lot ID from the Reagent Lot Number. Using the 
	[ ] // Regent Lot Number i.e. 33 and adding the correct number of leading zeros
	[ ] // to make it 3 digits and then appending a 2 digit number to the end i.e. 03322
	[ ] 
	[ ] // Variables
	[ ] HANDLE hDB, hInfoDB
	[ ] STRING sReagentLotNumber = ''
	[ ] STRING sReagentLotID = ' '
	[ ] 
	[ ] // Changed by Steve on 11/13/2014 to access the changes to the DB for version 3.0.4.0
	[ ] STRING sSelect = "SELECT rl.reagent_lot_ID FROM reagent_lot AS rl INNER JOIN" + 
    " assay AS a ON rl.assay_ID = a.assay_ID INNER JOIN assay_cartridge AS ac" +
    " ON ac.assay_ID = rl.assay_ID" +
    " WHERE (rl.is_active = 1) AND (ac.need_lot_parameters = 1) AND (a.name = '" + sAssayName +"')"
	[ ] 
	[ ] hDB = DB_Connect("DSN=gx_assay;UID=sa;PWD={DB_PASSWORD}")
	[ ] 
	[ ] hInfoDB = DB_ExecuteSQL(hDB, sSelect )
	[-] if !DB_FetchNext(hInfoDB, sReagentLotNumber)
		[ ] sReagentLotNumber = '0'
	[ ] DB_FinishSQL(hInfoDB)
	[ ] 
	[ ] // Destroy all SQL queries and close all excel/db connections 
	[ ] DB_Disconnect(hDB)
	[ ] 
	[-] if sReagentLotNumber == '0'
		[ ] return sReagentLotNumber
	[-] else
		[-] if LEN(sReagentLotNumber) == 1
			[ ] sReagentLotID = '00' + sReagentLotNumber + '11'
		[-] else if LEN(sReagentLotNumber) == 2
			[ ] sReagentLotID = '0' + sReagentLotNumber + '22'
		[-] else
			[ ] sReagentLotID = sReagentLotNumber + '33'
		[ ] return sReagentLotID
	[ ] 
[ ] 
[+] ChangeAssayName(STRING sExistingAssayName, STRING sNewAssayName)
	[ ] // This function uses a passed in assay name to find the existing assay with that name
	[ ] // and changes the name to a new name, the second parameter
	[ ] 
	[ ] // Arguments
	[ ] // First argument - existing assay name
	[ ] // Second argument - new assay name 
	[ ] 
	[ ] // Variables
	[ ] HANDLE hDB, hInfoDB
	[ ] 
	[ ] STRING sUpdate = "Update assay set name = '{sNewAssayName}' where name = '{sExistingAssayName}'"
	[ ] 
	[ ] hDB = DB_Connect("DSN=gx_assay;UID=sa;PWD={DB_PASSWORD}")
	[ ] 
	[ ] hInfoDB = DB_ExecuteSQL(hDB, sUpdate)
	[ ] 
	[ ] DB_FinishSQL(hInfoDB)
	[ ] 
	[ ] // Destroy all SQL queries and close all excel/db connections 
	[ ] DB_Disconnect(hDB)
	[ ] 
	[ ] 
[ ] 
[+] ChangeAssayConc(STRING sAssayName, REAL rNewConc)
	[ ] // This function uses a passed in assay name to find the existing assay with that name
	[ ] // and changes the concentration to the new value, the second parameter
	[ ] 
	[ ] // Arguments
	[ ] // First argument - Assay name
	[ ] // Second argument - new assay concentration 
	[ ] 
	[ ] // Variables
	[ ] HANDLE hDB, hInfoDB
	[ ] 
	[ ] STRING sUpdate = "Update analyte set intended_concentration = {rNewConc} where assay_id in (Select assay_id from assay where name = '{sAssayName}')"
	[ ] 
	[ ] hDB = DB_Connect("DSN=gx_assay;UID=sa;PWD={DB_PASSWORD}")
	[ ] 
	[ ] hInfoDB = DB_ExecuteSQL(hDB, sUpdate)
	[ ] 
	[ ] DB_FinishSQL(hInfoDB)
	[ ] 
	[ ] // Destroy all SQL queries and close all excel/db connections 
	[ ] DB_Disconnect(hDB)
	[ ] 
	[ ] 
[ ] 
[+] ChangeConcAll(REAL rNewConc)
	[ ] // This function uses a passed in argument to changes the concentration to a new value
	[ ] 
	[ ] // Arguments
	[ ] // First argument - new assay concentration 
	[ ] 
	[ ] // Variables
	[ ] HANDLE hDB, hInfoDB
	[ ] 
	[ ] STRING sUpdate = "Update analyte set intended_concentration = {rNewConc}"
	[ ] 
	[ ] hDB = DB_Connect("DSN=gx_assay;UID=sa;PWD={DB_PASSWORD}")
	[ ] 
	[ ] hInfoDB = DB_ExecuteSQL(hDB, sUpdate)
	[ ] 
	[ ] DB_FinishSQL(hInfoDB)
	[ ] 
	[ ] // Destroy all SQL queries and close all excel/db connections 
	[ ] DB_Disconnect(hDB)
	[ ] 
	[ ] 
[ ] 
[+] ChangeAssayConcAnalyte(STRING sAssayName, REAL rNewConc, STRING sAnalyteName)
	[ ] // This function uses a passed in assay name to find the existing assay with that name
	[ ] // and changes the concentration to the new value, the second parameter
	[ ] 
	[ ] // Arguments
	[ ] // First argument - Assay name
	[ ] // Second argument - new assay concentration 
	[ ] 
	[ ] // Variables
	[ ] HANDLE hDB, hInfoDB
	[ ] 
	[ ] STRING sUpdate = "Update analyte set intended_concentration = {rNewConc} where analyte_name = '{sAnalyteName}' and assay_id in (Select assay_id from assay where name = '{sAssayName}')"
	[ ] 
	[ ] hDB = DB_Connect("DSN=gx_assay;UID=sa;PWD={DB_PASSWORD}")
	[ ] 
	[ ] hInfoDB = DB_ExecuteSQL(hDB, sUpdate)
	[ ] 
	[ ] DB_FinishSQL(hInfoDB)
	[ ] 
	[ ] // Destroy all SQL queries and close all excel/db connections 
	[ ] DB_Disconnect(hDB)
	[ ] 
	[ ] 
[ ] 
[ ] 
