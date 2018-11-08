[ ] 
[ ] // // This one is used by D2699 Data Reduction
[+] type REC_1ANALYTE is record
	[ ] STRING sNAME 
	[ ] STRING sAnalyteName1 
	[ ] STRING sReporter1 
	[ ] INTEGER iNumberCyclesInStage
	[ ] INTEGER iBkgndSub  
	[ ] INTEGER iBkgndVMin1 
	[ ] INTEGER iBkgndVMax1 
	[ ] REAL rThreshold1 
	[ ] INTEGER iBoxcar1 
	[ ] STRING sCurveAnalysis1
	[ ] INTEGER iNormFactor1
	[ ] INTEGER iVMin1 
	[ ] INTEGER iVMax1 
	[ ] STRING sUsage1 
	[ ] INTEGER iUseEndPt1
	[ ] INTEGER iEndPt1
	[ ] STRING  sInvalidBias1
	[ ] STRING sPeakHeightMin1
	[ ] INTEGER iUseMinTargetDeltaCt1
	[ ] STRING sMinTargetDeltaCt1
	[ ] STRING sDeltaCtE1
	[ ] STRING sCurveFit
	[ ] STRING sSignalLoss
[ ] 
[ ] // // This one is used by D6780 Customize Test Result
[+] type REC_2ANALYTES is record
	[ ] STRING sNAME  
	[ ] STRING sAnalyteName1 
	[ ] STRING sReporter1 
	[ ] STRING sAnalyteName2 
	[ ] STRING sReporter2 
	[ ] INTEGER iNumberCyclesInStage
	[ ] INTEGER iBkgndSub  
	[ ] INTEGER iBkgndVMin1 
	[ ] INTEGER iBkgndVMax1 
	[ ] INTEGER iBkgndVMin2  
	[ ] INTEGER iBkgndVMax2 
	[ ] REAL rThreshold1 
	[ ] REAL rThreshold2 
	[ ] INTEGER iBoxcar1 
	[ ] INTEGER iBoxcar2 
	[ ] STRING sCurveAnalysis1
	[ ] STRING sCurveAnalysis2
	[ ] INTEGER iNormFactor1
	[ ] INTEGER iNormFactor2
	[ ] INTEGER iVMin1 
	[ ] INTEGER iVMax1 
	[ ] INTEGER iVMin2  
	[ ] INTEGER iVMax2 
	[ ] STRING sUsage1 
	[ ] STRING sUsage2  
	[ ] INTEGER iUseEndPt1
	[ ] INTEGER iUseEndPt2
	[ ] INTEGER iEndPt1
	[ ] INTEGER iEndPt2
	[ ] INTEGER iAnalyteTargetIC1
	[ ] INTEGER iSelectTarget1ForIC
	[ ] INTEGER iAnalyteTargetSPC1
	[ ] INTEGER iSelectTarget1ForSPC
	[ ] INTEGER iAnalyteTargetEC1
	[ ] INTEGER iSelectTarget1ForEC
	[ ] STRING sInvalidBias1
	[ ] STRING sInvalidBias2
	[ ] STRING sPeakHeightMin1
	[ ] STRING sPeakHeightMin2
	[ ] INTEGER iUseMinTargetDeltaCt1
	[ ] INTEGER iUseMinTargetDeltaCt2
	[ ] STRING sMinTargetDeltaCt1
	[ ] STRING sMinTargetDeltaCt2
	[ ] STRING sDeltaCtE1
	[ ] STRING sDeltaCtE2
	[ ] STRING sCurveFit
	[ ] STRING sSignalLoss
	[ ] STRING sResultText11
	[ ] STRING sResultColor11
	[ ] STRING sResultText12
	[ ] STRING sResultColor12
	[ ] STRING sResultText13
	[ ] STRING sResultColor13
	[ ] STRING sResultText21
	[ ] STRING sResultColor21
	[ ] STRING sResultText22
	[ ] STRING sResultColor22
	[ ] STRING sResultText23
	[ ] STRING sResultColor23
	[ ] STRING sOrganismName1
	[ ] STRING sOrganismName2
	[ ] INTEGER iAnalyteCheck1
	[ ] INTEGER iAnalyteCheck2
	[ ] STRING sDefaultResultText
	[ ] STRING sDefaultResultColor
[ ] 
[ ] // // This one is used by D6780 Customize Test Result
[+] // type REC_3ANALYTES is record
	[ ] // STRING NAME  
	[ ] // STRING AnalyteName1 
	[ ] // STRING Reporter1 
	[ ] // STRING AnalyteName2 
	[ ] // STRING Reporter2 
	[ ] // STRING AnalyteName3 
	[ ] // STRING Reporter3 
	[ ] // INTEGER NumberCyclesInStage
	[ ] // INTEGER BkgndSub  
	[ ] // INTEGER BkgndVMin1 
	[ ] // INTEGER BkgndVMax1 
	[ ] // INTEGER BkgndVMin2  
	[ ] // INTEGER BkgndVMax2 
	[ ] // INTEGER BkgndVMin3 
	[ ] // INTEGER BkgndVMax3 
	[ ] // REAL Threshold1 
	[ ] // REAL Threshold2 
	[ ] // REAL Threshold3 
	[ ] // INTEGER Boxcar1 
	[ ] // INTEGER Boxcar2 
	[ ] // INTEGER Boxcar3 
	[ ] // STRING CurveAnalysis1
	[ ] // STRING CurveAnalysis2
	[ ] // STRING CurveAnalysis3
	[ ] // INTEGER NormFactor1
	[ ] // INTEGER NormFactor2
	[ ] // INTEGER NormFactor3
	[ ] // INTEGER VMin1 
	[ ] // INTEGER VMax1 
	[ ] // INTEGER VMin2  
	[ ] // INTEGER VMax2 
	[ ] // INTEGER VMin3 
	[ ] // INTEGER VMax3 
	[ ] // STRING Ausage1 
	[ ] // STRING Ausage2  
	[ ] // STRING Ausage3 
	[ ] // INTEGER UseEndPt1
	[ ] // INTEGER UseEndPt2
	[ ] // INTEGER UseEndPt3
	[ ] // INTEGER EndPt1
	[ ] // INTEGER EndPt2
	[ ] // INTEGER EndPt3
	[ ] // INTEGER AnalyteTargetIC1
	[ ] // INTEGER SelectTarget1ForIC
	[ ] // INTEGER AnalyteTargetIC2
	[ ] // INTEGER SelectTarget2ForIC  
	[ ] // INTEGER AnalyteTargetSPC1
	[ ] // INTEGER SelectTarget1ForSPC
	[ ] // INTEGER AnalyteTargetSPC2
	[ ] // INTEGER SelectTarget2ForSPC
	[ ] // INTEGER AnalyteTargetEC1
	[ ] // INTEGER SelectTarget1ForEC
	[ ] // INTEGER AnalyteTargetEC2
	[ ] // INTEGER SelectTarget2ForEC
	[ ] // STRING  InvalidBias1
	[ ] // STRING  InvalidBias2
	[ ] // STRING  InvalidBias3
	[ ] // STRING PeakHeightMin1
	[ ] // STRING PeakHeightMin2
	[ ] // STRING PeakHeightMin3
	[ ] // INTEGER UseMinTargetDeltaCt1
	[ ] // INTEGER UseMinTargetDeltaCt2
	[ ] // INTEGER UseMinTargetDeltaCt3
	[ ] // STRING MinTargetDeltaCt1
	[ ] // STRING MinTargetDeltaCt2
	[ ] // STRING MinTargetDeltaCt3
	[ ] // STRING DeltaCtE1
	[ ] // STRING DeltaCtE2
	[ ] // STRING DeltaCtE3
	[ ] // STRING CurveFit
	[ ] // STRING SignalLoss
[ ] // 
[ ] // // This one is used by D6780 Customize Test Result
[+] // type REC_3ANALYTES_PRB_CHK is record
	[ ] // STRING NAME  
	[ ] // STRING AnalyteName1 
	[ ] // STRING Reporter1 
	[ ] // STRING AnalyteName2 
	[ ] // STRING Reporter2 
	[ ] // STRING AnalyteName3 
	[ ] // STRING Reporter3 
	[ ] // INTEGER NumberCyclesInStage
	[ ] // INTEGER BkgndSub  
	[ ] // INTEGER BkgndVMin1 
	[ ] // INTEGER BkgndVMax1 
	[ ] // INTEGER BkgndVMin2  
	[ ] // INTEGER BkgndVMax2 
	[ ] // INTEGER BkgndVMin3 
	[ ] // INTEGER BkgndVMax3 
	[ ] // REAL Threshold1 
	[ ] // REAL Threshold2 
	[ ] // REAL Threshold3 
	[ ] // INTEGER Boxcar1 
	[ ] // INTEGER Boxcar2 
	[ ] // INTEGER Boxcar3 
	[ ] // STRING CurveAnalysis1
	[ ] // STRING CurveAnalysis2
	[ ] // STRING CurveAnalysis3
	[ ] // INTEGER NormFactor1
	[ ] // INTEGER NormFactor2
	[ ] // INTEGER NormFactor3
	[ ] // INTEGER VMin1 
	[ ] // INTEGER VMax1 
	[ ] // INTEGER VMin2  
	[ ] // INTEGER VMax2 
	[ ] // INTEGER VMin3 
	[ ] // INTEGER VMax3 
	[ ] // STRING Ausage1 
	[ ] // STRING Ausage2  
	[ ] // STRING Ausage3 
	[ ] // INTEGER UseEndPt1
	[ ] // INTEGER UseEndPt2
	[ ] // INTEGER UseEndPt3
	[ ] // INTEGER EndPt1
	[ ] // INTEGER EndPt2
	[ ] // INTEGER EndPt3
	[ ] // INTEGER AnalyteTargetIC1
	[ ] // INTEGER SelectTarget1ForIC
	[ ] // INTEGER AnalyteTargetIC2
	[ ] // INTEGER SelectTarget2ForIC  
	[ ] // INTEGER AnalyteTargetSPC1
	[ ] // INTEGER SelectTarget1ForSPC
	[ ] // INTEGER AnalyteTargetSPC2
	[ ] // INTEGER SelectTarget2ForSPC
	[ ] // INTEGER AnalyteTargetEC1
	[ ] // INTEGER SelectTarget1ForEC
	[ ] // INTEGER AnalyteTargetEC2
	[ ] // INTEGER SelectTarget2ForEC
	[ ] // STRING  InvalidBias1
	[ ] // STRING  InvalidBias2
	[ ] // STRING  InvalidBias3
	[ ] // STRING PeakHeightMin1
	[ ] // STRING PeakHeightMin2
	[ ] // STRING PeakHeightMin3
	[ ] // INTEGER UseMinTargetDeltaCt1
	[ ] // INTEGER UseMinTargetDeltaCt2
	[ ] // INTEGER UseMinTargetDeltaCt3
	[ ] // STRING MinTargetDeltaCt1
	[ ] // STRING MinTargetDeltaCt2
	[ ] // STRING MinTargetDeltaCt3
	[ ] // STRING DeltaCtE1
	[ ] // STRING DeltaCtE2
	[ ] // STRING DeltaCtE3
	[ ] // STRING CurveFit
	[ ] // STRING SignalLoss
	[ ] // INTEGER PrbChk13Max1
	[ ] // INTEGER PrbChk13Max2
	[ ] // INTEGER PrbChk13Max3
	[ ] // INTEGER PrbChk2Min1
	[ ] // INTEGER PrbChk2Min2
	[ ] // INTEGER PrbChk2Min3
	[ ] // 
[ ] // 
[ ] // // This one is used by D6780 Customize Test Result
[+] // type REC_4ANALYTES is record
	[ ] // STRING NAME  
	[ ] // STRING AnalyteName1 
	[ ] // STRING Reporter1 
	[ ] // STRING AnalyteName2 
	[ ] // STRING Reporter2 
	[ ] // STRING AnalyteName3 
	[ ] // STRING Reporter3 
	[ ] // STRING AnalyteName4 
	[ ] // STRING Reporter4 
	[ ] // INTEGER NumberCyclesInStage
	[ ] // INTEGER BkgndSub  
	[ ] // INTEGER BkgndVMin1 
	[ ] // INTEGER BkgndVMax1 
	[ ] // INTEGER BkgndVMin2  
	[ ] // INTEGER BkgndVMax2 
	[ ] // INTEGER BkgndVMin3 
	[ ] // INTEGER BkgndVMax3 
	[ ] // INTEGER BkgndVMin4 
	[ ] // INTEGER BkgndVMax4
	[ ] // REAL Threshold1 
	[ ] // REAL Threshold2 
	[ ] // REAL Threshold3 
	[ ] // REAL Threshold4 
	[ ] // INTEGER Boxcar1 
	[ ] // INTEGER Boxcar2 
	[ ] // INTEGER Boxcar3 
	[ ] // INTEGER Boxcar4 
	[ ] // STRING CurveAnalysis1
	[ ] // STRING CurveAnalysis2
	[ ] // STRING CurveAnalysis3
	[ ] // STRING CurveAnalysis4
	[ ] // INTEGER NormFactor1
	[ ] // INTEGER NormFactor2
	[ ] // INTEGER NormFactor3
	[ ] // INTEGER NormFactor4
	[ ] // INTEGER VMin1 
	[ ] // INTEGER VMax1 
	[ ] // INTEGER VMin2  
	[ ] // INTEGER VMax2 
	[ ] // INTEGER VMin3 
	[ ] // INTEGER VMax3 
	[ ] // INTEGER VMin4 
	[ ] // INTEGER VMax4 
	[ ] // STRING Ausage1 
	[ ] // STRING Ausage2  
	[ ] // STRING Ausage3 
	[ ] // STRING Ausage4 
	[ ] // INTEGER UseEndPt1
	[ ] // INTEGER UseEndPt2
	[ ] // INTEGER UseEndPt3
	[ ] // INTEGER UseEndPt4
	[ ] // INTEGER EndPt1
	[ ] // INTEGER EndPt2
	[ ] // INTEGER EndPt3
	[ ] // INTEGER EndPt4
	[ ] // INTEGER AnalyteTargetIC1
	[ ] // INTEGER SelectTarget1ForIC
	[ ] // INTEGER AnalyteTargetIC2
	[ ] // INTEGER SelectTarget2ForIC  
	[ ] // INTEGER AnalyteTargetIC3
	[ ] // INTEGER SelectTarget3ForIC  
	[ ] // INTEGER AnalyteTargetSPC1
	[ ] // INTEGER SelectTarget1ForSPC
	[ ] // INTEGER AnalyteTargetSPC2
	[ ] // INTEGER SelectTarget2ForSPC
	[ ] // INTEGER AnalyteTargetSPC3
	[ ] // INTEGER SelectTarget3ForSPC
	[ ] // INTEGER AnalyteTargetEC1
	[ ] // INTEGER SelectTarget1ForEC
	[ ] // INTEGER AnalyteTargetEC2
	[ ] // INTEGER SelectTarget2ForEC
	[ ] // INTEGER AnalyteTargetEC3
	[ ] // INTEGER SelectTarget3ForEC
	[ ] // STRING  InvalidBias1
	[ ] // STRING  InvalidBias2
	[ ] // STRING  InvalidBias3
	[ ] // STRING  InvalidBias4
	[ ] // STRING PeakHeightMin1
	[ ] // STRING PeakHeightMin2
	[ ] // STRING PeakHeightMin3
	[ ] // STRING PeakHeightMin4
	[ ] // INTEGER UseMinTargetDeltaCt1
	[ ] // INTEGER UseMinTargetDeltaCt2
	[ ] // INTEGER UseMinTargetDeltaCt3
	[ ] // INTEGER UseMinTargetDeltaCt4
	[ ] // STRING MinTargetDeltaCt1
	[ ] // STRING MinTargetDeltaCt2
	[ ] // STRING MinTargetDeltaCt3
	[ ] // STRING MinTargetDeltaCt4
	[ ] // STRING DeltaCtE1
	[ ] // STRING DeltaCtE2
	[ ] // STRING DeltaCtE3
	[ ] // STRING DeltaCtE4
	[ ] // STRING CurveFit
	[ ] // STRING SignalLoss
[ ] // 
[ ] // // This one is used by D6780 Customize Test Result
[+] // type REC_5ANALYTES is record
	[ ] // STRING NAME  
	[ ] // STRING AnalyteName1 
	[ ] // STRING Reporter1 
	[ ] // STRING AnalyteName2 
	[ ] // STRING Reporter2 
	[ ] // STRING AnalyteName3 
	[ ] // STRING Reporter3 
	[ ] // STRING AnalyteName4 
	[ ] // STRING Reporter4 
	[ ] // STRING AnalyteName5 
	[ ] // STRING Reporter5 
	[ ] // INTEGER NumberCyclesInStage
	[ ] // INTEGER BkgndSub  
	[ ] // INTEGER BkgndVMin1 
	[ ] // INTEGER BkgndVMax1 
	[ ] // INTEGER BkgndVMin2  
	[ ] // INTEGER BkgndVMax2 
	[ ] // INTEGER BkgndVMin3 
	[ ] // INTEGER BkgndVMax3 
	[ ] // INTEGER BkgndVMin4  
	[ ] // INTEGER BkgndVMax4 
	[ ] // INTEGER BkgndVMin5 
	[ ] // INTEGER BkgndVMax5 
	[ ] // REAL Threshold1 
	[ ] // REAL Threshold2 
	[ ] // REAL Threshold3 
	[ ] // REAL Threshold4 
	[ ] // REAL Threshold5 
	[ ] // INTEGER Boxcar1 
	[ ] // INTEGER Boxcar2 
	[ ] // INTEGER Boxcar3 
	[ ] // INTEGER Boxcar4 
	[ ] // INTEGER Boxcar5 
	[ ] // STRING CurveAnalysis1
	[ ] // STRING CurveAnalysis2
	[ ] // STRING CurveAnalysis3
	[ ] // STRING CurveAnalysis4
	[ ] // STRING CurveAnalysis5
	[ ] // INTEGER NormFactor1
	[ ] // INTEGER NormFactor2
	[ ] // INTEGER NormFactor3
	[ ] // INTEGER NormFactor4
	[ ] // INTEGER NormFactor5
	[ ] // INTEGER VMin1 
	[ ] // INTEGER VMax1 
	[ ] // INTEGER VMin2  
	[ ] // INTEGER VMax2 
	[ ] // INTEGER VMin3 
	[ ] // INTEGER VMax3 
	[ ] // INTEGER VMin4  
	[ ] // INTEGER VMax4 
	[ ] // INTEGER VMin5 
	[ ] // INTEGER VMax5 
	[ ] // STRING Ausage1 
	[ ] // STRING Ausage2  
	[ ] // STRING Ausage3 
	[ ] // STRING Ausage4  
	[ ] // STRING Ausage5 
	[ ] // INTEGER UseEndPt1
	[ ] // INTEGER UseEndPt2
	[ ] // INTEGER UseEndPt3
	[ ] // INTEGER UseEndPt4
	[ ] // INTEGER UseEndPt5
	[ ] // INTEGER EndPt1
	[ ] // INTEGER EndPt2
	[ ] // INTEGER EndPt3
	[ ] // INTEGER EndPt4
	[ ] // INTEGER EndPt5
	[ ] // INTEGER AnalyteTargetIC1
	[ ] // INTEGER SelectTarget1ForIC
	[ ] // INTEGER AnalyteTargetIC2
	[ ] // INTEGER SelectTarget2ForIC  
	[ ] // INTEGER AnalyteTargetIC3
	[ ] // INTEGER SelectTarget3ForIC
	[ ] // INTEGER AnalyteTargetIC4
	[ ] // INTEGER SelectTarget4ForIC  
	[ ] // INTEGER AnalyteTargetSPC1
	[ ] // INTEGER SelectTarget1ForSPC
	[ ] // INTEGER AnalyteTargetSPC2
	[ ] // INTEGER SelectTarget2ForSPC
	[ ] // INTEGER AnalyteTargetSPC3
	[ ] // INTEGER SelectTarget3ForSPC
	[ ] // INTEGER AnalyteTargetSPC4
	[ ] // INTEGER SelectTarget4ForSPC
	[ ] // INTEGER AnalyteTargetEC1
	[ ] // INTEGER SelectTarget1ForEC
	[ ] // INTEGER AnalyteTargetEC2
	[ ] // INTEGER SelectTarget2ForEC
	[ ] // INTEGER AnalyteTargetEC3
	[ ] // INTEGER SelectTarget3ForEC
	[ ] // INTEGER AnalyteTargetEC4
	[ ] // INTEGER SelectTarget4ForEC
	[ ] // STRING  InvalidBias1
	[ ] // STRING  InvalidBias2
	[ ] // STRING  InvalidBias3
	[ ] // STRING  InvalidBias4
	[ ] // STRING  InvalidBias5
	[ ] // STRING PeakHeightMin1
	[ ] // STRING PeakHeightMin2
	[ ] // STRING PeakHeightMin3
	[ ] // STRING PeakHeightMin4
	[ ] // STRING PeakHeightMin5
	[ ] // INTEGER UseMinTargetDeltaCt1
	[ ] // INTEGER UseMinTargetDeltaCt2
	[ ] // INTEGER UseMinTargetDeltaCt3
	[ ] // INTEGER UseMinTargetDeltaCt4
	[ ] // INTEGER UseMinTargetDeltaCt5
	[ ] // STRING MinTargetDeltaCt1
	[ ] // STRING MinTargetDeltaCt2
	[ ] // STRING MinTargetDeltaCt3
	[ ] // STRING MinTargetDeltaCt4
	[ ] // STRING MinTargetDeltaCt5
	[ ] // STRING DeltaCtE1
	[ ] // STRING DeltaCtE2
	[ ] // STRING DeltaCtE3
	[ ] // STRING DeltaCtE4
	[ ] // STRING DeltaCtE5
	[ ] // STRING CurveFit
	[ ] // STRING SignalLoss
[ ] // 
[ ] // // This one is used by D6780 Customize Test Result
[+] // type REC_6ANALYTES is record
	[ ] // STRING NAME  
	[ ] // STRING AnalyteName1 
	[ ] // STRING Reporter1 
	[ ] // STRING AnalyteName2 
	[ ] // STRING Reporter2 
	[ ] // STRING AnalyteName3 
	[ ] // STRING Reporter3 
	[ ] // STRING AnalyteName4 
	[ ] // STRING Reporter4 
	[ ] // STRING AnalyteName5 
	[ ] // STRING Reporter5 
	[ ] // STRING AnalyteName6 
	[ ] // STRING Reporter6 
	[ ] // INTEGER NumberCyclesInStage
	[ ] // INTEGER BkgndSub  
	[ ] // INTEGER BkgndVMin1 
	[ ] // INTEGER BkgndVMax1 
	[ ] // INTEGER BkgndVMin2  
	[ ] // INTEGER BkgndVMax2 
	[ ] // INTEGER BkgndVMin3 
	[ ] // INTEGER BkgndVMax3 
	[ ] // INTEGER BkgndVMin4 
	[ ] // INTEGER BkgndVMax4
	[ ] // INTEGER BkgndVMin5 
	[ ] // INTEGER BkgndVMax5
	[ ] // INTEGER BkgndVMin6 
	[ ] // INTEGER BkgndVMax6
	[ ] // REAL Threshold1 
	[ ] // REAL Threshold2 
	[ ] // REAL Threshold3 
	[ ] // REAL Threshold4 
	[ ] // REAL Threshold5 
	[ ] // REAL Threshold6 
	[ ] // INTEGER Boxcar1 
	[ ] // INTEGER Boxcar2 
	[ ] // INTEGER Boxcar3 
	[ ] // INTEGER Boxcar4 
	[ ] // INTEGER Boxcar5 
	[ ] // INTEGER Boxcar6 
	[ ] // STRING CurveAnalysis1
	[ ] // STRING CurveAnalysis2
	[ ] // STRING CurveAnalysis3
	[ ] // STRING CurveAnalysis4
	[ ] // STRING CurveAnalysis5
	[ ] // STRING CurveAnalysis6
	[ ] // INTEGER NormFactor1
	[ ] // INTEGER NormFactor2
	[ ] // INTEGER NormFactor3
	[ ] // INTEGER NormFactor4
	[ ] // INTEGER NormFactor5
	[ ] // INTEGER NormFactor6
	[ ] // INTEGER VMin1 
	[ ] // INTEGER VMax1 
	[ ] // INTEGER VMin2  
	[ ] // INTEGER VMax2 
	[ ] // INTEGER VMin3 
	[ ] // INTEGER VMax3 
	[ ] // INTEGER VMin4 
	[ ] // INTEGER VMax4 
	[ ] // INTEGER VMin5 
	[ ] // INTEGER VMax5 
	[ ] // INTEGER VMin6 
	[ ] // INTEGER VMax6 
	[ ] // STRING Ausage1 
	[ ] // STRING Ausage2  
	[ ] // STRING Ausage3 
	[ ] // STRING Ausage4 
	[ ] // STRING Ausage5 
	[ ] // STRING Ausage6 
	[ ] // INTEGER UseEndPt1
	[ ] // INTEGER UseEndPt2
	[ ] // INTEGER UseEndPt3
	[ ] // INTEGER UseEndPt4
	[ ] // INTEGER UseEndPt5
	[ ] // INTEGER UseEndPt6
	[ ] // INTEGER EndPt1
	[ ] // INTEGER EndPt2
	[ ] // INTEGER EndPt3
	[ ] // INTEGER EndPt4
	[ ] // INTEGER EndPt5
	[ ] // INTEGER EndPt6
	[ ] // INTEGER AnalyteTargetIC1
	[ ] // INTEGER SelectTarget1ForIC
	[ ] // INTEGER AnalyteTargetIC2
	[ ] // INTEGER SelectTarget2ForIC  
	[ ] // INTEGER AnalyteTargetIC3
	[ ] // INTEGER SelectTarget3ForIC  
	[ ] // INTEGER AnalyteTargetIC4
	[ ] // INTEGER SelectTarget4ForIC 
	[ ] // INTEGER AnalyteTargetIC5
	[ ] // INTEGER SelectTarget5ForIC 
	[ ] // INTEGER AnalyteTargetSPC1
	[ ] // INTEGER SelectTarget1ForSPC
	[ ] // INTEGER AnalyteTargetSPC2
	[ ] // INTEGER SelectTarget2ForSPC
	[ ] // INTEGER AnalyteTargetSPC3
	[ ] // INTEGER SelectTarget3ForSPC
	[ ] // INTEGER AnalyteTargetSPC4
	[ ] // INTEGER SelectTarget4ForSPC 
	[ ] // INTEGER AnalyteTargetSPC5
	[ ] // INTEGER SelectTarget5ForSPC 
	[ ] // INTEGER AnalyteTargetEC1
	[ ] // INTEGER SelectTarget1ForEC
	[ ] // INTEGER AnalyteTargetEC2
	[ ] // INTEGER SelectTarget2ForEC
	[ ] // INTEGER AnalyteTargetEC3
	[ ] // INTEGER SelectTarget3ForEC
	[ ] // INTEGER AnalyteTargetEC4
	[ ] // INTEGER SelectTarget4ForEC
	[ ] // INTEGER AnalyteTargetEC5
	[ ] // INTEGER SelectTarget5ForEC
	[ ] // STRING  InvalidBias1
	[ ] // STRING  InvalidBias2
	[ ] // STRING  InvalidBias3
	[ ] // STRING  InvalidBias4
	[ ] // STRING  InvalidBias5
	[ ] // STRING  InvalidBias6
	[ ] // STRING PeakHeightMin1
	[ ] // STRING PeakHeightMin2
	[ ] // STRING PeakHeightMin3
	[ ] // STRING PeakHeightMin4
	[ ] // STRING PeakHeightMin5
	[ ] // STRING PeakHeightMin6
	[ ] // INTEGER UseMinTargetDeltaCt1
	[ ] // INTEGER UseMinTargetDeltaCt2
	[ ] // INTEGER UseMinTargetDeltaCt3
	[ ] // INTEGER UseMinTargetDeltaCt4
	[ ] // INTEGER UseMinTargetDeltaCt5
	[ ] // INTEGER UseMinTargetDeltaCt6
	[ ] // STRING MinTargetDeltaCt1
	[ ] // STRING MinTargetDeltaCt2
	[ ] // STRING MinTargetDeltaCt3
	[ ] // STRING MinTargetDeltaCt4
	[ ] // STRING MinTargetDeltaCt5
	[ ] // STRING MinTargetDeltaCt6
	[ ] // STRING DeltaCtE1
	[ ] // STRING DeltaCtE2
	[ ] // STRING DeltaCtE3
	[ ] // STRING DeltaCtE4
	[ ] // STRING DeltaCtE5
	[ ] // STRING DeltaCtE6
	[ ] // STRING CurveFit
	[ ] // STRING SignalLoss
[ ] // 
[ ] // // This one is used by D6780 Customize Test Result
[+] // type REC_6TARGETS is record
	[ ] // STRING NAME  
	[ ] // STRING AnalyteName1 
	[ ] // STRING Reporter1 
	[ ] // STRING AnalyteName2 
	[ ] // STRING Reporter2 
	[ ] // STRING AnalyteName3 
	[ ] // STRING Reporter3 
	[ ] // STRING AnalyteName4 
	[ ] // STRING Reporter4 
	[ ] // STRING AnalyteName5 
	[ ] // STRING Reporter5 
	[ ] // STRING AnalyteName6 
	[ ] // STRING Reporter6 
	[ ] // INTEGER NumberCyclesInStage
	[ ] // INTEGER BkgndSub  
	[ ] // INTEGER BkgndVMin1 
	[ ] // INTEGER BkgndVMax1 
	[ ] // INTEGER BkgndVMin2  
	[ ] // INTEGER BkgndVMax2 
	[ ] // INTEGER BkgndVMin3 
	[ ] // INTEGER BkgndVMax3 
	[ ] // INTEGER BkgndVMin4  
	[ ] // INTEGER BkgndVMax4 
	[ ] // INTEGER BkgndVMin5 
	[ ] // INTEGER BkgndVMax5 
	[ ] // INTEGER BkgndVMin6 
	[ ] // INTEGER BkgndVMax6 
	[ ] // REAL Threshold1 
	[ ] // REAL Threshold2 
	[ ] // REAL Threshold3 
	[ ] // REAL Threshold4 
	[ ] // REAL Threshold5 
	[ ] // REAL Threshold6 
	[ ] // INTEGER Boxcar1 
	[ ] // INTEGER Boxcar2 
	[ ] // INTEGER Boxcar3 
	[ ] // INTEGER Boxcar4 
	[ ] // INTEGER Boxcar5 
	[ ] // INTEGER Boxcar6 
	[ ] // STRING CurveAnalysis1
	[ ] // STRING CurveAnalysis2
	[ ] // STRING CurveAnalysis3
	[ ] // STRING CurveAnalysis4
	[ ] // STRING CurveAnalysis5
	[ ] // STRING CurveAnalysis6
	[ ] // INTEGER NormFactor1
	[ ] // INTEGER NormFactor2
	[ ] // INTEGER NormFactor3
	[ ] // INTEGER NormFactor4
	[ ] // INTEGER NormFactor5
	[ ] // INTEGER NormFactor6
	[ ] // INTEGER VMin1 
	[ ] // INTEGER VMax1 
	[ ] // INTEGER VMin2  
	[ ] // INTEGER VMax2 
	[ ] // INTEGER VMin3 
	[ ] // INTEGER VMax3 
	[ ] // INTEGER VMin4  
	[ ] // INTEGER VMax4 
	[ ] // INTEGER VMin5 
	[ ] // INTEGER VMax5 
	[ ] // INTEGER VMin6 
	[ ] // INTEGER VMax6 
	[ ] // STRING Ausage1 
	[ ] // STRING Ausage2  
	[ ] // STRING Ausage3 
	[ ] // STRING Ausage4  
	[ ] // STRING Ausage5 
	[ ] // STRING Ausage6 
	[ ] // INTEGER UseEndPt1
	[ ] // INTEGER UseEndPt2
	[ ] // INTEGER UseEndPt3
	[ ] // INTEGER UseEndPt4
	[ ] // INTEGER UseEndPt5
	[ ] // INTEGER UseEndPt6
	[ ] // INTEGER EndPt1
	[ ] // INTEGER EndPt2
	[ ] // INTEGER EndPt3
	[ ] // INTEGER EndPt4
	[ ] // INTEGER EndPt5
	[ ] // INTEGER EndPt6
	[ ] // INTEGER AnalyteTargetIC1
	[ ] // INTEGER SelectTarget1ForIC
	[ ] // INTEGER AnalyteTargetIC2
	[ ] // INTEGER SelectTarget2ForIC  
	[ ] // INTEGER AnalyteTargetIC3
	[ ] // INTEGER SelectTarget3ForIC
	[ ] // INTEGER AnalyteTargetIC4
	[ ] // INTEGER SelectTarget4ForIC  
	[ ] // INTEGER AnalyteTargetIC5
	[ ] // INTEGER SelectTarget5ForIC  
	[ ] // INTEGER AnalyteTargetSPC1
	[ ] // INTEGER SelectTarget1ForSPC
	[ ] // INTEGER AnalyteTargetSPC2
	[ ] // INTEGER SelectTarget2ForSPC
	[ ] // INTEGER AnalyteTargetSPC3
	[ ] // INTEGER SelectTarget3ForSPC
	[ ] // INTEGER AnalyteTargetSPC4
	[ ] // INTEGER SelectTarget4ForSPC
	[ ] // INTEGER AnalyteTargetSPC5
	[ ] // INTEGER SelectTarget5ForSPC
	[ ] // INTEGER AnalyteTargetEC1
	[ ] // INTEGER SelectTarget1ForEC
	[ ] // INTEGER AnalyteTargetEC2
	[ ] // INTEGER SelectTarget2ForEC
	[ ] // INTEGER AnalyteTargetEC3
	[ ] // INTEGER SelectTarget3ForEC
	[ ] // INTEGER AnalyteTargetEC4
	[ ] // INTEGER SelectTarget4ForEC
	[ ] // INTEGER AnalyteTargetEC5
	[ ] // INTEGER SelectTarget5ForEC
	[ ] // STRING  InvalidBias1
	[ ] // STRING  InvalidBias2
	[ ] // STRING  InvalidBias3
	[ ] // STRING  InvalidBias4
	[ ] // STRING  InvalidBias5
	[ ] // STRING  InvalidBias6
	[ ] // STRING PeakHeightMin1
	[ ] // STRING PeakHeightMin2
	[ ] // STRING PeakHeightMin3
	[ ] // STRING PeakHeightMin4
	[ ] // STRING PeakHeightMin5
	[ ] // STRING PeakHeightMin6
	[ ] // INTEGER UseMinTargetDeltaCt1
	[ ] // INTEGER UseMinTargetDeltaCt2
	[ ] // INTEGER UseMinTargetDeltaCt3
	[ ] // INTEGER UseMinTargetDeltaCt4
	[ ] // INTEGER UseMinTargetDeltaCt5
	[ ] // INTEGER UseMinTargetDeltaCt6
	[ ] // STRING MinTargetDeltaCt1
	[ ] // STRING MinTargetDeltaCt2
	[ ] // STRING MinTargetDeltaCt3
	[ ] // STRING MinTargetDeltaCt4
	[ ] // STRING MinTargetDeltaCt5
	[ ] // STRING MinTargetDeltaCt6
	[ ] // STRING DeltaCtE1
	[ ] // STRING DeltaCtE2
	[ ] // STRING DeltaCtE3
	[ ] // STRING DeltaCtE4
	[ ] // STRING DeltaCtE5
	[ ] // STRING DeltaCtE6
	[ ] // STRING CurveFit
	[ ] // STRING SignalLoss
[ ] 
[+] type CUSTOMIZE_RESULT_REC2  is record
	[ ]    INTEGER  iRow
	[ ]    STRING sTestResult1
	[ ]    STRING sTestResult2
	[ ]    STRING sTestResultText
	[ ]    STRING sTestResultColor
[ ] 
[ ] // Commented out by Steve use the type ASSAY_INFO 
[+] // type ASSAY_INFO2 is record
	[ ] // STRING sMyAssays
	[ ] // STRING sMyTableName
	[ ] // STRING sDefaultResultText
	[ ] // STRING sDefaultResultColor
[ ] 
[ ] // Commented out by Steve use the type ASSAY_INFO 
[+] // type ASSAYINFO is record
	[ ] // STRING sMyAssays
	[ ] // STRING sMyTableName
	[ ] // STRING sDefaultResultText
	[ ] // STRING sDefaultResultColor
[ ] 
[+] type CUSTOMIZE_RESULT_REC  is record
	[ ]    INTEGER  iRow
	[ ]    STRING sTestResult1
	[ ]    STRING sTestResult2
	[ ]    STRING sTestResult3
	[ ]    STRING sTestResult4
	[ ]    STRING sTestResultText
	[ ]    STRING sTestResultColor
[ ] 
[+] type ASSAY_INFO is record
	[ ] STRING sMyAssays
	[ ] STRING sMyTableName
	[ ] STRING sDefaultResultText
	[ ] STRING sDefaultResultColor
[ ] 
[+] type CUSTOMIZEDRESULT  is record
	[ ]    INTEGER  iRow
	[ ]    STRING sTestResult1
	[ ]    STRING sTestResult2
	[ ]    STRING sTestResult3
	[ ]    STRING sTestResult4
	[ ]    STRING sTestResult5
	[ ]    STRING sTestResultText
	[ ]    STRING sTestResultColor
[ ] 
[+] type CUSTOMIZEDRESULT6  is record
	[ ]    INTEGER  iRow
	[ ]    STRING sTestResult1
	[ ]    STRING sTestResult2
	[ ]    STRING sTestResult3
	[ ]    STRING sTestResult4
	[ ]    STRING sTestResult5
	[ ]    STRING sTestResult6
	[ ]    STRING sTestResultText
	[ ]    STRING sTestResultColor
[ ] 
[ ] 
[ ] // The _OR indicated that the type is used by D6781 Organism
[+] // type REC_2ANALYTES_OR is record
	[ ] // STRING sNAME  
	[ ] // STRING sAnalyteName1 
	[ ] // STRING sReporter1 
	[ ] // STRING sAnalyteName2 
	[ ] // STRING sReporter2 
	[ ] // STRING sUsage1 
	[ ] // STRING sUsage2  
	[ ] // INTEGER iAnalyteTargetIC1
	[ ] // INTEGER iSelectTarget1ForIC
	[ ] // INTEGER iAnalyteTargetSPC1
	[ ] // INTEGER iSelectTarget1ForSPC
	[ ] // INTEGER iAnalyteTargetEC1
	[ ] // INTEGER iSelectTarget1ForEC
	[ ] // INTEGER iBkgndSub  
	[ ] // INTEGER iBkgndVMin1 
	[ ] // INTEGER iBkgndVMax1 
	[ ] // INTEGER iBkgndVMin2  
	[ ] // INTEGER iBkgndVMax2 
	[ ] // REAL rThreshold1 
	[ ] // REAL rThreshold2 
	[ ] // STRING sCurveAnalysis1
	[ ] // STRING sCurveAnalysis2
	[ ] // INTEGER iBoxcar1 
	[ ] // INTEGER iBoxcar2 
	[ ] // INTEGER iVMin1 
	[ ] // INTEGER iVMax1 
	[ ] // INTEGER iVMin2  
	[ ] // INTEGER iVMax2 
	[ ] // INTEGER iUseEndPt1
	[ ] // INTEGER iUseEndPt2
	[ ] // INTEGER iEndPt1
	[ ] // INTEGER iEndPt2
	[ ] // INTEGER iCurveFit
	[ ] // INTEGER iSignalLoss
	[ ] // INTEGER iNumberCyclesInStage
	[ ] // STRING sOrganismDetail
	[ ] // STRING sDefaultResultText
	[ ] // STRING sDefaultResultColor
[ ] // 
[+] // type REC_3ANALYTES_OR is record
	[ ] // STRING sNAME  
	[ ] // STRING sAnalyteName1 
	[ ] // STRING sReporter1 
	[ ] // STRING sAnalyteName2 
	[ ] // STRING sReporter2 
	[ ] // STRING sAnalyteName3 
	[ ] // STRING sReporter3 
	[ ] // STRING sUsage1 
	[ ] // STRING sUsage2  
	[ ] // STRING sUsage3 
	[ ] // INTEGER iAnalyteTargetIC1
	[ ] // INTEGER iSelectTarget1ForIC
	[ ] // INTEGER iAnalyteTargetIC2
	[ ] // INTEGER iSelectTarget2ForIC
	[ ] // INTEGER iAnalyteTargetSPC1
	[ ] // INTEGER iSelectTarget1ForSPC
	[ ] // INTEGER iAnalyteTargetSPC2
	[ ] // INTEGER iSelectTarget2ForSPC
	[ ] // INTEGER iAnalyteTargetEC1
	[ ] // INTEGER iSelectTarget1ForEC
	[ ] // INTEGER iAnalyteTargetEC2
	[ ] // INTEGER iSelectTarget2ForEC
	[ ] // INTEGER iBkgndSub  
	[ ] // INTEGER iBkgndVMin1 
	[ ] // INTEGER iBkgndVMax1 
	[ ] // INTEGER iBkgndVMin2  
	[ ] // INTEGER iBkgndVMax2 
	[ ] // INTEGER iBkgndVMin3 
	[ ] // INTEGER iBkgndVMax3 
	[ ] // REAL rThreshold1 
	[ ] // REAL rThreshold2 
	[ ] // REAL rThreshold3 
	[ ] // STRING sCurveAnalysis1
	[ ] // STRING sCurveAnalysis2
	[ ] // STRING sCurveAnalysis3
	[ ] // INTEGER iBoxcar1 
	[ ] // INTEGER iBoxcar2 
	[ ] // INTEGER iBoxcar3 
	[ ] // INTEGER iVMin1 
	[ ] // INTEGER iVMax1 
	[ ] // INTEGER iVMin2  
	[ ] // INTEGER iVMax2 
	[ ] // INTEGER iVMin3 
	[ ] // INTEGER iVMax3 
	[ ] // INTEGER iUseEndPt1
	[ ] // INTEGER iUseEndPt2
	[ ] // INTEGER iUseEndPt3
	[ ] // INTEGER iEndPt1
	[ ] // INTEGER iEndPt2
	[ ] // INTEGER iEndPt3
	[ ] // INTEGER iCurveFit
	[ ] // INTEGER iSignalLoss
	[ ] // INTEGER iNumberCyclesInStage
	[ ] // STRING sOrganismDetail
	[ ] // STRING sDefaultResultText
	[ ] // STRING sDefaultResultColor
[ ] // 
[+] // type REC_5ANALYTES_OR is record
	[ ] // STRING sNAME  
	[ ] // STRING sAnalyteName1 
	[ ] // STRING sReporter1 
	[ ] // STRING sAnalyteName2 
	[ ] // STRING sReporter2 
	[ ] // STRING sAnalyteName3 
	[ ] // STRING sReporter3 
	[ ] // STRING sAnalyteName4 
	[ ] // STRING sReporter4 
	[ ] // STRING sAnalyteName5 
	[ ] // STRING sReporter5 
	[ ] // STRING sUsage1 
	[ ] // STRING sUsage2  
	[ ] // STRING sUsage3 
	[ ] // STRING sUsage4  
	[ ] // STRING sUsage5 
	[ ] // INTEGER iAnalyteTargetIC1
	[ ] // INTEGER iSelectTarget1ForIC
	[ ] // INTEGER iAnalyteTargetIC2
	[ ] // INTEGER iSelectTarget2ForIC
	[ ] // INTEGER iAnalyteTargetIC3
	[ ] // INTEGER iSelectTarget3ForIC
	[ ] // INTEGER iAnalyteTargetIC4
	[ ] // INTEGER iSelectTarget4ForIC
	[ ] // INTEGER iAnalyteTargetSPC1
	[ ] // INTEGER iSelectTarget1ForSPC
	[ ] // INTEGER iAnalyteTargetSPC2
	[ ] // INTEGER iSelectTarget2ForSPC
	[ ] // INTEGER iAnalyteTargetSPC3
	[ ] // INTEGER iSelectTarget3ForSPC
	[ ] // INTEGER iAnalyteTargetSPC4
	[ ] // INTEGER iSelectTarget4ForSPC
	[ ] // INTEGER iAnalyteTargetEC1
	[ ] // INTEGER iSelectTarget1ForEC
	[ ] // INTEGER iAnalyteTargetEC2
	[ ] // INTEGER iSelectTarget2ForEC
	[ ] // INTEGER iAnalyteTargetEC3
	[ ] // INTEGER iSelectTarget3ForEC
	[ ] // INTEGER iAnalyteTargetEC4
	[ ] // INTEGER iSelectTarget4ForEC
	[ ] // INTEGER iBkgndSub  
	[ ] // INTEGER iBkgndVMin1 
	[ ] // INTEGER iBkgndVMax1 
	[ ] // INTEGER iBkgndVMin2  
	[ ] // INTEGER iBkgndVMax2 
	[ ] // INTEGER iBkgndVMin3 
	[ ] // INTEGER iBkgndVMax3 
	[ ] // INTEGER iBkgndVMin4  
	[ ] // INTEGER iBkgndVMax4 
	[ ] // INTEGER iBkgndVMin5 
	[ ] // INTEGER iBkgndVMax5 
	[ ] // REAL rThreshold1 
	[ ] // REAL rThreshold2 
	[ ] // REAL rThreshold3 
	[ ] // REAL rThreshold4 
	[ ] // REAL rThreshold5 
	[ ] // STRING sCurveAnalysis1
	[ ] // STRING sCurveAnalysis2
	[ ] // STRING sCurveAnalysis3
	[ ] // STRING sCurveAnalysis4
	[ ] // STRING sCurveAnalysis5
	[ ] // INTEGER iBoxcar1 
	[ ] // INTEGER iBoxcar2 
	[ ] // INTEGER iBoxcar3 
	[ ] // INTEGER iBoxcar4 
	[ ] // INTEGER iBoxcar5 
	[ ] // INTEGER iVMin1 
	[ ] // INTEGER iVMax1 
	[ ] // INTEGER iVMin2  
	[ ] // INTEGER iVMax2 
	[ ] // INTEGER iVMin3 
	[ ] // INTEGER iVMax3 
	[ ] // INTEGER iVMin4  
	[ ] // INTEGER iVMax4 
	[ ] // INTEGER iVMin5 
	[ ] // INTEGER iVMax5 
	[ ] // INTEGER iUseEndPt1
	[ ] // INTEGER iUseEndPt2
	[ ] // INTEGER iUseEndPt3
	[ ] // INTEGER iUseEndPt4
	[ ] // INTEGER iUseEndPt5
	[ ] // INTEGER iEndPt1
	[ ] // INTEGER iEndPt2
	[ ] // INTEGER iEndPt3
	[ ] // INTEGER iEndPt4
	[ ] // INTEGER iEndPt5
	[ ] // INTEGER iCurveFit
	[ ] // INTEGER iSignalLoss
	[ ] // INTEGER iNumberCyclesInStage
	[ ] // STRING sOrganismDetail
	[ ] // STRING sDefaultResultText
	[ ] // STRING sDefaultResultColor
[ ] // 
[+] // type REC_6ANALYTES_OR is record
	[ ] // STRING sNAME  
	[ ] // STRING sAnalyteName1 
	[ ] // STRING sReporter1 
	[ ] // STRING sAnalyteName2 
	[ ] // STRING sReporter2 
	[ ] // STRING sAnalyteName3 
	[ ] // STRING sReporter3 
	[ ] // STRING sAnalyteName4 
	[ ] // STRING sReporter4 
	[ ] // STRING sAnalyteName5 
	[ ] // STRING sReporter5 
	[ ] // STRING sAnalyteName6 
	[ ] // STRING sReporter6 
	[ ] // STRING sUsage1 
	[ ] // STRING sUsage2  
	[ ] // STRING sUsage3 
	[ ] // STRING sUsage4  
	[ ] // STRING sUsage5 
	[ ] // STRING sUsage6  
	[ ] // INTEGER iAnalyteTargetIC1
	[ ] // INTEGER iSelectTarget1ForIC
	[ ] // INTEGER iAnalyteTargetIC2
	[ ] // INTEGER iSelectTarget2ForIC
	[ ] // INTEGER iAnalyteTargetIC3
	[ ] // INTEGER iSelectTarget3ForIC
	[ ] // INTEGER iAnalyteTargetIC4
	[ ] // INTEGER iSelectTarget4ForIC
	[ ] // INTEGER iAnalyteTargetIC5
	[ ] // INTEGER iSelectTarget5ForIC
	[ ] // INTEGER iAnalyteTargetSPC1
	[ ] // INTEGER iSelectTarget1ForSPC
	[ ] // INTEGER iAnalyteTargetSPC2
	[ ] // INTEGER iSelectTarget2ForSPC
	[ ] // INTEGER iAnalyteTargetSPC3
	[ ] // INTEGER iSelectTarget3ForSPC
	[ ] // INTEGER iAnalyteTargetSPC4
	[ ] // INTEGER iSelectTarget4ForSPC
	[ ] // INTEGER iAnalyteTargetSPC5
	[ ] // INTEGER iSelectTarget5ForSPC
	[ ] // INTEGER iAnalyteTargetEC1
	[ ] // INTEGER iSelectTarget1ForEC
	[ ] // INTEGER iAnalyteTargetEC2
	[ ] // INTEGER iSelectTarget2ForEC
	[ ] // INTEGER iAnalyteTargetEC3
	[ ] // INTEGER iSelectTarget3ForEC
	[ ] // INTEGER iAnalyteTargetEC4
	[ ] // INTEGER iSelectTarget4ForEC
	[ ] // INTEGER iAnalyteTargetEC5
	[ ] // INTEGER iSelectTarget5ForEC
	[ ] // INTEGER iBkgndSub  
	[ ] // INTEGER iBkgndVMin1 
	[ ] // INTEGER iBkgndVMax1 
	[ ] // INTEGER iBkgndVMin2  
	[ ] // INTEGER iBkgndVMax2 
	[ ] // INTEGER iBkgndVMin3 
	[ ] // INTEGER iBkgndVMax3 
	[ ] // INTEGER iBkgndVMin4  
	[ ] // INTEGER iBkgndVMax4 
	[ ] // INTEGER iBkgndVMin5 
	[ ] // INTEGER iBkgndVMax5 
	[ ] // INTEGER iBkgndVMin6  
	[ ] // INTEGER iBkgndVMax6 
	[ ] // REAL rThreshold1 
	[ ] // REAL rThreshold2 
	[ ] // REAL rThreshold3 
	[ ] // REAL rThreshold4 
	[ ] // REAL rThreshold5 
	[ ] // REAL rThreshold6 
	[ ] // STRING sCurveAnalysis1
	[ ] // STRING sCurveAnalysis2
	[ ] // STRING sCurveAnalysis3
	[ ] // STRING sCurveAnalysis4
	[ ] // STRING sCurveAnalysis5
	[ ] // STRING sCurveAnalysis6
	[ ] // INTEGER iBoxcar1 
	[ ] // INTEGER iBoxcar2 
	[ ] // INTEGER iBoxcar3 
	[ ] // INTEGER iBoxcar4 
	[ ] // INTEGER iBoxcar5 
	[ ] // INTEGER iBoxcar6 
	[ ] // INTEGER iVMin1 
	[ ] // INTEGER iVMax1 
	[ ] // INTEGER iVMin2  
	[ ] // INTEGER iVMax2 
	[ ] // INTEGER iVMin3 
	[ ] // INTEGER iVMax3 
	[ ] // INTEGER iVMin4  
	[ ] // INTEGER iVMax4 
	[ ] // INTEGER iVMin5 
	[ ] // INTEGER iVMax5 
	[ ] // INTEGER iVMin6  
	[ ] // INTEGER iVMax6 
	[ ] // INTEGER iUseEndPt1
	[ ] // INTEGER iUseEndPt2
	[ ] // INTEGER iUseEndPt3
	[ ] // INTEGER iUseEndPt4
	[ ] // INTEGER iUseEndPt5
	[ ] // INTEGER iUseEndPt6
	[ ] // INTEGER iEndPt1
	[ ] // INTEGER iEndPt2
	[ ] // INTEGER iEndPt3
	[ ] // INTEGER iEndPt4
	[ ] // INTEGER iEndPt5
	[ ] // INTEGER iEndPt6
	[ ] // INTEGER iCurveFit
	[ ] // INTEGER iSignalLoss
	[ ] // INTEGER iNumberCyclesInStage
	[ ] // STRING sOrganismDetail
	[ ] // STRING sDefaultResultText
	[ ] // STRING sDefaultResultColor
[ ] // 
[+] type REC_8ANALYTES is record
	[ ] STRING sNAME  
	[ ] STRING sAnalyteName1 
	[ ] STRING sReporter1 
	[ ] STRING sAnalyteName2 
	[ ] STRING sReporter2 
	[ ] STRING sAnalyteName3 
	[ ] STRING sReporter3 
	[ ] STRING sAnalyteName4 
	[ ] STRING sReporter4 
	[ ] STRING sAnalyteName5 
	[ ] STRING sReporter5 
	[ ] STRING sAnalyteName6 
	[ ] STRING sReporter6 
	[ ] STRING sAnalyteName7
	[ ] STRING sReporter7
	[ ] STRING sAnalyteName8
	[ ] STRING sReporter8
	[ ] STRING sDecision
	[ ] REAL rThreshold1 
	[ ] REAL rThreshold2 
	[ ] REAL rThreshold3 
	[ ] REAL rThreshold4 
	[ ] REAL rThreshold5 
	[ ] REAL rThreshold6 
	[ ] REAL rThreshold7 
	[ ] REAL rThreshold8
	[ ] INTEGER iBoxcar1 
	[ ] INTEGER iBoxcar2 
	[ ] INTEGER iBoxcar3 
	[ ] INTEGER iBoxcar4 
	[ ] INTEGER iBoxcar5 
	[ ] INTEGER iBoxcar6 
	[ ] INTEGER iBoxcar7 
	[ ] INTEGER iBoxcar8
	[ ] STRING sCurveAnalysis1
	[ ] STRING sCurveAnalysis2
	[ ] STRING sCurveAnalysis3
	[ ] STRING sCurveAnalysis4
	[ ] STRING sCurveAnalysis5
	[ ] STRING sCurveAnalysis6
	[ ] STRING sCurveAnalysis7
	[ ] STRING sCurveAnalysis8
	[ ] INTEGER iBkgndSub  
	[ ] INTEGER iBkgndVMin1 
	[ ] INTEGER iBkgndVMax1 
	[ ] INTEGER iBkgndVMin2  
	[ ] INTEGER iBkgndVMax2 
	[ ] INTEGER iBkgndVMin3 
	[ ] INTEGER iBkgndVMax3 
	[ ] INTEGER iBkgndVMin4  
	[ ] INTEGER iBkgndVMax4 
	[ ] INTEGER iBkgndVMin5 
	[ ] INTEGER iBkgndVMax5 
	[ ] INTEGER iBkgndVMin6  
	[ ] INTEGER iBkgndVMax6 
	[ ] INTEGER iBkgndVMin7  
	[ ] INTEGER iBkgndVMax7
	[ ] INTEGER iBkgndVMin8  
	[ ] INTEGER iBkgndVMax8
	[ ] INTEGER iVMin1
	[ ] INTEGER iVMax1  
	[ ] INTEGER iVMin2  
	[ ] INTEGER iVMax2 
	[ ] INTEGER iVMin3 
	[ ] INTEGER iVMax3 
	[ ] INTEGER iVMin4  
	[ ] INTEGER iVMax4 
	[ ] INTEGER iVMin5 
	[ ] INTEGER iVMax5 
	[ ] INTEGER iVMin6  
	[ ] INTEGER iVMax6 
	[ ] INTEGER iVMin7  
	[ ] INTEGER iVMax7 
	[ ] INTEGER iVMin8 
	[ ] INTEGER iVMax8
	[ ] INTEGER iUseEndPt1
	[ ] INTEGER iUseEndPt2
	[ ] INTEGER iUseEndPt3
	[ ] INTEGER iUseEndPt4
	[ ] INTEGER iUseEndPt5
	[ ] INTEGER iUseEndPt6
	[ ] INTEGER iUseEndPt7
	[ ] INTEGER iUseEndPt8
	[ ] INTEGER iEndPt1
	[ ] INTEGER iEndPt2
	[ ] INTEGER iEndPt3
	[ ] INTEGER iEndPt4
	[ ] INTEGER iEndPt5
	[ ] INTEGER iEndPt6
	[ ] INTEGER iEndPt7
	[ ] INTEGER iEndPt8
	[ ] INTEGER iCurveFit
	[ ] INTEGER iSignalLoss
	[ ] STRING sUsage1 
	[ ] STRING sUsage2  
	[ ] STRING sUsage3 
	[ ] STRING sUsage4  
	[ ] STRING sUsage5 
	[ ] STRING sUsage6  
	[ ] STRING sUsage7  
	[ ] STRING sUsage8 
	[ ] INTEGER iAnalyteTargetIC1
	[ ] INTEGER iSelectTarget1ForIC
	[ ] INTEGER iAnalyteTargetIC2
	[ ] INTEGER iSelectTarget2ForIC
	[ ] INTEGER iAnalyteTargetIC3
	[ ] INTEGER iSelectTarget3ForIC
	[ ] INTEGER iAnalyteTargetIC4
	[ ] INTEGER iSelectTarget4ForIC
	[ ] INTEGER iAnalyteTargetIC5
	[ ] INTEGER iSelectTarget5ForIC
	[ ] INTEGER iAnalyteTargetIC6
	[ ] INTEGER iSelectTarget6ForIC
	[ ] INTEGER iAnalyteTargetIC7
	[ ] INTEGER iSelectTarget7ForIC
	[ ] INTEGER iAnalyteTargetEC1
	[ ] INTEGER iSelectTarget1ForEC
	[ ] INTEGER iAnalyteTargetEC2
	[ ] INTEGER iSelectTarget2ForEC
	[ ] INTEGER iAnalyteTargetEC3
	[ ] INTEGER iSelectTarget3ForEC
	[ ] INTEGER iAnalyteTargetEC4
	[ ] INTEGER iSelectTarget4ForEC
	[ ] INTEGER iAnalyteTargetEC5
	[ ] INTEGER iSelectTarget5ForEC
	[ ] INTEGER iAnalyteTargetEC6
	[ ] INTEGER iSelectTarget6ForEC
	[ ] INTEGER iAnalyteTargetEC7
	[ ] INTEGER iSelectTarget7ForEC
	[ ] INTEGER iAnalyteTargetSPC1
	[ ] INTEGER iSelectTarget1ForSPC
	[ ] INTEGER iAnalyteTargetSPC2
	[ ] INTEGER iSelectTarget2ForSPC
	[ ] INTEGER iAnalyteTargetSPC3
	[ ] INTEGER iSelectTarget3ForSPC
	[ ] INTEGER iAnalyteTargetSPC4
	[ ] INTEGER iSelectTarget4ForSPC
	[ ] INTEGER iAnalyteTargetSPC5
	[ ] INTEGER iSelectTarget5ForSPC
	[ ] INTEGER iAnalyteTargetSPC6
	[ ] INTEGER iSelectTarget6ForSPC
	[ ] INTEGER iAnalyteTargetSPC7
	[ ] INTEGER iSelectTarget7ForSPC
	[ ] STRING sOrganismDetail
	[ ] //
	[ ] INTEGER iNormFactor1D
	[ ] INTEGER iNormFactor1
	[ ] INTEGER iNormFactor2D
	[ ] INTEGER iNormFactor2
	[ ] INTEGER iNormFactor3D
	[ ] INTEGER iNormFactor3
	[ ] INTEGER iNormFactor4D
	[ ] INTEGER iNormFactor4
	[ ] INTEGER iNormFactor5D
	[ ] INTEGER iNormFactor5
	[ ] INTEGER iNormFactor6D
	[ ] INTEGER iNormFactor6
	[ ] INTEGER iNormFactor7D
	[ ] INTEGER iNormFactor7
	[ ] INTEGER iNormFactor8D
	[ ] INTEGER iNormFactor8
	[ ] //
	[ ] STRING sPeakHeightMin1
	[ ] STRING sPeakHeightMin2
	[ ] STRING sPeakHeightMin3
	[ ] STRING sPeakHeightMin4
	[ ] STRING sPeakHeightMin5
	[ ] STRING sPeakHeightMin6
	[ ] STRING sPeakHeightMin7
	[ ] STRING sPeakHeightMin8
	[ ] INTEGER iPrbChk
	[ ] INTEGER iPrbChk13Max1
	[ ] INTEGER iPrbChk2Min1
	[ ] INTEGER iPrbChkDeltaMin1
	[ ] INTEGER iPrbChk13Max2
	[ ] INTEGER iPrbChk2Min2
	[ ] INTEGER iPrbChkDeltaMin2
	[ ] INTEGER iPrbChk13Max3
	[ ] INTEGER iPrbChk2Min3
	[ ] INTEGER iPrbChkDeltaMin3
	[ ] INTEGER iPrbChk13Max4
	[ ] INTEGER iPrbChk2Min4
	[ ] INTEGER iPrbChkDeltaMin4
	[ ] INTEGER iPrbChk13Max5
	[ ] INTEGER iPrbChk2Min5
	[ ] INTEGER iPrbChkDeltaMin5
	[ ] INTEGER iPrbChk13Max6
	[ ] INTEGER iPrbChk2Min6
	[ ] INTEGER iPrbChkDeltaMin6
	[ ] INTEGER iPrbChk13Max7
	[ ] INTEGER iPrbChk2Min7
	[ ] INTEGER iPrbChkDeltaMin7
	[ ] INTEGER iPrbChk13Max8
	[ ] INTEGER iPrbChk2Min8
	[ ] INTEGER iPrbChkDeltaMin8
	[ ] //
	[ ] STRING sProtocol1
	[ ] //
[ ] 
[+] type REC_ORGANISM is record
	[ ] STRING sOrganismName
	[ ] STRING sCheck1
	[ ] STRING sCheck2
	[ ] STRING sCheck3
	[ ] STRING sCheck4
	[ ] STRING sCheck5
	[ ] STRING sCheck6
	[ ] STRING sType
	[ ] INTEGER iNumAnalytes
	[ ] STRING sCustomize
	[ ] INTEGER iPosition
[ ] 
[+] type REC_ORGANISM_SEMI is record
	[ ] STRING sOrganismName
	[ ] STRING sCheck1
	[ ] STRING sCheck2
	[ ] STRING sCheck3
	[ ] STRING sCheck4
	[ ] STRING sCheck5
	[ ] STRING sCheck6
	[ ] STRING sType
	[ ] INTEGER iNumAnalytes
	[ ] STRING sCustomize
	[ ] INTEGER iPosition
	[ ] STRING sSemiQuant
[ ] 
[+] type REC_SEMI_DETAIL is record
	[ ] STRING sQuantResultText
	[ ] STRING sDeltaCtMin
	[ ] STRING sReplacedResultText
	[ ] STRING sReplacedResultColor
	[ ] STRING sMediumCtMin
	[ ] STRING sLowCtMin
	[ ] STRING sVeryLowCtMin
[ ] 
[+] type REC_ORGANISM_DELTA is record
	[ ] STRING sOrganismName
	[ ] STRING sCheck1
	[ ] STRING sCheck2
	[ ] STRING sCheck3
	[ ] STRING sCheck4
	[ ] STRING sCheck5
	[ ] STRING sCheck6
	[ ] STRING sType
	[ ] INTEGER iNumAnalytes
	[ ] STRING sCustomize
	[ ] INTEGER iPosition
	[ ] STRING sDeltaCtMin
	[ ] STRING sDeltaCtMax
[ ] 
[+] type REC_ORGANISM_COMBO is record
	[ ] STRING sOrganismName
	[ ] STRING sCheck1
	[ ] STRING sCheck2
	[ ] STRING sCheck3
	[ ] STRING sCheck4
	[ ] STRING sCheck5
	[ ] STRING sCheck6
	[ ] STRING sType
	[ ] INTEGER iNumAnalytes
	[ ] STRING sCustomize
	[ ] INTEGER iPosition
	[ ] STRING sSemiQuant
	[ ] STRING sDeltaCtMin
	[ ] STRING sDeltaCtMax
[ ] 
[+] type REC_DELTA_DETAIL is record
	[ ] STRING sOrganismName
	[ ] STRING sCondition
	[ ] STRING sResultText
	[ ] STRING sResultColor
[ ] 
[+] type REC_CUSTOMIZE is record
	[ ] STRING sOrganismName
	[ ] STRING sAnalyte1
	[ ] STRING sAnalyte2
	[ ] STRING sAnalyte3
	[ ] STRING sAnalyte4
	[ ] STRING sAnalyte5
	[ ] STRING sAnalyte6
	[ ] STRING sResultText
	[ ] STRING sResultColor
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
[+] // type REC_6ANALYTESORT34 is record
	[ ] // STRING sNAME  
	[ ] // STRING sAnalyteName1 
	[ ] // STRING sReporter1 
	[ ] // STRING sAnalyteName2 
	[ ] // STRING sReporter2 
	[ ] // STRING sAnalyteName3 
	[ ] // STRING sReporter3 
	[ ] // STRING sAnalyteName4 
	[ ] // STRING sReporter4 
	[ ] // STRING sAnalyteName5 
	[ ] // STRING sReporter5 
	[ ] // STRING sAnalyteName6 
	[ ] // STRING sReporter6 
	[ ] // STRING sUsage1 
	[ ] // STRING sUsage2  
	[ ] // STRING sUsage3 
	[ ] // STRING sUsage4  
	[ ] // STRING sUsage5 
	[ ] // STRING sUsage6  
	[ ] // INTEGER iAnalyteTargetIC1
	[ ] // INTEGER iSelectTarget1ForIC
	[ ] // INTEGER iAnalyteTargetIC2
	[ ] // INTEGER iSelectTarget2ForIC
	[ ] // INTEGER iAnalyteTargetIC3
	[ ] // INTEGER iSelectTarget3ForIC
	[ ] // INTEGER iAnalyteTargetIC4
	[ ] // INTEGER iSelectTarget4ForIC
	[ ] // INTEGER iAnalyteTargetIC5
	[ ] // INTEGER iSelectTarget5ForIC
	[ ] // INTEGER iAnalyteTargetSPC1
	[ ] // INTEGER iSelectTarget1ForSPC
	[ ] // INTEGER iAnalyteTargetSPC2
	[ ] // INTEGER iSelectTarget2ForSPC
	[ ] // INTEGER iAnalyteTargetSPC3
	[ ] // INTEGER iSelectTarget3ForSPC
	[ ] // INTEGER iAnalyteTargetSPC4
	[ ] // INTEGER iSelectTarget4ForSPC
	[ ] // INTEGER iAnalyteTargetSPC5
	[ ] // INTEGER iSelectTarget5ForSPC
	[ ] // INTEGER iAnalyteTargetEC1
	[ ] // INTEGER iSelectTarget1ForEC
	[ ] // INTEGER iAnalyteTargetEC2
	[ ] // INTEGER iSelectTarget2ForEC
	[ ] // INTEGER iAnalyteTargetEC3
	[ ] // INTEGER iSelectTarget3ForEC
	[ ] // INTEGER iAnalyteTargetEC4
	[ ] // INTEGER iSelectTarget4ForEC
	[ ] // INTEGER iAnalyteTargetEC5
	[ ] // INTEGER iSelectTarget5ForEC
	[ ] // INTEGER iBkgndSub  
	[ ] // INTEGER iBkgndVMin1 
	[ ] // INTEGER iBkgndVMax1 
	[ ] // INTEGER iBkgndVMin2  
	[ ] // INTEGER iBkgndVMax2 
	[ ] // INTEGER iBkgndVMin3 
	[ ] // INTEGER iBkgndVMax3 
	[ ] // INTEGER iBkgndVMin4  
	[ ] // INTEGER iBkgndVMax4 
	[ ] // INTEGER iBkgndVMin5 
	[ ] // INTEGER iBkgndVMax5 
	[ ] // INTEGER iBkgndVMin6  
	[ ] // INTEGER iBkgndVMax6 
	[ ] // REAL rThreshold1 
	[ ] // REAL rThreshold2 
	[ ] // REAL rThreshold3 
	[ ] // REAL rThreshold4 
	[ ] // REAL rThreshold5 
	[ ] // REAL rThreshold6 
	[ ] // STRING sCurveAnalysis1
	[ ] // STRING sCurveAnalysis2
	[ ] // STRING sCurveAnalysis3
	[ ] // STRING sCurveAnalysis4
	[ ] // STRING sCurveAnalysis5
	[ ] // STRING sCurveAnalysis6
	[ ] // INTEGER iBoxcar1 
	[ ] // INTEGER iBoxcar2 
	[ ] // INTEGER iBoxcar3 
	[ ] // INTEGER iBoxcar4 
	[ ] // INTEGER iBoxcar5 
	[ ] // INTEGER iBoxcar6 
	[ ] // INTEGER iVMin1 
	[ ] // INTEGER iVMax1 
	[ ] // INTEGER iVMin2  
	[ ] // INTEGER iVMax2 
	[ ] // INTEGER iVMin3 
	[ ] // INTEGER iVMax3 
	[ ] // INTEGER iVMin4  
	[ ] // INTEGER iVMax4 
	[ ] // INTEGER iVMin5 
	[ ] // INTEGER iVMax5 
	[ ] // INTEGER iVMin6  
	[ ] // INTEGER iVMax6 
	[ ] // INTEGER iUseEndPt1
	[ ] // INTEGER iUseEndPt2
	[ ] // INTEGER iUseEndPt3
	[ ] // INTEGER iUseEndPt4
	[ ] // INTEGER iUseEndPt5
	[ ] // INTEGER iUseEndPt6
	[ ] // INTEGER iEndPt1
	[ ] // INTEGER iEndPt2
	[ ] // INTEGER iEndPt3
	[ ] // INTEGER iEndPt4
	[ ] // INTEGER iEndPt5
	[ ] // INTEGER iEndPt6
	[ ] // INTEGER iNormFactor1
	[ ] // INTEGER iNormFactor2
	[ ] // INTEGER iNormFactor3
	[ ] // INTEGER iNormFactor4
	[ ] // INTEGER iNormFactor5
	[ ] // INTEGER iNormFactor6
	[ ] // INTEGER iPrbChkMax1
	[ ] // INTEGER iPrbChkMax2
	[ ] // INTEGER iPrbChkMax3
	[ ] // INTEGER iPrbChkMax4
	[ ] // INTEGER iPrbChkMax5
	[ ] // INTEGER iPrbChkMax6
	[ ] // INTEGER iPrbChkMin1
	[ ] // INTEGER iPrbChkMin2
	[ ] // INTEGER iPrbChkMin3
	[ ] // INTEGER iPrbChkMin4
	[ ] // INTEGER iPrbChkMin5
	[ ] // INTEGER iPrbChkMin6
	[ ] // INTEGER iCurveFit
	[ ] // INTEGER iSignalLoss
	[ ] // INTEGER iNumberCyclesInStage
	[ ] // STRING sOrganismDetail
	[ ] // STRING sDefaultResultText
	[ ] // STRING sDefaultResultColor
[ ] // 
[+] type REC_DECISION is record
	[ ] INTEGER iNumSelectedAnalyte
	[ ] STRING sSelectTargetAnalytes1
	[ ] STRING sSelectTargetAnalytes2
	[ ] STRING sDecision_Combo1
	[ ] STRING sDecision_Combo2
	[ ] STRING sDecision_Combo3
	[ ] STRING sDecision_Combo4
	[ ] STRING sDecision_Combo5
	[ ] STRING sDecision_Combo6
	[ ] STRING sDecision_Combo7
	[ ] STRING sDecision_Combo8
	[ ] STRING sDecision_Combo9
[ ] 
[ ] 
[ ] // the _GT indicated that the type is used by D8382 Genotyping
[+] // type REC_2ANALYTES_GT is record
	[ ] // STRING sNAME  
	[ ] // STRING sAnalyteName1 
	[ ] // STRING sReporter1 
	[ ] // STRING sAnalyteName2 
	[ ] // STRING sReporter2 
	[ ] // STRING sUsage1 
	[ ] // STRING sUsage2  
	[ ] // INTEGER iBkgndSub  
	[ ] // INTEGER iBkgndVMin1 
	[ ] // INTEGER iBkgndVMax1 
	[ ] // INTEGER iBkgndVMin2  
	[ ] // INTEGER iBkgndVMax2 
	[ ] // REAL rThreshold1 
	[ ] // REAL rThreshold2 
	[ ] // STRING sCurveAnalysis1
	[ ] // STRING sCurveAnalysis2
	[ ] // INTEGER iBoxcar1 
	[ ] // INTEGER iBoxcar2 
	[ ] // INTEGER iVMin1 
	[ ] // INTEGER iVMax1 
	[ ] // INTEGER iVMin2  
	[ ] // INTEGER iVMax2 
	[ ] // INTEGER iUseEndPt1
	[ ] // INTEGER iUseEndPt2
	[ ] // INTEGER iEndPt1
	[ ] // INTEGER iEndPt2
	[ ] // STRING sInvalidBias1
	[ ] // STRING sInvalidBias2
	[ ] // INTEGER iCurveFit
	[ ] // INTEGER iSignalLoss
	[ ] // INTEGER iNumberCyclesInStage
	[ ] // STRING sGenotypingDetail
	[ ] // STRING sDefaultResultText
	[ ] // STRING sDefaultResultColor
	[ ] // STRING sDisclaimers
[ ] // 
[+] // type REC_4ANALYTES_GT is record
	[ ] // STRING sNAME  
	[ ] // STRING sAnalyteName1 
	[ ] // STRING sReporter1 
	[ ] // STRING sAnalyteName2 
	[ ] // STRING sReporter2 
	[ ] // STRING sAnalyteName3 
	[ ] // STRING sReporter3 
	[ ] // STRING sAnalyteName4 
	[ ] // STRING sReporter4 
	[ ] // STRING sUsage1 
	[ ] // STRING sUsage2  
	[ ] // STRING sUsage3 
	[ ] // STRING sUsage4  
	[ ] // INTEGER iBkgndSub  
	[ ] // INTEGER iBkgndVMin1 
	[ ] // INTEGER iBkgndVMax1 
	[ ] // INTEGER iBkgndVMin2  
	[ ] // INTEGER iBkgndVMax2 
	[ ] // INTEGER iBkgndVMin3 
	[ ] // INTEGER iBkgndVMax3 
	[ ] // INTEGER iBkgndVMin4  
	[ ] // INTEGER iBkgndVMax4 
	[ ] // REAL rThreshold1 
	[ ] // REAL rThreshold2 
	[ ] // REAL rThreshold3 
	[ ] // REAL rThreshold4 
	[ ] // STRING sCurveAnalysis1
	[ ] // STRING sCurveAnalysis2
	[ ] // STRING sCurveAnalysis3
	[ ] // STRING sCurveAnalysis4
	[ ] // INTEGER iBoxcar1 
	[ ] // INTEGER iBoxcar2 
	[ ] // INTEGER iBoxcar3 
	[ ] // INTEGER iBoxcar4 
	[ ] // INTEGER iVMin1 
	[ ] // INTEGER iVMax1 
	[ ] // INTEGER iVMin2  
	[ ] // INTEGER iVMax2 
	[ ] // INTEGER iVMin3 
	[ ] // INTEGER iVMax3 
	[ ] // INTEGER iVMin4  
	[ ] // INTEGER iVMax4 
	[ ] // INTEGER iUseEndPt1
	[ ] // INTEGER iUseEndPt2
	[ ] // INTEGER iUseEndPt3
	[ ] // INTEGER iUseEndPt4
	[ ] // INTEGER iEndPt1
	[ ] // INTEGER iEndPt2
	[ ] // INTEGER iEndPt3
	[ ] // INTEGER iEndPt4
	[ ] // STRING sInvalidBias1
	[ ] // STRING sInvalidBias2
	[ ] // STRING sInvalidBias3
	[ ] // STRING sInvalidBias4
	[ ] // INTEGER iCurveFit
	[ ] // INTEGER iSignalLoss
	[ ] // INTEGER iNumberCyclesInStage
	[ ] // STRING sGenotypingDetail
	[ ] // STRING sDefaultResultText
	[ ] // STRING sDefaultResultColor
	[ ] // STRING sDisclaimers
[ ] // 
[+] // type REC_4ANALYTESCOMBO is record
	[ ] // STRING sNAME  
	[ ] // STRING sAnalyteName1 
	[ ] // STRING sReporter1 
	[ ] // STRING sAnalyteName2 
	[ ] // STRING sReporter2 
	[ ] // STRING sAnalyteName3 
	[ ] // STRING sReporter3 
	[ ] // STRING sAnalyteName4 
	[ ] // STRING sReporter4 
	[ ] // STRING sUsage1 
	[ ] // STRING sUsage2  
	[ ] // STRING sUsage3 
	[ ] // STRING sUsage4  
	[ ] // INTEGER iBkgndSub  
	[ ] // INTEGER iBkgndVMin1 
	[ ] // INTEGER iBkgndVMax1 
	[ ] // INTEGER iBkgndVMin2  
	[ ] // INTEGER iBkgndVMax2 
	[ ] // INTEGER iBkgndVMin3 
	[ ] // INTEGER iBkgndVMax3 
	[ ] // INTEGER iBkgndVMin4  
	[ ] // INTEGER iBkgndVMax4 
	[ ] // REAL rThreshold1 
	[ ] // REAL rThreshold2 
	[ ] // REAL rThreshold3 
	[ ] // REAL rThreshold4 
	[ ] // STRING sCurveAnalysis1
	[ ] // STRING sCurveAnalysis2
	[ ] // STRING sCurveAnalysis3
	[ ] // STRING sCurveAnalysis4
	[ ] // INTEGER iNormFactor1 
	[ ] // INTEGER iNormFactor2 
	[ ] // INTEGER iNormFactor3 
	[ ] // INTEGER iNormFactor4 
	[ ] // INTEGER iBoxcar1 
	[ ] // INTEGER iBoxcar2 
	[ ] // INTEGER iBoxcar3 
	[ ] // INTEGER iBoxcar4 
	[ ] // INTEGER iVMin1 
	[ ] // INTEGER iVMax1 
	[ ] // INTEGER iVMin2  
	[ ] // INTEGER iVMax2 
	[ ] // INTEGER iVMin3 
	[ ] // INTEGER iVMax3 
	[ ] // INTEGER iVMin4  
	[ ] // INTEGER iVMax4 
	[ ] // INTEGER iUseEndPt1
	[ ] // INTEGER iUseEndPt2
	[ ] // INTEGER iUseEndPt3
	[ ] // INTEGER iUseEndPt4
	[ ] // INTEGER iEndPt1
	[ ] // INTEGER iEndPt2
	[ ] // INTEGER iEndPt3
	[ ] // INTEGER iEndPt4
	[ ] // INTEGER iPrbChkMax1
	[ ] // INTEGER iPrbChkMax2
	[ ] // INTEGER iPrbChkMax3
	[ ] // INTEGER iPrbChkMax4
	[ ] // INTEGER iPrbChkMin1
	[ ] // INTEGER iPrbChkMin2
	[ ] // INTEGER iPrbChkMin3
	[ ] // INTEGER iPrbChkMin4
	[ ] // STRING sInvalidBias1
	[ ] // STRING sInvalidBias2
	[ ] // STRING sInvalidBias3
	[ ] // STRING sInvalidBias4
	[ ] // INTEGER iCurveFit
	[ ] // INTEGER iSignalLoss
	[ ] // INTEGER iNumberCyclesInStage
	[ ] // STRING sGenotypingDetail
	[ ] // STRING sDefaultResultText
	[ ] // STRING sDefaultResultColor
	[ ] // STRING sDisclaimers
[ ] 
[+] // type REC_6ANALYTES_GT is record
	[ ] // STRING sNAME  
	[ ] // STRING sAnalyteName1 
	[ ] // STRING sReporter1 
	[ ] // STRING sAnalyteName2 
	[ ] // STRING sReporter2 
	[ ] // STRING sAnalyteName3 
	[ ] // STRING sReporter3 
	[ ] // STRING sAnalyteName4 
	[ ] // STRING sReporter4 
	[ ] // STRING sAnalyteName5 
	[ ] // STRING sReporter5 
	[ ] // STRING sAnalyteName6 
	[ ] // STRING sReporter6 
	[ ] // STRING sUsage1 
	[ ] // STRING sUsage2  
	[ ] // STRING sUsage3 
	[ ] // STRING sUsage4  
	[ ] // STRING sUsage5 
	[ ] // STRING sUsage6  
	[ ] // INTEGER iBkgndSub  
	[ ] // INTEGER iBkgndVMin1 
	[ ] // INTEGER iBkgndVMax1 
	[ ] // INTEGER iBkgndVMin2  
	[ ] // INTEGER iBkgndVMax2 
	[ ] // INTEGER iBkgndVMin3 
	[ ] // INTEGER iBkgndVMax3 
	[ ] // INTEGER iBkgndVMin4  
	[ ] // INTEGER iBkgndVMax4 
	[ ] // INTEGER iBkgndVMin5 
	[ ] // INTEGER iBkgndVMax5 
	[ ] // INTEGER iBkgndVMin6  
	[ ] // INTEGER iBkgndVMax6 
	[ ] // REAL rThreshold1 
	[ ] // REAL rThreshold2 
	[ ] // REAL rThreshold3 
	[ ] // REAL rThreshold4 
	[ ] // REAL rThreshold5 
	[ ] // REAL rThreshold6 
	[ ] // STRING sCurveAnalysis1
	[ ] // STRING sCurveAnalysis2
	[ ] // STRING sCurveAnalysis3
	[ ] // STRING sCurveAnalysis4
	[ ] // STRING sCurveAnalysis5
	[ ] // STRING sCurveAnalysis6
	[ ] // INTEGER iBoxcar1 
	[ ] // INTEGER iBoxcar2 
	[ ] // INTEGER iBoxcar3 
	[ ] // INTEGER iBoxcar4 
	[ ] // INTEGER iBoxcar5 
	[ ] // INTEGER iBoxcar6 
	[ ] // INTEGER iVMin1 
	[ ] // INTEGER iVMax1 
	[ ] // INTEGER iVMin2  
	[ ] // INTEGER iVMax2 
	[ ] // INTEGER iVMin3 
	[ ] // INTEGER iVMax3 
	[ ] // INTEGER iVMin4  
	[ ] // INTEGER iVMax4 
	[ ] // INTEGER iVMin5 
	[ ] // INTEGER iVMax5 
	[ ] // INTEGER iVMin6  
	[ ] // INTEGER iVMax6 
	[ ] // INTEGER iUseEndPt1
	[ ] // INTEGER iUseEndPt2
	[ ] // INTEGER iUseEndPt3
	[ ] // INTEGER iUseEndPt4
	[ ] // INTEGER iUseEndPt5
	[ ] // INTEGER iUseEndPt6
	[ ] // INTEGER iEndPt1
	[ ] // INTEGER iEndPt2
	[ ] // INTEGER iEndPt3
	[ ] // INTEGER iEndPt4
	[ ] // INTEGER iEndPt5
	[ ] // INTEGER iEndPt6
	[ ] // STRING sInvalidBias1
	[ ] // STRING sInvalidBias2
	[ ] // STRING sInvalidBias3
	[ ] // STRING sInvalidBias4
	[ ] // STRING sInvalidBias5
	[ ] // STRING sInvalidBias6
	[ ] // INTEGER iCurveFit
	[ ] // INTEGER iSignalLoss
	[ ] // INTEGER iNumberCyclesInStage
	[ ] // STRING sGenotypingDetail
	[ ] // STRING sDefaultResultText
	[ ] // STRING sDefaultResultColor
	[ ] // STRING sDisclaimers
[ ] 
[+] type REC_CUSTOMIZE_GT is record
	[ ] STRING sGenotypingName
	[ ] STRING sAnalyte1
	[ ] STRING sAnalyte2
	[ ] STRING sAnalyte3
	[ ] STRING sAnalyte4
	[ ] STRING sAnalyte5
	[ ] STRING sAnalyte6
	[ ] STRING sEarlyDeltaCtMax
	[ ] STRING sLateDeltaCtMax
	[ ] STRING sCustomize
	[ ] INTEGER iPosition
[ ] 
[+] type REC_GENOTYPING_DETAIL is record
	[ ] STRING sAnalyte1
	[ ] STRING sAnalyte2
	[ ] STRING sDeltaCtResult
	[ ] STRING sResultText
	[ ] STRING sResultColor
[ ] 
[ ] // The following data types are used for Haplotype processing
[+] // type REC_2ANALYTES_HP is record
	[ ] // STRING sNAME  
	[ ] // STRING sAnalyteName1 
	[ ] // STRING sReporter1 
	[ ] // STRING sAnalyteName2 
	[ ] // STRING sReporter2 
	[ ] // STRING sUsage1 
	[ ] // STRING sUsage2  
	[ ] // INTEGER iBkgndSub  
	[ ] // INTEGER iBkgndVMin1 
	[ ] // INTEGER iBkgndVMax1 
	[ ] // INTEGER iBkgndVMin2  
	[ ] // INTEGER iBkgndVMax2 
	[ ] // REAL rThreshold1 
	[ ] // REAL rThreshold2 
	[ ] // STRING sCurveAnalysis1
	[ ] // STRING sCurveAnalysis2
	[ ] // INTEGER iBoxcar1 
	[ ] // INTEGER iBoxcar2 
	[ ] // INTEGER iVMin1 
	[ ] // INTEGER iVMax1 
	[ ] // INTEGER iVMin2  
	[ ] // INTEGER iVMax2 
	[ ] // INTEGER iUseEndPt1
	[ ] // INTEGER iUseEndPt2
	[ ] // INTEGER iEndPt1
	[ ] // INTEGER iEndPt2
	[ ] // STRING sInvalidBias1
	[ ] // STRING sInvalidBias2
	[ ] // INTEGER iCurveFit
	[ ] // INTEGER iSignalLoss
	[ ] // INTEGER iNumberCyclesInStage
	[ ] // STRING sGenotypingDetail
	[ ] // STRING sDefaultResultText
	[ ] // STRING sDefaultResultColor
	[ ] // STRING sDisclaimers
	[ ] // STRING sHaplotype
[ ] // 
[+] // type REC_4ANALYTES_HP is record
	[ ] // STRING sNAME  
	[ ] // STRING sAnalyteName1 
	[ ] // STRING sReporter1 
	[ ] // STRING sAnalyteName2 
	[ ] // STRING sReporter2 
	[ ] // STRING sAnalyteName3 
	[ ] // STRING sReporter3 
	[ ] // STRING sAnalyteName4 
	[ ] // STRING sReporter4 
	[ ] // STRING sUsage1 
	[ ] // STRING sUsage2  
	[ ] // STRING sUsage3 
	[ ] // STRING sUsage4  
	[ ] // INTEGER iBkgndSub  
	[ ] // INTEGER iBkgndVMin1 
	[ ] // INTEGER iBkgndVMax1 
	[ ] // INTEGER iBkgndVMin2  
	[ ] // INTEGER iBkgndVMax2 
	[ ] // INTEGER iBkgndVMin3 
	[ ] // INTEGER iBkgndVMax3 
	[ ] // INTEGER iBkgndVMin4  
	[ ] // INTEGER iBkgndVMax4 
	[ ] // REAL rThreshold1 
	[ ] // REAL rThreshold2 
	[ ] // REAL rThreshold3 
	[ ] // REAL rThreshold4 
	[ ] // STRING sCurveAnalysis1
	[ ] // STRING sCurveAnalysis2
	[ ] // STRING sCurveAnalysis3
	[ ] // STRING sCurveAnalysis4
	[ ] // INTEGER iBoxcar1 
	[ ] // INTEGER iBoxcar2 
	[ ] // INTEGER iBoxcar3 
	[ ] // INTEGER iBoxcar4 
	[ ] // INTEGER iVMin1 
	[ ] // INTEGER iVMax1 
	[ ] // INTEGER iVMin2  
	[ ] // INTEGER iVMax2 
	[ ] // INTEGER iVMin3 
	[ ] // INTEGER iVMax3 
	[ ] // INTEGER iVMin4  
	[ ] // INTEGER iVMax4 
	[ ] // INTEGER iUseEndPt1
	[ ] // INTEGER iUseEndPt2
	[ ] // INTEGER iUseEndPt3
	[ ] // INTEGER iUseEndPt4
	[ ] // INTEGER iEndPt1
	[ ] // INTEGER iEndPt2
	[ ] // INTEGER iEndPt3
	[ ] // INTEGER iEndPt4
	[ ] // STRING sInvalidBias1
	[ ] // STRING sInvalidBias2
	[ ] // STRING sInvalidBias3
	[ ] // STRING sInvalidBias4
	[ ] // INTEGER iCurveFit
	[ ] // INTEGER iSignalLoss
	[ ] // INTEGER iNumberCyclesInStage
	[ ] // STRING sGenotypingDetail
	[ ] // STRING sDefaultResultText
	[ ] // STRING sDefaultResultColor
	[ ] // STRING sDisclaimers
	[ ] // STRING sHaplotype
[ ] // 
[+] // type REC_6ANALYTES_HP is record
	[ ] // STRING sNAME  
	[ ] // STRING sAnalyteName1 
	[ ] // STRING sReporter1 
	[ ] // STRING sAnalyteName2 
	[ ] // STRING sReporter2 
	[ ] // STRING sAnalyteName3 
	[ ] // STRING sReporter3 
	[ ] // STRING sAnalyteName4 
	[ ] // STRING sReporter4 
	[ ] // STRING sAnalyteName5 
	[ ] // STRING sReporter5 
	[ ] // STRING sAnalyteName6 
	[ ] // STRING sReporter6 
	[ ] // STRING sUsage1 
	[ ] // STRING sUsage2  
	[ ] // STRING sUsage3 
	[ ] // STRING sUsage4  
	[ ] // STRING sUsage5 
	[ ] // STRING sUsage6  
	[ ] // INTEGER iBkgndSub  
	[ ] // INTEGER iBkgndVMin1 
	[ ] // INTEGER iBkgndVMax1 
	[ ] // INTEGER iBkgndVMin2  
	[ ] // INTEGER iBkgndVMax2 
	[ ] // INTEGER iBkgndVMin3 
	[ ] // INTEGER iBkgndVMax3 
	[ ] // INTEGER iBkgndVMin4  
	[ ] // INTEGER iBkgndVMax4 
	[ ] // INTEGER iBkgndVMin5 
	[ ] // INTEGER iBkgndVMax5 
	[ ] // INTEGER iBkgndVMin6  
	[ ] // INTEGER iBkgndVMax6 
	[ ] // REAL rThreshold1 
	[ ] // REAL rThreshold2 
	[ ] // REAL rThreshold3 
	[ ] // REAL rThreshold4 
	[ ] // REAL rThreshold5 
	[ ] // REAL rThreshold6 
	[ ] // STRING sCurveAnalysis1
	[ ] // STRING sCurveAnalysis2
	[ ] // STRING sCurveAnalysis3
	[ ] // STRING sCurveAnalysis4
	[ ] // STRING sCurveAnalysis5
	[ ] // STRING sCurveAnalysis6
	[ ] // INTEGER iBoxcar1 
	[ ] // INTEGER iBoxcar2 
	[ ] // INTEGER iBoxcar3 
	[ ] // INTEGER iBoxcar4 
	[ ] // INTEGER iBoxcar5 
	[ ] // INTEGER iBoxcar6 
	[ ] // INTEGER iVMin1 
	[ ] // INTEGER iVMax1 
	[ ] // INTEGER iVMin2  
	[ ] // INTEGER iVMax2 
	[ ] // INTEGER iVMin3 
	[ ] // INTEGER iVMax3 
	[ ] // INTEGER iVMin4  
	[ ] // INTEGER iVMax4 
	[ ] // INTEGER iVMin5 
	[ ] // INTEGER iVMax5 
	[ ] // INTEGER iVMin6  
	[ ] // INTEGER iVMax6 
	[ ] // INTEGER iUseEndPt1
	[ ] // INTEGER iUseEndPt2
	[ ] // INTEGER iUseEndPt3
	[ ] // INTEGER iUseEndPt4
	[ ] // INTEGER iUseEndPt5
	[ ] // INTEGER iUseEndPt6
	[ ] // INTEGER iEndPt1
	[ ] // INTEGER iEndPt2
	[ ] // INTEGER iEndPt3
	[ ] // INTEGER iEndPt4
	[ ] // INTEGER iEndPt5
	[ ] // INTEGER iEndPt6
	[ ] // STRING sInvalidBias1
	[ ] // STRING sInvalidBias2
	[ ] // STRING sInvalidBias3
	[ ] // STRING sInvalidBias4
	[ ] // STRING sInvalidBias5
	[ ] // STRING sInvalidBias6
	[ ] // INTEGER iCurveFit
	[ ] // INTEGER iSignalLoss
	[ ] // INTEGER iNumberCyclesInStage
	[ ] // STRING sGenotypingDetail
	[ ] // STRING sDefaultResultText
	[ ] // STRING sDefaultResultColor
	[ ] // STRING sDisclaimers
	[ ] // STRING sHaplotype
[ ] 
[+] type REC_CUSTOMIZE_HP is record
	[ ] STRING sGenotypingName
	[ ] STRING sAnalyte1
	[ ] STRING sAnalyte2
	[ ] STRING sAnalyte3
	[ ] STRING sAnalyte4
	[ ] STRING sAnalyte5
	[ ] STRING sAnalyte6
	[ ] STRING sAnalyte7
	[ ] STRING sAnalyte8
	[ ] STRING sAnalyte9
	[ ] STRING sAnalyte10
	[ ] STRING sAnalyte11
	[ ] STRING sAnalyte12
	[ ] STRING sEarlyDeltaCtMax
	[ ] STRING sLateDeltaCtMax
	[ ] STRING sCustomize
	[ ] INTEGER iPosition
[ ] 
[+] type REC_HAPLOTYPE is record
	[ ] STRING sHaplotypeName
	[ ] STRING sHaplotypeDetail
	[ ] STRING sGene1
	[ ] STRING sGene2
	[ ] STRING sGene3
	[ ] STRING sGene4
	[ ] INTEGER iPosition
[ ] 
[+] type REC_HAPLOTYPE_DETAIL is record
	[ ] STRING sGene1
	[ ] STRING sGene2
	[ ] STRING sGene3
	[ ] STRING sAllele1
	[ ] STRING sAllele2
	[ ] STRING sResultColor
[ ] 
[ ] // The following data types are used in define Assays scripts in D8380 Probe Check.  
[ ] // These data tipe contain records for protocol stages setup
[+] type REC_1_ANALYTE  is record
	[ ] STRING sNAME  
	[ ] STRING sAnalyteName1 
	[ ] STRING sReporter1 
	[ ] INTEGER iNumberCycle
	[ ] INTEGER iBkgndSub  
	[ ] INTEGER iBkgndVMin1 
	[ ] INTEGER iBkgndVMax1 
	[ ] REAL rThreshold1 
	[ ] INTEGER iBoxcar1 
	[ ] STRING sCurveAnalysis1
	[ ] INTEGER iNormFactor1D
	[ ] INTEGER iNormFactor1
	[ ] INTEGER iVMin1 
	[ ] INTEGER iVMax1 
	[ ] STRING sUsage1 
	[ ] INTEGER iUseEndPt1
	[ ] INTEGER iEndPt1
	[ ] STRING  sInvalidBias1
	[ ] STRING sPeakHeightMin1
	[ ] INTEGER iPrbChk
	[ ] INTEGER iPrbChk13Max1
	[ ] INTEGER iPrbChk2Min1
	[ ] INTEGER iPrbChkDeltaMin1
	[ ] INTEGER iUseMinTargetDeltaCt1
	[ ] STRING  sMinTargetDeltaCt1
	[ ] STRING sDeltaCtE1
	[ ] STRING sCurveFit
	[ ] STRING sSignalLoss
[ ] 
[ ] //
[+] // type REC_2_ANALYTES  is record
	[ ] // STRING NAME  
	[ ] // STRING AnalyteName1 
	[ ] // STRING Reporter1 
	[ ] // STRING AnalyteName2 
	[ ] // STRING Reporter2 
	[ ] // INTEGER NumberCycle
	[ ] // INTEGER BkgndSub  
	[ ] // INTEGER BkgndVMin1 
	[ ] // INTEGER BkgndVMax1 
	[ ] // INTEGER BkgndVMin2  
	[ ] // INTEGER BkgndVMax2 
	[ ] // REAL Threshold1 
	[ ] // REAL Threshold2 
	[ ] // INTEGER Boxcar1 
	[ ] // INTEGER Boxcar2 
	[ ] // STRING CurveAnalysis1
	[ ] // STRING CurveAnalysis2
	[ ] // INTEGER NormFactor1D
	[ ] // INTEGER NormFactor1
	[ ] // INTEGER NormFactor2D
	[ ] // INTEGER NormFactor2
	[ ] // INTEGER VMin1 
	[ ] // INTEGER VMax1 
	[ ] // INTEGER VMin2  
	[ ] // INTEGER VMax2 
	[ ] // STRING Ausage1 
	[ ] // STRING Ausage2  
	[ ] // INTEGER UseEndPt1
	[ ] // INTEGER UseEndPt2
	[ ] // INTEGER EndPt1
	[ ] // INTEGER EndPt2
	[ ] // INTEGER AnalyteTargetIC1
	[ ] // INTEGER SelectTarget1ForIC
	[ ] // INTEGER AnalyteTargetSPC1
	[ ] // INTEGER SelectTarget1ForSPC
	[ ] // INTEGER AnalyteTargetEC1
	[ ] // INTEGER SelectTarget1ForEC
	[ ] // STRING  InvalidBias1
	[ ] // STRING  InvalidBias2
	[ ] // STRING PeakHeightMin1
	[ ] // STRING PeakHeightMin2
	[ ] // INTEGER PrbChk
	[ ] // INTEGER PrbChk13Max1
	[ ] // INTEGER PrbChk2Min1
	[ ] // INTEGER PrbChkDeltaMin1
	[ ] // INTEGER PrbChk13Max2
	[ ] // INTEGER PrbChk2Min2
	[ ] // INTEGER PrbChkDeltaMin2
	[ ] // INTEGER UseMinTargetDeltaCt1
	[ ] // INTEGER UseMinTargetDeltaCt2
	[ ] // STRING  MinTargetDeltaCt1
	[ ] // STRING  MinTargetDeltaCt2
	[ ] // INTEGER DeltaCtE1
	[ ] // INTEGER DeltaCtE2
	[ ] // STRING CurveFit
	[ ] // STRING SignalLoss
[ ] // //
[+] // type REC_3_ANALYTES  is record
	[ ] // STRING NAME  
	[ ] // STRING AnalyteName1 
	[ ] // STRING Reporter1 
	[ ] // STRING AnalyteName2 
	[ ] // STRING Reporter2 
	[ ] // STRING AnalyteName3 
	[ ] // STRING Reporter3 
	[ ] // INTEGER NumberCycle
	[ ] // INTEGER BkgndSub  
	[ ] // INTEGER BkgndVMin1 
	[ ] // INTEGER BkgndVMax1 
	[ ] // INTEGER BkgndVMin2  
	[ ] // INTEGER BkgndVMax2 
	[ ] // INTEGER BkgndVMin3
	[ ] // INTEGER BkgndVMax3 
	[ ] // REAL Threshold1 
	[ ] // REAL Threshold2 
	[ ] // REAL Threshold3
	[ ] // INTEGER Boxcar1 
	[ ] // INTEGER Boxcar2 
	[ ] // INTEGER Boxcar3 
	[ ] // STRING CurveAnalysis1
	[ ] // STRING CurveAnalysis2
	[ ] // STRING CurveAnalysis3
	[ ] // INTEGER NormFactor1D
	[ ] // INTEGER NormFactor1
	[ ] // INTEGER NormFactor2D
	[ ] // INTEGER NormFactor2
	[ ] // INTEGER NormFactor3D
	[ ] // INTEGER NormFactor3
	[ ] // INTEGER VMin1 
	[ ] // INTEGER VMax1 
	[ ] // INTEGER VMin2  
	[ ] // INTEGER VMax2 
	[ ] // INTEGER VMin3 
	[ ] // INTEGER VMax3
	[ ] // STRING Ausage1 
	[ ] // STRING Ausage2  
	[ ] // STRING Ausage3  
	[ ] // INTEGER UseEndPt1
	[ ] // INTEGER UseEndPt2
	[ ] // INTEGER UseEndPt3
	[ ] // INTEGER EndPt1
	[ ] // INTEGER EndPt2
	[ ] // INTEGER EndPt3
	[ ] // INTEGER AnalyteTargetIC1
	[ ] // INTEGER SelectTarget1ForIC
	[ ] // INTEGER AnalyteTargetIC2
	[ ] // INTEGER SelectTarget2ForIC  
	[ ] // INTEGER AnalyteTargetSPC1
	[ ] // INTEGER SelectTarget1ForSPC
	[ ] // INTEGER AnalyteTargetSPC2
	[ ] // INTEGER SelectTarget2ForSPC
	[ ] // INTEGER AnalyteTargetEC1
	[ ] // INTEGER SelectTarget1ForEC
	[ ] // INTEGER AnalyteTargetEC2
	[ ] // INTEGER SelectTarget2ForEC
	[ ] // STRING  InvalidBias1
	[ ] // STRING  InvalidBias2
	[ ] // STRING  InvalidBias3
	[ ] // STRING PeakHeightMin1
	[ ] // STRING PeakHeightMin2
	[ ] // STRING  PeakHeightMin3
	[ ] // INTEGER PrbChk
	[ ] // INTEGER PrbChk13Max1
	[ ] // INTEGER PrbChk2Min1
	[ ] // INTEGER PrbChkDeltaMin1
	[ ] // INTEGER PrbChk13Max2
	[ ] // INTEGER PrbChk2Min2
	[ ] // INTEGER PrbChkDeltaMin2
	[ ] // INTEGER PrbChk13Max3
	[ ] // INTEGER PrbChk2Min3
	[ ] // INTEGER PrbChkDeltaMin3
	[ ] // INTEGER UseMinTargetDeltaCt1
	[ ] // INTEGER UseMinTargetDeltaCt2
	[ ] // INTEGER UseMinTargetDeltaCt3
	[ ] // STRING MinTargetDeltaCt1
	[ ] // STRING  MinTargetDeltaCt2
	[ ] // STRING  MinTargetDeltaCt3
	[ ] // INTEGER DeltaCtE1
	[ ] // INTEGER DeltaCtE2
	[ ] // INTEGER DeltaCtE3
	[ ] // STRING CurveFit
	[ ] // STRING SignalLoss
[ ] // //
[+] // type REC_4_ANALYTES  is record
	[ ] // STRING NAME  
	[ ] // STRING AnalyteName1 
	[ ] // STRING Reporter1 
	[ ] // STRING AnalyteName2 
	[ ] // STRING Reporter2 
	[ ] // STRING AnalyteName3 
	[ ] // STRING Reporter3 
	[ ] // STRING AnalyteName4 
	[ ] // STRING Reporter4 
	[ ] // INTEGER NumberCyclesInStage
	[ ] // INTEGER BkgndSub  
	[ ] // INTEGER BkgndVMin1 
	[ ] // INTEGER BkgndVMax1 
	[ ] // INTEGER BkgndVMin2  
	[ ] // INTEGER BkgndVMax2 
	[ ] // INTEGER BkgndVMin3 
	[ ] // INTEGER BkgndVMax3 
	[ ] // INTEGER BkgndVMin4 
	[ ] // INTEGER BkgndVMax4
	[ ] // REAL Threshold1 
	[ ] // REAL Threshold2 
	[ ] // REAL Threshold3 
	[ ] // REAL Threshold4 
	[ ] // INTEGER Boxcar1 
	[ ] // INTEGER Boxcar2 
	[ ] // INTEGER Boxcar3 
	[ ] // INTEGER Boxcar4 
	[ ] // STRING CurveAnalysis1
	[ ] // STRING CurveAnalysis2
	[ ] // STRING CurveAnalysis3
	[ ] // STRING CurveAnalysis4
	[ ] // INTEGER NormFactor1D
	[ ] // INTEGER NormFactor1
	[ ] // INTEGER NormFactor2D
	[ ] // INTEGER  NormFactor2
	[ ] // INTEGER  NormFactor3D
	[ ] // INTEGER NormFactor3
	[ ] // INTEGER NormFactor4D
	[ ] // INTEGER NormFactor4
	[ ] // INTEGER VMin1 
	[ ] // INTEGER VMax1 
	[ ] // INTEGER VMin2  
	[ ] // INTEGER VMax2 
	[ ] // INTEGER VMin3 
	[ ] // INTEGER VMax3 
	[ ] // INTEGER VMin4 
	[ ] // INTEGER VMax4 
	[ ] // STRING Ausage1 
	[ ] // STRING Ausage2  
	[ ] // STRING Ausage3 
	[ ] // STRING Ausage4 
	[ ] // INTEGER UseEndPt1
	[ ] // INTEGER UseEndPt2
	[ ] // INTEGER UseEndPt3
	[ ] // INTEGER UseEndPt4
	[ ] // INTEGER EndPt1
	[ ] // INTEGER EndPt2
	[ ] // INTEGER EndPt3
	[ ] // INTEGER EndPt4
	[ ] // INTEGER AnalyteTargetIC1
	[ ] // INTEGER SelectTarget1ForIC
	[ ] // INTEGER AnalyteTargetIC2
	[ ] // INTEGER SelectTarget2ForIC  
	[ ] // INTEGER AnalyteTargetIC3
	[ ] // INTEGER SelectTarget3ForIC  
	[ ] // INTEGER AnalyteTargetSPC1
	[ ] // INTEGER SelectTarget1ForSPC
	[ ] // INTEGER AnalyteTargetSPC2
	[ ] // INTEGER SelectTarget2ForSPC
	[ ] // INTEGER AnalyteTargetSPC3
	[ ] // INTEGER SelectTarget3ForSPC
	[ ] // INTEGER AnalyteTargetEC1
	[ ] // INTEGER SelectTarget1ForEC
	[ ] // INTEGER AnalyteTargetEC2
	[ ] // INTEGER SelectTarget2ForEC
	[ ] // INTEGER AnalyteTargetEC3
	[ ] // INTEGER SelectTarget3ForEC
	[ ] // STRING  InvalidBias1
	[ ] // STRING  InvalidBias2
	[ ] // STRING  InvalidBias3
	[ ] // STRING  InvalidBias4
	[ ] // STRING PeakHeightMin1
	[ ] // STRING PeakHeightMin2
	[ ] // STRING PeakHeightMin3
	[ ] // STRING PeakHeightMin4
	[ ] // INTEGER PrbChk
	[ ] // INTEGER PrbChk13Max1
	[ ] // INTEGER PrbChk2Min1
	[ ] // INTEGER PrbChkDeltaMin1
	[ ] // INTEGER PrbChk13Max2
	[ ] // INTEGER PrbChk2Min2
	[ ] // INTEGER PrbChkDeltaMin2
	[ ] // INTEGER PrbChk13Max3
	[ ] // INTEGER PrbChk2Min3
	[ ] // INTEGER PrbChkDeltaMin3
	[ ] // INTEGER PrbChk13Max4
	[ ] // INTEGER PrbChk2Min4
	[ ] // INTEGER PrbChkDeltaMin4
	[ ] // INTEGER UseMinTargetDeltaCt1
	[ ] // INTEGER UseMinTargetDeltaCt2
	[ ] // INTEGER UseMinTargetDeltaCt3
	[ ] // INTEGER UseMinTargetDeltaCt4
	[ ] // STRING MinTargetDeltaCt1
	[ ] // STRING MinTargetDeltaCt2
	[ ] // STRING MinTargetDeltaCt3
	[ ] // STRING MinTargetDeltaCt4
	[ ] // STRING DeltaCtE1
	[ ] // STRING DeltaCtE2
	[ ] // STRING DeltaCtE3
	[ ] // STRING DeltaCtE4
	[ ] // STRING CurveFit
	[ ] // STRING SignalLoss
[ ] // //
[+] // type REC_6_ANALYTES is record
	[ ] // STRING NAME  
	[ ] // STRING AnalyteName1 
	[ ] // STRING Reporter1 
	[ ] // STRING AnalyteName2 
	[ ] // STRING Reporter2 
	[ ] // STRING AnalyteName3 
	[ ] // STRING Reporter3 
	[ ] // STRING AnalyteName4 
	[ ] // STRING Reporter4 
	[ ] // STRING AnalyteName5 
	[ ] // STRING Reporter5
	[ ] // STRING AnalyteName6 
	[ ] // STRING Reporter6 
	[ ] // INTEGER NumberCyclesInStage
	[ ] // INTEGER BkgndSub  
	[ ] // INTEGER BkgndVMin1 
	[ ] // INTEGER BkgndVMax1 
	[ ] // INTEGER BkgndVMin2  
	[ ] // INTEGER BkgndVMax2 
	[ ] // INTEGER BkgndVMin3 
	[ ] // INTEGER BkgndVMax3 
	[ ] // INTEGER BkgndVMin4 
	[ ] // INTEGER BkgndVMax4
	[ ] // INTEGER BkgndVMin5 
	[ ] // INTEGER BkgndVMax5
	[ ] // INTEGER BkgndVMin6 
	[ ] // INTEGER BkgndVMax6
	[ ] // REAL Threshold1 
	[ ] // REAL Threshold2 
	[ ] // REAL Threshold3 
	[ ] // REAL Threshold4 
	[ ] // REAL Threshold5
	[ ] // REAL Threshold6
	[ ] // INTEGER Boxcar1 
	[ ] // INTEGER Boxcar2 
	[ ] // INTEGER Boxcar3 
	[ ] // INTEGER Boxcar4 
	[ ] // INTEGER Boxcar5
	[ ] // INTEGER Boxcar6
	[ ] // STRING CurveAnalysis1
	[ ] // STRING CurveAnalysis2
	[ ] // STRING CurveAnalysis3
	[ ] // STRING CurveAnalysis4
	[ ] // STRING CurveAnalysis5
	[ ] // STRING CurveAnalysis6
	[ ] // INTEGER NormFactor1D
	[ ] // INTEGER NormFactor1
	[ ] // INTEGER NormFactor2D
	[ ] // INTEGER NormFactor2
	[ ] // INTEGER NormFactor3D
	[ ] // INTEGER NormFactor3
	[ ] // INTEGER NormFactor4D
	[ ] // INTEGER NormFactor4
	[ ] // INTEGER NormFactor5D
	[ ] // INTEGER NormFactor5
	[ ] // INTEGER NormFactor6D
	[ ] // INTEGER NormFactor6
	[ ] // INTEGER VMin1 
	[ ] // INTEGER VMax1 
	[ ] // INTEGER VMin2  
	[ ] // INTEGER VMax2 
	[ ] // INTEGER VMin3 
	[ ] // INTEGER VMax3 
	[ ] // INTEGER VMin4 
	[ ] // INTEGER VMax4 
	[ ] // INTEGER VMin5 
	[ ] // INTEGER VMax5
	[ ] // INTEGER VMin6
	[ ] // INTEGER VMax6 
	[ ] // STRING Ausage1 
	[ ] // STRING Ausage2  
	[ ] // STRING Ausage3 
	[ ] // STRING Ausage4 
	[ ] // STRING Ausage5
	[ ] // STRING Ausage6
	[ ] // INTEGER UseEndPt1
	[ ] // INTEGER UseEndPt2
	[ ] // INTEGER UseEndPt3
	[ ] // INTEGER UseEndPt4
	[ ] // INTEGER UseEndPt5
	[ ] // INTEGER UseEndPt6
	[ ] // INTEGER EndPt1
	[ ] // INTEGER EndPt2
	[ ] // INTEGER EndPt3
	[ ] // INTEGER EndPt4
	[ ] // INTEGER EndPt5
	[ ] // INTEGER EndPt6
	[ ] // INTEGER AnalyteTargetIC1
	[ ] // INTEGER SelectTarget1ForIC
	[ ] // INTEGER AnalyteTargetIC2
	[ ] // INTEGER SelectTarget2ForIC  
	[ ] // INTEGER AnalyteTargetIC3
	[ ] // INTEGER SelectTarget3ForIC
	[ ] // INTEGER AnalyteTargetIC4
	[ ] // INTEGER SelectTarget4ForIC
	[ ] // INTEGER AnalyteTargetIC5
	[ ] // INTEGER SelectTarget5ForIC
	[ ] //  // 
	[ ] // INTEGER AnalyteTargetSPC1
	[ ] // INTEGER SelectTarget1ForSPC
	[ ] // INTEGER AnalyteTargetSPC2
	[ ] // INTEGER SelectTarget2ForSPC
	[ ] // INTEGER AnalyteTargetSPC3
	[ ] // INTEGER SelectTarget3ForSPC
	[ ] // INTEGER AnalyteTargetSPC4
	[ ] // INTEGER SelectTarget4ForSPC
	[ ] // INTEGER AnalyteTargetSPC5
	[ ] // INTEGER SelectTarget5ForSPC
	[ ] // //
	[ ] // INTEGER AnalyteTargetEC1
	[ ] // INTEGER SelectTarget1ForEC
	[ ] // INTEGER AnalyteTargetEC2
	[ ] // INTEGER SelectTarget2ForEC
	[ ] // INTEGER AnalyteTargetEC3
	[ ] // INTEGER SelectTarget3ForEC
	[ ] // INTEGER AnalyteTargetEC4
	[ ] // INTEGER SelectTarget4ForEC
	[ ] // INTEGER AnalyteTargetEC5
	[ ] // INTEGER SelectTarget5ForEC
	[ ] // //
	[ ] // STRING  InvalidBias1
	[ ] // STRING  InvalidBias2
	[ ] // STRING  InvalidBias3
	[ ] // STRING  InvalidBias4
	[ ] // STRING  InvalidBias5
	[ ] // STRING  InvalidBias6
	[ ] // STRING PeakHeightMin1
	[ ] // STRING PeakHeightMin2
	[ ] // STRING PeakHeightMin3
	[ ] // STRING PeakHeightMin4
	[ ] // STRING PeakHeightMin5
	[ ] // STRING PeakHeightMin6
	[ ] // INTEGER PrbChk
	[ ] // INTEGER PrbChk13Max1
	[ ] // INTEGER PrbChk2Min1
	[ ] // INTEGER PrbChkDeltaMin1
	[ ] // INTEGER PrbChk13Max2
	[ ] // INTEGER PrbChk2Min2
	[ ] // INTEGER PrbChkDeltaMin2
	[ ] // INTEGER PrbChk13Max3
	[ ] // INTEGER PrbChk2Min3
	[ ] // INTEGER PrbChkDeltaMin3
	[ ] // INTEGER PrbChk13Max4
	[ ] // INTEGER PrbChk2Min4
	[ ] // INTEGER PrbChkDeltaMin4
	[ ] // INTEGER PrbChk13Max5
	[ ] // INTEGER PrbChk2Min5
	[ ] // INTEGER PrbChkDeltaMin5
	[ ] // INTEGER PrbChk13Max6
	[ ] // INTEGER PrbChk2Min6
	[ ] // INTEGER PrbChkDeltaMin6
	[ ] // //
	[ ] // INTEGER UseMinTargetDeltaCt1
	[ ] // INTEGER UseMinTargetDeltaCt2
	[ ] // INTEGER UseMinTargetDeltaCt3
	[ ] // INTEGER UseMinTargetDeltaCt4
	[ ] // INTEGER UseMinTargetDeltaCt5
	[ ] // INTEGER UseMinTargetDeltaCt6
	[ ] // //
	[ ] // STRING MinTargetDeltaCt1
	[ ] // STRING MinTargetDeltaCt2
	[ ] // STRING MinTargetDeltaCt3
	[ ] // STRING MinTargetDeltaCt4
	[ ] // STRING MinTargetDeltaCt5
	[ ] // STRING MinTargetDeltaCt6
	[ ] // STRING DeltaCtE1
	[ ] // STRING DeltaCtE2
	[ ] // STRING DeltaCtE3
	[ ] // STRING DeltaCtE4
	[ ] // STRING DeltaCtE5
	[ ] // STRING DeltaCtE6
	[ ] // //
	[ ] // STRING CurveFit
	[ ] // STRING SignalLoss
	[ ] // //
[ ] // 
[ ] 
[ ] 
[ ] // This is the new record for 6 Analytes to be used by all projects
[+] type REC_6ANALYTES_NEW is record
	[ ] STRING sNAME  
	[ ] STRING sAnalyteName1 
	[ ] STRING sReporter1 
	[ ] STRING sAnalyteName2 
	[ ] STRING sReporter2 
	[ ] STRING sAnalyteName3 
	[ ] STRING sReporter3 
	[ ] STRING sAnalyteName4 
	[ ] STRING sReporter4 
	[ ] STRING sAnalyteName5 
	[ ] STRING sReporter5 
	[ ] STRING sAnalyteName6 
	[ ] STRING sReporter6 
	[ ] INTEGER iNumberCyclesInStage
	[ ] INTEGER iBkgndSub  
	[ ] INTEGER iBkgndVMin1 
	[ ] INTEGER iBkgndVMax1 
	[ ] INTEGER iBkgndVMin2  
	[ ] INTEGER iBkgndVMax2 
	[ ] INTEGER iBkgndVMin3 
	[ ] INTEGER iBkgndVMax3 
	[ ] INTEGER iBkgndVMin4 
	[ ] INTEGER iBkgndVMax4
	[ ] INTEGER iBkgndVMin5 
	[ ] INTEGER iBkgndVMax5
	[ ] INTEGER iBkgndVMin6 
	[ ] INTEGER iBkgndVMax6
	[ ] REAL rThreshold1 
	[ ] REAL rThreshold2 
	[ ] REAL rThreshold3 
	[ ] REAL rThreshold4 
	[ ] REAL rThreshold5
	[ ] REAL rThreshold6
	[ ] INTEGER iBoxcar1 
	[ ] INTEGER iBoxcar2 
	[ ] INTEGER iBoxcar3 
	[ ] INTEGER iBoxcar4 
	[ ] INTEGER iBoxcar5 
	[ ] INTEGER iBoxcar6 
	[ ] STRING sCurveAnalysis1
	[ ] STRING sCurveAnalysis2
	[ ] STRING sCurveAnalysis3
	[ ] STRING sCurveAnalysis4
	[ ] STRING sCurveAnalysis5
	[ ] STRING sCurveAnalysis6
	[ ] INTEGER iNormFactor1D
	[ ] INTEGER iNormFactor1
	[ ] INTEGER iNormFactor2D
	[ ] INTEGER iNormFactor2
	[ ] INTEGER iNormFactor3D
	[ ] INTEGER iNormFactor3
	[ ] INTEGER iNormFactor4D
	[ ] INTEGER iNormFactor4
	[ ] INTEGER iNormFactor5D
	[ ] INTEGER iNormFactor5
	[ ] INTEGER iNormFactor6D
	[ ] INTEGER iNormFactor6
	[ ] INTEGER iVMin1 
	[ ] INTEGER iVMax1 
	[ ] INTEGER iVMin2  
	[ ] INTEGER iVMax2 
	[ ] INTEGER iVMin3 
	[ ] INTEGER iVMax3 
	[ ] INTEGER iVMin4 
	[ ] INTEGER iVMax4 
	[ ] INTEGER iVMin5 
	[ ] INTEGER iVMax5
	[ ] INTEGER iVMin6
	[ ] INTEGER iVMax6 
	[ ] STRING sUsage1 
	[ ] STRING sUsage2  
	[ ] STRING sUsage3 
	[ ] STRING sUsage4  
	[ ] STRING sUsage5 
	[ ] STRING sUsage6  
	[ ] INTEGER iUseEndPt1
	[ ] INTEGER iUseEndPt2
	[ ] INTEGER iUseEndPt3
	[ ] INTEGER iUseEndPt4
	[ ] INTEGER iUseEndPt5
	[ ] INTEGER iUseEndPt6
	[ ] INTEGER iEndPt1
	[ ] INTEGER iEndPt2
	[ ] INTEGER iEndPt3
	[ ] INTEGER iEndPt4
	[ ] INTEGER iEndPt5
	[ ] INTEGER iEndPt6
	[ ] INTEGER iAnalyteTargetIC1
	[ ] INTEGER iSelectTarget1ForIC
	[ ] INTEGER iAnalyteTargetIC2
	[ ] INTEGER iSelectTarget2ForIC  
	[ ] INTEGER iAnalyteTargetIC3
	[ ] INTEGER iSelectTarget3ForIC
	[ ] INTEGER iAnalyteTargetIC4
	[ ] INTEGER iSelectTarget4ForIC
	[ ] INTEGER iAnalyteTargetIC5
	[ ] INTEGER iSelectTarget5ForIC
	[ ]  // 
	[ ] INTEGER iAnalyteTargetSPC1
	[ ] INTEGER iSelectTarget1ForSPC
	[ ] INTEGER iAnalyteTargetSPC2
	[ ] INTEGER iSelectTarget2ForSPC
	[ ] INTEGER iAnalyteTargetSPC3
	[ ] INTEGER iSelectTarget3ForSPC
	[ ] INTEGER iAnalyteTargetSPC4
	[ ] INTEGER iSelectTarget4ForSPC
	[ ] INTEGER iAnalyteTargetSPC5
	[ ] INTEGER iSelectTarget5ForSPC
	[ ] //
	[ ] INTEGER iAnalyteTargetEC1
	[ ] INTEGER iSelectTarget1ForEC
	[ ] INTEGER iAnalyteTargetEC2
	[ ] INTEGER iSelectTarget2ForEC
	[ ] INTEGER iAnalyteTargetEC3
	[ ] INTEGER iSelectTarget3ForEC
	[ ] INTEGER iAnalyteTargetEC4
	[ ] INTEGER iSelectTarget4ForEC
	[ ] INTEGER iAnalyteTargetEC5
	[ ] INTEGER iSelectTarget5ForEC
	[ ] //
	[ ] STRING  sInvalidBias1
	[ ] STRING  sInvalidBias2
	[ ] STRING  sInvalidBias3
	[ ] STRING  sInvalidBias4
	[ ] STRING  sInvalidBias5
	[ ] STRING  sInvalidBias6
	[ ] STRING sPeakHeightMin1
	[ ] STRING sPeakHeightMin2
	[ ] STRING sPeakHeightMin3
	[ ] STRING sPeakHeightMin4
	[ ] STRING sPeakHeightMin5
	[ ] STRING sPeakHeightMin6
	[ ] INTEGER iPrbChk
	[ ] INTEGER iPrbChk13Max1
	[ ] INTEGER iPrbChk2Min1
	[ ] INTEGER iPrbChkDeltaMin1
	[ ] INTEGER iPrbChk13Max2
	[ ] INTEGER iPrbChk2Min2
	[ ] INTEGER iPrbChkDeltaMin2
	[ ] INTEGER iPrbChk13Max3
	[ ] INTEGER iPrbChk2Min3
	[ ] INTEGER iPrbChkDeltaMin3
	[ ] INTEGER iPrbChk13Max4
	[ ] INTEGER iPrbChk2Min4
	[ ] INTEGER iPrbChkDeltaMin4
	[ ] INTEGER iPrbChk13Max5
	[ ] INTEGER iPrbChk2Min5
	[ ] INTEGER iPrbChkDeltaMin5
	[ ] INTEGER iPrbChk13Max6
	[ ] INTEGER iPrbChk2Min6
	[ ] INTEGER iPrbChkDeltaMin6
	[ ] //
	[ ] INTEGER iUseMinTargetDeltaCt1
	[ ] INTEGER iUseMinTargetDeltaCt2
	[ ] INTEGER iUseMinTargetDeltaCt3
	[ ] INTEGER iUseMinTargetDeltaCt4
	[ ] INTEGER iUseMinTargetDeltaCt5
	[ ] INTEGER iUseMinTargetDeltaCt6
	[ ] //
	[ ] STRING sMinTargetDeltaCt1
	[ ] STRING sMinTargetDeltaCt2
	[ ] STRING sMinTargetDeltaCt3
	[ ] STRING sMinTargetDeltaCt4
	[ ] STRING sMinTargetDeltaCt5
	[ ] STRING sMinTargetDeltaCt6
	[ ] STRING sDeltaCtE1
	[ ] STRING sDeltaCtE2
	[ ] STRING sDeltaCtE3
	[ ] STRING sDeltaCtE4
	[ ] STRING sDeltaCtE5
	[ ] STRING sDeltaCtE6
	[ ] //
	[ ] STRING sCurveFit
	[ ] STRING sSignalLoss
	[ ] //
	[ ] INTEGER iCrosstalk
	[ ] STRING sFrom1to2
	[ ] STRING sFrom1to3
	[ ] STRING sFrom1to4
	[ ] STRING sFrom1to5
	[ ] STRING sFrom1to6
	[ ] STRING sFrom2to1
	[ ] STRING sFrom2to3
	[ ] STRING sFrom2to4
	[ ] STRING sFrom2to5
	[ ] STRING sFrom2to6
	[ ] STRING sFrom3to1
	[ ] STRING sFrom3to2
	[ ] STRING sFrom3to4
	[ ] STRING sFrom3to5
	[ ] STRING sFrom3to6
	[ ] STRING sFrom4to1
	[ ] STRING sFrom4to2
	[ ] STRING sFrom4to3
	[ ] STRING sFrom4to5
	[ ] STRING sFrom4to6
	[ ] STRING sFrom5to1
	[ ] STRING sFrom5to2
	[ ] STRING sFrom5to3
	[ ] STRING sFrom5to4
	[ ] STRING sFrom5to6
	[ ] STRING sFrom6to1
	[ ] STRING sFrom6to2
	[ ] STRING sFrom6to3
	[ ] STRING sFrom6to4
	[ ] STRING sFrom6to5
	[ ] //
	[ ] STRING sProtocol1
	[ ] STRING sProtocol2
	[ ] STRING sDecision
	[ ] //
[ ] 
[ ] // This is the new record for 5 Analytes to be used by all projects
[+] type REC_5ANALYTES_NEW is record
	[ ] STRING sNAME  
	[ ] STRING sAnalyteName1 
	[ ] STRING sReporter1 
	[ ] STRING sAnalyteName2 
	[ ] STRING sReporter2 
	[ ] STRING sAnalyteName3 
	[ ] STRING sReporter3 
	[ ] STRING sAnalyteName4 
	[ ] STRING sReporter4 
	[ ] STRING sAnalyteName5 
	[ ] STRING sReporter5 
	[ ] INTEGER iNumberCyclesInStage
	[ ] INTEGER iBkgndSub  
	[ ] INTEGER iBkgndVMin1 
	[ ] INTEGER iBkgndVMax1 
	[ ] INTEGER iBkgndVMin2  
	[ ] INTEGER iBkgndVMax2 
	[ ] INTEGER iBkgndVMin3 
	[ ] INTEGER iBkgndVMax3 
	[ ] INTEGER iBkgndVMin4 
	[ ] INTEGER iBkgndVMax4
	[ ] INTEGER iBkgndVMin5 
	[ ] INTEGER iBkgndVMax5
	[ ] REAL rThreshold1 
	[ ] REAL rThreshold2 
	[ ] REAL rThreshold3 
	[ ] REAL rThreshold4 
	[ ] REAL rThreshold5
	[ ] INTEGER iBoxcar1 
	[ ] INTEGER iBoxcar2 
	[ ] INTEGER iBoxcar3 
	[ ] INTEGER iBoxcar4 
	[ ] INTEGER iBoxcar5 
	[ ] STRING sCurveAnalysis1
	[ ] STRING sCurveAnalysis2
	[ ] STRING sCurveAnalysis3
	[ ] STRING sCurveAnalysis4
	[ ] STRING sCurveAnalysis5
	[ ] INTEGER iNormFactor1D
	[ ] INTEGER iNormFactor1
	[ ] INTEGER iNormFactor2D
	[ ] INTEGER iNormFactor2
	[ ] INTEGER iNormFactor3D
	[ ] INTEGER iNormFactor3
	[ ] INTEGER iNormFactor4D
	[ ] INTEGER iNormFactor4
	[ ] INTEGER iNormFactor5D
	[ ] INTEGER iNormFactor5
	[ ] INTEGER iVMin1 
	[ ] INTEGER iVMax1 
	[ ] INTEGER iVMin2  
	[ ] INTEGER iVMax2 
	[ ] INTEGER iVMin3 
	[ ] INTEGER iVMax3 
	[ ] INTEGER iVMin4 
	[ ] INTEGER iVMax4 
	[ ] INTEGER iVMin5 
	[ ] INTEGER iVMax5
	[ ] STRING sUsage1 
	[ ] STRING sUsage2  
	[ ] STRING sUsage3 
	[ ] STRING sUsage4  
	[ ] STRING sUsage5 
	[ ] INTEGER iUseEndPt1
	[ ] INTEGER iUseEndPt2
	[ ] INTEGER iUseEndPt3
	[ ] INTEGER iUseEndPt4
	[ ] INTEGER iUseEndPt5
	[ ] INTEGER iEndPt1
	[ ] INTEGER iEndPt2
	[ ] INTEGER iEndPt3
	[ ] INTEGER iEndPt4
	[ ] INTEGER iEndPt5
	[ ] INTEGER iAnalyteTargetIC1
	[ ] INTEGER iSelectTarget1ForIC
	[ ] INTEGER iAnalyteTargetIC2
	[ ] INTEGER iSelectTarget2ForIC  
	[ ] INTEGER iAnalyteTargetIC3
	[ ] INTEGER iSelectTarget3ForIC
	[ ] INTEGER iAnalyteTargetIC4
	[ ] INTEGER iSelectTarget4ForIC
	[ ]  // 
	[ ] INTEGER iAnalyteTargetSPC1
	[ ] INTEGER iSelectTarget1ForSPC
	[ ] INTEGER iAnalyteTargetSPC2
	[ ] INTEGER iSelectTarget2ForSPC
	[ ] INTEGER iAnalyteTargetSPC3
	[ ] INTEGER iSelectTarget3ForSPC
	[ ] INTEGER iAnalyteTargetSPC4
	[ ] INTEGER iSelectTarget4ForSPC
	[ ] //
	[ ] INTEGER iAnalyteTargetEC1
	[ ] INTEGER iSelectTarget1ForEC
	[ ] INTEGER iAnalyteTargetEC2
	[ ] INTEGER iSelectTarget2ForEC
	[ ] INTEGER iAnalyteTargetEC3
	[ ] INTEGER iSelectTarget3ForEC
	[ ] INTEGER iAnalyteTargetEC4
	[ ] INTEGER iSelectTarget4ForEC
	[ ] //
	[ ] STRING  sInvalidBias1
	[ ] STRING  sInvalidBias2
	[ ] STRING  sInvalidBias3
	[ ] STRING  sInvalidBias4
	[ ] STRING  sInvalidBias5
	[ ] STRING sPeakHeightMin1
	[ ] STRING sPeakHeightMin2
	[ ] STRING sPeakHeightMin3
	[ ] STRING sPeakHeightMin4
	[ ] STRING sPeakHeightMin5
	[ ] INTEGER iPrbChk
	[ ] INTEGER iPrbChk13Max1
	[ ] INTEGER iPrbChk2Min1
	[ ] INTEGER iPrbChkDeltaMin1
	[ ] INTEGER iPrbChk13Max2
	[ ] INTEGER iPrbChk2Min2
	[ ] INTEGER iPrbChkDeltaMin2
	[ ] INTEGER iPrbChk13Max3
	[ ] INTEGER iPrbChk2Min3
	[ ] INTEGER iPrbChkDeltaMin3
	[ ] INTEGER iPrbChk13Max4
	[ ] INTEGER iPrbChk2Min4
	[ ] INTEGER iPrbChkDeltaMin4
	[ ] INTEGER iPrbChk13Max5
	[ ] INTEGER iPrbChk2Min5
	[ ] INTEGER iPrbChkDeltaMin5
	[ ] //
	[ ] INTEGER iUseMinTargetDeltaCt1
	[ ] INTEGER iUseMinTargetDeltaCt2
	[ ] INTEGER iUseMinTargetDeltaCt3
	[ ] INTEGER iUseMinTargetDeltaCt4
	[ ] INTEGER iUseMinTargetDeltaCt5
	[ ] //
	[ ] STRING sMinTargetDeltaCt1
	[ ] STRING sMinTargetDeltaCt2
	[ ] STRING sMinTargetDeltaCt3
	[ ] STRING sMinTargetDeltaCt4
	[ ] STRING sMinTargetDeltaCt5
	[ ] STRING sDeltaCtE1
	[ ] STRING sDeltaCtE2
	[ ] STRING sDeltaCtE3
	[ ] STRING sDeltaCtE4
	[ ] STRING sDeltaCtE5
	[ ] //
	[ ] STRING sCurveFit
	[ ] STRING sSignalLoss
	[ ] //
	[ ] INTEGER iCrosstalk
	[ ] STRING sFrom1to2
	[ ] STRING sFrom1to3
	[ ] STRING sFrom1to4
	[ ] STRING sFrom1to5
	[ ] STRING sFrom2to1
	[ ] STRING sFrom2to3
	[ ] STRING sFrom2to4
	[ ] STRING sFrom2to5
	[ ] STRING sFrom3to1
	[ ] STRING sFrom3to2
	[ ] STRING sFrom3to4
	[ ] STRING sFrom3to5
	[ ] STRING sFrom4to1
	[ ] STRING sFrom4to2
	[ ] STRING sFrom4to3
	[ ] STRING sFrom4to5
	[ ] STRING sFrom5to1
	[ ] STRING sFrom5to2
	[ ] STRING sFrom5to3
	[ ] STRING sFrom5to4
	[ ] //
	[ ] STRING sDecision
	[ ] //
	[ ] STRING sProtocol1
	[ ] STRING sProtocol2
	[ ] //
[ ] 
[ ] // This is the new record for 4 Analytes to be used by all projects
[+] type REC_4ANALYTES_NEW is record
	[ ] STRING sNAME  
	[ ] STRING sAnalyteName1 
	[ ] STRING sReporter1 
	[ ] STRING sAnalyteName2 
	[ ] STRING sReporter2 
	[ ] STRING sAnalyteName3 
	[ ] STRING sReporter3 
	[ ] STRING sAnalyteName4 
	[ ] STRING sReporter4 
	[ ] INTEGER iNumberCyclesInStage
	[ ] INTEGER iBkgndSub  
	[ ] INTEGER iBkgndVMin1 
	[ ] INTEGER iBkgndVMax1 
	[ ] INTEGER iBkgndVMin2  
	[ ] INTEGER iBkgndVMax2 
	[ ] INTEGER iBkgndVMin3 
	[ ] INTEGER iBkgndVMax3 
	[ ] INTEGER iBkgndVMin4 
	[ ] INTEGER iBkgndVMax4
	[ ] REAL rThreshold1 
	[ ] REAL rThreshold2 
	[ ] REAL rThreshold3 
	[ ] REAL rThreshold4 
	[ ] INTEGER iBoxcar1 
	[ ] INTEGER iBoxcar2 
	[ ] INTEGER iBoxcar3 
	[ ] INTEGER iBoxcar4 
	[ ] STRING sCurveAnalysis1
	[ ] STRING sCurveAnalysis2
	[ ] STRING sCurveAnalysis3
	[ ] STRING sCurveAnalysis4
	[ ] INTEGER iNormFactor1D
	[ ] INTEGER iNormFactor1
	[ ] INTEGER iNormFactor2D
	[ ] INTEGER iNormFactor2
	[ ] INTEGER iNormFactor3D
	[ ] INTEGER iNormFactor3
	[ ] INTEGER iNormFactor4D
	[ ] INTEGER iNormFactor4
	[ ] INTEGER iVMin1 
	[ ] INTEGER iVMax1 
	[ ] INTEGER iVMin2  
	[ ] INTEGER iVMax2 
	[ ] INTEGER iVMin3 
	[ ] INTEGER iVMax3 
	[ ] INTEGER iVMin4 
	[ ] INTEGER iVMax4 
	[ ] STRING sUsage1 
	[ ] STRING sUsage2  
	[ ] STRING sUsage3 
	[ ] STRING sUsage4  
	[ ] INTEGER iUseEndPt1
	[ ] INTEGER iUseEndPt2
	[ ] INTEGER iUseEndPt3
	[ ] INTEGER iUseEndPt4
	[ ] INTEGER iEndPt1
	[ ] INTEGER iEndPt2
	[ ] INTEGER iEndPt3
	[ ] INTEGER iEndPt4
	[ ] INTEGER iAnalyteTargetIC1
	[ ] INTEGER iSelectTarget1ForIC
	[ ] INTEGER iAnalyteTargetIC2
	[ ] INTEGER iSelectTarget2ForIC  
	[ ] INTEGER iAnalyteTargetIC3
	[ ] INTEGER iSelectTarget3ForIC
	[ ]  // 
	[ ] INTEGER iAnalyteTargetSPC1
	[ ] INTEGER iSelectTarget1ForSPC
	[ ] INTEGER iAnalyteTargetSPC2
	[ ] INTEGER iSelectTarget2ForSPC
	[ ] INTEGER iAnalyteTargetSPC3
	[ ] INTEGER iSelectTarget3ForSPC
	[ ] //
	[ ] INTEGER iAnalyteTargetEC1
	[ ] INTEGER iSelectTarget1ForEC
	[ ] INTEGER iAnalyteTargetEC2
	[ ] INTEGER iSelectTarget2ForEC
	[ ] INTEGER iAnalyteTargetEC3
	[ ] INTEGER iSelectTarget3ForEC
	[ ] //
	[ ] STRING  sInvalidBias1
	[ ] STRING  sInvalidBias2
	[ ] STRING  sInvalidBias3
	[ ] STRING  sInvalidBias4
	[ ] STRING sPeakHeightMin1
	[ ] STRING sPeakHeightMin2
	[ ] STRING sPeakHeightMin3
	[ ] STRING sPeakHeightMin4
	[ ] INTEGER iPrbChk
	[ ] INTEGER iPrbChk13Max1
	[ ] INTEGER iPrbChk2Min1
	[ ] INTEGER iPrbChkDeltaMin1
	[ ] INTEGER iPrbChk13Max2
	[ ] INTEGER iPrbChk2Min2
	[ ] INTEGER iPrbChkDeltaMin2
	[ ] INTEGER iPrbChk13Max3
	[ ] INTEGER iPrbChk2Min3
	[ ] INTEGER iPrbChkDeltaMin3
	[ ] INTEGER iPrbChk13Max4
	[ ] INTEGER iPrbChk2Min4
	[ ] INTEGER iPrbChkDeltaMin4
	[ ] //
	[ ] INTEGER iUseMinTargetDeltaCt1
	[ ] INTEGER iUseMinTargetDeltaCt2
	[ ] INTEGER iUseMinTargetDeltaCt3
	[ ] INTEGER iUseMinTargetDeltaCt4
	[ ] //
	[ ] STRING sMinTargetDeltaCt1
	[ ] STRING sMinTargetDeltaCt2
	[ ] STRING sMinTargetDeltaCt3
	[ ] STRING sMinTargetDeltaCt4
	[ ] STRING sDeltaCtE1
	[ ] STRING sDeltaCtE2
	[ ] STRING sDeltaCtE3
	[ ] STRING sDeltaCtE4
	[ ] //
	[ ] STRING sCurveFit
	[ ] STRING sSignalLoss
	[ ] //
	[ ] INTEGER iCrosstalk
	[ ] STRING sFrom1to2
	[ ] STRING sFrom1to3
	[ ] STRING sFrom1to4
	[ ] STRING sFrom2to1
	[ ] STRING sFrom2to3
	[ ] STRING sFrom2to4
	[ ] STRING sFrom3to1
	[ ] STRING sFrom3to2
	[ ] STRING sFrom3to4
	[ ] STRING sFrom4to1
	[ ] STRING sFrom4to2
	[ ] STRING sFrom4to3
	[ ] //
	[ ] STRING sProtocol1
	[ ] //
[ ] 
[ ] // This is the new record for 3 Analytes to be used by all projects
[+] type REC_3ANALYTES_NEW is record
	[ ] STRING sNAME  
	[ ] STRING sAnalyteName1 
	[ ] STRING sReporter1 
	[ ] STRING sAnalyteName2 
	[ ] STRING sReporter2 
	[ ] STRING sAnalyteName3 
	[ ] STRING sReporter3 
	[ ] INTEGER iNumberCyclesInStage
	[ ] INTEGER iBkgndSub  
	[ ] INTEGER iBkgndVMin1 
	[ ] INTEGER iBkgndVMax1 
	[ ] INTEGER iBkgndVMin2  
	[ ] INTEGER iBkgndVMax2 
	[ ] INTEGER iBkgndVMin3 
	[ ] INTEGER iBkgndVMax3 
	[ ] REAL rThreshold1 
	[ ] REAL rThreshold2 
	[ ] REAL rThreshold3 
	[ ] INTEGER iBoxcar1 
	[ ] INTEGER iBoxcar2 
	[ ] INTEGER iBoxcar3 
	[ ] STRING sCurveAnalysis1
	[ ] STRING sCurveAnalysis2
	[ ] STRING sCurveAnalysis3
	[ ] INTEGER iNormFactor1D
	[ ] INTEGER iNormFactor1
	[ ] INTEGER iNormFactor2D
	[ ] INTEGER iNormFactor2
	[ ] INTEGER iNormFactor3D
	[ ] INTEGER iNormFactor3
	[ ] INTEGER iVMin1 
	[ ] INTEGER iVMax1 
	[ ] INTEGER iVMin2  
	[ ] INTEGER iVMax2 
	[ ] INTEGER iVMin3 
	[ ] INTEGER iVMax3 
	[ ] STRING sUsage1 
	[ ] STRING sUsage2  
	[ ] STRING sUsage3 
	[ ] INTEGER iUseEndPt1
	[ ] INTEGER iUseEndPt2
	[ ] INTEGER iUseEndPt3
	[ ] INTEGER iEndPt1
	[ ] INTEGER iEndPt2
	[ ] INTEGER iEndPt3
	[ ] INTEGER iAnalyteTargetIC1
	[ ] INTEGER iSelectTarget1ForIC
	[ ] INTEGER iAnalyteTargetIC2
	[ ] INTEGER iSelectTarget2ForIC  
	[ ]  // 
	[ ] INTEGER iAnalyteTargetSPC1
	[ ] INTEGER iSelectTarget1ForSPC
	[ ] INTEGER iAnalyteTargetSPC2
	[ ] INTEGER iSelectTarget2ForSPC
	[ ] //
	[ ] INTEGER iAnalyteTargetEC1
	[ ] INTEGER iSelectTarget1ForEC
	[ ] INTEGER iAnalyteTargetEC2
	[ ] INTEGER iSelectTarget2ForEC
	[ ] //
	[ ] STRING  sInvalidBias1
	[ ] STRING  sInvalidBias2
	[ ] STRING  sInvalidBias3
	[ ] STRING sPeakHeightMin1
	[ ] STRING sPeakHeightMin2
	[ ] STRING sPeakHeightMin3
	[ ] INTEGER iPrbChk
	[ ] INTEGER iPrbChk13Max1
	[ ] INTEGER iPrbChk2Min1
	[ ] INTEGER iPrbChkDeltaMin1
	[ ] INTEGER iPrbChk13Max2
	[ ] INTEGER iPrbChk2Min2
	[ ] INTEGER iPrbChkDeltaMin2
	[ ] INTEGER iPrbChk13Max3
	[ ] INTEGER iPrbChk2Min3
	[ ] INTEGER iPrbChkDeltaMin3
	[ ] //
	[ ] INTEGER iUseMinTargetDeltaCt1
	[ ] INTEGER iUseMinTargetDeltaCt2
	[ ] INTEGER iUseMinTargetDeltaCt3
	[ ] //
	[ ] STRING sMinTargetDeltaCt1
	[ ] STRING sMinTargetDeltaCt2
	[ ] STRING sMinTargetDeltaCt3
	[ ] STRING sDeltaCtE1
	[ ] STRING sDeltaCtE2
	[ ] STRING sDeltaCtE3
	[ ] //
	[ ] STRING sCurveFit
	[ ] STRING sSignalLoss
	[ ] //
	[ ] INTEGER iCrosstalk
	[ ] STRING sFrom1to2
	[ ] STRING sFrom1to3
	[ ] STRING sFrom2to1
	[ ] STRING sFrom2to3
	[ ] STRING sFrom3to1
	[ ] STRING sFrom3to2
	[ ] //
	[ ] STRING sProtocol1
	[ ] //
[ ] 
[ ] // This is the new record for 2 Analytes to be used by all projects
[+] type REC_2ANALYTES_NEW is record
	[ ] STRING sNAME  
	[ ] STRING sAnalyteName1 
	[ ] STRING sReporter1 
	[ ] STRING sAnalyteName2 
	[ ] STRING sReporter2 
	[ ] INTEGER iNumberCyclesInStage
	[ ] INTEGER iBkgndSub  
	[ ] INTEGER iBkgndVMin1 
	[ ] INTEGER iBkgndVMax1 
	[ ] INTEGER iBkgndVMin2  
	[ ] INTEGER iBkgndVMax2 
	[ ] REAL rThreshold1 
	[ ] REAL rThreshold2 
	[ ] INTEGER iBoxcar1 
	[ ] INTEGER iBoxcar2 
	[ ] STRING sCurveAnalysis1
	[ ] STRING sCurveAnalysis2
	[ ] INTEGER iNormFactor1D
	[ ] INTEGER iNormFactor1
	[ ] INTEGER iNormFactor2D
	[ ] INTEGER iNormFactor2
	[ ] INTEGER iVMin1 
	[ ] INTEGER iVMax1 
	[ ] INTEGER iVMin2  
	[ ] INTEGER iVMax2 
	[ ] STRING sUsage1 
	[ ] STRING sUsage2  
	[ ] INTEGER iUseEndPt1
	[ ] INTEGER iUseEndPt2
	[ ] INTEGER iEndPt1
	[ ] INTEGER iEndPt2
	[ ] INTEGER iAnalyteTargetIC1
	[ ] INTEGER iSelectTarget1ForIC
	[ ]  // 
	[ ] INTEGER iAnalyteTargetSPC1
	[ ] INTEGER iSelectTarget1ForSPC
	[ ] //
	[ ] INTEGER iAnalyteTargetEC1
	[ ] INTEGER iSelectTarget1ForEC
	[ ] //
	[ ] STRING  sInvalidBias1
	[ ] STRING  sInvalidBias2
	[ ] STRING sPeakHeightMin1
	[ ] STRING sPeakHeightMin2
	[ ] INTEGER iPrbChk
	[ ] INTEGER iPrbChk13Max1
	[ ] INTEGER iPrbChk2Min1
	[ ] INTEGER iPrbChkDeltaMin1
	[ ] INTEGER iPrbChk13Max2
	[ ] INTEGER iPrbChk2Min2
	[ ] INTEGER iPrbChkDeltaMin2
	[ ] //
	[ ] INTEGER iUseMinTargetDeltaCt1
	[ ] INTEGER iUseMinTargetDeltaCt2
	[ ] //
	[ ] STRING sMinTargetDeltaCt1
	[ ] STRING sMinTargetDeltaCt2
	[ ] STRING sDeltaCtE1
	[ ] STRING sDeltaCtE2
	[ ] //
	[ ] STRING sCurveFit
	[ ] STRING sSignalLoss
	[ ] //
	[ ] INTEGER iCrosstalk
	[ ] STRING sFrom1to2
	[ ] STRING sFrom2to1
	[ ] //
[ ] 
[ ] // This is the new record for 6 Analytes to be used by Organism and Genotyping projects
[+] type REC_6ANALYTES_OR_GT is record
	[ ] STRING sNAME  
	[ ] STRING sAnalyteName1 
	[ ] STRING sReporter1 
	[ ] STRING sAnalyteName2 
	[ ] STRING sReporter2 
	[ ] STRING sAnalyteName3 
	[ ] STRING sReporter3 
	[ ] STRING sAnalyteName4 
	[ ] STRING sReporter4 
	[ ] STRING sAnalyteName5 
	[ ] STRING sReporter5 
	[ ] STRING sAnalyteName6 
	[ ] STRING sReporter6 
	[ ] STRING sUsage1 
	[ ] STRING sUsage2  
	[ ] STRING sUsage3 
	[ ] STRING sUsage4  
	[ ] STRING sUsage5 
	[ ] STRING sUsage6  
	[ ] INTEGER iAnalyteTargetIC1
	[ ] INTEGER iSelectTarget1ForIC
	[ ] INTEGER iAnalyteTargetIC2
	[ ] INTEGER iSelectTarget2ForIC
	[ ] INTEGER iAnalyteTargetIC3
	[ ] INTEGER iSelectTarget3ForIC
	[ ] INTEGER iAnalyteTargetIC4
	[ ] INTEGER iSelectTarget4ForIC
	[ ] INTEGER iAnalyteTargetIC5
	[ ] INTEGER iSelectTarget5ForIC
	[ ] INTEGER iAnalyteTargetSPC1
	[ ] INTEGER iSelectTarget1ForSPC
	[ ] INTEGER iAnalyteTargetSPC2
	[ ] INTEGER iSelectTarget2ForSPC
	[ ] INTEGER iAnalyteTargetSPC3
	[ ] INTEGER iSelectTarget3ForSPC
	[ ] INTEGER iAnalyteTargetSPC4
	[ ] INTEGER iSelectTarget4ForSPC
	[ ] INTEGER iAnalyteTargetSPC5
	[ ] INTEGER iSelectTarget5ForSPC
	[ ] INTEGER iAnalyteTargetEC1
	[ ] INTEGER iSelectTarget1ForEC
	[ ] INTEGER iAnalyteTargetEC2
	[ ] INTEGER iSelectTarget2ForEC
	[ ] INTEGER iAnalyteTargetEC3
	[ ] INTEGER iSelectTarget3ForEC
	[ ] INTEGER iAnalyteTargetEC4
	[ ] INTEGER iSelectTarget4ForEC
	[ ] INTEGER iAnalyteTargetEC5
	[ ] INTEGER iSelectTarget5ForEC
	[ ] INTEGER iBkgndSub  
	[ ] INTEGER iBkgndVMin1 
	[ ] INTEGER iBkgndVMax1 
	[ ] INTEGER iBkgndVMin2  
	[ ] INTEGER iBkgndVMax2 
	[ ] INTEGER iBkgndVMin3 
	[ ] INTEGER iBkgndVMax3 
	[ ] INTEGER iBkgndVMin4  
	[ ] INTEGER iBkgndVMax4 
	[ ] INTEGER iBkgndVMin5 
	[ ] INTEGER iBkgndVMax5 
	[ ] INTEGER iBkgndVMin6  
	[ ] INTEGER iBkgndVMax6 
	[ ] REAL rThreshold1 
	[ ] REAL rThreshold2 
	[ ] REAL rThreshold3 
	[ ] REAL rThreshold4 
	[ ] REAL rThreshold5 
	[ ] REAL rThreshold6 
	[ ] STRING sCurveAnalysis1
	[ ] STRING sCurveAnalysis2
	[ ] STRING sCurveAnalysis3
	[ ] STRING sCurveAnalysis4
	[ ] STRING sCurveAnalysis5
	[ ] STRING sCurveAnalysis6
	[ ] INTEGER iBoxcar1 
	[ ] INTEGER iBoxcar2 
	[ ] INTEGER iBoxcar3 
	[ ] INTEGER iBoxcar4 
	[ ] INTEGER iBoxcar5 
	[ ] INTEGER iBoxcar6 
	[ ] INTEGER iVMin1 
	[ ] INTEGER iVMax1 
	[ ] INTEGER iVMin2  
	[ ] INTEGER iVMax2 
	[ ] INTEGER iVMin3 
	[ ] INTEGER iVMax3 
	[ ] INTEGER iVMin4  
	[ ] INTEGER iVMax4 
	[ ] INTEGER iVMin5 
	[ ] INTEGER iVMax5 
	[ ] INTEGER iVMin6  
	[ ] INTEGER iVMax6 
	[ ] INTEGER iUseEndPt1
	[ ] INTEGER iUseEndPt2
	[ ] INTEGER iUseEndPt3
	[ ] INTEGER iUseEndPt4
	[ ] INTEGER iUseEndPt5
	[ ] INTEGER iUseEndPt6
	[ ] INTEGER iEndPt1
	[ ] INTEGER iEndPt2
	[ ] INTEGER iEndPt3
	[ ] INTEGER iEndPt4
	[ ] INTEGER iEndPt5
	[ ] INTEGER iEndPt6
	[ ] STRING sInvalidBias1
	[ ] STRING sInvalidBias2
	[ ] STRING sInvalidBias3
	[ ] STRING sInvalidBias4
	[ ] STRING sInvalidBias5
	[ ] STRING sInvalidBias6
	[ ] INTEGER iNormFactor1
	[ ] INTEGER iNormFactor2
	[ ] INTEGER iNormFactor3
	[ ] INTEGER iNormFactor4
	[ ] INTEGER iNormFactor5
	[ ] INTEGER iNormFactor6
	[ ] INTEGER iPrbChkMax1
	[ ] INTEGER iPrbChkMax2
	[ ] INTEGER iPrbChkMax3
	[ ] INTEGER iPrbChkMax4
	[ ] INTEGER iPrbChkMax5
	[ ] INTEGER iPrbChkMax6
	[ ] INTEGER iPrbChkMin1
	[ ] INTEGER iPrbChkMin2
	[ ] INTEGER iPrbChkMin3
	[ ] INTEGER iPrbChkMin4
	[ ] INTEGER iPrbChkMin5
	[ ] INTEGER iPrbChkMin6
	[ ] INTEGER iCurveFit
	[ ] INTEGER iSignalLoss
	[ ] INTEGER iNumberCyclesInStage
	[ ] STRING sGenoOrgDetail
	[ ] STRING sDefaultResultText
	[ ] STRING sDefaultResultColor
	[ ] STRING sDisclaimers
	[ ] STRING sHaplotype
[ ] 
[ ] // This is the new record for 5 Analytes to be used by Organism and Genotyping projects
[+] type REC_5ANALYTES_OR_GT is record
	[ ] STRING sNAME  
	[ ] STRING sAnalyteName1 
	[ ] STRING sReporter1 
	[ ] STRING sAnalyteName2 
	[ ] STRING sReporter2 
	[ ] STRING sAnalyteName3 
	[ ] STRING sReporter3 
	[ ] STRING sAnalyteName4 
	[ ] STRING sReporter4 
	[ ] STRING sAnalyteName5 
	[ ] STRING sReporter5 
	[ ] STRING sUsage1 
	[ ] STRING sUsage2  
	[ ] STRING sUsage3 
	[ ] STRING sUsage4  
	[ ] STRING sUsage5 
	[ ] INTEGER iAnalyteTargetIC1
	[ ] INTEGER iSelectTarget1ForIC
	[ ] INTEGER iAnalyteTargetIC2
	[ ] INTEGER iSelectTarget2ForIC
	[ ] INTEGER iAnalyteTargetIC3
	[ ] INTEGER iSelectTarget3ForIC
	[ ] INTEGER iAnalyteTargetIC4
	[ ] INTEGER iSelectTarget4ForIC
	[ ] INTEGER iAnalyteTargetSPC1
	[ ] INTEGER iSelectTarget1ForSPC
	[ ] INTEGER iAnalyteTargetSPC2
	[ ] INTEGER iSelectTarget2ForSPC
	[ ] INTEGER iAnalyteTargetSPC3
	[ ] INTEGER iSelectTarget3ForSPC
	[ ] INTEGER iAnalyteTargetSPC4
	[ ] INTEGER iSelectTarget4ForSPC
	[ ] INTEGER iAnalyteTargetEC1
	[ ] INTEGER iSelectTarget1ForEC
	[ ] INTEGER iAnalyteTargetEC2
	[ ] INTEGER iSelectTarget2ForEC
	[ ] INTEGER iAnalyteTargetEC3
	[ ] INTEGER iSelectTarget3ForEC
	[ ] INTEGER iAnalyteTargetEC4
	[ ] INTEGER iSelectTarget4ForEC
	[ ] INTEGER iBkgndSub  
	[ ] INTEGER iBkgndVMin1 
	[ ] INTEGER iBkgndVMax1 
	[ ] INTEGER iBkgndVMin2  
	[ ] INTEGER iBkgndVMax2 
	[ ] INTEGER iBkgndVMin3 
	[ ] INTEGER iBkgndVMax3 
	[ ] INTEGER iBkgndVMin4  
	[ ] INTEGER iBkgndVMax4 
	[ ] INTEGER iBkgndVMin5 
	[ ] INTEGER iBkgndVMax5 
	[ ] REAL rThreshold1 
	[ ] REAL rThreshold2 
	[ ] REAL rThreshold3 
	[ ] REAL rThreshold4 
	[ ] REAL rThreshold5 
	[ ] STRING sCurveAnalysis1
	[ ] STRING sCurveAnalysis2
	[ ] STRING sCurveAnalysis3
	[ ] STRING sCurveAnalysis4
	[ ] STRING sCurveAnalysis5
	[ ] INTEGER iNormFactor1D
	[ ] INTEGER iNormFactor1
	[ ] INTEGER iNormFactor2D
	[ ] INTEGER iNormFactor2
	[ ] INTEGER iNormFactor3D
	[ ] INTEGER iNormFactor3
	[ ] INTEGER iNormFactor4D
	[ ] INTEGER iNormFactor4
	[ ] INTEGER iNormFactor5D
	[ ] INTEGER iNormFactor5
	[ ] INTEGER iBoxcar1 
	[ ] INTEGER iBoxcar2 
	[ ] INTEGER iBoxcar3 
	[ ] INTEGER iBoxcar4 
	[ ] INTEGER iBoxcar5 
	[ ] INTEGER iVMin1 
	[ ] INTEGER iVMax1 
	[ ] INTEGER iVMin2  
	[ ] INTEGER iVMax2 
	[ ] INTEGER iVMin3 
	[ ] INTEGER iVMax3 
	[ ] INTEGER iVMin4  
	[ ] INTEGER iVMax4 
	[ ] INTEGER iVMin5 
	[ ] INTEGER iVMax5 
	[ ] INTEGER iUseEndPt1
	[ ] INTEGER iUseEndPt2
	[ ] INTEGER iUseEndPt3
	[ ] INTEGER iUseEndPt4
	[ ] INTEGER iUseEndPt5
	[ ] INTEGER iEndPt1
	[ ] INTEGER iEndPt2
	[ ] INTEGER iEndPt3
	[ ] INTEGER iEndPt4
	[ ] INTEGER iEndPt5
	[ ] INTEGER iPrbChk
	[ ] INTEGER iPrbChk13Max1
	[ ] INTEGER iPrbChk2Min1
	[ ] INTEGER iPrbChkDeltaMin1
	[ ] INTEGER iPrbChk13Max2
	[ ] INTEGER iPrbChk2Min2
	[ ] INTEGER iPrbChkDeltaMin2
	[ ] INTEGER iPrbChk13Max3
	[ ] INTEGER iPrbChk2Min3
	[ ] INTEGER iPrbChkDeltaMin3
	[ ] INTEGER iPrbChk13Max4
	[ ] INTEGER iPrbChk2Min4
	[ ] INTEGER iPrbChkDeltaMin4
	[ ] INTEGER iPrbChk13Max5
	[ ] INTEGER iPrbChk2Min5
	[ ] INTEGER iPrbChkDeltaMin5
	[ ] STRING sInvalidBias1
	[ ] STRING sInvalidBias2
	[ ] STRING sInvalidBias3
	[ ] STRING sInvalidBias4
	[ ] STRING sInvalidBias5
	[ ] INTEGER iCurveFit
	[ ] INTEGER iSignalLoss
	[ ] INTEGER iNumberCyclesInStage
	[ ] STRING sGenoOrgDetail
	[ ] STRING sDefaultResultText
	[ ] STRING sDefaultResultColor
	[ ] STRING sDisclaimers
	[ ] STRING sHaplotype
	[ ] //
	[ ] STRING sProtocol1
	[ ] STRING sProtocol2
	[ ] STRING sDecision
[ ] 
[ ] // This is the new record for 4 Analytes to be used by Organism and Genotyping projects
[+] type REC_4ANALYTES_OR_GT is record
	[ ] STRING sNAME  
	[ ] STRING sAnalyteName1 
	[ ] STRING sReporter1 
	[ ] STRING sAnalyteName2 
	[ ] STRING sReporter2 
	[ ] STRING sAnalyteName3 
	[ ] STRING sReporter3 
	[ ] STRING sAnalyteName4 
	[ ] STRING sReporter4 
	[ ] STRING sUsage1 
	[ ] STRING sUsage2  
	[ ] STRING sUsage3 
	[ ] STRING sUsage4  
	[ ] INTEGER iAnalyteTargetIC1
	[ ] INTEGER iSelectTarget1ForIC
	[ ] INTEGER iAnalyteTargetIC2
	[ ] INTEGER iSelectTarget2ForIC
	[ ] INTEGER iAnalyteTargetIC3
	[ ] INTEGER iSelectTarget3ForIC
	[ ] INTEGER iAnalyteTargetSPC1
	[ ] INTEGER iSelectTarget1ForSPC
	[ ] INTEGER iAnalyteTargetSPC2
	[ ] INTEGER iSelectTarget2ForSPC
	[ ] INTEGER iAnalyteTargetSPC3
	[ ] INTEGER iSelectTarget3ForSPC
	[ ] INTEGER iAnalyteTargetEC1
	[ ] INTEGER iSelectTarget1ForEC
	[ ] INTEGER iAnalyteTargetEC2
	[ ] INTEGER iSelectTarget2ForEC
	[ ] INTEGER iAnalyteTargetEC3
	[ ] INTEGER iSelectTarget3ForEC
	[ ] INTEGER iBkgndSub  
	[ ] INTEGER iBkgndVMin1 
	[ ] INTEGER iBkgndVMax1 
	[ ] INTEGER iBkgndVMin2  
	[ ] INTEGER iBkgndVMax2 
	[ ] INTEGER iBkgndVMin3 
	[ ] INTEGER iBkgndVMax3 
	[ ] INTEGER iBkgndVMin4  
	[ ] INTEGER iBkgndVMax4 
	[ ] REAL rThreshold1 
	[ ] REAL rThreshold2 
	[ ] REAL rThreshold3 
	[ ] REAL rThreshold4 
	[ ] STRING sCurveAnalysis1
	[ ] STRING sCurveAnalysis2
	[ ] STRING sCurveAnalysis3
	[ ] STRING sCurveAnalysis4
	[ ] INTEGER iNormFactor1D
	[ ] INTEGER iNormFactor1
	[ ] INTEGER iNormFactor2D
	[ ] INTEGER iNormFactor2
	[ ] INTEGER iNormFactor3D
	[ ] INTEGER iNormFactor3
	[ ] INTEGER iNormFactor4D
	[ ] INTEGER iNormFactor4
	[ ] INTEGER iBoxcar1 
	[ ] INTEGER iBoxcar2 
	[ ] INTEGER iBoxcar3 
	[ ] INTEGER iBoxcar4 
	[ ] INTEGER iVMin1 
	[ ] INTEGER iVMax1 
	[ ] INTEGER iVMin2  
	[ ] INTEGER iVMax2 
	[ ] INTEGER iVMin3 
	[ ] INTEGER iVMax3 
	[ ] INTEGER iVMin4  
	[ ] INTEGER iVMax4 
	[ ] INTEGER iUseEndPt1
	[ ] INTEGER iUseEndPt2
	[ ] INTEGER iUseEndPt3
	[ ] INTEGER iUseEndPt4
	[ ] INTEGER iEndPt1
	[ ] INTEGER iEndPt2
	[ ] INTEGER iEndPt3
	[ ] INTEGER iEndPt4
	[ ] INTEGER iPrbChk
	[ ] INTEGER iPrbChk13Max1
	[ ] INTEGER iPrbChk2Min1
	[ ] INTEGER iPrbChkDeltaMin1
	[ ] INTEGER iPrbChk13Max2
	[ ] INTEGER iPrbChk2Min2
	[ ] INTEGER iPrbChkDeltaMin2
	[ ] INTEGER iPrbChk13Max3
	[ ] INTEGER iPrbChk2Min3
	[ ] INTEGER iPrbChkDeltaMin3
	[ ] INTEGER iPrbChk13Max4
	[ ] INTEGER iPrbChk2Min4
	[ ] INTEGER iPrbChkDeltaMin4
	[ ] STRING sInvalidBias1
	[ ] STRING sInvalidBias2
	[ ] STRING sInvalidBias3
	[ ] STRING sInvalidBias4
	[ ] INTEGER iCurveFit
	[ ] INTEGER iSignalLoss
	[ ] INTEGER iNumberCyclesInStage
	[ ] STRING sGenoOrgDetail
	[ ] STRING sDefaultResultText
	[ ] STRING sDefaultResultColor
	[ ] STRING sDisclaimers
	[ ] STRING sHaplotype
[ ] 
[ ] // This is the new record for 3 Analytes to be used by Organism and Genotyping projects
[+] type REC_3ANALYTES_OR_GT is record
	[ ] STRING sNAME  
	[ ] STRING sAnalyteName1 
	[ ] STRING sReporter1 
	[ ] STRING sAnalyteName2 
	[ ] STRING sReporter2 
	[ ] STRING sAnalyteName3 
	[ ] STRING sReporter3 
	[ ] STRING sUsage1 
	[ ] STRING sUsage2  
	[ ] STRING sUsage3 
	[ ] INTEGER iAnalyteTargetIC1
	[ ] INTEGER iSelectTarget1ForIC
	[ ] INTEGER iAnalyteTargetIC2
	[ ] INTEGER iSelectTarget2ForIC
	[ ] INTEGER iAnalyteTargetSPC1
	[ ] INTEGER iSelectTarget1ForSPC
	[ ] INTEGER iAnalyteTargetSPC2
	[ ] INTEGER iSelectTarget2ForSPC
	[ ] INTEGER iAnalyteTargetEC1
	[ ] INTEGER iSelectTarget1ForEC
	[ ] INTEGER iAnalyteTargetEC2
	[ ] INTEGER iSelectTarget2ForEC
	[ ] INTEGER iBkgndSub  
	[ ] INTEGER iBkgndVMin1 
	[ ] INTEGER iBkgndVMax1 
	[ ] INTEGER iBkgndVMin2  
	[ ] INTEGER iBkgndVMax2 
	[ ] INTEGER iBkgndVMin3 
	[ ] INTEGER iBkgndVMax3 
	[ ] REAL rThreshold1 
	[ ] REAL rThreshold2 
	[ ] REAL rThreshold3 
	[ ] STRING sCurveAnalysis1
	[ ] STRING sCurveAnalysis2
	[ ] STRING sCurveAnalysis3
	[ ] INTEGER iNormFactor1D
	[ ] INTEGER iNormFactor1
	[ ] INTEGER iNormFactor2D
	[ ] INTEGER iNormFactor2
	[ ] INTEGER iNormFactor3D
	[ ] INTEGER iNormFactor3
	[ ] INTEGER iBoxcar1 
	[ ] INTEGER iBoxcar2 
	[ ] INTEGER iBoxcar3 
	[ ] INTEGER iVMin1 
	[ ] INTEGER iVMax1 
	[ ] INTEGER iVMin2  
	[ ] INTEGER iVMax2 
	[ ] INTEGER iVMin3 
	[ ] INTEGER iVMax3 
	[ ] INTEGER iUseEndPt1
	[ ] INTEGER iUseEndPt2
	[ ] INTEGER iUseEndPt3
	[ ] INTEGER iEndPt1
	[ ] INTEGER iEndPt2
	[ ] INTEGER iEndPt3
	[ ] INTEGER iPrbChk
	[ ] INTEGER iPrbChk13Max1
	[ ] INTEGER iPrbChk2Min1
	[ ] INTEGER iPrbChkDeltaMin1
	[ ] INTEGER iPrbChk13Max2
	[ ] INTEGER iPrbChk2Min2
	[ ] INTEGER iPrbChkDeltaMin2
	[ ] INTEGER iPrbChk13Max3
	[ ] INTEGER iPrbChk2Min3
	[ ] INTEGER iPrbChkDeltaMin3
	[ ] STRING sInvalidBias1
	[ ] STRING sInvalidBias2
	[ ] STRING sInvalidBias3
	[ ] INTEGER iCurveFit
	[ ] INTEGER iSignalLoss
	[ ] INTEGER iNumberCyclesInStage
	[ ] STRING sGenoOrgDetail
	[ ] STRING sDefaultResultText
	[ ] STRING sDefaultResultColor
	[ ] STRING sDisclaimers
	[ ] STRING sHaplotype
[ ] 
[ ] // This is the new record for 2 Analytes to be used by Organism and Genotyping projects
[+] type REC_2ANALYTES_OR_GT is record
	[ ] STRING sNAME  
	[ ] STRING sAnalyteName1 
	[ ] STRING sReporter1 
	[ ] STRING sAnalyteName2 
	[ ] STRING sReporter2 
	[ ] STRING sUsage1 
	[ ] STRING sUsage2  
	[ ] INTEGER iAnalyteTargetIC1
	[ ] INTEGER iSelectTarget1ForIC
	[ ] INTEGER iAnalyteTargetSPC1
	[ ] INTEGER iSelectTarget1ForSPC
	[ ] INTEGER iAnalyteTargetEC1
	[ ] INTEGER iSelectTarget1ForEC
	[ ] INTEGER iBkgndSub  
	[ ] INTEGER iBkgndVMin1 
	[ ] INTEGER iBkgndVMax1 
	[ ] INTEGER iBkgndVMin2  
	[ ] INTEGER iBkgndVMax2 
	[ ] REAL rThreshold1 
	[ ] REAL rThreshold2 
	[ ] STRING sCurveAnalysis1
	[ ] STRING sCurveAnalysis2
	[ ] INTEGER iNormFactor1D
	[ ] INTEGER iNormFactor1
	[ ] INTEGER iNormFactor2D
	[ ] INTEGER iNormFactor2
	[ ] INTEGER iBoxcar1 
	[ ] INTEGER iBoxcar2 
	[ ] INTEGER iVMin1 
	[ ] INTEGER iVMax1 
	[ ] INTEGER iVMin2  
	[ ] INTEGER iVMax2 
	[ ] INTEGER iUseEndPt1
	[ ] INTEGER iUseEndPt2
	[ ] INTEGER iEndPt1
	[ ] INTEGER iEndPt2
	[ ] INTEGER iPrbChk
	[ ] INTEGER iPrbChk13Max1
	[ ] INTEGER iPrbChk2Min1
	[ ] INTEGER iPrbChkDeltaMin1
	[ ] INTEGER iPrbChk13Max2
	[ ] INTEGER iPrbChk2Min2
	[ ] INTEGER iPrbChkDeltaMin2
	[ ] STRING sInvalidBias1
	[ ] STRING sInvalidBias2
	[ ] INTEGER iCurveFit
	[ ] INTEGER iSignalLoss
	[ ] INTEGER iNumberCyclesInStage
	[ ] STRING sGenoOrgDetail
	[ ] STRING sDefaultResultText
	[ ] STRING sDefaultResultColor
	[ ] STRING sDisclaimers
	[ ] STRING sHaplotype
[ ] 
[ ] // The following data types are used in Define Assays scripts in D10342 Melt Data Reduction
[+] type REC_4ANALYTES_MELT is record
	[ ] STRING sNAME  
	[ ] STRING sAnalyteName1 
	[ ] STRING sReporter1 
	[ ] STRING sAnalyteName2
	[ ] STRING sReporter2 
	[ ] STRING sAnalyteName3
	[ ] STRING sReporter3 
	[ ] STRING sAnalyteName4
	[ ] STRING sReporter4 
	[ ] STRING sCurveFit
	[ ] STRING sSignalLoss
	[ ] STRING sStartTemp1
	[ ] STRING sStartTemp2
	[ ] STRING sStartTemp3
	[ ] STRING sTempSec
[ ] 
[+] type REC_1ANALYTE_MELT is record
	[ ] STRING sNAME  
	[ ] STRING sAnalyteName1 
	[ ] STRING sReporter1 
	[ ] STRING sCurveFit
	[ ] STRING sSignalLoss
	[ ] STRING sStartTemp1
	[ ] STRING sStartTemp2
	[ ] STRING sStartTemp3
[ ] 
[ ] // The following data types are used in Define Assays scripts in D8384 Percent Ratio
[+] type REC_CUSTOMIZE_RESULT_2  is record
	[ ]    INTEGER iRow
	[ ]    STRING sAssayName
	[ ]    STRING sTarget1
	[ ]    STRING sTarget2
	[ ]    STRING sTarget3
	[ ]    STRING sTarget4
	[ ]    STRING sTargetResults11
	[ ]    STRING sResultText11
	[ ]    STRING sResultColor11
	[ ]    STRING sTargetResults12
	[ ]    STRING sResultText12
	[ ]    STRING sResultColor12
	[ ]    STRING sTargetResults13
	[ ]    STRING sResultText13
	[ ]    STRING sResultColor13
	[ ]    STRING sTargetResults21
	[ ]    STRING sResultText21
	[ ]    STRING sResultColor21
	[ ]    STRING sTargetResults22
	[ ]    STRING sResultText22
	[ ]    STRING sResultColor22
	[ ]    STRING sTargetResults23
	[ ]    STRING sResultText23
	[ ]    STRING sResultColor23
	[ ]    STRING sTargetResults31
	[ ]    STRING sResultText31
	[ ]    STRING sResultColor31
	[ ]    STRING sTargetResults32
	[ ]    STRING sResultText32
	[ ]    STRING sResultColor32
	[ ]    STRING sTargetResults33
	[ ]    STRING sResultText33
	[ ]    STRING sResultColor33
	[ ]    STRING sTargetResults41
	[ ]    STRING sResultText41
	[ ]    STRING sResultColor41
	[ ]    STRING sTargetResults42
	[ ]    STRING sResultText42
	[ ]    STRING sResultColor42
	[ ]    STRING sTargetResults43
	[ ]    STRING sResultText43
	[ ]    STRING sResultColor43
	[ ] 
[ ] 
[+] type REC_CUSTOMIZE_RESULT_4  is record
	[ ]    INTEGER iRow
	[ ]    STRING sAssayName
	[ ]    STRING sTarget1
	[ ]    STRING sTarget2
	[ ]    STRING sTarget3
	[ ]    STRING sTarget4
	[ ]    STRING sTarget5
	[ ]    STRING sTargetResults11
	[ ]    STRING sResultText11
	[ ]    STRING sResultColor11
	[ ]    STRING sTargetResults12
	[ ]    STRING sResultText12
	[ ]    STRING sResultColor12
	[ ]    STRING sTargetResults13
	[ ]    STRING sResultText13
	[ ]    STRING sResultColor13
	[ ]    STRING sTargetResults21
	[ ]    STRING sResultText21
	[ ]    STRING sResultColor21
	[ ]    STRING sTargetResults22
	[ ]    STRING sResultText22
	[ ]    STRING sResultColor22
	[ ]    STRING sTargetResults23
	[ ]    STRING sResultText23
	[ ]    STRING sResultColor23
	[ ]    STRING sTargetResults31
	[ ]    STRING sResultText31
	[ ]    STRING sResultColor31
	[ ]    STRING sTargetResults32
	[ ]    STRING sResultText32
	[ ]    STRING sResultColor32
	[ ]    STRING sTargetResults33
	[ ]    STRING sResultText33
	[ ]    STRING sResultColor33
	[ ]    STRING sTargetResults41
	[ ]    STRING sResultText41
	[ ]    STRING sResultColor41
	[ ]    STRING sTargetResults42
	[ ]    STRING sResultText42
	[ ]    STRING sResultColor42
	[ ]    STRING sTargetResults43
	[ ]    STRING sResultText43
	[ ]    STRING sResultColor43
	[ ]    STRING sTargetResults51
	[ ]    STRING sResultText51
	[ ]    STRING sResultColor51
	[ ]    STRING sTargetResults52
	[ ]    STRING sResultText52
	[ ]    STRING sResultColor52
	[ ]    STRING sargetResults53
	[ ]    STRING sResultText53
	[ ]    STRING sResultColor53   
[ ] 
[ ] // The following data types are used D2699 Define Assays
[ ] // Data types defined for Protocol with Analyte selection in Protocol
[+] type REC_DetailTab_Assay_Protocol_1 is record      
	[ ] INTEGER iPAnalyte1	
	[ ] INTEGER iPAnalyte2	
	[ ] INTEGER iPAnalyte3	
	[ ] INTEGER iPAnalyte4	
	[ ] INTEGER iPAnalyte5	
	[ ] INTEGER iPAnalyte6	
	[ ] STRING sStage1	
	[ ] INTEGER iTemp11	
	[ ] INTEGER iSecs11	
	[ ] STRING sStage2	
	[ ] INTEGER iNumberCyclesInStage2	
	[ ] INTEGER iTemp21	
	[ ] INTEGER iSecs21	
	[ ] STRING sOptics21	
	[ ] INTEGER iTemp22	
	[ ] INTEGER iSecs22	
	[ ] STRING sOptics22
[ ] 
[ ]  // Data types defined for Protocolwith Analyte selection in Protocol                                             
[+] type REC_DetailTab_Assay_Protocol_2 is record   
	[ ] INTEGER iPAnalyte1	
	[ ] INTEGER iPAnalyte2	
	[ ] INTEGER iPAnalyte3	
	[ ] INTEGER iPAnalyte4	
	[ ] INTEGER iPAnalyte5	
	[ ] INTEGER iPAnalyte6	
	[ ] STRING sStage1	
	[ ] STRING sStage2		
	[ ] INTEGER iTemp21	
	[ ] INTEGER iSecs21	
	[ ] STRING sStage3	
	[ ] INTEGER iNumberCyclesInStage3	
	[ ] INTEGER iTemp31	
	[ ] INTEGER iSecs31	
	[ ] STRING sOptics31	
	[ ] INTEGER iTemp32	
	[ ] INTEGER iSecs32	
	[ ] STRING sOptics32	
	[ ] INTEGER iTemp33	
	[ ] INTEGER iSecs33	
	[ ] STRING sOptics33	
	[ ] STRING sStage4	
[ ]      
[ ]  // Data types defined for Protocol without Analyte selection in Protocol with multiple stages                                                    
[+] type REC_Assay_Protocol1 is record   
	[ ] STRING sStage1
	[ ] INTEGER iNumberCyclesInStage1
	[ ] INTEGER iTemp11
	[ ] INTEGER iSecs11
	[ ] INTEGER iTemp12
	[ ] INTEGER iSecs12	
	[ ] STRING sStage2	
	[ ] INTEGER iNumberCyclesInStage2
	[ ] INTEGER iTemp21	
	[ ] INTEGER iSecs21
	[ ] INTEGER iTemp22	
	[ ] INTEGER iSecs22		
	[ ] STRING sStage3	
	[ ] INTEGER iNumberCyclesInStage3	
	[ ] INTEGER iTemp31	
	[ ] INTEGER iSecs31		
	[ ] INTEGER iTemp32	
	[ ] INTEGER iSecs32	
	[ ] STRING sStartTemp
	[ ] STRING sEndTemp
	[ ] STRING sTempSec
[ ]  // The type REC_5Analytes_Assay_Protocol  is used in the D2699                                                                  
[+] type REC_5Analytes_Assay_Protocol is record
	[ ] INTEGER iPAnalyte1	
	[ ] INTEGER iPAnalyte2	
	[ ] INTEGER iPAnalyte3	
	[ ] INTEGER iPAnalyte4	
	[ ] INTEGER iPAnalyte5	
	[ ] STRING sStage1	 
	[ ] INTEGER iNumberCyclesInStage	
[ ] 
[ ] // The type CUSTOMIZEDRESULT3 is used in D6780 for 3 Target Analyte
[+] type CUSTOMIZEDRESULT3 is record
	[ ] INTEGER  iRow
	[ ] STRING sTestResult1
	[ ] STRING sTestResult2
	[ ] STRING sTestResult3
	[ ] STRING sTestResultText
	[ ] STRING sTestResultColor
[ ] 
[ ] // The type REC_CustomizeResult_PR_4 is used in D6780 to customize Percent Ratio Results
[ ] // used for Target Analyte Dialog
[+] type REC_CustomizeResult_PR_4 is record
	[ ] INTEGER iRow	
	[ ] STRING sTargetResult		
	[ ] STRING sResultText	
	[ ] STRING sResultColor	
[ ] 
[ ] // The Type REC_AssayInfo_PC is used in D6780 for Pecent Ratio assays
[+] type REC_AssayInfo_PC is record
	[ ] STRING sAssayName	
	[ ] STRING sTarget1	
	[ ] STRING sTarget2	
	[ ] STRING sTarget3	
	[ ] STRING sTarget4	
	[ ] STRING sCustomizeT1	
	[ ] STRING sCustomizeT2	
	[ ] STRING sCustomizeT3	
	[ ] STRING sCustomizeT4
[ ] 
[ ] // The type REC_2ANALYTES_QUANT is used in D8384  to to define 2-analytes % ratio assay
[ ] // This record include REAL rScalingFactor1. there are only one rScalingFactor1record, because in 2-analyte % Ratio assay
[ ] // only one target is available.
[+] type REC_2ANALYTES_QUANT is record
	[ ] STRING sNAME  
	[ ] STRING sAnalyteName1 
	[ ] STRING sReporter1 
	[ ] STRING sAnalyteName2 
	[ ] STRING sReporter2 
	[ ] INTEGER iNumberCyclesInStage
	[ ] INTEGER iBkgndSub  
	[ ] INTEGER iBkgndVMin1 
	[ ] INTEGER iBkgndVMax1 
	[ ] INTEGER iBkgndVMin2  
	[ ] INTEGER iBkgndVMax2 
	[ ] REAL rThreshold1 
	[ ] REAL rThreshold2 
	[ ] INTEGER iBoxcar1 
	[ ] INTEGER iBoxcar2 
	[ ] STRING sCurveAnalysis1
	[ ] STRING sCurveAnalysis2
	[ ] INTEGER iNormFactor1D
	[ ] INTEGER iNormFactor1
	[ ] INTEGER iNormFactor2D
	[ ] INTEGER iNormFactor2
	[ ] INTEGER iVMin1 
	[ ] INTEGER iVMax1 
	[ ] INTEGER iVMin2  
	[ ] INTEGER iVMax2 
	[ ] STRING sUsage1 
	[ ] STRING sUsage2  
	[ ] INTEGER iUseEndPt1
	[ ] INTEGER iUseEndPt2
	[ ] INTEGER iEndPt1
	[ ] INTEGER iEndPt2
	[ ] INTEGER iAnalyteTargetIC1
	[ ] INTEGER iSelectTarget1ForIC
	[ ]  // 
	[ ] INTEGER iAnalyteTargetSPC1
	[ ] INTEGER iSelectTarget1ForSPC
	[ ] //
	[ ] INTEGER iAnalyteTargetEC1
	[ ] INTEGER iSelectTarget1ForEC
	[ ] //
	[ ] STRING  sInvalidBias1
	[ ] STRING  sInvalidBias2
	[ ] STRING sPeakHeightMin1
	[ ] STRING sPeakHeightMin2
	[ ] INTEGER iPrbChk
	[ ] INTEGER iPrbChk13Max1
	[ ] INTEGER iPrbChk2Min1
	[ ] INTEGER iPrbChkDeltaMin1
	[ ] INTEGER iPrbChk13Max2
	[ ] INTEGER iPrbChk2Min2
	[ ] INTEGER iPrbChkDeltaMin2
	[ ] //
	[ ] INTEGER iUseMinTargetDeltaCt1
	[ ] INTEGER iUseMinTargetDeltaCt2
	[ ] //
	[ ] STRING sMinTargetDeltaCt1
	[ ] STRING sMinTargetDeltaCt2
	[ ] STRING sDeltaCtE1
	[ ] STRING sDeltaCtE2
	[ ] //
	[ ] STRING sCurveFit
	[ ] STRING sSignalLoss
	[ ] //
	[ ] INTEGER iCrosstalk
	[ ] STRING sFrom1to2
	[ ] STRING sFrom2to1
	[ ] REAL rScalingFactor1
	[ ] 
	[ ] //
[ ] 
[ ] // This is the record for 3 Analytes to be used in D8384 % Ratio protocol to define 3-analytes % ratio assay
[ ] // This record include REAL rScalingFactor1, REAL rScalingFactor2, REAL rScalingFactor3
[+] type REC_3ANALYTES_QUANT is record
	[ ] STRING sNAME  
	[ ] STRING sAnalyteName1 
	[ ] STRING sReporter1 
	[ ] STRING sAnalyteName2 
	[ ] STRING sReporter2 
	[ ] STRING sAnalyteName3 
	[ ] STRING sReporter3 
	[ ] INTEGER iNumberCyclesInStage
	[ ] INTEGER iBkgndSub  
	[ ] INTEGER iBkgndVMin1 
	[ ] INTEGER iBkgndVMax1 
	[ ] INTEGER iBkgndVMin2  
	[ ] INTEGER iBkgndVMax2 
	[ ] INTEGER iBkgndVMin3 
	[ ] INTEGER iBkgndVMax3 
	[ ] REAL rThreshold1 
	[ ] REAL rThreshold2 
	[ ] REAL rThreshold3 
	[ ] INTEGER iBoxcar1 
	[ ] INTEGER iBoxcar2 
	[ ] INTEGER iBoxcar3 
	[ ] STRING sCurveAnalysis1
	[ ] STRING sCurveAnalysis2
	[ ] STRING sCurveAnalysis3
	[ ] INTEGER iNormFactor1D
	[ ] INTEGER iNormFactor1
	[ ] INTEGER iNormFactor2D
	[ ] INTEGER iNormFactor2
	[ ] INTEGER iNormFactor3D
	[ ] INTEGER iNormFactor3
	[ ] INTEGER iVMin1 
	[ ] INTEGER iVMax1 
	[ ] INTEGER iVMin2  
	[ ] INTEGER iVMax2 
	[ ] INTEGER iVMin3 
	[ ] INTEGER iVMax3 
	[ ] STRING sUsage1 
	[ ] STRING sUsage2  
	[ ] STRING sUsage3 
	[ ] INTEGER iUseEndPt1
	[ ] INTEGER iUseEndPt2
	[ ] INTEGER iUseEndPt3
	[ ] INTEGER iEndPt1
	[ ] INTEGER iEndPt2
	[ ] INTEGER iEndPt3
	[ ] INTEGER iAnalyteTargetIC1
	[ ] INTEGER iSelectTarget1ForIC
	[ ] INTEGER iAnalyteTargetIC2
	[ ] INTEGER iSelectTarget2ForIC  
	[ ]  // 
	[ ] INTEGER iAnalyteTargetSPC1
	[ ] INTEGER iSelectTarget1ForSPC
	[ ] INTEGER iAnalyteTargetSPC2
	[ ] INTEGER iSelectTarget2ForSPC
	[ ] //
	[ ] INTEGER iAnalyteTargetEC1
	[ ] INTEGER iSelectTarget1ForEC
	[ ] INTEGER iAnalyteTargetEC2
	[ ] INTEGER iSelectTarget2ForEC
	[ ] //
	[ ] STRING  sInvalidBias1
	[ ] STRING  sInvalidBias2
	[ ] STRING  sInvalidBias3
	[ ] STRING sPeakHeightMin1
	[ ] STRING sPeakHeightMin2
	[ ] STRING sPeakHeightMin3
	[ ] INTEGER iPrbChk
	[ ] INTEGER iPrbChk13Max1
	[ ] INTEGER iPrbChk2Min1
	[ ] INTEGER iPrbChkDeltaMin1
	[ ] INTEGER iPrbChk13Max2
	[ ] INTEGER iPrbChk2Min2
	[ ] INTEGER iPrbChkDeltaMin2
	[ ] INTEGER iPrbChk13Max3
	[ ] INTEGER iPrbChk2Min3
	[ ] INTEGER iPrbChkDeltaMin3
	[ ] //
	[ ] INTEGER iUseMinTargetDeltaCt1
	[ ] INTEGER iUseMinTargetDeltaCt2
	[ ] INTEGER iUseMinTargetDeltaCt3
	[ ] //
	[ ] STRING sMinTargetDeltaCt1
	[ ] STRING sMinTargetDeltaCt2
	[ ] STRING sMinTargetDeltaCt3
	[ ] STRING sDeltaCtE1
	[ ] STRING sDeltaCtE2
	[ ] STRING sDeltaCtE3
	[ ] //
	[ ] STRING sCurveFit
	[ ] STRING sSignalLoss
	[ ] //
	[ ] INTEGER iCrosstalk
	[ ] STRING sFrom1to2
	[ ] STRING sFrom1to3
	[ ] STRING sFrom2to1
	[ ] STRING sFrom2to3
	[ ] STRING sFrom3to1
	[ ] STRING sFrom3to2
	[ ] //
	[ ] STRING sProtocol1
	[ ] //
	[ ] REAL rScalingFactor1
	[ ] REAL rScalingFactor2
	[ ] REAL rScalingFactor3
[ ] 
[ ] // This is the record for 4 Analytes to be used in D8384 % Ratio protocol to define 4-analytes % ratio assay
[ ] // This record include REAL rScalingFactor1, REAL rScalingFactor2, REALG rScalingFactor3. REAL rScalingFactor4
[+] type REC_4ANALYTES_QUANT is record
	[ ] STRING sNAME  
	[ ] STRING sAnalyteName1 
	[ ] STRING sReporter1 
	[ ] STRING sAnalyteName2 
	[ ] STRING sReporter2 
	[ ] STRING sAnalyteName3 
	[ ] STRING sReporter3 
	[ ] STRING sAnalyteName4 
	[ ] STRING sReporter4 
	[ ] INTEGER iNumberCyclesInStage
	[ ] INTEGER iBkgndSub  
	[ ] INTEGER iBkgndVMin1 
	[ ] INTEGER iBkgndVMax1 
	[ ] INTEGER iBkgndVMin2  
	[ ] INTEGER iBkgndVMax2 
	[ ] INTEGER iBkgndVMin3 
	[ ] INTEGER iBkgndVMax3 
	[ ] INTEGER iBkgndVMin4 
	[ ] INTEGER iBkgndVMax4
	[ ] REAL rThreshold1 
	[ ] REAL rThreshold2 
	[ ] REAL rThreshold3 
	[ ] REAL rThreshold4 
	[ ] INTEGER iBoxcar1 
	[ ] INTEGER iBoxcar2 
	[ ] INTEGER iBoxcar3 
	[ ] INTEGER iBoxcar4 
	[ ] STRING sCurveAnalysis1
	[ ] STRING sCurveAnalysis2
	[ ] STRING sCurveAnalysis3
	[ ] STRING sCurveAnalysis4
	[ ] INTEGER iNormFactor1D
	[ ] INTEGER iNormFactor1
	[ ] INTEGER iNormFactor2D
	[ ] INTEGER iNormFactor2
	[ ] INTEGER iNormFactor3D
	[ ] INTEGER iNormFactor3
	[ ] INTEGER iNormFactor4D
	[ ] INTEGER iNormFactor4
	[ ] INTEGER iVMin1 
	[ ] INTEGER iVMax1 
	[ ] INTEGER iVMin2  
	[ ] INTEGER iVMax2 
	[ ] INTEGER iVMin3 
	[ ] INTEGER iVMax3 
	[ ] INTEGER iVMin4 
	[ ] INTEGER iVMax4 
	[ ] STRING sUsage1 
	[ ] STRING sUsage2  
	[ ] STRING sUsage3 
	[ ] STRING sUsage4  
	[ ] INTEGER iUseEndPt1
	[ ] INTEGER iUseEndPt2
	[ ] INTEGER iUseEndPt3
	[ ] INTEGER iUseEndPt4
	[ ] INTEGER iEndPt1
	[ ] INTEGER iEndPt2
	[ ] INTEGER iEndPt3
	[ ] INTEGER iEndPt4
	[ ] INTEGER iAnalyteTargetIC1
	[ ] INTEGER iSelectTarget1ForIC
	[ ] INTEGER iAnalyteTargetIC2
	[ ] INTEGER iSelectTarget2ForIC  
	[ ] INTEGER iAnalyteTargetIC3
	[ ] INTEGER iSelectTarget3ForIC
	[ ]  // 
	[ ] INTEGER iAnalyteTargetSPC1
	[ ] INTEGER iSelectTarget1ForSPC
	[ ] INTEGER iAnalyteTargetSPC2
	[ ] INTEGER iSelectTarget2ForSPC
	[ ] INTEGER iAnalyteTargetSPC3
	[ ] INTEGER iSelectTarget3ForSPC
	[ ] //
	[ ] INTEGER iAnalyteTargetEC1
	[ ] INTEGER iSelectTarget1ForEC
	[ ] INTEGER iAnalyteTargetEC2
	[ ] INTEGER iSelectTarget2ForEC
	[ ] INTEGER iAnalyteTargetEC3
	[ ] INTEGER iSelectTarget3ForEC
	[ ] //
	[ ] STRING  sInvalidBias1
	[ ] STRING  sInvalidBias2
	[ ] STRING  sInvalidBias3
	[ ] STRING  sInvalidBias4
	[ ] STRING sPeakHeightMin1
	[ ] STRING sPeakHeightMin2
	[ ] STRING sPeakHeightMin3
	[ ] STRING sPeakHeightMin4
	[ ] INTEGER iPrbChk
	[ ] INTEGER iPrbChk13Max1
	[ ] INTEGER iPrbChk2Min1
	[ ] INTEGER iPrbChkDeltaMin1
	[ ] INTEGER iPrbChk13Max2
	[ ] INTEGER iPrbChk2Min2
	[ ] INTEGER iPrbChkDeltaMin2
	[ ] INTEGER iPrbChk13Max3
	[ ] INTEGER iPrbChk2Min3
	[ ] INTEGER iPrbChkDeltaMin3
	[ ] INTEGER iPrbChk13Max4
	[ ] INTEGER iPrbChk2Min4
	[ ] INTEGER iPrbChkDeltaMin4
	[ ] //
	[ ] INTEGER iUseMinTargetDeltaCt1
	[ ] INTEGER iUseMinTargetDeltaCt2
	[ ] INTEGER iUseMinTargetDeltaCt3
	[ ] INTEGER iUseMinTargetDeltaCt4
	[ ] //
	[ ] STRING sMinTargetDeltaCt1
	[ ] STRING sMinTargetDeltaCt2
	[ ] STRING sMinTargetDeltaCt3
	[ ] STRING sMinTargetDeltaCt4
	[ ] STRING sDeltaCtE1
	[ ] STRING sDeltaCtE2
	[ ] STRING sDeltaCtE3
	[ ] STRING sDeltaCtE4
	[ ] //
	[ ] 
	[ ] STRING sCurveFit
	[ ] STRING sSignalLoss
	[ ] //
	[ ] STRING sAnalysisType
	[ ] //
	[ ] INTEGER iCrosstalk
	[ ] STRING sFrom1to2
	[ ] STRING sFrom1to3
	[ ] STRING sFrom1to4
	[ ] STRING sFrom2to1
	[ ] STRING sFrom2to3
	[ ] STRING sFrom2to4
	[ ] STRING sFrom3to1
	[ ] STRING sFrom3to2
	[ ] STRING sFrom3to4
	[ ] STRING sFrom4to1
	[ ] STRING sFrom4to2
	[ ] STRING sFrom4to3
	[ ] //
	[ ] REAL rScalingFactor1
	[ ] REAL rScalingFactor2
	[ ] REAL rScalingFactor3
	[ ] REAL rScalingFactor4
	[ ] //
	[ ] 
[ ] 
[ ] // This is the record for 5-analyte to be used in D8384 % Ratio protocol to define 5-analytes % ratio assay
[ ] // This record include REAL rScalingFactor1, REAL rScalingFactor2, ReAL rScalingFactor3. REAL rScalingFactor4, REAL rScalingFactor4
[+] type REC_5ANALYTES_QUANT  is record
	[ ] STRING sNAME  
	[ ] STRING sAnalyteName1 
	[ ] STRING sReporter1 
	[ ] STRING sAnalyteName2 
	[ ] STRING sReporter2 
	[ ] STRING sAnalyteName3 
	[ ] STRING sReporter3 
	[ ] STRING sAnalyteName4 
	[ ] STRING sReporter4 
	[ ] STRING sAnalyteName5 
	[ ] STRING sReporter5 
	[ ] INTEGER iNumberCyclesInStage
	[ ] INTEGER iBkgndSub  
	[ ] INTEGER iBkgndVMin1 
	[ ] INTEGER iBkgndVMax1 
	[ ] INTEGER iBkgndVMin2  
	[ ] INTEGER iBkgndVMax2 
	[ ] INTEGER iBkgndVMin3 
	[ ] INTEGER iBkgndVMax3 
	[ ] INTEGER iBkgndVMin4 
	[ ] INTEGER iBkgndVMax4
	[ ] INTEGER iBkgndVMin5 
	[ ] INTEGER iBkgndVMax5
	[ ] REAL rThreshold1 
	[ ] REAL rThreshold2 
	[ ] REAL rThreshold3 
	[ ] REAL rThreshold4 
	[ ] REAL rThreshold5
	[ ] INTEGER iBoxcar1 
	[ ] INTEGER iBoxcar2 
	[ ] INTEGER iBoxcar3 
	[ ] INTEGER iBoxcar4 
	[ ] INTEGER iBoxcar5 
	[ ] STRING sCurveAnalysis1
	[ ] STRING sCurveAnalysis2
	[ ] STRING sCurveAnalysis3
	[ ] STRING sCurveAnalysis4
	[ ] STRING sCurveAnalysis5
	[ ] INTEGER iNormFactor1D
	[ ] INTEGER iNormFactor1
	[ ] INTEGER iNormFactor2D
	[ ] INTEGER iNormFactor2
	[ ] INTEGER iNormFactor3D
	[ ] INTEGER iNormFactor3
	[ ] INTEGER iNormFactor4D
	[ ] INTEGER iNormFactor4
	[ ] INTEGER iNormFactor5D
	[ ] INTEGER iNormFactor5
	[ ] INTEGER iVMin1 
	[ ] INTEGER iVMax1 
	[ ] INTEGER iVMin2  
	[ ] INTEGER iVMax2 
	[ ] INTEGER iVMin3 
	[ ] INTEGER iVMax3 
	[ ] INTEGER iVMin4 
	[ ] INTEGER iVMax4 
	[ ] INTEGER iVMin5 
	[ ] INTEGER iVMax5
	[ ] STRING sUsage1 
	[ ] STRING sUsage2  
	[ ] STRING sUsage3 
	[ ] STRING sUsage4  
	[ ] STRING sUsage5 
	[ ] INTEGER iUseEndPt1
	[ ] INTEGER iUseEndPt2
	[ ] INTEGER iUseEndPt3
	[ ] INTEGER iUseEndPt4
	[ ] INTEGER iUseEndPt5
	[ ] INTEGER iEndPt1
	[ ] INTEGER iEndPt2
	[ ] INTEGER iEndPt3
	[ ] INTEGER iEndPt4
	[ ] INTEGER iEndPt5
	[ ] INTEGER iAnalyteTargetIC1
	[ ] INTEGER iSelectTarget1ForIC
	[ ] INTEGER iAnalyteTargetIC2
	[ ] INTEGER iSelectTarget2ForIC  
	[ ] INTEGER iAnalyteTargetIC3
	[ ] INTEGER iSelectTarget3ForIC
	[ ] INTEGER iAnalyteTargetIC4
	[ ] INTEGER iSelectTarget4ForIC
	[ ]  // 
	[ ] INTEGER iAnalyteTargetSPC1
	[ ] INTEGER iSelectTarget1ForSPC
	[ ] INTEGER iAnalyteTargetSPC2
	[ ] INTEGER iSelectTarget2ForSPC
	[ ] INTEGER iAnalyteTargetSPC3
	[ ] INTEGER iSelectTarget3ForSPC
	[ ] INTEGER iAnalyteTargetSPC4
	[ ] INTEGER iSelectTarget4ForSPC
	[ ] //
	[ ] INTEGER iAnalyteTargetEC1
	[ ] INTEGER iSelectTarget1ForEC
	[ ] INTEGER iAnalyteTargetEC2
	[ ] INTEGER iSelectTarget2ForEC
	[ ] INTEGER iAnalyteTargetEC3
	[ ] INTEGER iSelectTarget3ForEC
	[ ] INTEGER iAnalyteTargetEC4
	[ ] INTEGER iSelectTarget4ForEC
	[ ] //
	[ ] STRING  sInvalidBias1
	[ ] STRING  sInvalidBias2
	[ ] STRING  sInvalidBias3
	[ ] STRING  sInvalidBias4
	[ ] STRING  sInvalidBias5
	[ ] STRING sPeakHeightMin1
	[ ] STRING sPeakHeightMin2
	[ ] STRING sPeakHeightMin3
	[ ] STRING sPeakHeightMin4
	[ ] STRING sPeakHeightMin5
	[ ] INTEGER iPrbChk
	[ ] INTEGER iPrbChk13Max1
	[ ] INTEGER iPrbChk2Min1
	[ ] INTEGER iPrbChkDeltaMin1
	[ ] INTEGER iPrbChk13Max2
	[ ] INTEGER iPrbChk2Min2
	[ ] INTEGER iPrbChkDeltaMin2
	[ ] INTEGER iPrbChk13Max3
	[ ] INTEGER iPrbChk2Min3
	[ ] INTEGER iPrbChkDeltaMin3
	[ ] INTEGER iPrbChk13Max4
	[ ] INTEGER iPrbChk2Min4
	[ ] INTEGER iPrbChkDeltaMin4
	[ ] INTEGER iPrbChk13Max5
	[ ] INTEGER iPrbChk2Min5
	[ ] INTEGER iPrbChkDeltaMin5
	[ ] //
	[ ] INTEGER iUseMinTargetDeltaCt1
	[ ] INTEGER iUseMinTargetDeltaCt2
	[ ] INTEGER iUseMinTargetDeltaCt3
	[ ] INTEGER iUseMinTargetDeltaCt4
	[ ] INTEGER iUseMinTargetDeltaCt5
	[ ] //
	[ ] STRING sMinTargetDeltaCt1
	[ ] STRING sMinTargetDeltaCt2
	[ ] STRING sMinTargetDeltaCt3
	[ ] STRING sMinTargetDeltaCt4
	[ ] STRING sMinTargetDeltaCt5
	[ ] 
	[ ] STRING sDeltaCtE1
	[ ] STRING sDeltaCtE2
	[ ] STRING sDeltaCtE3
	[ ] STRING sDeltaCtE4
	[ ] STRING sDeltaCtE5
	[ ] //
	[ ] STRING sCurveFit
	[ ] STRING sSignalLoss
	[ ] //
	[ ] INTEGER iCrosstalk
	[ ] STRING sFrom1to2
	[ ] STRING sFrom1to3
	[ ] STRING sFrom1to4
	[ ] STRING sFrom1to5
	[ ] STRING sFrom2to1
	[ ] STRING sFrom2to3
	[ ] STRING sFrom2to4
	[ ] STRING sFrom2to5
	[ ] STRING sFrom3to1
	[ ] STRING sFrom3to2
	[ ] STRING sFrom3to4
	[ ] STRING sFrom3to5
	[ ] STRING sFrom4to1
	[ ] STRING sFrom4to2
	[ ] STRING sFrom4to3
	[ ] STRING sFrom4to5
	[ ] STRING sFrom5to1
	[ ] STRING sFrom5to2
	[ ] STRING sFrom5to3
	[ ] STRING sFrom5to4
	[ ] //
	[ ] REAL rScalingFactor1
	[ ] REAL rScalingFactor2
	[ ] REAL rScalingFactor3
	[ ] REAL rScalingFactor4
	[ ] REAL rScalingFactor5
	[ ] 
[ ] 
[ ] // This is the record for 6 Analytes to be used in D8384 % Ratio protocol to define 6-analytes % ratio assay
[ ] // This record include REAL rScalingFactor1, REAL rScalingFactor2, REAL rScalingFactor3, REAL rScalingFactor3
[ ] // REAL rScalingFactor4, REAL rScalingFactor5, REAL rScalingFactor6
[+] type REC_6ANALYTES_QUANT is record
	[ ] STRING sNAME  
	[ ] STRING sAnalyteName1 
	[ ] STRING sReporter1 
	[ ] STRING sAnalyteName2 
	[ ] STRING sReporter2 
	[ ] STRING sAnalyteName3 
	[ ] STRING sReporter3 
	[ ] STRING sAnalyteName4 
	[ ] STRING sReporter4 
	[ ] STRING sAnalyteName5 
	[ ] STRING sReporter5 
	[ ] STRING sAnalyteName6 
	[ ] STRING sReporter6 
	[ ] INTEGER iNumberCyclesInStage
	[ ] INTEGER iBkgndSub  
	[ ] INTEGER iBkgndVMin1 
	[ ] INTEGER iBkgndVMax1 
	[ ] INTEGER iBkgndVMin2  
	[ ] INTEGER iBkgndVMax2 
	[ ] INTEGER iBkgndVMin3 
	[ ] INTEGER iBkgndVMax3 
	[ ] INTEGER iBkgndVMin4 
	[ ] INTEGER iBkgndVMax4
	[ ] INTEGER iBkgndVMin5 
	[ ] INTEGER iBkgndVMax5
	[ ] INTEGER iBkgndVMin6 
	[ ] INTEGER iBkgndVMax6
	[ ] REAL rThreshold1 
	[ ] REAL rThreshold2 
	[ ] REAL rThreshold3 
	[ ] REAL rThreshold4 
	[ ] REAL rThreshold5
	[ ] REAL rThreshold6
	[ ] INTEGER iBoxcar1 
	[ ] INTEGER iBoxcar2 
	[ ] INTEGER iBoxcar3 
	[ ] INTEGER iBoxcar4 
	[ ] INTEGER iBoxcar5 
	[ ] INTEGER iBoxcar6 
	[ ] STRING sCurveAnalysis1
	[ ] STRING sCurveAnalysis2
	[ ] STRING sCurveAnalysis3
	[ ] STRING sCurveAnalysis4
	[ ] STRING sCurveAnalysis5
	[ ] STRING sCurveAnalysis6
	[ ] INTEGER iNormFactor1D
	[ ] INTEGER iNormFactor1
	[ ] INTEGER iNormFactor2D
	[ ] INTEGER iNormFactor2
	[ ] INTEGER iNormFactor3D
	[ ] INTEGER iNormFactor3
	[ ] INTEGER iNormFactor4D
	[ ] INTEGER iNormFactor4
	[ ] INTEGER iNormFactor5D
	[ ] INTEGER iNormFactor5
	[ ] INTEGER iNormFactor6D
	[ ] INTEGER iNormFactor6
	[ ] INTEGER iVMin1 
	[ ] INTEGER iVMax1 
	[ ] INTEGER iVMin2  
	[ ] INTEGER iVMax2 
	[ ] INTEGER iVMin3 
	[ ] INTEGER iVMax3 
	[ ] INTEGER iVMin4 
	[ ] INTEGER iVMax4 
	[ ] INTEGER iVMin5 
	[ ] INTEGER iVMax5
	[ ] INTEGER iVMin6
	[ ] INTEGER iVMax6 
	[ ] STRING sUsage1 
	[ ] STRING sUsage2  
	[ ] STRING sUsage3 
	[ ] STRING sUsage4  
	[ ] STRING sUsage5 
	[ ] STRING sUsage6  
	[ ] INTEGER iUseEndPt1
	[ ] INTEGER iUseEndPt2
	[ ] INTEGER iUseEndPt3
	[ ] INTEGER iUseEndPt4
	[ ] INTEGER iUseEndPt5
	[ ] INTEGER iUseEndPt6
	[ ] INTEGER iEndPt1
	[ ] INTEGER iEndPt2
	[ ] INTEGER iEndPt3
	[ ] INTEGER iEndPt4
	[ ] INTEGER iEndPt5
	[ ] INTEGER iEndPt6
	[ ] INTEGER iAnalyteTargetIC1
	[ ] INTEGER iSelectTarget1ForIC
	[ ] INTEGER iAnalyteTargetIC2
	[ ] INTEGER iSelectTarget2ForIC  
	[ ] INTEGER iAnalyteTargetIC3
	[ ] INTEGER iSelectTarget3ForIC
	[ ] INTEGER iAnalyteTargetIC4
	[ ] INTEGER iSelectTarget4ForIC
	[ ] INTEGER iAnalyteTargetIC5
	[ ] INTEGER iSelectTarget5ForIC
	[ ]  // 
	[ ] INTEGER iAnalyteTargetSPC1
	[ ] INTEGER iSelectTarget1ForSPC
	[ ] INTEGER iAnalyteTargetSPC2
	[ ] INTEGER iSelectTarget2ForSPC
	[ ] INTEGER iAnalyteTargetSPC3
	[ ] INTEGER iSelectTarget3ForSPC
	[ ] INTEGER iAnalyteTargetSPC4
	[ ] INTEGER iSelectTarget4ForSPC
	[ ] INTEGER iAnalyteTargetSPC5
	[ ] INTEGER iSelectTarget5ForSPC
	[ ] //
	[ ] INTEGER iAnalyteTargetEC1
	[ ] INTEGER iSelectTarget1ForEC
	[ ] INTEGER iAnalyteTargetEC2
	[ ] INTEGER iSelectTarget2ForEC
	[ ] INTEGER iAnalyteTargetEC3
	[ ] INTEGER iSelectTarget3ForEC
	[ ] INTEGER iAnalyteTargetEC4
	[ ] INTEGER iSelectTarget4ForEC
	[ ] INTEGER iAnalyteTargetEC5
	[ ] INTEGER iSelectTarget5ForEC
	[ ] //
	[ ] STRING  sInvalidBias1
	[ ] STRING  sInvalidBias2
	[ ] STRING  sInvalidBias3
	[ ] STRING  sInvalidBias4
	[ ] STRING  sInvalidBias5
	[ ] STRING  sInvalidBias6
	[ ] STRING sPeakHeightMin1
	[ ] STRING sPeakHeightMin2
	[ ] STRING sPeakHeightMin3
	[ ] STRING sPeakHeightMin4
	[ ] STRING sPeakHeightMin5
	[ ] STRING sPeakHeightMin6
	[ ] INTEGER iPrbChk
	[ ] INTEGER iPrbChk13Max1
	[ ] INTEGER iPrbChk2Min1
	[ ] INTEGER iPrbChkDeltaMin1
	[ ] INTEGER iPrbChk13Max2
	[ ] INTEGER iPrbChk2Min2
	[ ] INTEGER iPrbChkDeltaMin2
	[ ] INTEGER iPrbChk13Max3
	[ ] INTEGER iPrbChk2Min3
	[ ] INTEGER iPrbChkDeltaMin3
	[ ] INTEGER iPrbChk13Max4
	[ ] INTEGER iPrbChk2Min4
	[ ] INTEGER iPrbChkDeltaMin4
	[ ] INTEGER iPrbChk13Max5
	[ ] INTEGER iPrbChk2Min5
	[ ] INTEGER iPrbChkDeltaMin5
	[ ] INTEGER iPrbChk13Max6
	[ ] INTEGER iPrbChk2Min6
	[ ] INTEGER iPrbChkDeltaMin6
	[ ] //
	[ ] INTEGER iUseMinTargetDeltaCt1
	[ ] INTEGER iUseMinTargetDeltaCt2
	[ ] INTEGER iUseMinTargetDeltaCt3
	[ ] INTEGER iUseMinTargetDeltaCt4
	[ ] INTEGER iUseMinTargetDeltaCt5
	[ ] INTEGER iUseMinTargetDeltaCt6
	[ ] //
	[ ] STRING sMinTargetDeltaCt1
	[ ] STRING sMinTargetDeltaCt2
	[ ] STRING sMinTargetDeltaCt3
	[ ] STRING sMinTargetDeltaCt4
	[ ] STRING sMinTargetDeltaCt5
	[ ] STRING sMinTargetDeltaCt6
	[ ] STRING sDeltaCtE1
	[ ] STRING sDeltaCtE2
	[ ] STRING sDeltaCtE3
	[ ] STRING sDeltaCtE4
	[ ] STRING sDeltaCtE5
	[ ] STRING sDeltaCtE6
	[ ] //
	[ ] STRING sCurveFit
	[ ] STRING sSignalLoss
	[ ] //
	[ ] INTEGER iCrosstalk
	[ ] STRING sFrom1to2
	[ ] STRING sFrom1to3
	[ ] STRING sFrom1to4
	[ ] STRING sFrom1to5
	[ ] STRING sFrom1to6
	[ ] STRING sFrom2to1
	[ ] STRING sFrom2to3
	[ ] STRING sFrom2to4
	[ ] STRING sFrom2to5
	[ ] STRING sFrom2to6
	[ ] STRING sFrom3to1
	[ ] STRING sFrom3to2
	[ ] STRING sFrom3to4
	[ ] STRING sFrom3to5
	[ ] STRING sFrom3to6
	[ ] STRING sFrom4to1
	[ ] STRING sFrom4to2
	[ ] STRING sFrom4to3
	[ ] STRING sFrom4to5
	[ ] STRING sFrom4to6
	[ ] STRING sFrom5to1
	[ ] STRING sFrom5to2
	[ ] STRING sFrom5to3
	[ ] STRING sFrom5to4
	[ ] STRING sFrom5to6
	[ ] STRING sFrom6to1
	[ ] STRING sFrom6to2
	[ ] STRING sFrom6to3
	[ ] STRING sFrom6to4
	[ ] STRING sFrom6to5
	[ ] //
	[ ] REAL rScalingFactor1
	[ ] REAL rScalingFactor2
	[ ] REAL rScalingFactor3
	[ ] REAL rScalingFactor4
	[ ] REAL rScalingFactor5
	[ ] REAL rScalingFactor6
	[ ] 
[ ] // This is the record  is used in D8384 % Ratio define assays scripts 
[ ] 
[+] type REC_TABLECELL_SF is record
	[ ] TABLEROW  tRow
	[ ] TABLECOL tCol
	[ ] 
[ ] 
[ ] 
[ ] 
