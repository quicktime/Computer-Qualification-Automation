[ ] use "..\..\Common Libraries ADS\MasterUseStmtsADS.inc"
[ ] 
[ ] // Gets the last log file
[-] STRING LastLogFile(STRING app)
	[ ] LIST OF FILEINFO lfFiles // declares list of FILEINFO (silk type)
	[ ] LIST OF STRING lsFileNames // declares list of STRINGS
	[ ] INTEGER iCount // declares int for looping
	[ ] INTEGER logCount // declare int for 
	[ ] STRING pattern // declares STRING
	[ ] 
	[-] switch(app) // switch case for which program's log files to look for
		[-] case "ASK"
			[ ] pattern = "ask-*"
		[-] case "ADK"
			[ ] pattern = "adk-*"
		[-] case "Dx"
			[ ] pattern = "genexpert-*"
	[ ] lfFiles = SYS_GetDirContents(LOG_PATH) // gets the contents of the LOG_PATH {@link constants-ADS.inc} directory
	[-] for iCount = 1 to ListCount(lfFiles) // for 1 to amount of files)
		[-] if MatchStr(pattern, lfFiles[iCount].sName) // if file name matches the pattern from the switch(app) case
			[ ] ListAppend(lsFileNames, lfFiles[iCount].sName) // add another element to the file names list of strings
	[ ] logCount = ListCount(lsFileNames) // sets logCount to the number of elements (files) from the file names list of strings
	[ ] return LOG_PATH + lsFileNames[logCount] // return the file path of the last element of the file names list
[ ] 
[ ] // Gets the line count of a specified file
[-] INT FileLineCount(STRING fileName)
	[ ] HFILE hFile // declares HFILE (silk type) handle to hold the file
	[ ] STRING sLine // declares STRING to hold a line
	[ ] INT i = 1 // declares and intializes int at 1, for looping
	[ ] 
	[ ] hFile = FileOpen(fileName, FM_READ) // sets hFile handle as the passed-in fileName in READ-ONLY
	[-] while (FileReadLine(hFile, sLine)) // while hFile still has unread lines
		[ ] i++ // increase i by 1
	[ ] return i // returns number of lines
[ ] 
[ ] // Gets the line count after a log updates
[-] LIST UpdatedLogLines(STRING fileName, INT lineCount)
	[ ] HFILE hFile // declares HFILE (silk type) handle to hold the file
	[ ] STRING sLine // declares STRING to hold a line
	[ ] LIST logLines // declares LIST to hold all the updated lines of a file
	[ ] INT i = 1 // delcares and initializes int at 1, for looping
	[ ] 
	[ ] hFile = FileOpen(fileName, FM_READ) // sets hFile handles as the passed-in log file in READ-ONLY
	[ ] 
	[ ] // this while loop reads all the lines from before the log file was updated, basically skipping them
	[-] while i < lineCount // while i is less than the number of lines in the log file before an update
		[ ] FileReadLine(hFile, sLine) // set sLine as the line number
		[ ] i++ // increase i by 1
	[ ] 
	[ ] // this while loops reads all the lines from after the log file was updated
	[-] while (FileReadLine(hFile, sLine)) // while hFile still has unread lines
		[ ] ListAppend(logLines, sLine) // add the line to the logLines
	[ ] return logLines // return the list of new log lines
