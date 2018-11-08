[ ] //
[ ] // User-defined Data Types
[ ] //
[+] type REC_6TARGETS is record
	[ ] STRING SampleID  
	[ ] STRING Status  
	[ ] STRING ErrorStatus  
	[ ] STRING AssayNameLeftPanel  
	[ ] STRING AssayNameRightPanel 
	[ ] STRING ResultText 
	[ ] STRING ResultColor 
	[ ] STRING ResultFont
	[ ] STRING Analyte1Name 
	[ ] STRING Analyte1Result  
	[ ] STRING Analyte2Name
	[ ] STRING Analyte2Result
	[ ] STRING Analyte3Name 
	[ ] STRING Analyte3Result
	[ ] STRING Analyte4Name
	[ ] STRING Analyte4Result
	[ ] STRING Analyte5Name 
	[ ] STRING Analyte5Result
	[ ] STRING Analyte6Name 
	[ ] STRING Analyte6Result
[ ] 
[+] type REC_6ANALYTES is record
	[ ] STRING SampleID  
	[ ] STRING Status  
	[ ] STRING ErrorStatus  
	[ ] STRING AssayNameLeftPanel  
	[ ] STRING AssayNameRightPanel 
	[ ] STRING ResultText 
	[ ] STRING ResultColor 
	[ ] STRING ResultFont
	[ ] STRING Analyte1Name 
	[ ] STRING Analyte1Result  
	[ ] STRING Analyte2Name
	[ ] STRING Analyte2Result
	[ ] STRING Analyte3Name 
	[ ] STRING Analyte3Result
	[ ] STRING Analyte4Name
	[ ] STRING Analyte4Result
	[ ] STRING Analyte5Name 
	[ ] STRING Analyte5Result
	[ ] STRING Analyte6Name 
	[ ] STRING Analyte6Result
[ ] 
[+] type TEST  is record
	[ ] INTEGER iRowNum
	[ ] STRING sAnalyteResult
	[ ] STRING sSampleID
	[ ] STRING sTestResult1
	[ ] STRING sTestResult2
	[ ] STRING sTestColor1
	[ ] STRING sTestColor2
	[ ] STRING sTestFont1
	[ ] STRING sTestFont2
	[ ] STRING result_text
	[ ] STRING result_text_color
[ ] 
[+] type REC_5ANALYTES is record
	[ ] STRING SampleID  
	[ ] STRING Status  
	[ ] STRING ErrorStatus  
	[ ] STRING AssayNameLeftPanel  
	[ ] STRING AssayNameRightPanel 
	[ ] STRING ResultText 
	[ ] STRING ResultColor 
	[ ] STRING ResultFont
	[ ] STRING Analyte1Name 
	[ ] STRING Analyte1Result  
	[ ] STRING Analyte2Name
	[ ] STRING Analyte2Result
	[ ] STRING Analyte3Name 
	[ ] STRING Analyte3Result
	[ ] STRING Analyte4Name
	[ ] STRING Analyte4Result
	[ ] STRING Analyte5Name 
	[ ] STRING Analyte5Result
[ ] 
[+] type REC_3ANALYTES is record
	[ ] STRING SampleID  
	[ ] STRING Status  
	[ ] STRING ErrorStatus  
	[ ] STRING AssayNameLeftPanel  
	[ ] STRING AssayNameRightPanel 
	[ ] STRING ResultText 
	[ ] STRING ResultColor 
	[ ] STRING ResultFont
	[ ] STRING Analyte1Name 
	[ ] STRING Analyte1Result  
	[ ] STRING Analyte2Name
	[ ] STRING Analyte2Result
	[ ] STRING Analyte3Name 
	[ ] STRING Analyte3Result
[ ] 
[+] type DETAIL_DELTACT is record
	[ ] STRING sAnalyteName
	[ ] STRING sCt
	[ ] STRING sEndPt
	[ ] STRING sAnalyteResult
	[ ] STRING sTargetDeltaCt
[ ] 
[+] type REC_6ANALYTES_DR is record
	[ ] STRING sSampleID  
	[ ] STRING sStatus  
	[ ] STRING sErrorStatus  
	[ ] STRING sAssayNameLeftPanel  
	[ ] STRING sAssayNameRightPanel 
	[ ] STRING sResultText 
	[ ] STRING sResultColor 
	[ ] STRING sResultFont
[ ] 
[+] type REC_DETAIL is record
	[ ] STRING sAnalyteName
	[ ] STRING sCt
	[ ] STRING sEndPt
	[ ] STRING sAnalyteResult
	[ ] STRING sPrbChk1
	[ ] STRING sPrbChk2
	[ ] STRING sPrbChk3
	[ ] STRING sPrbChkResult
	[ ] STRING sSecDerivPeakHght
	[ ] STRING sMeltPeak1
	[ ] STRING sMeltPeak2
	[ ] STRING sMeltPeak3
	[ ] STRING sCurveFit
	[ ] 
[ ] 
[+] type REC_DETAIL_CURVE_FIT is record
	[ ] STRING sAnalyteName
	[ ] STRING sCt
	[ ] STRING sEndPt
	[ ] STRING sAnalyteResult
	[ ] STRING sCurveFit
[ ] 
[+] type DETAIL_AR1_4 is record
	[ ] STRING sAnalyteName
	[ ] STRING sCt
	[ ] STRING sEndPt
	[ ] STRING sAnalyteResult
	[ ] STRING sSecDerivPeakHght
[ ] 
[+] type DETAIL_AR2_3_5 is record
	[ ] STRING sAnalyteName
	[ ] STRING sCt
	[ ] STRING sEndPt
	[ ] STRING sAnalyteResult
[ ] 
[+] type DETAIL_ER_1 is record
	[ ] STRING sAnalyteName
	[ ] STRING sCt
	[ ] STRING sEndPt
	[ ] STRING sAnalyteResult
[ ] 
[+] type DETAIL_AR7 is record
	[ ] STRING sAnalyteName
	[ ] STRING sCt
	[ ] STRING sEndPt
	[ ] STRING sAnalyteResult
	[ ] STRING sTargetDeltaCt
[ ] 
[+] type DETAIL_SECOND_DERIV is record
	[ ] STRING sAnalyteName
	[ ] STRING sCt
	[ ] STRING sEndPt
	[ ] STRING sAnalyteResult
	[ ] STRING sSecDerivPeakHght
[ ] 
[+] type DETAIL_PRB_CHK is record
	[ ] STRING sAnalyteName
	[ ] STRING sCt
	[ ] STRING sEndPt
	[ ] STRING sAnalyteResult
	[ ] STRING sPrbChkResult
[ ] 
[+] type DETAIL_LSP is record
	[ ] STRING sAnalyteName
	[ ] STRING sCt
	[ ] STRING sEndPt
	[ ] STRING sAnalyteResult
	[ ] STRING sProbeCheck
	[ ] STRING sCurveFit
[ ] 
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
[+] type REC_ERROR is record
	[ ] INTEGER iNum
	[ ] STRING sDescription
	[ ] STRING sDetails
[ ] 
[+] type REC_TROUBLESHOOT is record
	[ ] STRING ErrorText
[ ] 
[+] type TEST_RESULT is record
	[ ] INTEGER iPosition
	[ ] STRING sResultText
	[ ] STRING sResultColor 
	[ ] STRING sResultFont
	[ ] 
[ ] 
[+] type REC_TEST_EXCEL is record
	[ ] STRING sSampleID  
	[ ] STRING sStatus  
	[ ] STRING sErrorStatus  
	[ ] STRING sAssayNameLeftPanel  
	[ ] STRING sAssayNameRightPanel 
	[ ] INTEGER iPosition1
	[ ] STRING sResultText1
	[ ] STRING sResultColor1 
	[ ] STRING sResultFont1
	[ ] INTEGER iPosition2
	[ ] STRING sResultText2
	[ ] STRING sResultColor2
	[ ] STRING sResultFont2
	[ ] INTEGER iPosition3
	[ ] STRING sResultText3
	[ ] STRING sResultColor3
	[ ] STRING sResultFont3
	[ ] INTEGER iPosition4
	[ ] STRING sResultText4
	[ ] STRING sResultColor4
	[ ] STRING sResultFont4
	[ ] INTEGER iPosition5
	[ ] STRING sResultText5
	[ ] STRING sResultColor5 
	[ ] STRING sResultFont5
	[ ] INTEGER iPosition6
	[ ] STRING sResultText6
	[ ] STRING sResultColor6
	[ ] STRING sResultFont6
	[ ] INTEGER iPosition7
	[ ] STRING sResultText7
	[ ] STRING sResultColor7
	[ ] STRING sResultFont7
	[ ] INTEGER iPosition8
	[ ] STRING sResultText8
	[ ] STRING sResultColor8
	[ ] STRING sResultFont8
	[ ] INTEGER iPosition9
	[ ] STRING sResultText9
	[ ] STRING sResultColor9
	[ ] STRING sResultFont9
	[ ] INTEGER iPosition10
	[ ] STRING sResultText10
	[ ] STRING sResultColor10
	[ ] STRING sResultFont10
	[ ] INTEGER iPosition11
	[ ] STRING sResultText11
	[ ] STRING sResultColor11
	[ ] STRING sResultFont11
	[ ] INTEGER iPosition12
	[ ] STRING sResultText12
	[ ] STRING sResultColor12
	[ ] STRING sResultFont12
[ ] 
[+] type REC_TEST_RESULT is record
	[ ] STRING sSampleID  
	[ ] STRING sStatus  
	[ ] STRING sErrorStatus  
	[ ] STRING sAssayNameLeftPanel  
	[ ] STRING sAssayNameRightPanel 
	[ ] LIST OF TEST_RESULT lsTestResult
[ ] 
[+] type REC_DETAIL_OR is record
	[ ] STRING sAnalyteName
	[ ] STRING sCt
	[ ] STRING sEndPt
	[ ] STRING sAnalyteResult
	[ ] 
[ ] 
[+] type REC_DETAILCOMBO is record
	[ ] STRING sAnalyteName
	[ ] STRING sCt
	[ ] STRING sEndPt
	[ ] STRING sAnalyteResult
	[ ] STRING sPrbChk1
	[ ] STRING sPrbChk2
	[ ] STRING sPrbChk3
[ ] 
[+] type REC_TEST_EXCEL_GT is record
	[ ] STRING sSampleID  
	[ ] STRING sStatus  
	[ ] STRING sErrorStatus  
	[ ] STRING sAssayNameLeftPanel  
	[ ] STRING sAssayNameRightPanel 
	[ ] INTEGER iPosition1
	[ ] STRING sResultText1
	[ ] STRING sResultColor1 
	[ ] STRING sResultFont1
	[ ] INTEGER iPosition2
	[ ] STRING sResultText2
	[ ] STRING sResultColor2
	[ ] STRING sResultFont2
	[ ] INTEGER iPosition3
	[ ] STRING sResultText3
	[ ] STRING sResultColor3
	[ ] STRING sResultFont3
	[ ] INTEGER iPosition4
	[ ] STRING sResultText4
	[ ] STRING sResultColor4
	[ ] STRING sResultFont4
	[ ] STRING sDisclaimer1
	[ ] STRING sDisclaimer2
	[ ] STRING sDisclaimer3
	[ ] STRING sDisclaimer4
	[ ] STRING sDisclaimer5
[ ] 
[+] type ASSAY_DISCLAIMERS is record
	[ ] STRING sAssayDisclaimer
	[ ] STRING sLightBlueDisclaimer
	[ ] STRING sLightGrayDisclaimer
	[ ] STRING sRedDisclaimer
	[ ] STRING sGreenDisclaimer
	[ ] STRING sYellowDisclaimer
	[ ] STRING sWhiteDisclaimer
[ ] 
