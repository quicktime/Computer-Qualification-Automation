[+] type RECMASTER is record
	[ ] STRING sSampleID
	[ ] STRING sAssayName
	[ ] STRING sExportTab
	[ ] INTEGER iNumAnalytes
	[ ] STRING sHeaderLine
[ ] 
[+] type EXPORT1ANALYTE is record
	[ ] INTEGER iCycle
	[ ] STRING sPrimary
	[ ] STRING sRawData
[ ] 
[+] type EXPORT2ANALYTE is record
	[ ] INTEGER iCycle
	[ ] STRING sPrimary1
	[ ] STRING sRawData1
	[ ] STRING sPrimary2
	[ ] STRING sRawData2
[ ] 
[+] type EXPORT2ANALYTEAI is record
	[ ] INTEGER iCycle
	[ ] STRING sPrimary1
	[ ] STRING s2D1
	[ ] STRING sRawData1
	[ ] STRING sPrimary2
	[ ] STRING s2D2
	[ ] STRING sRawData2
[ ] 
[+] type EXPORT3ANALYTE is record
	[ ] INTEGER iCycle
	[ ] STRING sPrimary1
	[ ] STRING s2D1
	[ ] STRING sRawData1
	[ ] STRING sPrimary2
	[ ] STRING s2D2
	[ ] STRING sRawData2
	[ ] STRING sPrimary3
	[ ] STRING s2D3
	[ ] STRING sRawData3
[ ] 
[+] type EXPORT4ANALYTEGXDR_4 is record
	[ ] INTEGER iCycle
	[ ] STRING sPrimary1
	[ ] STRING sRawData1
	[ ] STRING sPrimary2
	[ ] STRING sRawData2
	[ ] STRING sPrimary3
	[ ] STRING sRawData3
	[ ] STRING sPrimary4
	[ ] STRING s2D4
	[ ] STRING sRawData4
[ ] 
[+] type EXPORT4ANALYTEGXDR_60 is record
	[ ] INTEGER iCycle
	[ ] STRING sPrimary1
	[ ] STRING s2D1
	[ ] STRING sRawData1
	[ ] STRING sPrimary2
	[ ] STRING s2D2
	[ ] STRING sRawData2
	[ ] STRING sPrimary3
	[ ] STRING sRawData3
	[ ] STRING sPrimary4
	[ ] STRING s2D4
	[ ] STRING sRawData4
[ ] 
[+] type EXPORT4ANALYTEGXDR_35 is record
	[ ] INTEGER iCycle
	[ ] STRING sPrimary1
	[ ] STRING sRawData1
	[ ] STRING sPrimary2
	[ ] STRING sRawData2
	[ ] STRING sPrimary3
	[ ] STRING sRawData3
	[ ] STRING sPrimary4
	[ ] STRING s2D4
	[ ] STRING sRawData4
[ ] 
[+] type EXPORT4ANALYTEPRI_RAW is record
	[ ] INTEGER iCycle
	[ ] STRING sPrimary1
	[ ] STRING sRawData1
	[ ] STRING sPrimary2
	[ ] STRING sRawData2
	[ ] STRING sPrimary3
	[ ] STRING sRawData3
	[ ] STRING sPrimary4
	[ ] STRING sRawData4
[ ] 
[+] type EXPORT4ANALYTEGXDR_BSub32 is record
	[ ] INTEGER iCycle
	[ ] STRING sPrimary1
	[ ] STRING sPrimary2
	[ ] STRING sPrimary3
	[ ] STRING sPrimary4
[ ] 
