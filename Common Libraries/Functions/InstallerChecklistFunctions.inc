[ ] use "..\..\Common Libraries\Types\InstallerChecklistTypes.inc"
[ ] use "..\..\Common Libraries\Constants\InstallerChecklistConstants.inc"
[ ] 
[ ] 
[-] FileExists (STRING sFileName, STRING sPathName)
	[ ] BOOLEAN bFileExists = FALSE
	[ ] SYS_SetDir (sPathName)
	[ ] bFileExists = SYS_FileExists (sFileName)
	[ ] 
	[ ] print("{sFileName}")
	[ ] 
	[-] if bFileExists
		[ ] print("{sFileName} file is found in folder {sPathName}")
	[-] else
		[ ] logError("{sFileName} file is not found in folder {sPathName}") 
		[ ] 
[ ] 
[-] CompareDate(REC_FILE_PROPERTIES rData)
	[ ] 
	[ ] //Local Variables
	[ ] LIST OF FILEINFO  lfFileList = {...}
	[ ] INTEGER iCount = 0
	[ ] 
	[ ] // Get contents from the directory 
	[ ] lfFileList = SYS_GetDirContents()
	[ ] // Iterate through list of actual files until it matches expected file
	[-] for iCount = 1 to ListCount (lfFileList)
		[ ] if lfFileList[iCount].sName == rData.sFileName
		[-] // Compare last modified date of actual file and last modified date of expected file 
			[-] if ([DATE] lfFileList[iCount].dtLastModifyTime) == ([DATE] rData.sDate)	
				[ ] print ("Expected date: {[DATE] rData.sDate} matches actual date: {[DATE] lfFileList[iCount].dtLastModifyTime}")
			[-] else
				[ ] LogError ("Expected date: {[DATE] rData.sDate} does not match actual date: {[DATE] lfFileList[iCount].dtLastModifyTime}")
				[ ] 
[-] CompareVersion(REC_FILE_PROPERTIES rData)
	[-]  if rData.sVersion != NOT_APPLICABLE
		[ ] print("This is the expected version number:{rData.sVersion}")
[ ] 
[-] CompareReadOnlyAttribute(REC_FILE_PROPERTIES rData)
	[ ] 
	[ ] //Local Variables
	[ ] LIST OF FILEINFO  lfFileList = {...}
	[ ] LIST OF STRING lList1= {...}
	[ ] INTEGER iCount = 0
	[ ] STRING sAttributesHR =" "
	[ ] STRING sAttributeR=" "
	[ ] INTEGER iLength = 0
	[ ] 
	[ ] // Get contents from the directory 
	[ ] lfFileList = SYS_GetDirContents()
	[ ] // // Iterate through list of actual files until it matches expected file
	[-] for iCount = 1 to ListCount (lfFileList)
		[-] if lfFileList[iCount].sName == rData.sFileName
			[ ] SYS_Execute ('attrib "{rData.sFileName}"', lList1)
			[ ] // Count the length of the attribute string
			[ ] iLength=Len(lList1[1])
			[ ] 
			[ ] //Retrieve first six characters in the attribute string 
			[ ] sAttributesHR = Left(lList1[1],6)
			[ ] 
			[ ] // Retrieve character in AttributeR position
			[ ] sAttributeR=SubStr(sAttributesHR, 6,1)
			[ ] 
			[ ] //Comparison for the read only attribute
			[-] switch rData.sAttributeR
				[-] case YES
					[-] if sAttributeR == READ_ONLY
						[ ] print("Read only attribute for file: {lfFileList[iCount].sName} matches expected results")
					[-] else
						[ ] LogError("Read only attribute for file: {lfFileList[iCount].sName} does not match expected results")
				[-] case NO
					[-] if sAttributeR == BLANK
						[ ] print("Read only attribute for file: {lfFileList[iCount].sName} matches expected results")
					[-] else
						[ ] LogError("Read only attribute for file: {lfFileList[iCount].sName} does not match expected results")
				[-] case NOT_APPLICABLE
						[ ] print("Read only attribute for file: {lfFileList[iCount].sName} is not applicable")
				[-] default
						[ ] LogError("Expected value for read only attribute of file: {rData.sFileName} needs to change in Data File")
						[ ] 
						[ ] 
[-] CompareHiddenAttribute(REC_FILE_PROPERTIES rData)
	[ ] 
	[ ] //Local Variables
	[ ] LIST OF FILEINFO  lfFileList = {...}
	[ ] LIST OF STRING lList1= {...}
	[ ] INTEGER iCount = 0
	[ ] STRING sAttributesHR =" "
	[ ] STRING sAttributeH=" "
	[ ] INTEGER iLength = 0
	[ ] 
	[ ] // Get contents from the directory 
	[ ] lfFileList = SYS_GetDirContents()
	[ ] // // Iterate through list of actual files until it matches expected file
	[-] for iCount = 1 to ListCount (lfFileList)
		[-] if lfFileList[iCount].sName == rData.sFileName
			[ ] SYS_Execute ('attrib "{rData.sFileName}"', lList1)
			[ ] // Count the length of the attribute string
			[ ] iLength=Len(lList1[1])
			[ ] 
			[ ] //Retrieve first six characters in the attribute string 
			[ ] sAttributesHR = Left(lList1[1],6)
			[ ] 
			[ ] // Retrieve character in AttributeH position
			[ ] sAttributeH=SubStr(sAttributesHR, 5,1)
			[ ] 
			[ ] //Comparison for the hidden attribute
			[-] switch rData.sAttributeH
				[-] case YES
					[-] if sAttributeH == HIDDEN
						[ ] print("Hidden attribute for file: {lfFileList[iCount].sName} matches expected results")
					[-] else
						[ ] LogError("Hidden attribute for file: {lfFileList[iCount].sName} does not match expected results")
				[-] case NO
					[-] if sAttributeH == BLANK
						[ ] print("Hidden attribute for file: {lfFileList[iCount].sName} matches expected results")
					[-] else
						[ ] LogError("Hidden attribute for file: {lfFileList[iCount].sName} does not match expected results")
				[-] case NOT_APPLICABLE
						[ ] print("Hidden attribute for file: {lfFileList[iCount].sName} is not applicable")
				[-] default
					[ ] LogError("Expected value for hidden attribute of file: {rData.sFileName} needs to change in Data File")
[ ] 
[ ] 
[-] CompareArchiveAttribute(REC_FILE_PROPERTIES rData)
	[ ] 
	[ ] //Local Variables
	[ ] LIST OF FILEINFO  lfFileList = {...}
	[ ] LIST OF STRING lList1= {...}
	[ ] INTEGER iCount = 0
	[ ] STRING sAttributesHR =" "
	[ ] STRING sAttributeA=" "
	[ ] INTEGER iLength = 0
	[ ] 
	[ ] // Get contents from the directory 
	[ ] lfFileList = SYS_GetDirContents()
	[ ] // // Iterate through list of actual files until it matches expected file
	[-] for iCount = 1 to ListCount (lfFileList)
		[-] if lfFileList[iCount].sName == rData.sFileName
			[ ] SYS_Execute ('attrib "{rData.sFileName}"', lList1)
			[ ] // Count the length of the attribute string
			[ ] iLength=Len(lList1[1])
			[ ] 
			[ ] //Retrieve first six characters in the attribute string 
			[ ] sAttributesHR = Left(lList1[1],6)
			[ ] 
			[ ] // Retrieve character in AttributeA position
			[ ] sAttributeA=SubStr(sAttributesHR, 1,1)
			[ ] 
			[ ] //Comparison for the archive attribute
			[-] switch rData.sAttributeA
				[-] case YES
					[-] if sAttributeA == ARCHIVE
						[ ] print("Archive attribute for file: {lfFileList[iCount].sName} matches expected results")
					[-] else
						[ ] LogError("Archive attribute for file: {lfFileList[iCount].sName} does not match expected results")
				[-] case NO
					[-] if sAttributeA == BLANK
						[ ] print("Archive attribute for file: {lfFileList[iCount].sName} matches expected results")
					[-] else
						[ ] LogError("Archive attribute for file: {lfFileList[iCount].sName} does not match expected results")
				[-] case NOT_APPLICABLE
					[ ] print("Archive attribute for file: {lfFileList[iCount].sName} is not applicable")
				[-] default
					[ ] LogError("Expected value for archive attribute of file: {rData.sFileName} needs to change in Data File")
[ ] 
[ ] 
