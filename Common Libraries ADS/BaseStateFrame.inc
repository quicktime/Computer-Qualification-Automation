[ ] const wDynamicMainWindow = AssayDevelopmentKit
[ ] 
[-] window MainWin AssayDevelopmentKit
	[ ] locator "/MainWin[@caption='Assay Development Kit']"
	[ ] 
	[ ] // The working directory of the application when it is invoked
	[ ] const sDir = "%ProgramW6432%\Cepheid\Assay Development Suite\ADK\bin"
	[ ] 
	[ ] // The command line used to invoke the application
	[ ] const sCmdLine = "%ProgramW6432%\Cepheid\Assay Development Suite\Electron\electron.exe . -Xmx1024M  -Dfile.encoding=""utf8"" -Dstartup.root=""."" -Dlogging.config=file:config/log4j.xml  -jar lib/assay_xpert.jar"
	[ ] 
	[ ] // The list of windows the recovery system is to leave open
	[ ] // const lwLeaveOpenWindows = {?}
	[ ] // const lsLeaveOpenLocators = {?}
[ ] 
[ ] 
