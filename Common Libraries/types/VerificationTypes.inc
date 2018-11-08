[ ] //
[ ] // User-defined Data Types
[ ] //
[ ] // New Record type for Test Result and Support tabs for GX Dx 4.7
[-] type REC_RESULT is record
	[ ] STRING sSampleID  // set to NA to skip verification
	[ ] STRING sStatus 		 // set to NA to skip verification
	[ ] STRING sErrorStatus   // set to NA to skip verification
	[ ] STRING sAssayName  // set to NA to skip verification
	[ ] STRING sResultText  // set to -9999 to skip verification
	[ ] STRING sResultColor  // set to NA to skip verification
	[ ] STRING sResultFont  // set to NA to skip verification
	[ ] INTEGER iPosition 
	[ ] STRING sDisclaimer1  // set to NA-1 to skip verification
	[ ] STRING sDisclaimer2 // set to NA-1 to skip verification
	[ ] STRING sDisclaimer3 // set to NA-1 to skip verification
	[ ] STRING sDisclaimer4 // set to NA-1 to skip verification
	[ ] STRING sDisclaimer5 // set to NA-1 to skip verification
	[ ] STRING sDisclaimer6 // set to NA-1 to skip verification
	[ ] STRING sDisclaimer7 // set to NA-1 to skip verification
[ ] 
[ ] // New Record type for Analyte Result tab for GX Dx 4.7
[-] type REC_DETAIL is record
	[ ] STRING sAnalyteName // set to NA to skip verification
	[ ] STRING sCartridge 	// set to NA to skip verification
	[ ] STRING sCt			// set to NA to skip verification
	[ ] STRING sEndPt		// set to NA to skip verification
	[ ] STRING sInterpretationResult  // set to NA to skip verification
	[ ] STRING sReason				// set to NA to skip verification
	[ ] STRING sAnalyteResult		// set to NA-1 to skip verification
	[ ] STRING sPrbChkResult		// set to -9999 to skip verification
	[ ] STRING sTargetDeltaCt		// set to -9999 to skip verification
	[ ] STRING sPrbChk1			// set to NA to skip verification
	[ ] STRING sPrbChk2			// set to NA to skip verification
	[ ] STRING sPrbChk3			// set to NA to skip verification
	[ ] STRING sSecDerivPeakHght		// set to -9999 to skip verification
	[ ] STRING sCurveFit				// set to NA to skip verification
	[ ] STRING sMeltPeakTemp
	[ ] STRING sMeltPeakHght
	[ ] 
[ ] 
[ ] // New Record type for Melt tab for GX Dx 4.7
[-] type REC_MELT is record
	[ ] STRING sAnalyteName // set to NA to skip verification
	[ ] STRING sCartridge 	// set to NA to skip verification
	[ ] STRING sMeltPeakTemp
	[ ] STRING sMeltPeakHght
	[ ] 
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
[ ] // Moved to Verification Types.inc file
[-] // type REC_ERROR is record
	[ ] // INTEGER iNum
	[ ] // STRING sDescription
	[ ] // STRING sDetails
[ ] 
[ ] 
[ ] //Added REC_ERROR_MESSAGE JG 11/2/17
[-] type REC_ERROR_MESSAGE is record
	[ ] STRING sSampleID  // set to NA to skip verification
	[ ] STRING sStatus 		 // set to NA to skip verification
	[ ] STRING sErrorStatus   // set to NA to skip verification
	[ ] STRING sAssayName  // set to NA to skip verification
	[ ] STRING sResultText  // set to -9999 to skip verification
	[ ] STRING sResultColor  // set to NA to skip verification
	[ ] STRING sResultFont  // set to NA to skip verification
	[ ] STRING sErrorText
	[ ] 
[ ] // Changed to include the initial letter to indicate type in all elements of the below type
[+] type REC_TROUBLESHOOT is record
	[ ] STRING sErrorText
[ ] 
[ ] // This ype REC_MELT_MASTER is used in D8383 Background Subtraction and Crosstalk Correction project
[ ] 
[+] type REC_MELT_MASTER is record
	[ ] STRING SampleID
	[ ] STRING sStatus  
	[ ] STRING sErrorStatus  
	[ ] STRING sAssayNameLeftPanel  
	[ ] STRING sAssayNameRightPanel 
	[ ] STRING sResultTab
	[ ] STRING sDetails
[ ] 
[ ]  // This type REC_MELT_DETAILS is used in D8383 Background Subtraction and Crosstalk Correction project
[+] type REC_MELT_DETAILS is record
	[ ] STRING sAnalyteName
	[ ] STRING sPrbChk1
	[ ] STRING sPrbChk2
	[ ] STRING sPrbChk3
	[ ] STRING sPrChResult
	[ ] STRING sSecDerivPeakHght
	[ ] STRING sMeltPeak1
	[ ] STRING sMeltPeak2
	[ ] STRING sMeltPeak3
[ ] 
[ ] // This type EC_ANALYTE_BCT is used in D8383 Background Subtraction and Crosstalk Correction project
[+] type REC_ANALYTE_BCT is record
	[ ] STRING sSampleID  
	[ ] STRING sStatus  
	[ ] STRING sErrorStatus  
	[ ] STRING sAssayNameLeftPanel  
	[ ] STRING sAssayNameRightPanel 
	[ ] REAL CheckProbeCheckReadings
[ ] 
[ ] // This type: REC_TEST_MELT is used in D10342 Melt Data Reduction protocol for verification Melt peaks on the Detail tab
[+] type REC_TEST_MELT is record
	[ ] STRING sSampleID
	[ ] STRING sAnalyteName1
	[ ] STRING sAnalyteName2
	[ ] STRING sAnalyteName3
	[ ] 
	[ ] STRING sMeltPeak11
	[ ] STRING sMeltPeak12
	[ ] STRING sMeltPeak13
	[ ] STRING sMeltPeak21
	[ ] STRING sMeltPeak22
	[ ] STRING sMeltPeak23
	[ ] STRING sMeltPeak31
	[ ] STRING sMeltPeak32
	[ ] STRING sMeltPeak33
	[ ] 
[ ] 
[ ] // This type: REC_TEST_MELT1 is used in D10342 Melt Data Reduction protocol for verification Melt peaks on the Detail tab
[+] type REC_TEST_MELT1 is record
	[ ] STRING sSampleID
	[ ] STRING sAnalyteName1
	[ ] STRING sMeltPeak1
	[ ] STRING sMeltPeak2
	[ ] STRING sMeltPeak3
[ ] 
[ ] // This type is used in D10343 Signal Loss Detection  VerifySLD_2Analytes.t script
[+] type REC_TEST_SLD2  is record
	[ ] STRING sSampleID
	[ ] STRING sTestResult1
	[ ] STRING sTestColor1
	[ ] STRING sTestFont1
	[ ] STRING sAnalyteName1
	[ ] STRING sAnalyteName2
	[ ] STRING sCt1
	[ ] STRING sCt2
	[ ] STRING sEndPt1
	[ ] STRING sEndPt2
	[ ] STRING sAnalyteResult1
	[ ] STRING sAnalyteResult2
	[ ] STRING sProbeCheckResult1
	[ ] STRING sProbeCheckResult2
[ ] 
[ ] // This type is used in D10343 Signal Loss Detection  VerifySLD_4Analytes.t script
[+] type REC_TEST_SLD4  is record
	[ ] STRING sSampleID
	[ ] STRING sTestResult1
	[ ] STRING sTestColor1
	[ ] STRING sTestFont1
	[ ] STRING sAnalyteName1
	[ ] STRING sAnalyteName2
	[ ] STRING sAnalyteName3
	[ ] STRING sAnalyteName4
	[ ] STRING sCt1
	[ ] STRING sCt2
	[ ] STRING sCt3
	[ ] STRING sCt4
	[ ] STRING sEndPt1
	[ ] STRING sEndPt2
	[ ] STRING sEndPt3
	[ ] STRING sEndPt4
	[ ] STRING sAnalyteResult1
	[ ] STRING sAnalyteResult2
	[ ] STRING sAnalyteResult3
	[ ] STRING sAnalyteResult4
	[ ] STRING sProbeCheckResult1
	[ ] STRING sProbeCheckResult2
	[ ] STRING sProbeCheckResult3
	[ ] STRING sProbeCheckResult4
	[ ] 
[ ] 
[ ] // This type is used in D8384 Percent Ratio script: VerifyResult_3Analytes_5result.t
[+] type TEST_PR  is record
	[ ] INTEGER iRowNum
	[ ] STRING sSampleID
	[ ] STRING sTestResult1
	[ ] STRING sTestResult2
	[ ] STRING sTestResult3
	[ ] STRING sTestResult4
	[ ] STRING sTestResult5
	[ ] STRING sTestColor1
	[ ] STRING sTestColor2
	[ ] STRING sTestColor3
	[ ] STRING sTestColor4
	[ ] STRING sTestColor5
	[ ] STRING sTestFont1
	[ ] STRING sTestFont2
	[ ] STRING sTestFont3
	[ ] STRING sTestFont4
	[ ] STRING sTestFont5
	[ ] STRING sAnalyteName1
	[ ] STRING sAnalyteName2
	[ ] STRING sAnalyteName3
	[ ] STRING sAnalyteName4
	[ ] STRING sAnalyteName5
	[ ] STRING sAnalyteName6
	[ ] STRING sCt1
	[ ] STRING sCt2
	[ ] STRING sCt3
	[ ] STRING sCt4
	[ ] STRING sCt5
	[ ] STRING sCt6
	[ ] STRING sEndPt1
	[ ] STRING sEndPt2
	[ ] STRING sEndPt3
	[ ] STRING sEndPt4
	[ ] STRING sEndPt5
	[ ] STRING sEndPt6
	[ ] STRING sAnalyteResult1
	[ ] STRING sAnalyteResult2
	[ ] STRING sAnalyteResult3
	[ ] STRING sAnalyteResult4
	[ ] STRING sAnalyteResult5
	[ ] STRING sAnalyteResult6
	[ ] STRING sTargetDeltaCt1
	[ ] STRING sTargetDeltaCt2
	[ ] STRING sTargetDeltaCt3
	[ ] STRING sTargetDeltaCt4
	[ ] STRING sTargetDeltaCt5
	[ ] STRING sTargetDeltaCt6
	[ ] 
[ ] 
[ ] // This type is used in D8384 Percent Ratio script: VerifyResult_QNT11.t
[+] type TEST_QNT11  is record
	[ ] INTEGER iRowNum
	[ ] STRING sSampleID
	[ ] STRING sTestResult1
	[ ] STRING sTestResult2
	[ ] STRING sTestResult3
	[ ] STRING sTestResult4
	[ ] STRING sTestColor1
	[ ] STRING sTestColor2
	[ ] STRING sTestColor3
	[ ] STRING sTestColor4
	[ ] STRING sTestFont1
	[ ] STRING sTestFont2
	[ ] STRING sTestFont3
	[ ] STRING sTestFont4
	[ ] STRING sAnalyteName1
	[ ] STRING sAnalyteName2
	[ ] STRING sAnalyteName3
	[ ] STRING sAnalyteName4
	[ ] STRING sAnalyteName5
	[ ] STRING sAnalyteName6
	[ ] STRING sCt1
	[ ] STRING sCt2
	[ ] STRING sCt3
	[ ] STRING sCt4
	[ ] STRING sCt5
	[ ] STRING sCt6
	[ ] STRING sEndPt1
	[ ] STRING sEndPt2
	[ ] STRING sEndPt3
	[ ] STRING sEndPt4
	[ ] STRING sEndPt5
	[ ] STRING sEndPt6
	[ ] STRING sAnalyteResult1
	[ ] STRING sAnalyteResult2
	[ ] STRING sAnalyteResult3
	[ ] STRING sAnalyteResult4
	[ ] STRING sAnalyteResult5
	[ ] STRING sAnalyteResult6
	[ ] STRING sTargetDeltaCt1
	[ ] STRING sTargetDeltaCt2
	[ ] STRING sTargetDeltaCt3
	[ ] STRING sTargetDeltaCt4
	[ ] STRING sTargetDeltaCt5
	[ ] STRING sTargetDeltaCt6
	[ ] 
[ ] 
[ ] // This type is used in D8384 Percent Ratio script: VerifyResult_QNT13.t
[+] type TEST_QNT13  is record
	[ ] INTEGER iRowNum
	[ ] STRING sSampleID
	[ ] STRING sTestResult1
	[ ] STRING sTestResult2
	[ ] STRING sTestResult3
	[ ] STRING sTestResult4
	[ ] STRING sTestResult5
	[ ] STRING sTestColor1
	[ ] STRING sTestColor2
	[ ] STRING sTestColor3
	[ ] STRING sTestColor4
	[ ] STRING sTestColor5
	[ ] STRING sTestFont1
	[ ] STRING sTestFont2
	[ ] STRING sTestFont3
	[ ] STRING sTestFont4
	[ ] STRING sTestFont5
	[ ] STRING sAnalyteName1
	[ ] STRING sAnalyteName2
	[ ] STRING sAnalyteName3
	[ ] STRING sAnalyteName4
	[ ] STRING sAnalyteName5
	[ ] STRING sAnalyteName6
	[ ] STRING sCt1
	[ ] STRING sCt2
	[ ] STRING sCt3
	[ ] STRING sCt4
	[ ] STRING sCt5
	[ ] STRING sCt6
	[ ] STRING sEndPt1
	[ ] STRING sEndPt2
	[ ] STRING sEndPt3
	[ ] STRING sEndPt4
	[ ] STRING sEndPt5
	[ ] STRING sEndPt6
	[ ] STRING sAnalyteResult1
	[ ] STRING sAnalyteResult2
	[ ] STRING sAnalyteResult3
	[ ] STRING sAnalyteResult4
	[ ] STRING sAnalyteResult5
	[ ] STRING sAnalyteResult6
	[ ] STRING sTargetDeltaCt1
	[ ] STRING sTargetDeltaCt2
	[ ] STRING sTargetDeltaCt3
	[ ] STRING sTargetDeltaCt4
	[ ] STRING sTargetDeltaCt5
	[ ] STRING sTargetDeltaCt6
	[ ] 
[ ] 
[ ] // This type is used in D8384 Percent Ratio script: VerifyResult_QNT2.t
[+] type TEST_QNT2  is record
	[ ] INTEGER iRowNum
	[ ] STRING sSampleID
	[ ] STRING sTestResult1
	[ ] STRING sTestResult2
	[ ] STRING sTestResult3
	[ ] STRING sTestResult4
	[ ] STRING sTestColor1
	[ ] STRING sTestColor2
	[ ] STRING sTestColor3
	[ ] STRING sTestColor4
	[ ] STRING sTestFont1
	[ ] STRING sTestFont2
	[ ] STRING sTestFont3
	[ ] STRING sTestFont4
	[ ] STRING sAnalyteName1
	[ ] STRING sAnalyteName2
	[ ] STRING sAnalyteName3
	[ ] STRING sAnalyteName4
	[ ] STRING sAnalyteName5
	[ ] STRING sAnalyteName6
	[ ] STRING sCt1
	[ ] STRING sCt2
	[ ] STRING sCt3
	[ ] STRING sCt4
	[ ] STRING sCt5
	[ ] STRING sCt6
	[ ] STRING sEndPt1
	[ ] STRING sEndPt2
	[ ] STRING sEndPt3
	[ ] STRING sEndPt4
	[ ] STRING sEndPt5
	[ ] STRING sEndPt6
	[ ] STRING sAnalyteResult1
	[ ] STRING sAnalyteResult2
	[ ] STRING sAnalyteResult3
	[ ] STRING sAnalyteResult4
	[ ] STRING sAnalyteResult5
	[ ] STRING sAnalyteResult6
	[ ] STRING sTargetDeltaCt1
	[ ] STRING sTargetDeltaCt2
	[ ] STRING sTargetDeltaCt3
	[ ] STRING sTargetDeltaCt4
	[ ] STRING sTargetDeltaCt5
	[ ] STRING sTargetDeltaCt6
	[ ] 
[ ] 
[ ] // This type is used in D8384 Percent Ratio script: VerifyResult_QNT3a.t
[+] type TEST_QNT3a  is record
	[ ] INTEGER iRowNum
	[ ] STRING sSampleID
	[ ] STRING sTestResult1
	[ ] STRING sTestResult2
	[ ] STRING sTestResult3
	[ ] STRING sTestResult4
	[ ] STRING sTestColor1
	[ ] STRING sTestColor2
	[ ] STRING sTestColor3
	[ ] STRING sTestColor4
	[ ] STRING sTestFont1
	[ ] STRING sTestFont2
	[ ] STRING sTestFont3
	[ ] STRING sTestFont4
	[ ] STRING sAnalyteName1
	[ ] STRING sAnalyteName2
	[ ] STRING sAnalyteName3
	[ ] STRING sAnalyteName4
	[ ] STRING sAnalyteName5
	[ ] STRING sAnalyteName6
	[ ] STRING sCt1
	[ ] STRING sCt2
	[ ] STRING sCt3
	[ ] STRING sCt4
	[ ] STRING sCt5
	[ ] STRING sCt6
	[ ] STRING sEndPt1
	[ ] STRING sEndPt2
	[ ] STRING sEndPt3
	[ ] STRING sEndPt4
	[ ] STRING sEndPt5
	[ ] STRING sEndPt6
	[ ] STRING sAnalyteResult1
	[ ] STRING sAnalyteResult2
	[ ] STRING sAnalyteResult3
	[ ] STRING sAnalyteResult4
	[ ] STRING sAnalyteResult5
	[ ] STRING sAnalyteResult6
	[ ] STRING sTargetDeltaCt1
	[ ] STRING sTargetDeltaCt2
	[ ] STRING sTargetDeltaCt3
	[ ] STRING sTargetDeltaCt4
	[ ] STRING sTargetDeltaCt5
	[ ] STRING sTargetDeltaCt6
	[ ] 
[ ] 
[ ] // This type is used in D8384 Percent Ratio script: VerifyResult_QNT8.t
[+] type TEST_QNT8  is record
	[ ] INTEGER iRowNum
	[ ] STRING sSampleID
	[ ] STRING sTestResult1
	[ ] STRING sTestResult2
	[ ] STRING sTestResult3
	[ ] STRING sTestResult4
	[ ] STRING sTestResult5
	[ ] STRING sTestColor1
	[ ] STRING sTestColor2
	[ ] STRING sTestColor3
	[ ] STRING sTestColor4
	[ ] STRING sTestColor5
	[ ] STRING sTestFont1
	[ ] STRING sTestFont2
	[ ] STRING sTestFont3
	[ ] STRING sTestFont4
	[ ] STRING sTestFont5
	[ ] STRING sAnalyteName1
	[ ] STRING sAnalyteName2
	[ ] STRING sAnalyteName3
	[ ] STRING sAnalyteName4
	[ ] STRING sAnalyteName5
	[ ] STRING sAnalyteName6
	[ ] STRING sCt1
	[ ] STRING sCt2
	[ ] STRING sCt3
	[ ] STRING sCt4
	[ ] STRING sCt5
	[ ] STRING sCt6
	[ ] STRING sEndPt1
	[ ] STRING sEndPt2
	[ ] STRING sEndPt3
	[ ] STRING sEndPt4
	[ ] STRING sEndPt5
	[ ] STRING sEndPt6
	[ ] STRING sAnalyteResult1
	[ ] STRING sAnalyteResult2
	[ ] STRING sAnalyteResult3
	[ ] STRING sAnalyteResult4
	[ ] STRING sAnalyteResult5
	[ ] STRING sAnalyteResult6
	[ ] STRING sTargetDeltaCt1
	[ ] STRING sTargetDeltaCt2
	[ ] STRING sTargetDeltaCt3
	[ ] STRING sTargetDeltaCt4
	[ ] STRING sTargetDeltaCt5
	[ ] STRING sTargetDeltaCt6
[ ] 
[ ] // This type is used in D8384 Percent Ratio script: VerifyResult_QNT1b.t
[+] type TEST_QNT1b  is record
	[ ] STRING sSampleID
	[ ] STRING sTestResult1
	[ ] STRING sTestColor1
	[ ] STRING sTestFont1
	[ ] STRING sAnalyteName1
	[ ] STRING sAnalyteName2
	[ ] STRING sCt1
	[ ] STRING sCt2
	[ ] STRING sEndPt1
	[ ] STRING sEndPt2
	[ ] STRING sAnalyteResult1
	[ ] STRING sAnalyteResult2
	[ ] 
	[ ] STRING sTargetDeltaCt1
	[ ] STRING sTargetDeltaCt2
	[ ] 
[ ] 
[ ] // This type is used in D8384 Percent Ratio script: VerifyResult_QNT4b.t
[+] type TEST_QNT4b  is record
	[ ] STRING sSampleID
	[ ] STRING sTestResult1
	[ ] STRING sTestColor1
	[ ] STRING sTestFont1
	[ ] STRING sAnalyteName1
	[ ] STRING sAnalyteName2
	[ ] STRING sCt1
	[ ] STRING sCt2
	[ ] STRING sEndPt1
	[ ] STRING sEndPt2
	[ ] STRING sAnalyteResult1
	[ ] STRING sAnalyteResult2
	[ ] 
	[ ] STRING sTargetDeltaCt1
	[ ] STRING sTargetDeltaCt2
	[ ] 
[ ] 
[ ] // This type is used in D8384 Percent Ratio script: VerifyResultSF_8.t
[+] type TEST_QNT15b  is record
	[ ] INTEGER iRowNum
	[ ] STRING sSampleID
	[ ] STRING sTestResult1
	[ ] STRING sTestResult2
	[ ] STRING sTestResult3
	[ ] STRING sTestResult4
	[ ] 
	[ ] STRING sTestColor1
	[ ] STRING sTestColor2
	[ ] STRING sTestColor3
	[ ] STRING sTestColor4
	[ ] 
	[ ] STRING sTestFont1
	[ ] STRING sTestFont2
	[ ] STRING sTestFont3
	[ ] STRING sTestFont4
	[ ] 
	[ ] STRING sAnalyteName1
	[ ] STRING sAnalyteName2
	[ ] STRING sAnalyteName3
	[ ] STRING sAnalyteName4
	[ ] STRING sAnalyteName5
	[ ] 
	[ ] STRING sCt1
	[ ] STRING sCt2
	[ ] STRING sCt3
	[ ] STRING sCt4
	[ ] STRING sCt5
	[ ] 
	[ ] STRING sEndPt1
	[ ] STRING sEndPt2
	[ ] STRING sEndPt3
	[ ] STRING sEndPt4
	[ ] STRING sEndPt5
	[ ] 
	[ ] STRING sAnalyteResult1
	[ ] STRING sAnalyteResult2
	[ ] STRING sAnalyteResult3
	[ ] STRING sAnalyteResult4
	[ ] STRING sAnalyteResult5
	[ ] 
	[ ] STRING sTargetDeltaCt1
	[ ] STRING sTargetDeltaCt2
	[ ] STRING sTargetDeltaCt3
	[ ] STRING sTargetDeltaCt4
	[ ] STRING sTargetDeltaCt5
	[ ] 
	[ ] 
[ ] 
[ ] // This type is used in D8384 Percent Ratio script: VerifyResultSF_13_14_17_18.t
[+] type TEST_QNT15c  is record
	[ ] INTEGER iRowNum
	[ ] STRING sSampleID
	[ ] STRING sTestResult1
	[ ] STRING sTestResult2
	[ ] 
	[ ] STRING sTestColor1
	[ ] STRING sTestColor2
	[ ] 
	[ ] STRING sTestFont1
	[ ] STRING sTestFont2
	[ ] 
	[ ] STRING sAnalyteName1
	[ ] STRING sAnalyteName2
	[ ] STRING sAnalyteName3
	[ ] 
	[ ] STRING sCt1
	[ ] STRING sCt2
	[ ] STRING sCt3
	[ ] 
	[ ] STRING sEndPt1
	[ ] STRING sEndPt2
	[ ] STRING sEndPt3
	[ ] 
	[ ] STRING sAnalyteResult1
	[ ] STRING sAnalyteResult2
	[ ] STRING sAnalyteResult3
	[ ] 
	[ ] STRING sTargetDeltaCt1
	[ ] STRING sTargetDeltaCt2
	[ ] STRING sTargetDeltaCt3
[ ] 
[ ] // This type is used in D8384 Percent Ratio script: VerifyResultSF_4_5_6_7.t
[+] type TEST_QNT16  is record
	[ ] INTEGER iRowNum
	[ ] STRING sSampleID
	[ ] STRING sTestResult1
	[ ] STRING sTestColor1
	[ ] STRING sTestFont1
	[ ] STRING sAnalyteName1
	[ ] STRING sAnalyteName2
	[ ] STRING sCt1
	[ ] STRING sCt2
	[ ] STRING sEndPt1
	[ ] STRING sEndPt2
	[ ] STRING sAnalyteResult1
	[ ] STRING sAnalyteResult2
	[ ] STRING sTargetDeltaCt1
	[ ] STRING sTargetDeltaCt2
	[ ] 
[ ] // This type is used in D8384 Percent Ratio script: VerifyResultSF_9.t and VerifyResultSF_19.t
[+] type TEST_SF9  is record
	[ ] INTEGER iRowNum
	[ ] STRING sSampleID
	[ ] STRING sTestResult1
	[ ] STRING sTestColor1
	[ ] STRING sTestFont1
	[ ] STRING sAnalyteName1
	[ ] STRING sAnalyteName2
	[ ] STRING sCt1
	[ ] STRING sCt2
	[ ] STRING sEndPt1
	[ ] STRING sEndPt2
	[ ] STRING sAnalyteResult1
	[ ] STRING sAnalyteResult2
	[ ] STRING sTargetDeltaCt1
	[ ] STRING sTargetDeltaCt2
	[ ] STRING sLotID
	[ ] STRING sDisclaimer
[ ] 
[ ] // This type is used in D8384 Percent Ratio script: VerifyResultSF_21.t
[+] type TEST_SF21  is record
	[ ] INTEGER iRowNum
	[ ] STRING sSampleID
	[ ] STRING sTestResult1
	[ ] STRING sTestResult2
	[ ] STRING sTestResult3
	[ ] STRING sTestResult4
	[ ] STRING sTestResult5
	[ ] STRING sTestResult6
	[ ] STRING sTestResult7
	[ ] STRING sTestResult8
	[ ] STRING sTestResult9
	[ ] STRING sTestResult10
	[ ] STRING sTestResult11
	[ ] 
	[ ] STRING sTestColor1
	[ ] STRING sTestColor2
	[ ] STRING sTestColor3
	[ ] STRING sTestColor4
	[ ] STRING sTestColor5
	[ ] STRING sTestColor6
	[ ] STRING sTestColor7
	[ ] STRING sTestColor9
	[ ] STRING sTestColor10
	[ ] STRING sTestColor11
	[ ] 
	[ ] STRING sTestFont1
	[ ] STRING sTestFont2
	[ ] STRING sTestFont3
	[ ] STRING sTestFont4
	[ ] STRING sTestFont5
	[ ] STRING sTestFont6
	[ ] STRING sTestFont7
	[ ] STRING sTestFont8
	[ ] STRING sTestFont9
	[ ] STRING sTestFont10
	[ ] STRING sTestFont11
	[ ] 
	[ ] STRING sAnalyteName1
	[ ] STRING sAnalyteName2
	[ ] STRING sAnalyteName3
	[ ] STRING sAnalyteName4
	[ ] STRING sAnalyteName5
	[ ] STRING sAnalyteName6
	[ ] STRING sAnalyteName7
	[ ] STRING sAnalyteName8
	[ ] STRING sAnalyteName9
	[ ] STRING sAnalyteName10
	[ ] STRING sAnalyteName11
	[ ] STRING sAnalyteName12
	[ ] 
	[ ] STRING sCt1
	[ ] STRING sCt2
	[ ] STRING sCt3
	[ ] STRING sCt4
	[ ] STRING sCt5
	[ ] STRING sCt6
	[ ] STRING sCt7
	[ ] STRING sCt8
	[ ] STRING sCt9
	[ ] STRING sCt10
	[ ] STRING sCt11
	[ ] STRING sCt12
	[ ] 
	[ ] STRING sEndPt1
	[ ] STRING sEndPt2
	[ ] STRING sEndPt3
	[ ] STRING sEndPt4
	[ ] STRING sEndPt5
	[ ] STRING sEndPt6
	[ ] STRING sEndPt7
	[ ] STRING sEndPt8
	[ ] STRING sEndPt9
	[ ] STRING sEndPt10
	[ ] STRING sEndPt11
	[ ] STRING sEndPt12
	[ ] 
	[ ] STRING sAnalyteResult1
	[ ] STRING sAnalyteResult2
	[ ] STRING sAnalyteResult3
	[ ] STRING sAnalyteResult4
	[ ] STRING sAnalyteResult5
	[ ] STRING sAnalyteResult6
	[ ] STRING sAnalyteResult7
	[ ] STRING sAnalyteResult8
	[ ] STRING sAnalyteResult9
	[ ] STRING sAnalyteResult10
	[ ] STRING sAnalyteResult11
	[ ] STRING sAnalyteResult12
	[ ] 
	[ ] STRING sTargetDeltaCt1
	[ ] STRING sTargetDeltaCt2
	[ ] STRING sTargetDeltaCt3
	[ ] STRING sTargetDeltaCt4
	[ ] STRING sTargetDeltaCt5
	[ ] STRING sTargetDeltaCt6
	[ ] STRING sTargetDeltaCt7
	[ ] STRING sTargetDeltaCt8
	[ ] STRING sTargetDeltaCt9
	[ ] STRING sTargetDeltaCt10
	[ ] STRING sTargetDeltaCt11
	[ ] STRING sTargetDeltaCt12
	[ ] 
	[ ] 
[ ] 
[ ] // ***************** Deprecated Detail tab records ****************************
[ ] 
[ ] // This type is used in D8384 Percent Ratio script: VerifyResultSF_21.t
[ ] // Deprecated by Steve on 4/29/2014; use REC_DETAIL record
[+] // type REC_DETAIL_RATIO is record
	[ ] // STRING sAnalyteName
	[ ] // STRING sCt
	[ ] // STRING sEndPt
	[ ] // STRING sAnalyteResult
	[ ] // STRING sTargetDeltaCt
[ ] 
[ ] // Deprecated by Steve on 4/29/2014; use REC_DETAIL record
[+] // type REC_DETAILCOMBO is record
	[ ] // STRING sAnalyteName
	[ ] // STRING sCt
	[ ] // STRING sEndPt
	[ ] // STRING sAnalyteResult
	[ ] // STRING sPrbChk1
	[ ] // STRING sPrbChk2
	[ ] // STRING sPrbChk3
[ ] 
[ ] // The following type DETAIL_PRB is for  verification results in D8380 Probe Check project. 
[ ] // Deprecated by Steve on 4/29/2014; use REC_DETAIL record
[+] // type DETAIL_PRB is record
	[ ] // STRING sAnalyteName
	[ ] // STRING sAnalyteResult
	[ ] // STRING sProbeCheckResult
	[ ] // STRING sCt
	[ ] // STRING sEndPt
	[ ] // STRING sPrbChk1
	[ ] // STRING sPrbChk2
	[ ] // STRING sPrbChk3
	[ ] // STRING sSecDerivPeakHght
	[ ] // STRING sMeltPeak1
	[ ] // STRING sMeltPeak2
	[ ] // STRING sMeltPeak3
	[ ] // STRING sCurveFit
[ ] 
[ ] // The following type DETAIL_ER_1PRB is for  verification results on Detai ltab in test with error condition
[ ] // in D8380 Probe Check project. 
[ ] // Deprecated by Steve on 4/29/2014; use REC_DETAIL record
[+] // type DETAIL_ER_1PRB is record
	[ ] // STRING sAnalyteName
	[ ] // STRING sAnalyteResult
	[ ] // STRING sProbeCheckResult
	[ ] // STRING sPrbChk1
	[ ] // STRING sPrbChk2
	[ ] // STRING sPrbChk3
	[ ] // STRING sSecDerivPeakHght
	[ ] // STRING sMeltPeak1
	[ ] // STRING sMeltPeak2
	[ ] // STRING sMeltPeak3
	[ ] // STRING sCurveFit
[ ] 
[ ] // Deprecated by Steve on 4/29/2014; use REC_DETAIL record
[+] // type DETAIL_DELTACT is record
	[ ] // STRING sAnalyteName
	[ ] // STRING sCt
	[ ] // STRING sEndPt
	[ ] // STRING sAnalyteResult
	[ ] // STRING sTargetDeltaCt
[ ] 
[ ] // Deprecated by Steve on 4/29/2014; use REC_DETAIL record
[+] // type DETAIL_DELTACT is record
	[ ] // STRING sAnalyteName
	[ ] // STRING sCt
	[ ] // STRING sEndPt
	[ ] // STRING sAnalyteResult
	[ ] // STRING sTargetDeltaCt
[ ] 
[ ] // Deprecated by Steve on 5/22/2014; use REC_RESULT record
[+] // type REC_DETAIL_CURVE_FIT is record
	[ ] // STRING sAnalyteName
	[ ] // STRING sCt
	[ ] // STRING sEndPt
	[ ] // STRING sAnalyteResult
	[ ] // STRING sCurveFit
[ ] 
[ ] // Deprecated by Steve on 4/29/2014; use REC_DETAIL record
[+] // type REC_DETAIL_CURVE_FIT is record
	[ ] // STRING sAnalyteName
	[ ] // STRING sCt
	[ ] // STRING sEndPt
	[ ] // STRING sAnalyteResult
	[ ] // STRING sPrbChk1
	[ ] // STRING sPrbChk2
	[ ] // STRING sPrbChk3
	[ ] // STRING sPrbChkResult
	[ ] // STRING sSecDerivPeakHght
	[ ] // STRING sMeltPeak1
	[ ] // STRING sMeltPeak2
	[ ] // STRING sMeltPeak3
	[ ] // STRING sCurveFit
[ ] 
[ ] // Deprecated by Steve on 4/29/2014; use REC_DETAIL record
[+] // type DETAIL_AR1_4 is record
	[ ] // STRING sAnalyteName
	[ ] // STRING sCt
	[ ] // STRING sEndPt
	[ ] // STRING sAnalyteResult
	[ ] // STRING sSecDerivPeakHght
[ ] 
[ ] // Deprecated by Steve on 4/29/2014; use REC_DETAIL record
[+] // type DETAIL_AR2_3_5 is record
	[ ] // STRING sAnalyteName
	[ ] // STRING sCt
	[ ] // STRING sEndPt
	[ ] // STRING sAnalyteResult
[ ] 
[ ] // Deprecated by Steve on 4/29/2014; use REC_DETAIL record
[+] // type DETAIL_ER_1 is record
	[ ] // STRING sAnalyteName
	[ ] // STRING sCt
	[ ] // STRING sEndPt
	[ ] // STRING sAnalyteResult
[ ] 
[ ] // Deprecated by Steve on 4/29/2014; use REC_DETAIL record
[+] // type DETAIL_AR7 is record
	[ ] // STRING sAnalyteName
	[ ] // STRING sCt
	[ ] // STRING sEndPt
	[ ] // STRING sAnalyteResult
	[ ] // STRING sTargetDeltaCt
[ ] 
[ ] // Deprecated by Steve on 4/29/2014; use REC_DETAIL record
[+] // type DETAIL_SECOND_DERIV is record
	[ ] // STRING sAnalyteName
	[ ] // STRING sCt
	[ ] // STRING sEndPt
	[ ] // STRING sAnalyteResult
	[ ] // STRING sSecDerivPeakHght
[ ] 
[ ] // Deprecated by Steve on 4/29/2014; use REC_DETAIL record
[+] // type DETAIL_PRB_CHK is record
	[ ] // STRING sAnalyteName
	[ ] // STRING sCt
	[ ] // STRING sEndPt
	[ ] // STRING sAnalyteResult
	[ ] // STRING sPrbChkResult
[ ] 
[ ] // ***************** Deprecated Test Result tab records ****************************
[ ] 
[ ] // Deprecated by Steve on 5/22/2014; use REC_RESULT record
[+] // type REC_TEST_EXCEL_GT is record
	[ ] // STRING sSampleID  
	[ ] // STRING sStatus  
	[ ] // STRING sErrorStatus  
	[ ] // STRING sAssayNameLeftPanel  
	[ ] // STRING sAssayNameRightPanel 
	[ ] // INTEGER iPosition1
	[ ] // STRING sResultText1
	[ ] // STRING sResultColor1 
	[ ] // STRING sResultFont1
	[ ] // INTEGER iPosition2
	[ ] // STRING sResultText2
	[ ] // STRING sResultColor2
	[ ] // STRING sResultFont2
	[ ] // INTEGER iPosition3
	[ ] // STRING sResultText3
	[ ] // STRING sResultColor3
	[ ] // STRING sResultFont3
	[ ] // INTEGER iPosition4
	[ ] // STRING sResultText4
	[ ] // STRING sResultColor4
	[ ] // STRING sResultFont4
	[ ] // STRING sDisclaimer1
	[ ] // STRING sDisclaimer2
	[ ] // STRING sDisclaimer3
	[ ] // STRING sDisclaimer4
	[ ] // STRING sDisclaimer5
[ ] 
[ ] // Changed to include the initial letter to indicate type in all elements of the below type
[ ] // Deprecated by Steve on 5/22/2014; use REC_RESULT record
[+] // type REC_6ANALYTES is record
	[ ] // STRING sSampleID  
	[ ] // STRING sStatus  
	[ ] // STRING sErrorStatus  
	[ ] // STRING sAssayNameLeftPanel  
	[ ] // STRING sAssayNameRightPanel 
	[ ] // STRING sResultText 
	[ ] // STRING sResultColor 
	[ ] // STRING sResultFont
	[ ] // STRING sAnalyte1Name 
	[ ] // STRING sAnalyte1Result  
	[ ] // STRING sAnalyte2Name
	[ ] // STRING sAnalyte2Result
	[ ] // STRING sAnalyte3Name 
	[ ] // STRING sAnalyte3Result
	[ ] // STRING sAnalyte4Name
	[ ] // STRING sAnalyte4Result
	[ ] // STRING sAnalyte5Name 
	[ ] // STRING sAnalyte5Result
	[ ] // STRING sAnalyte6Name 
	[ ] // STRING sAnalyte6Result
[ ] 
[ ] // Deprecated by Steve on 5/22/2014; use REC_RESULT record
[+] // type REC_5ANALYTES is record
	[ ] // STRING SampleID  
	[ ] // STRING Status  
	[ ] // STRING ErrorStatus  
	[ ] // STRING AssayNameLeftPanel  
	[ ] // STRING AssayNameRightPanel 
	[ ] // STRING ResultText 
	[ ] // STRING ResultColor 
	[ ] // STRING ResultFont
	[ ] // STRING Analyte1Name 
	[ ] // STRING Analyte1Result  
	[ ] // STRING Analyte2Name
	[ ] // STRING Analyte2Result
	[ ] // STRING Analyte3Name 
	[ ] // STRING Analyte3Result
	[ ] // STRING Analyte4Name
	[ ] // STRING Analyte4Result
	[ ] // STRING Analyte5Name 
	[ ] // STRING Analyte5Result
[ ] 
[ ] // Deprecated by Steve on 5/22/2014; use REC_RESULT record
[+] // type REC_3ANALYTES is record
	[ ] // STRING SampleID  
	[ ] // STRING Status  
	[ ] // STRING ErrorStatus  
	[ ] // STRING AssayNameLeftPanel  
	[ ] // STRING AssayNameRightPanel 
	[ ] // STRING ResultText 
	[ ] // STRING ResultColor 
	[ ] // STRING ResultFont
	[ ] // STRING Analyte1Name 
	[ ] // STRING Analyte1Result  
	[ ] // STRING Analyte2Name
	[ ] // STRING Analyte2Result
	[ ] // STRING Analyte3Name 
	[ ] // STRING Analyte3Result
[ ] 
[ ] // Deprecated by Steve on 5/22/2014; use REC_RESULT record
[+] // type REC_6ANALYTES_DR is record
	[ ] // STRING sSampleID  
	[ ] // STRING sStatus  
	[ ] // STRING sErrorStatus  
	[ ] // STRING sAssayNameLeftPanel  
	[ ] // STRING sAssayNameRightPanel 
	[ ] // STRING sResultText 
	[ ] // STRING sResultColor 
	[ ] // STRING sResultFont
[ ] 
[ ] // Deprecated by Steve on 5/22/2014; use REC_RESULT record
[+] // type REC_5ANALYTES is record
	[ ] // STRING SampleID  
	[ ] // STRING Status  
	[ ] // STRING ErrorStatus  
	[ ] // STRING AssayNameLeftPanel  
	[ ] // STRING AssayNameRightPanel 
	[ ] // STRING ResultText 
	[ ] // STRING ResultColor 
	[ ] // STRING ResultFont
	[ ] // STRING Analyte1Name 
	[ ] // STRING Analyte1Result  
	[ ] // STRING Analyte2Name
	[ ] // STRING Analyte2Result
	[ ] // STRING Analyte3Name 
	[ ] // STRING Analyte3Result
	[ ] // STRING Analyte4Name
	[ ] // STRING Analyte4Result
	[ ] // STRING Analyte5Name 
	[ ] // STRING Analyte5Result
[ ] 
[ ] // Deprecated by Steve on 5/22/2014; use REC_RESULT record
[+] // type REC_3ANALYTES is record
	[ ] // STRING SampleID  
	[ ] // STRING Status  
	[ ] // STRING ErrorStatus  
	[ ] // STRING AssayNameLeftPanel  
	[ ] // STRING AssayNameRightPanel 
	[ ] // STRING ResultText 
	[ ] // STRING ResultColor 
	[ ] // STRING ResultFont
	[ ] // STRING Analyte1Name 
	[ ] // STRING Analyte1Result  
	[ ] // STRING Analyte2Name
	[ ] // STRING Analyte2Result
	[ ] // STRING Analyte3Name 
	[ ] // STRING Analyte3Result
[ ] 
[ ] // Deprecated by Steve on 5/22/2014; use REC_RESULT record
[+] // type REC_6ANALYTES_DR is record
	[ ] // STRING sSampleID  
	[ ] // STRING sStatus  
	[ ] // STRING sErrorStatus  
	[ ] // STRING sAssayNameLeftPanel  
	[ ] // STRING sAssayNameRightPanel 
	[ ] // STRING sResultText 
	[ ] // STRING sResultColor 
	[ ] // STRING sResultFont
[ ] 
[ ] // Deprecated by Steve on 5/22/2014; use REC_RESULT record
[+] // type TEST_RESULT is record
	[ ] // INTEGER iPosition
	[ ] // STRING sResultText
	[ ] // STRING sResultColor 
	[ ] // STRING sResultFont
	[ ] // 
[ ] 
[ ] // Deprecated by Steve on 5/22/2014; use REC_RESULT record
[+] // type TEST_RESULT is record
	[ ] // INTEGER iPosition
	[ ] // STRING sResultText
	[ ] // STRING sResultColor 
	[ ] // STRING sResultFont
	[ ] // 
[ ] 
[ ] // Deprecated by Steve on 5/22/2014; use REC_RESULT record
[+] // type REC_TEST_EXCEL is record
	[ ] // STRING sSampleID  
	[ ] // STRING sStatus  
	[ ] // STRING sErrorStatus  
	[ ] // STRING sAssayNameLeftPanel  
	[ ] // STRING sAssayNameRightPanel 
	[ ] // INTEGER iPosition1
	[ ] // STRING sResultText1
	[ ] // STRING sResultColor1 
	[ ] // STRING sResultFont1
	[ ] // INTEGER iPosition2
	[ ] // STRING sResultText2
	[ ] // STRING sResultColor2
	[ ] // STRING sResultFont2
	[ ] // INTEGER iPosition3
	[ ] // STRING sResultText3
	[ ] // STRING sResultColor3
	[ ] // STRING sResultFont3
	[ ] // INTEGER iPosition4
	[ ] // STRING sResultText4
	[ ] // STRING sResultColor4
	[ ] // STRING sResultFont4
	[ ] // INTEGER iPosition5
	[ ] // STRING sResultText5
	[ ] // STRING sResultColor5 
	[ ] // STRING sResultFont5
	[ ] // INTEGER iPosition6
	[ ] // STRING sResultText6
	[ ] // STRING sResultColor6
	[ ] // STRING sResultFont6
	[ ] // INTEGER iPosition7
	[ ] // STRING sResultText7
	[ ] // STRING sResultColor7
	[ ] // STRING sResultFont7
	[ ] // INTEGER iPosition8
	[ ] // STRING sResultText8
	[ ] // STRING sResultColor8
	[ ] // STRING sResultFont8
	[ ] // INTEGER iPosition9
	[ ] // STRING sResultText9
	[ ] // STRING sResultColor9
	[ ] // STRING sResultFont9
	[ ] // INTEGER iPosition10
	[ ] // STRING sResultText10
	[ ] // STRING sResultColor10
	[ ] // STRING sResultFont10
	[ ] // INTEGER iPosition11
	[ ] // STRING sResultText11
	[ ] // STRING sResultColor11
	[ ] // STRING sResultFont11
	[ ] // INTEGER iPosition12
	[ ] // STRING sResultText12
	[ ] // STRING sResultColor12
	[ ] // STRING sResultFont12
[ ] 
[ ] // Deprecated by Steve on 5/22/2014; use REC_RESULT record
[+] // type REC_TEST_RESULT is record
	[ ] // STRING sSampleID  
	[ ] // STRING sStatus  
	[ ] // STRING sErrorStatus  
	[ ] // STRING sAssayNameLeftPanel  
	[ ] // STRING sAssayNameRightPanel 
	[ ] // LIST OF TEST_RESULT lsTestResult
[ ] 
[ ] // Deprecated by Steve on 5/22/2014; use REC_RESULT record
[+] // type REC_DETAIL_OR is record
	[ ] // STRING sAnalyteName
	[ ] // STRING sCt
	[ ] // STRING sEndPt
	[ ] // STRING sAnalyteResult
	[ ] // 
[ ] 
[ ] // Deprecated by Steve on 5/22/2014; use REC_RESULT record
[+] // type REC_6TARGETS is record
	[ ] // STRING SampleID  
	[ ] // STRING Status  
	[ ] // STRING ErrorStatus  
	[ ] // STRING AssayNameLeftPanel  
	[ ] // STRING AssayNameRightPanel 
	[ ] // STRING ResultText 
	[ ] // STRING ResultColor 
	[ ] // STRING ResultFont
	[ ] // STRING Analyte1Name 
	[ ] // STRING Analyte1Result  
	[ ] // STRING Analyte2Name
	[ ] // STRING Analyte2Result
	[ ] // STRING Analyte3Name 
	[ ] // STRING Analyte3Result
	[ ] // STRING Analyte4Name
	[ ] // STRING Analyte4Result
	[ ] // STRING Analyte5Name 
	[ ] // STRING Analyte5Result
	[ ] // STRING Analyte6Name 
	[ ] // STRING Analyte6Result
[ ] 
[ ] 
[ ] // ***************** Deprecated Disclaimer records ****************************
[ ] 
[ ] // This type has been moved to DefineAssaysType.inc file
[+] // type ASSAY_DISCLAIMERS is record
	[ ] // STRING sAssayDisclaimer
	[ ] // STRING sLightBlueDisclaimer
	[ ] // STRING sLightGrayDisclaimer
	[ ] // STRING sRedDisclaimer
	[ ] // STRING sGreenDisclaimer
	[ ] // STRING sYellowDisclaimer
	[ ] // STRING sWhiteDisclaimer
[ ] 
[ ] 
