[ ] //
[ ] // This file is no longer used as all of the types have been moved to VerificationTypes.inc
[ ] //
[ ] 
[ ] // This type has been moved to VerificationTypes.inc
[+] type REC_6ANALYTES is record
	[ ] STRING sSampleID  
	[ ] STRING sStatus  
	[ ] STRING sErrorStatus  
	[ ] STRING sAssayNameLeftPanel  
	[ ] STRING sAssayNameRightPanel 
	[ ] STRING sResultText 
	[ ] STRING sResultColor 
	[ ] STRING sResultFont
[ ] 
[ ] // This type has been moved to VerificationTypes.inc
[+] type DETAIL_LSP is record
	[ ] STRING sAnalyteName
	[ ] STRING sCt
	[ ] STRING sEndPt
	[ ] STRING sAnalyteResult
	[ ] STRING sProbeCheck
	[ ] STRING sCurveFit
[ ] 
[ ] // This type has been moved to VerificationTypes.inc
[+] type REC_LSP is record
	[ ] STRING sSampleID  
	[ ] STRING sStatus  
	[ ] STRING sErrorStatus  
	[ ] STRING sAssayNameLeftPanel  
	[ ] STRING sAssayNameRightPanel 
	[ ] STRING sResultText 
	[ ] STRING sResultColor 
	[ ] STRING sResultFont
	[ ] INTEGER iAssayVersion
	[ ] INTEGER iLotNumber
	[ ] STRING sErrorTab
	[ ] STRING sTroubleshootTab
[ ] 
[ ] // This type has been moved to VerificationTypes.inc
[+] type REC_ERROR is record
	[ ] INTEGER iNum
	[ ] STRING sDescription
	[ ] STRING sDetails
[ ] 
[ ] // This type has been moved to VerificationTypes.inc
[+] type REC_TROUBLESHOOT is record
	[ ] STRING ErrorText
[ ] 
[ ] 
