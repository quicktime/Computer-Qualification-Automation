[ ] use "..\..\Common Libraries\MasterUseStmts.inc"
[ ] 
[+] SetupCleanDBFunc()
	[ ] GeneXpert®DxSystem.SetActive( )
	[ ] GeneXpert®DxSystem.User.Exit.Pick()
	[ ] sleep(1)
	[ ] DatabaseManagement.Yes.Click()
	[ ] sleep(1)
	[ ] DatabaseManagement.SelectTaskClickProceedT2.Select( "Database Restore" )
	[ ] DatabaseManagement.Proceed.Click()
	[-] if DatabaseRestore.Exists(20)
		[ ] DatabaseRestore.SetActive( )
		[ ] DatabaseRestore.Proceed.Click()
		[ ] 
		[ ] // The backup dialog appears here now as of Dx 4.7, before choosing the ZIP to restore
		[-] if DatabaseBackup.Exists(20)
			[ ] DatabaseBackup.SetActive()
			[ ] DatabaseBackup.Cancel.Click()
			[ ] sleep(1)
			[ ] 
			[ ] 
		[-] if SelectFileToRestoreTheDat.Exists(20)
			[ ] SelectFileToRestoreTheDat.SetActive( )
			[ ] SelectFileToRestoreTheDat.LookIn.Select( rConfig.sRestoreName )
			[ ] SelectFileToRestoreTheDat.Open.Click()
			[ ] //This cancel was for the old backup prompt that has been moved to earlier in the process
			[ ] //DatabaseRestore1.Cancel.Click()
			[ ] sleep(5)
			[ ] DatabaseRestore.SetActive( )
			[ ] DatabaseRestore.Proceed.Click()
			[ ] sleep(5)
			[ ] DatabaseRestore.OK.Click()
	[ ] sleep(3)
	[ ] 
	[ ] CompareDBVersion(rConfig.iDBMajor, rConfig.iDBMinor, rConfig.iDBBuild, rConfig. iDBFix)
[ ] 
[+] SetupReportersFunc()
	[ ] GeneXpert®DxSystem.SetActive( )
	[ ] GeneXpert®DxSystem.Import.Click()
	[ ] ImportAssay.SetActive( )
	[ ] ImportAssay.LookIn.Select( rConfig.sToSetReporters)
	[ ] ImportAssay.Import.Click()
	[ ] MyExit()
[ ] 
[+] SetArchiveOFFFunc()
	[ ] // Turn OFF the archive reminder so that the pop-up does not affect any of our testcases
	[ ] GeneXpert®DxSystem.SetActive( )
	[ ] GeneXpert®DxSystem.Setup.SystemConfiguration.Pick()
	[ ] SystemConfiguration.SetActive( )
	[ ] SystemConfiguration.JavaxSwingJTabbedPane.Select( "Archive Settings ")
	[ ] SystemConfiguration.JavaxSwingJTabbedPane.JavaxSwingJRadioButton1.Select( "Manually" )
	[ ] SystemConfiguration.OK.Click()
	[ ] GeneXpert®DxSystem.SetActive( )
	[ ] MyExit()
[ ] 
[+] SetUsePatientIDOFFFunc()
	[ ] GeneXpert®DxSystem.SetActive( )
	[ ] GeneXpert®DxSystem.Setup.SystemConfiguration.Pick()
	[ ] SystemConfiguration.SetActive( )
	[ ] SystemConfiguration.JavaxSwingJTabbedPane.UsePatientID.Uncheck()
	[ ] SystemConfiguration.OK.Click()
	[ ] GeneXpert®DxSystem.SetActive( )
	[ ] MyExit()
[ ] 
[+] SetAssayStatDelOFFFunc()
	[ ] GeneXpert®DxSystem.SetActive( )
	[ ] GeneXpert®DxSystem.Setup.SystemConfiguration.Pick()
	[ ] SystemConfiguration.SetActive( )
	[ ] SystemConfiguration.JavaxSwingJTabbedPane.AssayStatisticsDeletionRemi.Uncheck()
	[ ] SystemConfiguration.OK.Click()
	[ ] MyExit()
[ ] 
[+] SetupAllFunc()
	[ ] // Restore a clean version of the database
	[ ] GeneXpert®DxSystem.SetActive( )
	[ ] GeneXpert®DxSystem.User.Exit.Pick()
	[ ] sleep(1)
	[ ] DatabaseManagement.Yes.Click()
	[ ] sleep(1)
	[ ] DatabaseManagement.SelectTaskClickProceedT2.Select( "Database Restore" )
	[ ] DatabaseManagement.Proceed.Click()
	[ ] 
	[ ] 
	[-] if DatabaseRestore.Exists(20)
		[ ] DatabaseRestore.SetActive( )
		[ ] DatabaseRestore.Proceed.Click()
		[ ] 
		[ ] // The backup dialog appears here now as of Dx 4.7, before choosing the ZIP to restore
		[-] if DatabaseBackup.Exists(20)
			[ ] DatabaseBackup.SetActive()
			[ ] DatabaseBackup.Cancel.Click()
			[ ] sleep(1)
			[ ] 
			[ ] 
		[-] if SelectFileToRestoreTheDat.Exists(20)
			[ ] SelectFileToRestoreTheDat.SetActive( )
			[ ] SelectFileToRestoreTheDat.LookIn.Select( rConfig.sRestoreName )
			[ ] SelectFileToRestoreTheDat.Open.Click()
			[ ] //This cancel was for the old backup prompt that has been moved to earlier in the process
			[ ] //DatabaseRestore1.Cancel.Click()
			[ ] sleep(5)
			[ ] DatabaseRestore.SetActive( )
			[ ] DatabaseRestore.Proceed.Click()
			[ ] sleep(5)
			[ ] DatabaseRestore.OK.Click()
	[ ] sleep(3)
	[ ] 
	[ ] // Restart GeneXpert application
	[ ] MyStartDefineAssays()
	[ ] // Set up the reporters Cy3, Cy5, FAM, TxR, Alx532, Alx647
	[ ] GeneXpert®DxSystem.SetActive( )
	[ ] GeneXpert®DxSystem.Import.Click()
	[ ] ImportAssay.SetActive( )
	[ ] ImportAssay.LookIn.Select(rConfig.sToSetReporters)
	[ ] ImportAssay.Import.Click()
	[ ] sleep(5)
	[ ] // Uncheck  the Use Patient ID checkbox
	[ ] GeneXpert®DxSystem.SetActive( )
	[ ] GeneXpert®DxSystem.Setup.SystemConfiguration.Pick()
	[ ] SystemConfiguration.SetActive( )
	[ ] SystemConfiguration.JavaxSwingJTabbedPane.UsePatientID.Uncheck()
	[ ] // Uncheck the Assay Statistics Deletion Reminder
	[ ] SystemConfiguration.JavaxSwingJTabbedPane.AssayStatisticsDeletionRemi.Uncheck()
	[ ] // Turn OFF the archive reminder so that the pop-up does not affect any of our testcases
	[ ] SystemConfiguration.JavaxSwingJTabbedPane.Select( "Archive Settings ")
	[ ] SystemConfiguration.JavaxSwingJTabbedPane.JavaxSwingJRadioButton1.Select( "Manually" )
	[ ] SystemConfiguration.OK.Click()
	[ ] GeneXpert®DxSystem.SetActive( )
	[ ] MyExit()
	[ ] CompareDBVersion(rConfig.iDBMajor, rConfig.iDBMinor, rConfig.iDBBuild, rConfig. iDBFix)
[ ] 
[+] SetupAllPatientIDONFunc()
	[ ] // Restore a clean version of the database
	[ ] GeneXpert®DxSystem.User.Exit.Pick()
	[ ] sleep(1)
	[ ] DatabaseManagement.Yes.Click()
	[ ] sleep(1)
	[ ] DatabaseManagement.SelectTaskClickProceedT2.Select( "Database Restore" )
	[ ] DatabaseManagement.Proceed.Click()
	[ ] sleep(1)
	[-] if DatabaseRestore.Exists(20)
		[ ] DatabaseRestore.SetActive( )
		[ ] DatabaseRestore.Proceed.Click()
		[ ] 
		[ ] // The backup dialog appears here now as of Dx 4.7, before choosing the ZIP to restore
		[-] if DatabaseBackup.Exists(20)
			[ ] DatabaseBackup.SetActive()
			[ ] DatabaseBackup.Cancel.Click()
			[ ] sleep(1)
			[ ] 
			[ ] 
		[-] if SelectFileToRestoreTheDat.Exists(20)
			[ ] SelectFileToRestoreTheDat.SetActive( )
			[ ] SelectFileToRestoreTheDat.LookIn.Select( rConfig.sRestoreName )
			[ ] SelectFileToRestoreTheDat.Open.Click()
			[ ] //This cancel was for the old backup prompt that has been moved to earlier in the process
			[ ] //DatabaseRestore1.Cancel.Click()
			[ ] sleep(5)
			[ ] DatabaseRestore.SetActive( )
			[ ] DatabaseRestore.Proceed.Click()
			[ ] sleep(5)
			[ ] DatabaseRestore.OK.Click()
	[ ] sleep(3)
	[ ] 
	[ ] // Restart GeneXpert application
	[ ] DefineAssays()
	[ ] // Set up the reporters Cy3, Cy5, FAM, TxR, Alx532, Alx647
	[ ] GeneXpert®DxSystem.SetActive( )
	[ ] GeneXpert®DxSystem.Import.Click()
	[ ] ImportAssay.SetActive( )
	[ ] ImportAssay.LookIn.Select(rConfig.sToSetReporters)
	[ ] ImportAssay.Import.Click()
	[ ] sleep(5)
	[ ] // Uncheck  the Use Patient ID checkbox
	[ ] GeneXpert®DxSystem.SetActive( )
	[ ] GeneXpert®DxSystem.Setup.SystemConfiguration.Pick()
	[ ] SystemConfiguration.SetActive( )
	[ ] // SystemConfiguration.JavaxSwingJTabbedPane.UsePatientID.Uncheck()
	[ ] // Uncheck the Assay Statistics Deletion Reminder
	[ ] // SystemConfiguration.JavaxSwingJTabbedPane.AssayStatisticsDeletionRemi.Uncheck()
	[ ] // Turn OFF the archive reminder so that the pop-up does not affect any of our testcases
	[ ] SystemConfiguration.JavaxSwingJTabbedPane.Select( "Archive Settings ")
	[ ] SystemConfiguration.JavaxSwingJTabbedPane.JavaxSwingJRadioButton1.Select( "Manually" )
	[ ] SystemConfiguration.OK.Click()
	[ ] GeneXpert®DxSystem.SetActive( )
	[ ] 
	[ ] MyExit()
	[ ] CompareDBVersion(rConfig.iDBMajor, rConfig.iDBMinor, rConfig.iDBBuild, rConfig. iDBFix)
[ ] 
