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
[ ] // Data types for D8380 Probe Check 
[+] type REC_MASTER_EXPORT_OPTIC is record
	[ ] STRING sSampleID
	[ ] STRING sExportedOpticalData
	[ ] STRING sOpticalDataHeaderLine
[ ] //
[+] type REC_MASTER_EXPORT_PROBE_CHECK is record
	[ ] STRING sSampleID
	[ ] STRING sExportedProbeCheckData
	[ ] STRING sPrbChkHeaderLine
[ ] // 
[+] type EXPORT6ANALYTE is record
	[ ] INTEGER iCycle
	[ ] STRING sPrimary1
	[ ] STRING sRawData1
	[ ] STRING sPrimary2
	[ ] STRING sRawData2
	[ ] STRING sPrimary3
	[ ] STRING sRawData3
	[ ] STRING sPrimary4
	[ ] STRING sRawData4
	[ ] STRING sPrimary5
	[ ] STRING sRawData5
	[ ] STRING sPrimary6
	[ ] STRING sRawData6
	[ ] 
[ ] //
[+] type EXPORT3ANALYTE_PRB_CHK is record
	[ ] INTEGER rReading 
	[ ] STRING sReading1
	[ ] STRING sReading2
	[ ] STRING sReading3
	[ ] //
[ ] //
[+] type EXPORT_COMBO_PRB_CHK_6 is record
	[ ] INTEGER iReading
	[ ] STRING sAnalyte1
	[ ] STRING sAnalyte2
	[ ] STRING sAnalyte3
	[ ] STRING sAnalyte4
	[ ] STRING sAnalyte5
	[ ] STRING sAnalyte6
[ ] //
[ ] //REC_MASTER_MELT- new for DX4.7
[+] type REC_MASTER_MELT is record
	[ ] STRING sSampleID
	[ ] STRING sAssayName
	[ ] STRING sExportTab
	[ ] INTEGER iNumAnalytes
	[ ] STRING sHeaderLine
	[ ] INTEGER i1stDerivStart
	[ ] INTEGER i1stDerivEnd
	[ ] 
[ ] //
[+] // type REC_MASTER_MELT is record
	[ ] // STRING sSampleID
	[ ] // STRING sExportTab
[ ] //
[+] type EXPORT3ANALYTE_MELT is record
	[ ] INTEGER iPoint
	[ ] STRING sTemperature
	[ ] STRING sMeltNormalized1
	[ ] STRING sMeltDerivative1
	[ ] STRING sMeltRaw1
	[ ] STRING sMeltNormalized2
	[ ] STRING sMeltDerivative2
	[ ] STRING sMeltRaw2
	[ ] STRING sMeltNormalized3
	[ ] STRING sMeltDerivative3
	[ ] STRING sMeltRaw3
	[ ] //
[ ] //
[ ] // EXPORT10_MELT_NORM - - new for DX4.7
[+] type EXPORT10_MELT_NORM is record
	[ ] INTEGER iPoint
	[ ] STRING sTemperature
	[ ] 
	[ ] STRING sMeltRaw1
	[ ] STRING sMeltNormalized1
	[ ] 
	[ ] STRING sMeltRaw2
	[ ] STRING sMeltNormalized2
	[ ] 
	[ ] STRING sMeltRaw3
	[ ] STRING sMeltNormalized3
	[ ] 
	[ ] STRING sMeltRaw4
	[ ] STRING sMeltNormalized4
	[ ] 
	[ ] STRING sMeltRaw5
	[ ] STRING sMeltNormalized5
	[ ] 
	[ ] STRING sMeltRaw6
	[ ] STRING sMeltNormalized6
	[ ] 
	[ ] STRING sMeltRaw7
	[ ] STRING sMeltNormalized7
	[ ] 
	[ ] STRING sMeltRaw8
	[ ] STRING sMeltNormalized8
	[ ] 
	[ ] STRING sMeltRaw9
	[ ] STRING sMeltNormalized9
	[ ] 
	[ ] STRING sMeltRaw10
	[ ] STRING sMeltNormalized10
	[ ] 
	[ ] //
	[ ] // EXPORT10_MELT_INTERP - new for DX4.7
[ ] 
[ ] // EXPORT10_MELT_INTERP - new for DX4.7
[+] type EXPORT10_MELT_INTERP is record
	[ ] INTEGER iPoint
	[ ] STRING sTemperature
	[ ] 
	[ ] STRING sMeltInterpolated1
	[ ] STRING sMelt1stDerivative1
	[ ] 
	[ ] STRING sMeltInterpolated2
	[ ] STRING sMelt1stDerivative2
	[ ] 
	[ ] STRING sMeltInterpolated3
	[ ] STRING sMelt1stDerivative3
	[ ] 
	[ ] STRING sMeltInterpolated4
	[ ] STRING sMelt1stDerivative4
	[ ] 
	[ ] STRING sMeltInterpolated5
	[ ] STRING sMelt1stDerivative5
	[ ] 
	[ ] STRING sMeltInterpolated6
	[ ] STRING sMelt1stDerivative6
	[ ] 
	[ ] STRING sMeltInterpolated7
	[ ] STRING sMelt1stDerivative7
	[ ] 
	[ ] STRING sMeltInterpolated8
	[ ] STRING sMelt1stDerivative8
	[ ] 
	[ ] STRING sMeltInterpolated9
	[ ] STRING sMelt1stDerivative9
	[ ] 
	[ ] STRING sMeltInterpolated10
	[ ] STRING sMelt1stDerivative10
	[ ] 
[ ] //
[+] type REC_MASTER1 is record
	[ ] STRING sSampleID
	[ ] STRING sDetailsTab
	[ ] STRING sErrorTab
[ ] //
[+] type EXPORT3ANALYTE_PRB is record
	[ ] INTEGER iCycle
	[ ] STRING sPrimary1
	[ ] STRING sRawData1
	[ ] STRING sPrimary2
	[ ] STRING s2D2
	[ ] STRING sRawData2
	[ ] STRING sPrimary3
	[ ] STRING sRawData3
[ ] //
[+] type EXPORT_DETAIL_ER_1 is record
	[ ] STRING sAnalyteName
	[ ] // STRING sCt
	[ ] // STRING sEndPt
	[ ] STRING sAnalyteResult
	[ ] STRING sProbeCheckResult
	[ ] STRING sPrbChk1
	[ ] STRING sPrbChk2
	[ ] STRING sPrbChk3
	[ ] //STRING sProbeCheckResult
	[ ] STRING sSecDerivPeakHght
	[ ] STRING sMeltPeak1
	[ ] STRING sMeltPeak2
	[ ] STRING sMeltPeak3
	[ ] STRING sCurveFit
[ ] //
[ ] // This type has been moved to VerificationTypes.inc file
[+] // type REC_ERROR is record
	[ ] // INTEGER iNum
	[ ] // STRING sDescription
	[ ] // STRING Details
	[ ] // 
[ ] //
[ ] // Type REC_MASTER_CF is for D8381 Curve Fitting
[+] type REC_MASTER_CF is record
	[ ] STRING sSampleID
	[ ] STRING sErrors
[ ] 
[ ] // Data types for D8383 Background Subtraction and Crosstalk correction
[ ] // This type has records for Primary, Second Derivative, and Raw Data for each one of 6 analytes
[+] type EXPORT_6_ANALYTE is record
	[ ] INTEGER iCycle
	[ ] 
	[ ] STRING sPrimary1
	[ ] STRING s2D1
	[ ] STRING sRawData1
	[ ] 
	[ ] STRING sPrimary2
	[ ] STRING s2D2
	[ ] STRING sRawData2
	[ ] 
	[ ] STRING sPrimary3
	[ ] STRING s2D3
	[ ] STRING sRawData3
	[ ] 
	[ ] STRING sPrimary4
	[ ] STRING s2D4
	[ ] STRING sRawData4
	[ ] 
	[ ] STRING sPrimary5
	[ ] STRING s2D5
	[ ] STRING sRawData5
	[ ] 
	[ ] STRING sPrimary6
	[ ] STRING s2D6
	[ ] STRING sRawData6
	[ ] //
[ ] //
[+] type REC_MASTER_BCT is record
	[ ] STRING sSampleID
	[ ] STRING sAssayName
	[ ] STRING sExportTab
	[ ] INTEGER iNumAnalytes
	[ ] STRING sHeaderLine
	[ ] INTEGER iSecondDerivative
[ ] //
[ ] // This type has records for Primary, Second Derivative, and Raw Data for each one of 6 analytes
[+] type EXPORT4ANALYTE is record
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
	[ ] STRING sPrimary4
	[ ] STRING s2D4
	[ ] STRING sRawData4
[ ] 
[ ] // This type has records for Primary and Raw Data for each one of 3 analytes
[+] type EXPORT3ANALYTEPR is record
	[ ] INTEGER iCycle
	[ ] STRING sPrimary1
	[ ] STRING sRawData1
	[ ] STRING sPrimary2
	[ ] STRING sRawData2
	[ ] STRING sPrimary3
	[ ] STRING sRawData3
[ ] 
[ ] // This type has records for Primary and Raw Data for each one of 4 analytes
[+] type EXPORT4ANALYTEPR is record
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
[ ] // This type has records for Primary and Raw Data for each one of 6 analytes
[+] type EXPORT6ANALYTEPR  is record
	[ ] INTEGER iCycle
	[ ] STRING sPrimary1
	[ ] STRING sRawData1
	[ ] STRING sPrimary2
	[ ] STRING sRawData2
	[ ] STRING sPrimary3
	[ ] STRING sRawData3
	[ ] STRING sPrimary4
	[ ] STRING sRawData4
	[ ] STRING sPrimary5
	[ ] STRING sRawData5
	[ ] STRING sPrimary6
	[ ] STRING sRawData6
[ ] 
[ ] // // This type is for DD10342 Melt Data Reduction
[+] type REC_MASTER_MELT1 is record
	[ ] STRING sSampleID
	[ ] STRING sAssayName
	[ ] STRING sExportTab
	[ ] INTEGER  iNumAnalytes
	[ ] STring sHeaderLine
	[ ] 
[ ] // 
[ ] // This type : EXPORT1ANALYTE_MELT is for DD10342 Melt Data Reduction
[+] type EXPORT1ANALYTE_MELT is record
	[ ] INTEGER iCycle
	[ ] STRING sTemperature
	[ ] STRING sMeltNormalized
	[ ] STRING sMeltDerivative
	[ ] STRING sMeltRaw
[ ] 
[ ] // 
[+] type EXPORT3ANALYTE_MELT1 is record
	[ ] INTEGER iCycle
	[ ] STRING sTemperature
	[ ] STRING sMeltNormalized1
	[ ] STRING sMeltDerivative1
	[ ] STRING sMeltRaw1
	[ ] STRING sMeltNormalized2
	[ ] STRING sMeltDerivative2
	[ ] STRING sMeltRaw2
	[ ] STRING sMeltNormalized3
	[ ] STRING sMeltDerivative3
	[ ] STRING sMeltRaw3
	[ ] //
[ ] 
