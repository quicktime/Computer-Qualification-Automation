[ ] use "..\..\Common Libraries ADS\MasterUseStmtsADS.inc"
[ ] 
[ ] // Gets the last log file
[-] STRING LastLogFile(STRING app)
	[ ] LIST OF FILEINFO lfFiles
	[ ] LIST OF STRING lsFileNames
	[ ] INTEGER iCount
	[ ] INTEGER logCount
	[ ] STRING pattern
	[-] switch(app)
		[-] case "ASK"
			[ ] pattern = "ask-*"
		[-] case "ADK"
			[ ] pattern = "adk-*"
		[-] case "Dx"
			[ ] pattern = "genexpert-*"
	[ ] lfFiles = SYS_GetDirContents(LOG_PATH)
	[-] for iCount = 1 to ListCount(lfFiles)
		[-] if MatchStr(pattern, lfFiles[iCount].sName)
			[ ] ListAppend(lsFileNames, lfFiles[iCount].sName)
	[ ] logCount = ListCount(lsFileNames)
	[ ] return LOG_PATH + lsFileNames[logCount]
[ ] 
[ ] // Gets the line count of a specified file
[-] INT FileLineCount(STRING fileName)
	[ ] HFILE hFile
	[ ] STRING sLine
	[ ] INT i = 1
	[ ] 
	[ ] hFile = FileOpen(fileName, FM_READ)
	[-] while (FileReadLine(hFile, sLine))
		[ ] i++
	[ ] return i
[ ] 
[ ] // Gets the line count after a log updates
[-] LIST UpdatedLogLines(STRING fileName, INT lineCount)
	[ ] HFILE hFile
	[ ] STRING sLine
	[ ] LIST logLines
	[ ] INT i = 1
	[ ] 
	[ ] hFile = FileOpen(fileName, FM_READ)
	[-] while i < lineCount
		[ ] FileReadLine(hFile, sLine)
		[ ] i++
	[-] while (FileReadLine(hFile, sLine))
		[ ] ListAppend(logLines, sLine)
	[ ] return logLines
[ ] 
