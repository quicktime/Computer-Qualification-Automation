[ ] //use "..\/MasterFrame.inc"
[ ] use "..\constants\Constants.inc"
[ ] //use "..\types\DefineAssaysTypes.inc"
[ ] use "../../Common Libraries/MasterUseStmts.inc"
[ ] //
[ ] // Records for Define Advance To New Stage Assays for D2708
[ ] //
[+] type REC_1_ANALYTE_ANS  is record
	[ ] STRING NAME  
	[ ] STRING AnalyteName1 
	[ ] STRING Reporter1 
	[ ] INTEGER NumberCycle
	[ ] INTEGER BkgndSub  
	[ ] INTEGER BkgndVMin1 
	[ ] INTEGER BkgndVMax1 
	[ ] REAL Threshold1 
	[ ] INTEGER Boxcar1 
	[ ] STRING CurveAnalysis1
	[ ] INTEGER NormFactor1D
	[ ] INTEGER NormFactor1
	[ ] INTEGER VMin1 
	[ ] INTEGER VMax1 
	[ ] STRING Ausage1 
	[ ] INTEGER UseEndPt1
	[ ] INTEGER EndPt1
	[ ] STRING  InvalidBias1
	[ ] STRING PeakHeightMin1
	[ ] INTEGER PrbChk
	[ ] INTEGER PrbChk13Max1
	[ ] INTEGER PrbChk2Min1
	[ ] INTEGER PrbChkDeltaMin1
	[ ] INTEGER UseMinTargetDeltaCt1
	[ ] STRING  MinTargetDeltaCt1
	[ ] STRING DeltaCtE1
	[ ] STRING CurveFit
	[ ] STRING SignalLoss
	[ ] STRING AdvanceToNewStage
	[ ] 
[ ] 
[+] type REC_2_ANALYTES_ANS  is record
	[ ] STRING NAME  
	[ ] STRING AnalyteName1 
	[ ] STRING Reporter1 
	[ ] STRING AnalyteName2 
	[ ] STRING Reporter2 
	[ ] INTEGER NumberCycle
	[ ] INTEGER BkgndSub  
	[ ] INTEGER BkgndVMin1 
	[ ] INTEGER BkgndVMax1 
	[ ] INTEGER BkgndVMin2  
	[ ] INTEGER BkgndVMax2 
	[ ] REAL Threshold1 
	[ ] REAL Threshold2 
	[ ] INTEGER Boxcar1 
	[ ] INTEGER Boxcar2 
	[ ] STRING CurveAnalysis1
	[ ] STRING CurveAnalysis2
	[ ] INTEGER NormFactor1D
	[ ] INTEGER NormFactor1
	[ ] INTEGER NormFactor2D
	[ ] INTEGER NormFactor2
	[ ] INTEGER VMin1 
	[ ] INTEGER VMax1 
	[ ] INTEGER VMin2  
	[ ] INTEGER VMax2 
	[ ] STRING Ausage1 
	[ ] STRING Ausage2  
	[ ] INTEGER UseEndPt1
	[ ] INTEGER UseEndPt2
	[ ] INTEGER EndPt1
	[ ] INTEGER EndPt2
	[ ] INTEGER AnalyteTargetIC1
	[ ] INTEGER SelectTarget1ForIC
	[ ] INTEGER AnalyteTargetSPC1
	[ ] INTEGER SelectTarget1ForSPC
	[ ] INTEGER AnalyteTargetEC1
	[ ] INTEGER SelectTarget1ForEC
	[ ] STRING  InvalidBias1
	[ ] STRING  InvalidBias2
	[ ] STRING PeakHeightMin1
	[ ] STRING PeakHeightMin2
	[ ] INTEGER PrbChk
	[ ] INTEGER PrbChk13Max1
	[ ] INTEGER PrbChk2Min1
	[ ] INTEGER PrbChkDeltaMin1
	[ ] INTEGER PrbChk13Max2
	[ ] INTEGER PrbChk2Min2
	[ ] INTEGER PrbChkDeltaMin2
	[ ] INTEGER UseMinTargetDeltaCt1
	[ ] INTEGER UseMinTargetDeltaCt2
	[ ] STRING  MinTargetDeltaCt1
	[ ] STRING  MinTargetDeltaCt2
	[ ] INTEGER DeltaCtE1
	[ ] INTEGER DeltaCtE2
	[ ] STRING CurveFit
	[ ] STRING SignalLoss
	[ ] STRING AdvanceToNewStage
	[ ] //
[ ] //
[+] type REC_3_ANALYTES_ANS  is record
	[ ] STRING NAME  
	[ ] STRING AnalyteName1 
	[ ] STRING Reporter1 
	[ ] STRING AnalyteName2 
	[ ] STRING Reporter2 
	[ ] STRING AnalyteName3 
	[ ] STRING Reporter3 
	[ ] INTEGER NumberCycle
	[ ] INTEGER BkgndSub  
	[ ] INTEGER BkgndVMin1 
	[ ] INTEGER BkgndVMax1 
	[ ] INTEGER BkgndVMin2  
	[ ] INTEGER BkgndVMax2 
	[ ] INTEGER BkgndVMin3
	[ ] INTEGER BkgndVMax3 
	[ ] REAL Threshold1 
	[ ] REAL Threshold2 
	[ ] REAL Threshold3
	[ ] INTEGER Boxcar1 
	[ ] INTEGER Boxcar2 
	[ ] INTEGER Boxcar3 
	[ ] STRING CurveAnalysis1
	[ ] STRING CurveAnalysis2
	[ ] STRING CurveAnalysis3
	[ ] INTEGER NormFactor1D
	[ ] INTEGER NormFactor1
	[ ] INTEGER NormFactor2D
	[ ] INTEGER NormFactor2
	[ ] INTEGER NormFactor3D
	[ ] INTEGER NormFactor3
	[ ] INTEGER VMin1 
	[ ] INTEGER VMax1 
	[ ] INTEGER VMin2  
	[ ] INTEGER VMax2 
	[ ] INTEGER VMin3 
	[ ] INTEGER VMax3
	[ ] STRING Ausage1 
	[ ] STRING Ausage2  
	[ ] STRING Ausage3  
	[ ] INTEGER UseEndPt1
	[ ] INTEGER UseEndPt2
	[ ] INTEGER UseEndPt3
	[ ] INTEGER EndPt1
	[ ] INTEGER EndPt2
	[ ] INTEGER EndPt3
	[ ] INTEGER AnalyteTargetIC1
	[ ] INTEGER SelectTarget1ForIC
	[ ] INTEGER AnalyteTargetIC2
	[ ] INTEGER SelectTarget2ForIC  
	[ ] INTEGER AnalyteTargetSPC1
	[ ] INTEGER SelectTarget1ForSPC
	[ ] INTEGER AnalyteTargetSPC2
	[ ] INTEGER SelectTarget2ForSPC
	[ ] INTEGER AnalyteTargetEC1
	[ ] INTEGER SelectTarget1ForEC
	[ ] INTEGER AnalyteTargetEC2
	[ ] INTEGER SelectTarget2ForEC
	[ ] STRING  InvalidBias1
	[ ] STRING  InvalidBias2
	[ ] STRING  InvalidBias3
	[ ] STRING PeakHeightMin1
	[ ] STRING PeakHeightMin2
	[ ] STRING  PeakHeightMin3
	[ ] INTEGER PrbChk
	[ ] INTEGER PrbChk13Max1
	[ ] INTEGER PrbChk2Min1
	[ ] INTEGER PrbChkDeltaMin1
	[ ] INTEGER PrbChk13Max2
	[ ] INTEGER PrbChk2Min2
	[ ] INTEGER PrbChkDeltaMin2
	[ ] INTEGER PrbChk13Max3
	[ ] INTEGER PrbChk2Min3
	[ ] INTEGER PrbChkDeltaMin3
	[ ] INTEGER UseMinTargetDeltaCt1
	[ ] INTEGER UseMinTargetDeltaCt2
	[ ] INTEGER UseMinTargetDeltaCt3
	[ ] STRING MinTargetDeltaCt1
	[ ] STRING  MinTargetDeltaCt2
	[ ] STRING  MinTargetDeltaCt3
	[ ] INTEGER DeltaCtE1
	[ ] INTEGER DeltaCtE2
	[ ] INTEGER DeltaCtE3
	[ ] STRING CurveFit
	[ ] STRING SignalLoss
	[ ] STRING AdvanceToNewStage
[ ] //
[+] type REC_4_ANALYTES_ANS  is record
	[ ] STRING NAME  
	[ ] STRING AnalyteName1 
	[ ] STRING Reporter1 
	[ ] STRING AnalyteName2 
	[ ] STRING Reporter2 
	[ ] STRING AnalyteName3 
	[ ] STRING Reporter3 
	[ ] STRING AnalyteName4 
	[ ] STRING Reporter4 
	[ ] INTEGER NumberCyclesInStage
	[ ] INTEGER BkgndSub  
	[ ] INTEGER BkgndVMin1 
	[ ] INTEGER BkgndVMax1 
	[ ] INTEGER BkgndVMin2  
	[ ] INTEGER BkgndVMax2 
	[ ] INTEGER BkgndVMin3 
	[ ] INTEGER BkgndVMax3 
	[ ] INTEGER BkgndVMin4 
	[ ] INTEGER BkgndVMax4
	[ ] REAL Threshold1 
	[ ] REAL Threshold2 
	[ ] REAL Threshold3 
	[ ] REAL Threshold4 
	[ ] INTEGER Boxcar1 
	[ ] INTEGER Boxcar2 
	[ ] INTEGER Boxcar3 
	[ ] INTEGER Boxcar4 
	[ ] STRING CurveAnalysis1
	[ ] STRING CurveAnalysis2
	[ ] STRING CurveAnalysis3
	[ ] STRING CurveAnalysis4
	[ ] INTEGER NormFactor1D
	[ ] INTEGER NormFactor1
	[ ] INTEGER NormFactor2D
	[ ] INTEGER  NormFactor2
	[ ] INTEGER  NormFactor3D
	[ ] INTEGER NormFactor3
	[ ] INTEGER NormFactor4D
	[ ] INTEGER NormFactor4
	[ ] INTEGER VMin1 
	[ ] INTEGER VMax1 
	[ ] INTEGER VMin2  
	[ ] INTEGER VMax2 
	[ ] INTEGER VMin3 
	[ ] INTEGER VMax3 
	[ ] INTEGER VMin4 
	[ ] INTEGER VMax4 
	[ ] STRING Ausage1 
	[ ] STRING Ausage2  
	[ ] STRING Ausage3 
	[ ] STRING Ausage4 
	[ ] INTEGER UseEndPt1
	[ ] INTEGER UseEndPt2
	[ ] INTEGER UseEndPt3
	[ ] INTEGER UseEndPt4
	[ ] INTEGER EndPt1
	[ ] INTEGER EndPt2
	[ ] INTEGER EndPt3
	[ ] INTEGER EndPt4
	[ ] INTEGER AnalyteTargetIC1
	[ ] INTEGER SelectTarget1ForIC
	[ ] INTEGER AnalyteTargetIC2
	[ ] INTEGER SelectTarget2ForIC  
	[ ] INTEGER AnalyteTargetIC3
	[ ] INTEGER SelectTarget3ForIC  
	[ ] INTEGER AnalyteTargetSPC1
	[ ] INTEGER SelectTarget1ForSPC
	[ ] INTEGER AnalyteTargetSPC2
	[ ] INTEGER SelectTarget2ForSPC
	[ ] INTEGER AnalyteTargetSPC3
	[ ] INTEGER SelectTarget3ForSPC
	[ ] INTEGER AnalyteTargetEC1
	[ ] INTEGER SelectTarget1ForEC
	[ ] INTEGER AnalyteTargetEC2
	[ ] INTEGER SelectTarget2ForEC
	[ ] INTEGER AnalyteTargetEC3
	[ ] INTEGER SelectTarget3ForEC
	[ ] STRING  InvalidBias1
	[ ] STRING  InvalidBias2
	[ ] STRING  InvalidBias3
	[ ] STRING  InvalidBias4
	[ ] STRING PeakHeightMin1
	[ ] STRING PeakHeightMin2
	[ ] STRING PeakHeightMin3
	[ ] STRING PeakHeightMin4
	[ ] INTEGER PrbChk
	[ ] INTEGER PrbChk13Max1
	[ ] INTEGER PrbChk2Min1
	[ ] INTEGER PrbChkDeltaMin1
	[ ] INTEGER PrbChk13Max2
	[ ] INTEGER PrbChk2Min2
	[ ] INTEGER PrbChkDeltaMin2
	[ ] INTEGER PrbChk13Max3
	[ ] INTEGER PrbChk2Min3
	[ ] INTEGER PrbChkDeltaMin3
	[ ] INTEGER PrbChk13Max4
	[ ] INTEGER PrbChk2Min4
	[ ] INTEGER PrbChkDeltaMin4
	[ ] INTEGER UseMinTargetDeltaCt1
	[ ] INTEGER UseMinTargetDeltaCt2
	[ ] INTEGER UseMinTargetDeltaCt3
	[ ] INTEGER UseMinTargetDeltaCt4
	[ ] STRING MinTargetDeltaCt1
	[ ] STRING MinTargetDeltaCt2
	[ ] STRING MinTargetDeltaCt3
	[ ] STRING MinTargetDeltaCt4
	[ ] STRING DeltaCtE1
	[ ] STRING DeltaCtE2
	[ ] STRING DeltaCtE3
	[ ] STRING DeltaCtE4
	[ ] STRING CurveFit
	[ ] STRING SignalLoss
	[ ] STRING AdvanceToNewStage
[ ] //
[+] type REC_6_ANALYTES_ANS  is record
	[ ] STRING NAME  
	[ ] STRING AnalyteName1 
	[ ] STRING Reporter1 
	[ ] STRING AnalyteName2 
	[ ] STRING Reporter2 
	[ ] STRING AnalyteName3 
	[ ] STRING Reporter3 
	[ ] STRING AnalyteName4 
	[ ] STRING Reporter4 
	[ ] STRING AnalyteName5 
	[ ] STRING Reporter5
	[ ] STRING AnalyteName6 
	[ ] STRING Reporter6 
	[ ] INTEGER NumberCyclesInStage
	[ ] INTEGER BkgndSub  
	[ ] INTEGER BkgndVMin1 
	[ ] INTEGER BkgndVMax1 
	[ ] INTEGER BkgndVMin2  
	[ ] INTEGER BkgndVMax2 
	[ ] INTEGER BkgndVMin3 
	[ ] INTEGER BkgndVMax3 
	[ ] INTEGER BkgndVMin4 
	[ ] INTEGER BkgndVMax4
	[ ] INTEGER BkgndVMin5 
	[ ] INTEGER BkgndVMax5
	[ ] INTEGER BkgndVMin6 
	[ ] INTEGER BkgndVMax6
	[ ] REAL Threshold1 
	[ ] REAL Threshold2 
	[ ] REAL Threshold3 
	[ ] REAL Threshold4 
	[ ] REAL Threshold5
	[ ] REAL Threshold6
	[ ] INTEGER Boxcar1 
	[ ] INTEGER Boxcar2 
	[ ] INTEGER Boxcar3 
	[ ] INTEGER Boxcar4 
	[ ] INTEGER Boxcar5
	[ ] INTEGER Boxcar6
	[ ] STRING CurveAnalysis1
	[ ] STRING CurveAnalysis2
	[ ] STRING CurveAnalysis3
	[ ] STRING CurveAnalysis4
	[ ] STRING CurveAnalysis5
	[ ] STRING CurveAnalysis6
	[ ] INTEGER NormFactor1D
	[ ] INTEGER NormFactor1
	[ ] INTEGER NormFactor2D
	[ ] INTEGER NormFactor2
	[ ] INTEGER NormFactor3D
	[ ] INTEGER NormFactor3
	[ ] INTEGER NormFactor4D
	[ ] INTEGER NormFactor4
	[ ] INTEGER NormFactor5D
	[ ] INTEGER NormFactor5
	[ ] INTEGER NormFactor6D
	[ ] INTEGER NormFactor6
	[ ] INTEGER VMin1 
	[ ] INTEGER VMax1 
	[ ] INTEGER VMin2  
	[ ] INTEGER VMax2 
	[ ] INTEGER VMin3 
	[ ] INTEGER VMax3 
	[ ] INTEGER VMin4 
	[ ] INTEGER VMax4 
	[ ] INTEGER VMin5 
	[ ] INTEGER VMax5
	[ ] INTEGER VMin6
	[ ] INTEGER VMax6 
	[ ] STRING Ausage1 
	[ ] STRING Ausage2  
	[ ] STRING Ausage3 
	[ ] STRING Ausage4 
	[ ] STRING Ausage5
	[ ] STRING Ausage6
	[ ] INTEGER UseEndPt1
	[ ] INTEGER UseEndPt2
	[ ] INTEGER UseEndPt3
	[ ] INTEGER UseEndPt4
	[ ] INTEGER UseEndPt5
	[ ] INTEGER UseEndPt6
	[ ] INTEGER EndPt1
	[ ] INTEGER EndPt2
	[ ] INTEGER EndPt3
	[ ] INTEGER EndPt4
	[ ] INTEGER EndPt5
	[ ] INTEGER EndPt6
	[ ] INTEGER AnalyteTargetIC1
	[ ] INTEGER SelectTarget1ForIC
	[ ] INTEGER AnalyteTargetIC2
	[ ] INTEGER SelectTarget2ForIC  
	[ ] INTEGER AnalyteTargetIC3
	[ ] INTEGER SelectTarget3ForIC
	[ ] INTEGER AnalyteTargetIC4
	[ ] INTEGER SelectTarget4ForIC
	[ ] INTEGER AnalyteTargetIC5
	[ ] INTEGER SelectTarget5ForIC
	[ ]  // 
	[ ] INTEGER AnalyteTargetSPC1
	[ ] INTEGER SelectTarget1ForSPC
	[ ] INTEGER AnalyteTargetSPC2
	[ ] INTEGER SelectTarget2ForSPC
	[ ] INTEGER AnalyteTargetSPC3
	[ ] INTEGER SelectTarget3ForSPC
	[ ] INTEGER AnalyteTargetSPC4
	[ ] INTEGER SelectTarget4ForSPC
	[ ] INTEGER AnalyteTargetSPC5
	[ ] INTEGER SelectTarget5ForSPC
	[ ] //
	[ ] INTEGER AnalyteTargetEC1
	[ ] INTEGER SelectTarget1ForEC
	[ ] INTEGER AnalyteTargetEC2
	[ ] INTEGER SelectTarget2ForEC
	[ ] INTEGER AnalyteTargetEC3
	[ ] INTEGER SelectTarget3ForEC
	[ ] INTEGER AnalyteTargetEC4
	[ ] INTEGER SelectTarget4ForEC
	[ ] INTEGER AnalyteTargetEC5
	[ ] INTEGER SelectTarget5ForEC
	[ ] //
	[ ] STRING  InvalidBias1
	[ ] STRING  InvalidBias2
	[ ] STRING  InvalidBias3
	[ ] STRING  InvalidBias4
	[ ] STRING  InvalidBias5
	[ ] STRING  InvalidBias6
	[ ] STRING PeakHeightMin1
	[ ] STRING PeakHeightMin2
	[ ] STRING PeakHeightMin3
	[ ] STRING PeakHeightMin4
	[ ] STRING PeakHeightMin5
	[ ] STRING PeakHeightMin6
	[ ] INTEGER PrbChk
	[ ] INTEGER PrbChk13Max1
	[ ] INTEGER PrbChk2Min1
	[ ] INTEGER PrbChkDeltaMin1
	[ ] INTEGER PrbChk13Max2
	[ ] INTEGER PrbChk2Min2
	[ ] INTEGER PrbChkDeltaMin2
	[ ] INTEGER PrbChk13Max3
	[ ] INTEGER PrbChk2Min3
	[ ] INTEGER PrbChkDeltaMin3
	[ ] INTEGER PrbChk13Max4
	[ ] INTEGER PrbChk2Min4
	[ ] INTEGER PrbChkDeltaMin4
	[ ] INTEGER PrbChk13Max5
	[ ] INTEGER PrbChk2Min5
	[ ] INTEGER PrbChkDeltaMin5
	[ ] INTEGER PrbChk13Max6
	[ ] INTEGER PrbChk2Min6
	[ ] INTEGER PrbChkDeltaMin6
	[ ] //
	[ ] INTEGER UseMinTargetDeltaCt1
	[ ] INTEGER UseMinTargetDeltaCt2
	[ ] INTEGER UseMinTargetDeltaCt3
	[ ] INTEGER UseMinTargetDeltaCt4
	[ ] INTEGER UseMinTargetDeltaCt5
	[ ] INTEGER UseMinTargetDeltaCt6
	[ ] //
	[ ] STRING MinTargetDeltaCt1
	[ ] STRING MinTargetDeltaCt2
	[ ] STRING MinTargetDeltaCt3
	[ ] STRING MinTargetDeltaCt4
	[ ] STRING MinTargetDeltaCt5
	[ ] STRING MinTargetDeltaCt6
	[ ] STRING DeltaCtE1
	[ ] STRING DeltaCtE2
	[ ] STRING DeltaCtE3
	[ ] STRING DeltaCtE4
	[ ] STRING DeltaCtE5
	[ ] STRING DeltaCtE6
	[ ] //
	[ ] STRING CurveFit
	[ ] STRING SignalLoss
	[ ] STRING AdvanceToNewStage
	[ ] 
[ ] //
[ ] //
[+] type REC_ANS_1_2_PROTOCOL is record
	[ ] INTEGER NumberCyclesInStage1
	[ ] INTEGER NumberCyclesInStage2
	[ ] STRING Stage1
	[ ] INTEGER Temp11
	[ ] INTEGER Secs11
	[ ] STRING Optics11
	[ ] INTEGER Temp12
	[ ] INTEGER Secs12
	[ ] STRING Optics12
	[ ] STRING  Stage2
	[ ] INTEGER Temp21
	[ ] INTEGER Secs21
	[ ] STRING Optics21
	[ ] INTEGER Temp22
	[ ] INTEGER Secs22
	[ ] STRING Optics22
	[ ] INTEGER Temp23
	[ ] INTEGER Secs23
	[ ] STRING Optics23
	[ ] //
[ ] //
[+] type REC_ANS_MELT_PROTOCOL is record
	[ ] INTEGER NumberCyclesInStage1
	[ ] INTEGER NumberCyclesInStage2
	[ ] INTEGER NumberCyclesInStage3
	[ ] STRING Stage1 // Probe Check
	[ ] INTEGER Temp11
	[ ] INTEGER Secs11
	[ ] STRING Optics11
	[ ] INTEGER Temp12
	[ ] INTEGER Secs12
	[ ] STRING Optics12
	[ ] INTEGER Temp13
	[ ] INTEGER  Secs13
	[ ] STRING Optics13
	[ ] STRING Stage2 // 3-Temperature Cycle
	[ ] INTEGER Temp21
	[ ] INTEGER Secs21
	[ ] STRING Optics21
	[ ] INTEGER Temp22
	[ ] INTEGER Secs22
	[ ] STRING Optics22
	[ ] INTEGER Temp23
	[ ] INTEGER Secs23
	[ ] STRING Optics23
	[ ] STRING  Stage3 // Melt
	[ ] INTEGER StartTemp
	[ ] INTEGER EndTemp
	[ ] STRING CSec
[ ] //
[+] type REC_ANS_HOLD_PROTOCOL is record
	[ ] INTEGER NumberCyclesInStage1
	[ ] INTEGER NumberCyclesInStage2
	[ ] INTEGER NumberCyclesInStage3
	[ ] STRING Stage1 // 2-temperature Cycle
	[ ] INTEGER Temp11
	[ ] INTEGER Secs11
	[ ] STRING Optics11
	[ ] INTEGER Temp12
	[ ] INTEGER Secs12
	[ ] STRING Optics12
	[ ] STRING Stage2 // Hold
	[ ] INTEGER Temp21
	[ ] INTEGER Secs21
	[ ] STRING Optics21
	[ ] STRING Stage3 // 3-temperature Cycle
	[ ] INTEGER Temp31
	[ ] INTEGER Secs31
	[ ] STRING Optics31
	[ ] INTEGER Temp32
	[ ] INTEGER Secs32
	[ ] STRING Optics32
	[ ] INTEGER Temp33
	[ ] INTEGER Secs33
	[ ] STRING Optics33
	[ ] 
[ ] //
[+] type REC_ANS_END_PROTOCOL is record
	[ ] INTEGER NumberCyclesInStage1
	[ ] INTEGER NumberCyclesInStage2
	[ ] INTEGER NumberCyclesInStage3
	[ ] INTEGER NumberCyclesInStage4
	[ ] STRING Stage1 // Probe Check
	[ ] INTEGER Temp11
	[ ] INTEGER Secs11
	[ ] STRING Optics11
	[ ] INTEGER Temp12
	[ ] INTEGER Secs12
	[ ] STRING Optics12
	[ ] INTEGER Temp13
	[ ] INTEGER  Secs13
	[ ] STRING Optics13
	[ ] STRING Stage2 // 3-Temperature Cycle
	[ ] INTEGER Temp21
	[ ] INTEGER Secs21
	[ ] STRING Optics21
	[ ] INTEGER Temp22
	[ ] INTEGER Secs22
	[ ] STRING Optics22
	[ ] INTEGER Temp23
	[ ] INTEGER Secs23
	[ ] STRING Optics23
	[ ] STRING  Stage3 // End
	[ ] STRING Stage4 // 3-Temperature Cycle
	[ ] INTEGER Temp41
	[ ] INTEGER Secs41
	[ ] STRING Optics41
	[ ] INTEGER Temp42
	[ ] INTEGER Secs42
	[ ] STRING Optics42
	[ ] INTEGER Temp43
	[ ] INTEGER Secs43
	[ ] STRING Optics43
	[ ] 
[ ] //
[+] type REC_ANS_3_PROTOCOL  is record
	[ ] INTEGER NumberCyclesInStage1
	[ ] INTEGER NumberCyclesInStage2
	[ ] INTEGER NumberCyclesInStage3
	[ ] INTEGER NumberCyclesInStage4
	[ ] STRING Stage1 // 2-Temperature Cycle
	[ ] INTEGER Temp11
	[ ] INTEGER Secs11
	[ ] STRING Optics11
	[ ] INTEGER Temp12
	[ ] INTEGER Secs12
	[ ] STRING Optics12
	[ ] STRING Stage2 // 3-Temperature Cycle
	[ ] INTEGER Temp21
	[ ] INTEGER Secs21
	[ ] STRING Optics21
	[ ] INTEGER Temp22
	[ ] INTEGER Secs22
	[ ] STRING Optics22
	[ ] INTEGER Temp23
	[ ] INTEGER Secs23
	[ ] STRING Optics23
	[ ] STRING  Stage3 // 5-Temperature Cycle
	[ ] INTEGER Temp31
	[ ] INTEGER Secs31
	[ ] STRING Optics31
	[ ] INTEGER Temp32
	[ ] INTEGER Secs32
	[ ] STRING Optics32
	[ ] INTEGER Temp33
	[ ] INTEGER Secs33
	[ ] STRING Optics33
	[ ] INTEGER Temp34
	[ ] INTEGER Secs34
	[ ] STRING Optics34
	[ ] INTEGER Temp35
	[ ] INTEGER Secs35
	[ ] STRING Optics35
	[ ] STRING Stage4 // 4-Temperature Cycle
	[ ] INTEGER Temp41
	[ ] INTEGER Secs41
	[ ] STRING Optics41
	[ ] INTEGER Temp42
	[ ] INTEGER Secs42
	[ ] STRING Optics42
	[ ] INTEGER Temp43
	[ ] INTEGER Secs43
	[ ] STRING Optics43
	[ ] INTEGER Temp44
	[ ] INTEGER Secs44
	[ ] STRING Optics44
	[ ] 
[ ] //
[+] type REC_ANS_3a_PROTOCOL is record
	[ ] INTEGER NumberCyclesInStage1
	[ ] INTEGER NumberCyclesInStage2
	[ ] INTEGER NumberCyclesInStage3
	[ ] STRING Stage1 // 2-Temperature Cycle
	[ ] INTEGER Temp11
	[ ] INTEGER Secs11
	[ ] STRING Optics11
	[ ] INTEGER Temp12
	[ ] INTEGER Secs12
	[ ] STRING Optics12
	[ ] STRING Stage2 // 5-Temperature Cycle
	[ ] INTEGER Temp21
	[ ] INTEGER Secs21
	[ ] STRING Optics21
	[ ] INTEGER Temp22
	[ ] INTEGER Secs22
	[ ] STRING Optics22
	[ ] INTEGER Temp23
	[ ] INTEGER Secs23
	[ ] STRING Optics23
	[ ] INTEGER Temp24
	[ ] INTEGER Secs24
	[ ] STRING Optics24
	[ ] INTEGER Temp25
	[ ] INTEGER Secs25
	[ ] STRING Optics25
	[ ] STRING  Stage3 // 3-Temperature Cycle
	[ ] INTEGER Temp31
	[ ] INTEGER Secs31
	[ ] STRING Optics31
	[ ] INTEGER Temp32
	[ ] INTEGER Secs32
	[ ] STRING Optics32
	[ ] INTEGER Temp33
	[ ] INTEGER Secs33
	[ ] STRING Optics33
	[ ] 
[ ] //
[+] type REC_ANS_4_PROTOCOL is record
	[ ] INTEGER NumberCyclesInStage1
	[ ] INTEGER NumberCyclesInStage2
	[ ] INTEGER NumberCyclesInStage3
	[ ] INTEGER NumberCyclesInStage4
	[ ] STRING Stage1 // 2-Temperature Cycle
	[ ] INTEGER Temp11
	[ ] INTEGER Secs11
	[ ] STRING Optics11
	[ ] INTEGER Temp12
	[ ] INTEGER Secs12
	[ ] STRING Optics12
	[ ] STRING Stage2 // 3-Temperature Cycle
	[ ] INTEGER Temp21
	[ ] INTEGER Secs21
	[ ] STRING Optics21
	[ ] INTEGER Temp22
	[ ] INTEGER Secs22
	[ ] STRING Optics22
	[ ] INTEGER Temp23
	[ ] INTEGER Secs23
	[ ] STRING Optics23
	[ ] STRING  Stage3 // HOLD
	[ ] INTEGER Temp31
	[ ] INTEGER Secs31
	[ ] STRING Optics31
	[ ] STRING  Stage4 // 5-temperature Cycle
	[ ] INTEGER Temp41
	[ ] INTEGER Secs41
	[ ] STRING Optics41
	[ ] INTEGER Temp42
	[ ] INTEGER Secs42
	[ ] STRING Optics42
	[ ] INTEGER Temp43
	[ ] INTEGER Secs43
	[ ] STRING Optics43
	[ ] INTEGER Temp44
	[ ] INTEGER Secs44
	[ ] STRING Optics44
	[ ] INTEGER Temp45
	[ ] INTEGER Secs45
	[ ] STRING Optics45
	[ ] 
[ ] //
[+] type REC_ANS_5_PROTOCOL is record
	[ ] INTEGER NumberCyclesInStage1
	[ ] INTEGER NumberCyclesInStage2
	[ ] INTEGER NumberCyclesInStage3
	[ ] INTEGER NumberCyclesInStage4
	[ ] STRING Stage1 // 2-Temperature Cycle
	[ ] INTEGER Temp11
	[ ] INTEGER Secs11
	[ ] STRING Optics11
	[ ] INTEGER Temp12
	[ ] INTEGER Secs12
	[ ] STRING Optics12
	[ ] STRING Stage2 // 3-Temperature Cycle
	[ ] INTEGER Temp21
	[ ] INTEGER Secs21
	[ ] STRING Optics21
	[ ] INTEGER Temp22
	[ ] INTEGER Secs22
	[ ] STRING Optics22
	[ ] INTEGER Temp23
	[ ] INTEGER Secs23
	[ ] STRING Optics23
	[ ] STRING  Stage3 // End
	[ ] STRING Stage4 // Melt
	[ ] INTEGER StartTemp
	[ ] INTEGER EndTemp
	[ ] STRING CSec
	[ ] 
[ ] //
[+] type REC_ANS_6_PROTOCOL is record
	[ ] INTEGER NumberCyclesInStage1
	[ ] INTEGER NumberCyclesInStage2
	[ ] INTEGER NumberCyclesInStage3
	[ ] INTEGER NumberCyclesInStage4
	[ ] INTEGER NumberCyclesInStage5
	[ ] STRING Stage1 // 2-Temperature Cycle
	[ ] INTEGER Temp11
	[ ] INTEGER Secs11
	[ ] STRING Optics11
	[ ] INTEGER Temp12
	[ ] INTEGER Secs12
	[ ] STRING Optics12
	[ ] STRING Stage2 // 3-Temperature Cycle
	[ ] INTEGER Temp21
	[ ] INTEGER Secs21
	[ ] STRING Optics21
	[ ] INTEGER Temp22
	[ ] INTEGER Secs22
	[ ] STRING Optics22
	[ ] INTEGER Temp23
	[ ] INTEGER Secs23
	[ ] STRING Optics23
	[ ] STRING  Stage3 // 5-Temperature Cycle
	[ ] INTEGER Temp31
	[ ] INTEGER Secs31
	[ ] STRING Optics31
	[ ] INTEGER Temp32
	[ ] INTEGER Secs32
	[ ] STRING Optics32
	[ ] INTEGER Temp33
	[ ] INTEGER Secs33
	[ ] STRING Optics33
	[ ] INTEGER Temp34
	[ ] INTEGER Secs34
	[ ] STRING Optics34
	[ ] INTEGER Temp35
	[ ] INTEGER Secs35
	[ ] STRING Optics35
	[ ] STRING Stage4 // End
	[ ] STRING Stage5 // 3-Temperature Cycle
	[ ] INTEGER Temp51
	[ ] INTEGER Secs51
	[ ] STRING Optics51
	[ ] INTEGER Temp52
	[ ] INTEGER Secs52
	[ ] STRING Optics52
	[ ] INTEGER Temp53
	[ ] INTEGER Secs53
	[ ] STRING Optics53
[ ] //
[+] type REC_ANS_7_PROTOCOL is record
	[ ] INTEGER NumberCyclesInStage1
	[ ] INTEGER NumberCyclesInStage2
	[ ] INTEGER NumberCyclesInStage3
	[ ] INTEGER NumberCyclesInStage4
	[ ] INTEGER NumberCyclesInStage5
	[ ] STRING Stage1 // 2-Temperature Cycle
	[ ] INTEGER Temp11
	[ ] INTEGER Secs11
	[ ] STRING Optics11
	[ ] INTEGER Temp12
	[ ] INTEGER Secs12
	[ ] STRING Optics12
	[ ] STRING Stage2 // End
	[ ] STRING  Stage3 // 5-Temperature Cycle
	[ ] INTEGER Temp31
	[ ] INTEGER Secs31
	[ ] STRING Optics31
	[ ] INTEGER Temp32
	[ ] INTEGER Secs32
	[ ] STRING Optics32
	[ ] INTEGER Temp33
	[ ] INTEGER Secs33
	[ ] STRING Optics33
	[ ] INTEGER Temp34
	[ ] INTEGER Secs34
	[ ] STRING Optics34
	[ ] INTEGER Temp35
	[ ] INTEGER Secs35
	[ ] STRING Optics35
	[ ] STRING Stage4 // 3-Temperature Cycle
	[ ] INTEGER Temp41
	[ ] INTEGER Secs41
	[ ] STRING Optics41
	[ ] INTEGER Temp42
	[ ] INTEGER Secs42
	[ ] STRING Optics42
	[ ] INTEGER Temp43
	[ ] INTEGER Secs43
	[ ] STRING Optics43
	[ ] STRING Stage5 // Melt
	[ ] INTEGER StartTemp
	[ ] INTEGER EndTemp
	[ ] STRING CSec
[ ] //
[+] type REC_ANS_9_PROTOCOL is record
	[ ] INTEGER NumberCyclesInStage1
	[ ] INTEGER NumberCyclesInStage2
	[ ] INTEGER NumberCyclesInStage3
	[ ] INTEGER NumberCyclesInStage4
	[ ] INTEGER NumberCyclesInStage5
	[ ] INTEGER NumberCyclesInStage6
	[ ] STRING Stage1 // 4-Temperature Cycle
	[ ] INTEGER Temp11
	[ ] INTEGER Secs11
	[ ] STRING Optics11
	[ ] INTEGER Temp12
	[ ] INTEGER Secs12
	[ ] STRING Optics12
	[ ] INTEGER Temp13
	[ ] INTEGER Secs13
	[ ] STRING Optics13
	[ ] INTEGER Temp14
	[ ] INTEGER Secs14
	[ ] STRING Optics14
	[ ] STRING Stage2 // 2-Temperature Cycle
	[ ] INTEGER Temp21
	[ ] INTEGER Secs21
	[ ] STRING Optics21
	[ ] INTEGER Temp22
	[ ] INTEGER Secs22
	[ ] STRING Optics22
	[ ] STRING  Stage3 // 5-Temperature Cycle
	[ ] INTEGER Temp31
	[ ] INTEGER Secs31
	[ ] STRING Optics31
	[ ] INTEGER Temp32
	[ ] INTEGER Secs32
	[ ] STRING Optics32
	[ ] INTEGER Temp33
	[ ] INTEGER Secs33
	[ ] STRING Optics33
	[ ] INTEGER Temp34
	[ ] INTEGER Secs34
	[ ] STRING Optics34
	[ ] INTEGER Temp35
	[ ] INTEGER Secs35
	[ ] STRING Optics35
	[ ] STRING Stage4 // 3-Temperature Cycle
	[ ] INTEGER Temp41
	[ ] INTEGER Secs41
	[ ] STRING Optics41
	[ ] INTEGER Temp42
	[ ] INTEGER Secs42
	[ ] STRING Optics42
	[ ] INTEGER Temp43
	[ ] INTEGER Secs43
	[ ] STRING Optics43
	[ ] STRING Stage5 // 2-Temperature Cycle
	[ ] INTEGER Temp51
	[ ] INTEGER Secs51
	[ ] STRING Optics51
	[ ] INTEGER Temp52
	[ ] INTEGER Secs52
	[ ] STRING Optics52
	[ ] STRING Stage6 // Melt
	[ ] INTEGER StartTemp
	[ ] INTEGER EndTemp
	[ ] STRING CSec
	[ ] 
[ ] //
[+] type REC_ANS_10_PROTOCOL is record
	[ ] INTEGER NumberCyclesInStage1
	[ ] INTEGER NumberCyclesInStage2
	[ ] INTEGER NumberCyclesInStage3
	[ ] INTEGER NumberCyclesInStage4
	[ ] INTEGER NumberCyclesInStage5
	[ ] INTEGER NumberCyclesInStage6
	[ ] INTEGER NumberCyclesInStage7
	[ ] INTEGER NumberCyclesInStage8
	[ ] STRING Stage1 // 4-Temperature Cycle
	[ ] INTEGER Temp11
	[ ] INTEGER Secs11
	[ ] STRING Optics11
	[ ] INTEGER Temp12
	[ ] INTEGER Secs12
	[ ] STRING Optics12
	[ ] INTEGER Temp13
	[ ] INTEGER Secs13
	[ ] STRING Optics13
	[ ] INTEGER Temp14
	[ ] INTEGER Secs14
	[ ] STRING Optics14
	[ ] STRING Stage2 // 2-Temperature Cycle
	[ ] INTEGER Temp21
	[ ] INTEGER Secs21
	[ ] STRING Optics21
	[ ] INTEGER Temp22
	[ ] INTEGER Secs22
	[ ] STRING Optics22
	[ ] STRING Stage3 // End
	[ ] STRING  Stage4 // 5-Temperature Cycle
	[ ] INTEGER Temp41
	[ ] INTEGER Secs41
	[ ] STRING Optics41
	[ ] INTEGER Temp42
	[ ] INTEGER Secs42
	[ ] STRING Optics42
	[ ] INTEGER Temp43
	[ ] INTEGER Secs43
	[ ] STRING Optics43
	[ ] INTEGER Temp44
	[ ] INTEGER Secs44
	[ ] STRING Optics44
	[ ] INTEGER Temp45
	[ ] INTEGER Secs45
	[ ] STRING Optics45
	[ ] STRING Stage5 // 3-Temperature Cycle
	[ ] INTEGER Temp51
	[ ] INTEGER Secs51
	[ ] STRING Optics51
	[ ] INTEGER Temp52
	[ ] INTEGER Secs52
	[ ] STRING Optics52
	[ ] INTEGER Temp53
	[ ] INTEGER Secs53
	[ ] STRING Optics53
	[ ] STRING Stage6 // Hold 
	[ ] INTEGER Temp61
	[ ] INTEGER Secs61
	[ ] STRING Optics61
	[ ] STRING Stage7 // 2-Temperature Cycle
	[ ] INTEGER Temp71
	[ ] INTEGER Secs71
	[ ] STRING Optics71
	[ ] INTEGER Temp72
	[ ] INTEGER Secs72
	[ ] STRING Optics72
	[ ] STRING Stage8 // Melt
	[ ] INTEGER StartTemp
	[ ] INTEGER EndTemp
	[ ] STRING CSec
[ ] //
[+] type REC_ANS_11_PROTOCOL is record
	[ ] INTEGER NumberCyclesInStage1
	[ ] INTEGER NumberCyclesInStage2
	[ ] INTEGER NumberCyclesInStage3
	[ ] STRING Stage1 // 4-Temperature Cycle
	[ ] INTEGER Temp11
	[ ] INTEGER Secs11
	[ ] STRING Optics11
	[ ] INTEGER Temp12
	[ ] INTEGER Secs12
	[ ] STRING Optics12
	[ ] INTEGER Temp13
	[ ] INTEGER Secs13
	[ ] STRING Optics13
	[ ] INTEGER Temp14
	[ ] INTEGER Secs14
	[ ] STRING Optics14
	[ ] STRING Stage2 // 2-Temperature Cycle
	[ ] INTEGER Temp21
	[ ] INTEGER Secs21
	[ ] STRING Optics21
	[ ] INTEGER Temp22
	[ ] INTEGER Secs22
	[ ] STRING Optics22
	[ ] STRING Stage3 // Melt
	[ ] INTEGER StartTemp
	[ ] INTEGER EndTemp
	[ ] STRING CSec
	[ ] 
[ ] //
[+] type REC_ANS_12_PROTOCOL is record
	[ ] INTEGER NumberCyclesInStage1
	[ ] INTEGER NumberCyclesInStage2
	[ ] INTEGER NumberCyclesInStage3
	[ ] INTEGER NumberCyclesInStage4
	[ ] INTEGER NumberCyclesInStage5
	[ ] INTEGER NumberCyclesInStage6
	[ ] INTEGER NumberCyclesInStage7
	[ ] INTEGER NumberCyclesInStage8
	[ ] STRING Stage1 // 4-Temperature Cycle
	[ ] INTEGER Temp11
	[ ] INTEGER Secs11
	[ ] STRING Optics11
	[ ] INTEGER Temp12
	[ ] INTEGER Secs12
	[ ] STRING Optics12
	[ ] INTEGER Temp13
	[ ] INTEGER Secs13
	[ ] STRING Optics13
	[ ] INTEGER Temp14
	[ ] INTEGER Secs14
	[ ] STRING Optics14
	[ ] STRING Stage2 // 2-Temperature Cycle
	[ ] INTEGER Temp21
	[ ] INTEGER Secs21
	[ ] STRING Optics21
	[ ] INTEGER Temp22
	[ ] INTEGER Secs22
	[ ] STRING Optics22
	[ ] STRING Stage3 // End
	[ ] STRING  Stage4 // 5-Temperature Cycle
	[ ] INTEGER Temp41
	[ ] INTEGER Secs41
	[ ] STRING Optics41
	[ ] INTEGER Temp42
	[ ] INTEGER Secs42
	[ ] STRING Optics42
	[ ] INTEGER Temp43
	[ ] INTEGER Secs43
	[ ] STRING Optics43
	[ ] INTEGER Temp44
	[ ] INTEGER Secs44
	[ ] STRING Optics44
	[ ] INTEGER Temp45
	[ ] INTEGER Secs45
	[ ] STRING Optics45
	[ ] STRING Stage5 // 3-Temperature Cycle
	[ ] INTEGER Temp51
	[ ] INTEGER Secs51
	[ ] STRING Optics51
	[ ] INTEGER Temp52
	[ ] INTEGER Secs52
	[ ] STRING Optics52
	[ ] INTEGER Temp53
	[ ] INTEGER Secs53
	[ ] STRING Optics53
	[ ] STRING Stage6 // Hold 
	[ ] INTEGER Temp61
	[ ] INTEGER Secs61
	[ ] STRING Optics61
	[ ] STRING Stage7 // 2-Temperature Cycle
	[ ] INTEGER Temp71
	[ ] INTEGER Secs71
	[ ] STRING Optics71
	[ ] INTEGER Temp72
	[ ] INTEGER Secs72
	[ ] STRING Optics72
	[ ] STRING Stage8 // Melt
	[ ] INTEGER StartTemp
	[ ] INTEGER EndTemp
	[ ] STRING CSec
[ ] //
[+] type REC_ANS_13_PROTOCOL is record
	[ ] INTEGER NumberCyclesInStage1
	[ ] INTEGER NumberCyclesInStage2
	[ ] STRING Stage1 // 2-Temperature Cycle
	[ ] INTEGER Temp11
	[ ] INTEGER Secs11
	[ ] STRING Optics11
	[ ] INTEGER Temp12
	[ ] INTEGER Secs12
	[ ] STRING Optics12
	[ ] STRING Stage2 // Melt
	[ ] INTEGER StartTemp
	[ ] INTEGER EndTemp
	[ ] STRING CSec
	[ ] 
[ ] //
[+] type REC_ANS_14_PROTOCOL is record
	[ ] INTEGER NumberCyclesInStage1
	[ ] INTEGER NumberCyclesInStage2
	[ ] STRING Stage1 // 2-Temperature Cycle
	[ ] INTEGER Temp11
	[ ] INTEGER Secs11
	[ ] STRING Optics11
	[ ] INTEGER Temp12
	[ ] INTEGER Secs12
	[ ] STRING Optics12
	[ ] STRING Stage2 // End
[ ] //
[+] type REC_ANS_15_PROTOCOL is record
	[ ] INTEGER NumberCyclesInStage1
	[ ] INTEGER NumberCyclesInStage2
	[ ] INTEGER NumberCyclesInStage3
	[ ] INTEGER NumberCyclesInStage4
	[ ] INTEGER NumberCyclesInStage5
	[ ] STRING Stage1 // 2-Temperature Cycle
	[ ] INTEGER Temp11
	[ ] INTEGER Secs11
	[ ] STRING Optics11
	[ ] INTEGER Temp12
	[ ] INTEGER Secs12
	[ ] STRING Optics12
	[ ] STRING Stage2 // 3-Temperature Cycle
	[ ] INTEGER Temp21
	[ ] INTEGER Secs21
	[ ] STRING Optics21
	[ ] INTEGER Temp22
	[ ] INTEGER Secs22
	[ ] STRING Optics22
	[ ] INTEGER Temp23
	[ ] INTEGER Secs23
	[ ] STRING Optics23
	[ ] STRING  Stage3 // 5-Temperature Cycle
	[ ] INTEGER Temp31
	[ ] INTEGER Secs31
	[ ] STRING Optics31
	[ ] INTEGER Temp32
	[ ] INTEGER Secs32
	[ ] STRING Optics32
	[ ] INTEGER Temp33
	[ ] INTEGER Secs33
	[ ] STRING Optics33
	[ ] INTEGER Temp34
	[ ] INTEGER Secs34
	[ ] STRING Optics34
	[ ] INTEGER Temp35
	[ ] INTEGER Secs35
	[ ] STRING Optics35
	[ ] STRING Stage4 // 3-Temperature Cycle
	[ ] INTEGER Temp41
	[ ] INTEGER Secs41
	[ ] STRING Optics41
	[ ] INTEGER Temp42
	[ ] INTEGER Secs42
	[ ] STRING Optics42
	[ ] INTEGER Temp43
	[ ] INTEGER Secs43
	[ ] STRING Optics43
	[ ] STRING Stage5 // 2-Temperature Cycle
	[ ] INTEGER Temp51
	[ ] INTEGER Secs51
	[ ] STRING Optics51
	[ ] INTEGER Temp52
	[ ] INTEGER Secs52
	[ ] STRING Optics52
	[ ] //
[ ] //
[+] type REC_ANS_16_PROTOCOL is record
	[ ] INTEGER NumberCyclesInStage1
	[ ] INTEGER NumberCyclesInStage2
	[ ] INTEGER NumberCyclesInStage3
	[ ] INTEGER NumberCyclesInStage4
	[ ] INTEGER NumberCyclesInStage5
	[ ] INTEGER NumberCyclesInStage6
	[ ] INTEGER NumberCyclesInStage7
	[ ] INTEGER NumberCyclesInStage8
	[ ] INTEGER NumberCyclesInStage9
	[ ] INTEGER NumberCyclesInStage10
	[ ] STRING Stage1 // 2-Temperature Cycle
	[ ] INTEGER Temp11
	[ ] INTEGER Secs11
	[ ] STRING Optics11
	[ ] INTEGER Temp12
	[ ] INTEGER Secs12
	[ ] STRING Optics12
	[ ] STRING Stage2 // 3-Temperature Cycle
	[ ] INTEGER Temp21
	[ ] INTEGER Secs21
	[ ] STRING Optics21
	[ ] INTEGER Temp22
	[ ] INTEGER Secs22
	[ ] STRING Optics22
	[ ] INTEGER Temp23
	[ ] INTEGER Secs23
	[ ] STRING Optics23
	[ ] STRING  Stage3 // 5-Temperature Cycle
	[ ] INTEGER Temp31
	[ ] INTEGER Secs31
	[ ] STRING Optics31
	[ ] INTEGER Temp32
	[ ] INTEGER Secs32
	[ ] STRING Optics32
	[ ] INTEGER Temp33
	[ ] INTEGER Secs33
	[ ] STRING Optics33
	[ ] INTEGER Temp34
	[ ] INTEGER Secs34
	[ ] STRING Optics34
	[ ] INTEGER Temp35
	[ ] INTEGER Secs35
	[ ] STRING Optics35
	[ ] STRING Stage4 // 3-Temperature Cycle
	[ ] INTEGER Temp41
	[ ] INTEGER Secs41
	[ ] STRING Optics41
	[ ] INTEGER Temp42
	[ ] INTEGER Secs42
	[ ] STRING Optics42
	[ ] INTEGER Temp43
	[ ] INTEGER Secs43
	[ ] STRING Optics43
	[ ] STRING Stage5 // 2-Temperature Cycle
	[ ] INTEGER Temp51
	[ ] INTEGER Secs51
	[ ] STRING Optics51
	[ ] INTEGER Temp52
	[ ] INTEGER Secs52
	[ ] STRING Optics52
	[ ] STRING Stage6 // 3-Temperature Cycle
	[ ] INTEGER Temp61
	[ ] INTEGER Secs61
	[ ] STRING Optics61
	[ ] INTEGER Temp62
	[ ] INTEGER Secs62
	[ ] STRING Optics62
	[ ] INTEGER Temp63
	[ ] INTEGER Secs63
	[ ] STRING Optics63
	[ ] STRING Stage7 // 4-Temperature Cycle
	[ ] INTEGER Temp71
	[ ] INTEGER Secs71
	[ ] STRING Optics71
	[ ] INTEGER Temp72
	[ ] INTEGER Secs72
	[ ] STRING Optics72
	[ ] INTEGER Temp73
	[ ] INTEGER Secs73
	[ ] STRING Optics73
	[ ] INTEGER Temp74
	[ ] INTEGER Secs74
	[ ] STRING Optics74
	[ ] STRING Stage8 // 2-Temperature Cycle
	[ ] INTEGER Temp81
	[ ] INTEGER Secs81
	[ ] STRING Optics81
	[ ] INTEGER Temp82
	[ ] INTEGER Secs82
	[ ] STRING Optics82
	[ ] STRING Stage9 // 3-Temperature Cycle
	[ ] INTEGER Temp91
	[ ] INTEGER Secs91
	[ ] STRING Optics91
	[ ] INTEGER Temp92
	[ ] INTEGER Secs92
	[ ] STRING Optics92
	[ ] INTEGER Temp93
	[ ] INTEGER Secs93
	[ ] STRING Optics93
	[ ] STRING Stage10 // Hold
	[ ] INTEGER Temp101
	[ ] INTEGER Secs101
	[ ] STRING Optics101
[ ] //
[+] type REC_ANS_17_PROTOCOL is record
	[ ] INTEGER NumberCyclesInStage11
	[ ] INTEGER NumberCyclesInStage12
	[ ] INTEGER NumberCyclesInStage13
	[ ] INTEGER NumberCyclesInStage21
	[ ] INTEGER NumberCyclesInStage22
	[ ] INTEGER NumberCyclesInStage23
	[ ] INTEGER NumberCyclesInStage24
	[ ] STRING Stage1 // 2-Temperature Cycle in Protocol 1
	[ ] INTEGER Temp111
	[ ] INTEGER Secs111
	[ ] STRING Optics111
	[ ] INTEGER Temp112
	[ ] INTEGER Secs112
	[ ] STRING Optics112
	[ ] STRING Stage2 // 5-Temperature Cycle in Protocol 1
	[ ] INTEGER Temp121
	[ ] INTEGER Secs121
	[ ] STRING Optics121
	[ ] INTEGER Temp122
	[ ] INTEGER Secs122
	[ ] STRING Optics122
	[ ] INTEGER Temp123
	[ ] INTEGER Secs123
	[ ] STRING Optics123
	[ ] INTEGER Temp124
	[ ] INTEGER Secs124
	[ ] STRING Optics124
	[ ] INTEGER Temp125
	[ ] INTEGER Secs125
	[ ] STRING Optics125
	[ ] STRING  Stage3 // 3-Temperature Cycle in Protocol 1
	[ ] INTEGER Temp131
	[ ] INTEGER Secs131
	[ ] STRING Optics131
	[ ] INTEGER Temp132
	[ ] INTEGER Secs132
	[ ] STRING Optics132
	[ ] INTEGER Temp133
	[ ] INTEGER Secs133
	[ ] STRING Optics133
	[ ] STRING Stage1 // 4-Temperature Cycle in Protocol 2
	[ ] INTEGER Temp211
	[ ] INTEGER Secs211
	[ ] STRING Optics211
	[ ] INTEGER Temp212
	[ ] INTEGER Secs212
	[ ] STRING Optics212
	[ ] INTEGER Temp213
	[ ] INTEGER Secs213
	[ ] STRING Optics213
	[ ] INTEGER Temp214
	[ ] INTEGER Secs214
	[ ] STRING Optics214
	[ ] STRING Stage2 // 2-Temperature Cycle in Protocol 2
	[ ] INTEGER Temp221
	[ ] INTEGER Secs221
	[ ] STRING Optics221
	[ ] INTEGER Temp222
	[ ] INTEGER Secs222
	[ ] STRING Optics222
	[ ] STRING  Stage3 // 3-Temperature Cycle in Protocol 2
	[ ] INTEGER Temp231
	[ ] INTEGER Secs231
	[ ] STRING Optics231
	[ ] INTEGER Temp232
	[ ] INTEGER Secs232
	[ ] STRING Optics232
	[ ] INTEGER Temp233
	[ ] INTEGER Secs233
	[ ] STRING Optics233
	[ ] STRING Stage4 // Melt n Protocol 2
	[ ] INTEGER StartTemp2
	[ ] INTEGER EndTemp2
	[ ] STRING CSec2
	[ ] 
[ ] //
[+] type REC_ANS_20_PROTOCOL is record
	[ ] INTEGER NumberCyclesInStage1
	[ ] INTEGER NumberCyclesInStage2
	[ ] INTEGER NumberCyclesInStage3
	[ ] STRING Stage1 // 2-Temperature Cycle
	[ ] INTEGER Temp11
	[ ] INTEGER Secs11
	[ ] STRING Optics11
	[ ] INTEGER Temp12
	[ ] INTEGER Secs12
	[ ] STRING Optics12
	[ ] STRING Stage2 // 5-Temperature Cycle
	[ ] INTEGER Temp21
	[ ] INTEGER Secs21
	[ ] STRING Optics21
	[ ] INTEGER Temp22
	[ ] INTEGER Secs22
	[ ] STRING Optics22
	[ ] INTEGER Temp23
	[ ] INTEGER Secs23
	[ ] STRING Optics23
	[ ] INTEGER Temp24
	[ ] INTEGER Secs24
	[ ] STRING Optics24
	[ ] INTEGER Temp25
	[ ] INTEGER Secs25
	[ ] STRING Optics25
	[ ] STRING  Stage3 // 3-Temperature Cycle
	[ ] INTEGER Temp31
	[ ] INTEGER Secs31
	[ ] STRING Optics31
	[ ] INTEGER Temp32
	[ ] INTEGER Secs32
	[ ] STRING Optics32
	[ ] INTEGER Temp33
	[ ] INTEGER Secs33
	[ ] STRING Optics33
[ ] //
[+] type REC_ANS_21_PROTOCOL is record
	[ ] INTEGER NumberCyclesInStage11
	[ ] INTEGER NumberCyclesInStage12
	[ ] INTEGER NumberCyclesInStage13
	[ ] INTEGER NumberCyclesInStage14
	[ ] INTEGER NumberCyclesInStage21
	[ ] INTEGER NumberCyclesInStage22
	[ ] INTEGER NumberCyclesInStage23
	[ ] INTEGER NumberCyclesInStage24
	[ ] // Protocol 1
	[ ] STRING Stage11 // 2-Temperature Cycle
	[ ] INTEGER Temp111
	[ ] INTEGER Secs111
	[ ] STRING Optics111
	[ ] INTEGER Temp112
	[ ] INTEGER Secs112
	[ ] STRING Optics112
	[ ] STRING Stage12 // 5-Temperature Cycle
	[ ] INTEGER Temp121
	[ ] INTEGER Secs121
	[ ] STRING Optics121
	[ ] INTEGER Temp122
	[ ] INTEGER Secs122
	[ ] STRING Optics122
	[ ] INTEGER Temp123
	[ ] INTEGER Secs123
	[ ] STRING Optics123
	[ ] INTEGER Temp124
	[ ] INTEGER Secs124
	[ ] STRING Optics124
	[ ] INTEGER Temp125
	[ ] INTEGER Secs125
	[ ] STRING Optics125
	[ ] STRING  Stage13 // 3-Temperature Cycle
	[ ] INTEGER Temp131
	[ ] INTEGER Secs131
	[ ] STRING Optics131
	[ ] INTEGER Temp132
	[ ] INTEGER Secs132
	[ ] STRING Optics132
	[ ] INTEGER Temp133
	[ ] INTEGER Secs133
	[ ] STRING Optics133
	[ ] STRING  Stage14 // Hold
	[ ] INTEGER Temp141
	[ ] INTEGER Secs141
	[ ] STRING Optics141
	[ ] // Protocol 2
	[ ] STRING  Stage211 // Hold
	[ ] INTEGER Temp211
	[ ] INTEGER Secs211
	[ ] STRING Optics211
	[ ] STRING Stage22 // 3-Temperature Cycle
	[ ] INTEGER Temp221
	[ ] INTEGER Secs221
	[ ] STRING Optics221
	[ ] INTEGER Temp222
	[ ] INTEGER Secs222
	[ ] STRING Optics222
	[ ] INTEGER Temp223
	[ ] INTEGER Secs223
	[ ] STRING Optics223
	[ ] STRING  Stage23 // 2-Temperature Cycle
	[ ] INTEGER Temp231
	[ ] INTEGER Secs231
	[ ] STRING Optics231
	[ ] INTEGER Temp232
	[ ] INTEGER Secs232
	[ ] STRING Optics232
	[ ] STRING  Stage14 // 3-Temperature Cycle
	[ ] INTEGER Temp241
	[ ] INTEGER Secs241
	[ ] STRING Optics241
	[ ] INTEGER Temp242
	[ ] INTEGER Secs242
	[ ] STRING Optics242
	[ ] INTEGER Temp243
	[ ] INTEGER Secs243
	[ ] STRING Optics243
	[ ] STRING AdvanceToNewStage
	[ ] // 
[ ] //
[+] type REC_ANS_22_PROTOCOL is record
	[ ] INTEGER NumberCyclesInStage1
	[ ] INTEGER NumberCyclesInStage2
	[ ] INTEGER NumberCyclesInStage3
	[ ] INTEGER NumberCyclesInStage4
	[ ] INTEGER NumberCyclesInStage5
	[ ] //
	[ ] STRING Stage1 // Hold 
	[ ] INTEGER Temp11
	[ ] INTEGER Secs11
	[ ] STRING Optics11
	[ ] STRING Stage2 // 2-Temperature Cycle
	[ ] INTEGER Temp21
	[ ] INTEGER Secs21
	[ ] STRING Optics21
	[ ] INTEGER Temp22
	[ ] INTEGER Secs22
	[ ] STRING Optics22
	[ ] STRING Stage3 // 3-Temperature Cycle
	[ ] INTEGER Temp31
	[ ] INTEGER Secs31
	[ ] STRING Optics31
	[ ] INTEGER Temp32
	[ ] INTEGER Secs32
	[ ] STRING Optics32
	[ ] INTEGER Temp33
	[ ] INTEGER Secs33
	[ ] STRING Optics33
	[ ] STRING  Stage4 // 2-Temperature Cycle
	[ ] INTEGER Temp41
	[ ] INTEGER Secs41
	[ ] STRING Optics41
	[ ] INTEGER Temp42
	[ ] INTEGER Secs42
	[ ] STRING Optics42
	[ ] STRING Stage5 // Hold
	[ ] INTEGER Temp51
	[ ] INTEGER Secs51
	[ ] STRING Optics51
[ ] //
[+] type REC_ANS_23_PROTOCOL is record
	[ ] INTEGER NumberCyclesInStage11
	[ ] INTEGER NumberCyclesInStage12
	[ ] INTEGER NumberCyclesInStage21
	[ ] INTEGER NumberCyclesInStage22
	[ ] //
	[ ] STRING Stage11 // 2-temperature Cycle in Protocol 1
	[ ] INTEGER Temp111
	[ ] INTEGER Secs111
	[ ] STRING Optics111
	[ ] INTEGER Temp112
	[ ] INTEGER Secs112
	[ ] STRING Optics112
	[ ] STRING Stage12 // 3-Temperature Cycle in Protocol 1
	[ ] INTEGER Temp121
	[ ] INTEGER Secs121
	[ ] STRING Optics121
	[ ] INTEGER Temp122
	[ ] INTEGER Secs122
	[ ] STRING Optics122
	[ ] INTEGER Temp123
	[ ] INTEGER Secs123
	[ ] STRING Optics123
	[ ] STRING Stage21 // 4-Temperature Cycle in Protocol 2
	[ ] INTEGER Temp211
	[ ] INTEGER Secs211
	[ ] STRING Optics211
	[ ] INTEGER Temp212
	[ ] INTEGER Secs212
	[ ] STRING Optics212
	[ ] INTEGER Temp213
	[ ] INTEGER Secs213
	[ ] STRING Optics213
	[ ] INTEGER Temp214
	[ ] INTEGER Secs214
	[ ] STRING Optics214
	[ ] STRING  Stage22// 2-Temperature Cycle
	[ ] INTEGER Temp221
	[ ] INTEGER Secs221
	[ ] STRING Optics221
	[ ] INTEGER Temp222
	[ ] INTEGER Secs222
	[ ] STRING Optics222
[ ] //
[+] type REC_ANS_24_PROTOCOL is record
	[ ] INTEGER NumberCyclesInStage1
	[ ] INTEGER NumberCyclesInStage2
	[ ] INTEGER NumberCyclesInStage3
	[ ] INTEGER NumberCyclesInStage4
	[ ] INTEGER NumberCyclesInStage5
	[ ] INTEGER NumberCyclesInStage6
	[ ] INTEGER NumberCyclesInStage7
	[ ] INTEGER NumberCyclesInStage8
	[ ] STRING Stage1 // 2-Temperature Cycle
	[ ] INTEGER Temp11
	[ ] INTEGER Secs11
	[ ] STRING Optics11
	[ ] INTEGER Temp12
	[ ] INTEGER Secs12
	[ ] STRING Optics12
	[ ] STRING Stage2 // 3-Temperature Cycle
	[ ] INTEGER Temp21
	[ ] INTEGER Secs21
	[ ] STRING Optics21
	[ ] INTEGER Temp22
	[ ] INTEGER Secs22
	[ ] STRING Optics22
	[ ] INTEGER Temp23
	[ ] INTEGER Secs23
	[ ] STRING Optics23
	[ ] STRING  Stage3 // 4-Temperature Cycle
	[ ] INTEGER Temp31
	[ ] INTEGER Secs31
	[ ] STRING Optics31
	[ ] INTEGER Temp32
	[ ] INTEGER Secs32
	[ ] STRING Optics32
	[ ] INTEGER Temp33
	[ ] INTEGER Secs33
	[ ] STRING Optics33
	[ ] INTEGER Temp34
	[ ] INTEGER Secs34
	[ ] STRING Optics34
	[ ] STRING Stage4 // 5-Temperature Cycle
	[ ] INTEGER Temp41
	[ ] INTEGER Secs41
	[ ] STRING Optics41
	[ ] INTEGER Temp42
	[ ] INTEGER Secs42
	[ ] STRING Optics42
	[ ] INTEGER Temp43
	[ ] INTEGER Secs43
	[ ] STRING Optics43
	[ ] INTEGER Temp44
	[ ] INTEGER Secs44
	[ ] STRING Optics44
	[ ] INTEGER Temp45
	[ ] INTEGER Secs45
	[ ] STRING Optics45
	[ ] STRING Stage5 // 2-Temperature Cycle
	[ ] INTEGER Temp51
	[ ] INTEGER Secs51
	[ ] STRING Optics51
	[ ] INTEGER Temp52
	[ ] INTEGER Secs52
	[ ] STRING Optics52
	[ ] STRING Stage6 // 3-Temperature Cycle
	[ ] INTEGER Temp61
	[ ] INTEGER Secs61
	[ ] STRING Optics61
	[ ] INTEGER Temp62
	[ ] INTEGER Secs62
	[ ] STRING Optics62
	[ ] INTEGER Temp63
	[ ] INTEGER Secs63
	[ ] STRING Optics63
	[ ] STRING Stage7 // Hold
	[ ] INTEGER Temp71
	[ ] INTEGER Secs71
	[ ] STRING Optics71
	[ ] STRING Stage8 // Melt
	[ ] INTEGER StartTemp
	[ ] INTEGER EndTemp
	[ ] STRING CSec
	[ ] 
[ ] //
[+] type REC_ANS_25_PROTOCOL is record
	[ ] INTEGER NumberCyclesInStage1
	[ ] INTEGER NumberCyclesInStage2
	[ ] STRING Stage1 // 2-Temperature Cycle
	[ ] INTEGER Temp11
	[ ] INTEGER Secs11
	[ ] STRING Optics11
	[ ] INTEGER Temp12
	[ ] INTEGER Secs12
	[ ] STRING Optics12
	[ ] STRING Stage2 // 4-Temperature Cycle
	[ ] INTEGER Temp21
	[ ] INTEGER Secs21
	[ ] STRING Optics21
	[ ] INTEGER Temp22
	[ ] INTEGER Secs22
	[ ] STRING Optics22
	[ ] INTEGER Temp23
	[ ] INTEGER Secs23
	[ ] STRING Optics23
	[ ] INTEGER Temp24
	[ ] INTEGER Secs24
	[ ] STRING Optics24
[ ] //
[+] type REC_MRSA1_PROTOCOL is record
	[ ] INTEGER NumberCyclesInStage1
	[ ] INTEGER NumberCyclesInStage2
	[ ] INTEGER NumberCyclesInStage3
	[ ] INTEGER NumberCyclesInStage4
	[ ] INTEGER NumberCyclesInStage5
	[ ] INTEGER NumberCyclesInStage6
	[ ] INTEGER NumberCyclesInStage7
	[ ] INTEGER NumberCyclesInStage8
	[ ] INTEGER NumberCyclesInStage9
	[ ] //
	[ ] STRING Stage1 // 2-Temperature Cycle
	[ ] INTEGER Temp11
	[ ] INTEGER Secs11
	[ ] STRING Optics11
	[ ] INTEGER Temp12
	[ ] INTEGER Secs12
	[ ] STRING Optics12
	[ ] //
	[ ] STRING Stage2 // 2-Temperature Cycle
	[ ] INTEGER Temp21
	[ ] INTEGER Secs21
	[ ] STRING Optics21
	[ ] INTEGER Temp22
	[ ] INTEGER Secs22
	[ ] STRING Optics22
	[ ] //
	[ ] STRING Stage3 // 2-Temperature Cycle
	[ ] INTEGER Temp31
	[ ] INTEGER Secs31
	[ ] STRING Optics31
	[ ] INTEGER Temp32
	[ ] INTEGER Secs32
	[ ] STRING Optics32
	[ ] //
	[ ] STRING Stage4 // 2-Temperature Cycle
	[ ] INTEGER Temp41
	[ ] INTEGER Secs41
	[ ] STRING Optics41
	[ ] INTEGER Temp42
	[ ] INTEGER Secs42
	[ ] STRING Optics42
	[ ] //
	[ ] STRING Stage5 // 2-Temperature Cycle
	[ ] INTEGER Temp51
	[ ] INTEGER Secs51
	[ ] STRING Optics51
	[ ] INTEGER Temp52
	[ ] INTEGER Secs52
	[ ] STRING Optics52
	[ ] //
	[ ] STRING Stage6 // 2-Temperature Cycle
	[ ] INTEGER Temp61
	[ ] INTEGER Secs61
	[ ] STRING Optics61
	[ ] INTEGER Temp62
	[ ] INTEGER Secs62
	[ ] STRING Optics62
	[ ] //
	[ ] STRING Stage7 // 2-Temperature Cycle
	[ ] INTEGER Temp71
	[ ] INTEGER Secs71
	[ ] STRING Optics71
	[ ] INTEGER Temp72
	[ ] INTEGER Secs72
	[ ] STRING Optics72
	[ ] //
	[ ] STRING Stage8 // 2-Temperature Cycle
	[ ] INTEGER Temp81
	[ ] INTEGER Secs81
	[ ] STRING Optics81
	[ ] INTEGER Temp82
	[ ] INTEGER Secs82
	[ ] STRING Optics82
	[ ] //
	[ ] STRING Stage9 // End
[ ] //
[ ] //
[ ] //
[+] type REC_ANS_1ANALYTE_SET  is record
	[ ] STRING ANSAnalyte1
	[ ] INTEGER MonitorProtocol1
	[ ] INTEGER MonitorStage1
	[ ] INTEGER AdvanceToStage1
	[ ] STRING StopAfterTheNewStage1
	[ ] STRING StopIfNoCt1
[ ] //
[+] type REC_21_ANS_SET  is record
	[ ] STRING ANSAnalyte1
	[ ] INTEGER MonitorProtocol1
	[ ] INTEGER MonitorStage1
	[ ] INTEGER AdvanceToStage1
	[ ] STRING StopAfterTheNewStage1
	[ ] STRING StopIfNoCt1
	[ ] //
	[ ] STRING ANSAnalyte2
	[ ] INTEGER MonitorProtocol2
	[ ] INTEGER MonitorStage2
	[ ] INTEGER AdvanceToStage2
	[ ] STRING StopAfterTheNewStage2
	[ ] STRING StopIfNoCt2
[ ] //
[+] type REC_ANS_2ANALYTES_SET  is record
	[ ] STRING ANSAnalyte1
	[ ] INTEGER MonitorProtocol1
	[ ] INTEGER MonitorStage1
	[ ] INTEGER AdvanceToStage1
	[ ] STRING StopAfterTheNewStage1
	[ ] STRING StopIfNoCt1
	[ ] STRING ANSAnalyte2
	[ ] INTEGER MonitorProtocol2
	[ ] INTEGER MonitorStage2
	[ ] INTEGER AdvanceToStage2
	[ ] STRING StopAfterTheNewStage2
	[ ] STRING StopIfNoCt2
	[ ] 
[ ] //
[+] type REC_ANS_3ANALYTES_SET  is record
	[ ] STRING ANSAnalyte1
	[ ] INTEGER MonitorProtocol1
	[ ] INTEGER MonitorStage1
	[ ] INTEGER AdvanceToStage1
	[ ] STRING StopAfterTheNewStage1
	[ ] STRING StopIfNoCt1
	[ ] //
	[ ] STRING ANSAnalyte2
	[ ] INTEGER MonitorProtocol2
	[ ] INTEGER MonitorStage2
	[ ] INTEGER AdvanceToStage2
	[ ] STRING StopAfterTheNewStage2
	[ ] STRING StopIfNoCt2
	[ ] //
	[ ] STRING ANSAnalyte3
	[ ] INTEGER MonitorProtocol3
	[ ] INTEGER MonitorStage3
	[ ] INTEGER AdvanceToStage3
	[ ] STRING StopAfterTheNewStage3
	[ ] STRING StopIfNoCt3
	[ ] 
[ ] //
[+] type REC_ANS_4ANALYTES_SET  is record
	[ ] STRING ANSAnalyte1
	[ ] INTEGER MonitorProtocol1
	[ ] INTEGER MonitorStage1
	[ ] INTEGER AdvanceToStage1
	[ ] STRING StopAfterTheNewStage1
	[ ] STRING StopIfNoCt1
	[ ] //
	[ ] STRING ANSAnalyte2
	[ ] INTEGER MonitorProtocol2
	[ ] INTEGER MonitorStage2
	[ ] INTEGER AdvanceToStage2
	[ ] STRING StopAfterTheNewStage2
	[ ] STRING StopIfNoCt2
	[ ] //
	[ ] STRING ANSAnalyte3
	[ ] INTEGER MonitorProtocol3
	[ ] INTEGER MonitorStage3
	[ ] INTEGER AdvanceToStage3
	[ ] STRING StopAfterTheNewStage3
	[ ] STRING StopIfNoCt3
	[ ] //
	[ ] STRING ANSAnalyte4
	[ ] INTEGER MonitorProtocol4
	[ ] INTEGER MonitorStage4
	[ ] INTEGER AdvanceToStage4
	[ ] STRING StopAfterTheNewStage4
	[ ] STRING StopIfNoCt4
	[ ] //
[ ] //
[+] type REC_ANS_6ANALYTES_SET  is record
	[ ] // 1
	[ ] STRING ANSAnalyte1
	[ ] INTEGER MonitorProtocol1
	[ ] INTEGER MonitorStage1
	[ ] INTEGER AdvanceToStage1
	[ ] STRING StopAfterTheNewStage1
	[ ] STRING StopIfNoCt1
	[ ] // 2
	[ ] STRING ANSAnalyte2
	[ ] INTEGER MonitorProtocol2
	[ ] INTEGER MonitorStage2
	[ ] INTEGER AdvanceToStage2
	[ ] STRING StopAfterTheNewStage2
	[ ] STRING StopIfNoCt2
	[ ] // 3
	[ ] STRING ANSAnalyte3
	[ ] INTEGER MonitorProtocol3
	[ ] INTEGER MonitorStage3
	[ ] INTEGER AdvanceToStage3
	[ ] STRING StopAfterTheNewStage3
	[ ] STRING StopIfNoCt3
	[ ] // 4
	[ ] STRING ANSAnalyte4
	[ ] INTEGER MonitorProtocol4
	[ ] INTEGER MonitorStage4
	[ ] INTEGER AdvanceToStage4
	[ ] STRING StopAfterTheNewStage4
	[ ] STRING StopIfNoCt4
	[ ] // 5
	[ ] STRING ANSAnalyte5
	[ ] INTEGER MonitorProtocol5
	[ ] INTEGER MonitorStage5
	[ ] INTEGER AdvanceToStage5
	[ ] STRING StopAfterTheNewStage5
	[ ] STRING StopIfNoCt5
	[ ] // 6
	[ ] STRING ANSAnalyte6
	[ ] INTEGER MonitorProtocol6
	[ ] INTEGER MonitorStage6
	[ ] INTEGER AdvanceToStage6
	[ ] STRING StopAfterTheNewStage6
	[ ] STRING StopIfNoCt6
	[ ] //
[ ] //
[+] type REC_ANS_16ANALYTES_SET  is record
	[ ] // 1
	[ ] STRING ANSAnalyte1
	[ ] INTEGER MonitorProtocol1
	[ ] INTEGER MonitorStage1
	[ ] INTEGER AdvanceToStage1
	[ ] STRING StopAfterTheNewStage1
	[ ] STRING StopIfNoCt1
	[ ] // 2
	[ ] STRING ANSAnalyte2
	[ ] INTEGER MonitorProtocol2
	[ ] INTEGER MonitorStage2
	[ ] INTEGER AdvanceToStage2
	[ ] STRING StopAfterTheNewStage2
	[ ] STRING StopIfNoCt2
	[ ] // 3
	[ ] STRING ANSAnalyte3
	[ ] INTEGER MonitorProtocol3
	[ ] INTEGER MonitorStage3
	[ ] INTEGER AdvanceToStage3
	[ ] STRING StopAfterTheNewStage3
	[ ] STRING StopIfNoCt3
	[ ] // 4
	[ ] STRING ANSAnalyte4
	[ ] INTEGER MonitorProtocol4
	[ ] INTEGER MonitorStage4
	[ ] INTEGER AdvanceToStage4
	[ ] STRING StopAfterTheNewStage4
	[ ] STRING StopIfNoCt4
	[ ] // 5
	[ ] STRING ANSAnalyte5
	[ ] INTEGER MonitorProtocol5
	[ ] INTEGER MonitorStage5
	[ ] INTEGER AdvanceToStage5
	[ ] STRING StopAfterTheNewStage5
	[ ] STRING StopIfNoCt5
	[ ] // 6
	[ ] STRING ANSAnalyte6
	[ ] INTEGER MonitorProtocol6
	[ ] INTEGER MonitorStage6
	[ ] INTEGER AdvanceToStage6
	[ ] STRING StopAfterTheNewStage6
	[ ] STRING StopIfNoCt6
	[ ] // 7
	[ ] STRING ANSAnalyte7
	[ ] INTEGER MonitorProtocol7
	[ ] INTEGER MonitorStage7
	[ ] INTEGER AdvanceToStage7
	[ ] STRING StopAfterTheNewStage7
	[ ] STRING StopIfNoCt7
	[ ] // 8
	[ ] STRING ANSAnalyte8
	[ ] INTEGER MonitorProtocol8
	[ ] INTEGER MonitorStage8
	[ ] INTEGER AdvanceToStage8
	[ ] STRING StopAfterTheNewStage8
	[ ] STRING StopIfNoCt8
	[ ] // 9
	[ ] STRING ANSAnalyte9
	[ ] INTEGER MonitorProtocol9
	[ ] INTEGER MonitorStage9
	[ ] INTEGER AdvanceToStage9
	[ ] STRING StopAfterTheNewStage9
	[ ] STRING StopIfNoCt9
	[ ] // 10
	[ ] STRING ANSAnalyte10
	[ ] INTEGER MonitorProtocol10
	[ ] INTEGER MonitorStage10
	[ ] INTEGER AdvanceToStage10
	[ ] STRING StopAfterTheNewStage10
	[ ] STRING StopIfNoCt10
	[ ] //11
	[ ] STRING ANSAnalyte11
	[ ] INTEGER MonitorProtocol11
	[ ] INTEGER MonitorStage11
	[ ] INTEGER AdvanceToStage11
	[ ] STRING StopAfterTheNewStage11
	[ ] STRING StopIfNoCt11
	[ ] // 12
	[ ] STRING ANSAnalyte12
	[ ] INTEGER MonitorProtocol12
	[ ] INTEGER MonitorStage12
	[ ] INTEGER AdvanceToStage12
	[ ] STRING StopAfterTheNewStage12
	[ ] STRING StopIfNoCt12
	[ ] // 13
	[ ] STRING ANSAnalyte13
	[ ] INTEGER MonitorProtocol13
	[ ] INTEGER MonitorStage13
	[ ] INTEGER AdvanceToStage13
	[ ] STRING StopAfterTheNewStage13
	[ ] STRING StopIfNoCt13
	[ ] // 14
	[ ] STRING ANSAnalyte14
	[ ] INTEGER MonitorProtocol14
	[ ] INTEGER MonitorStage14
	[ ] INTEGER AdvanceToStage14
	[ ] STRING StopAfterTheNewStage14
	[ ] STRING StopIfNoCt14
	[ ] // 15
	[ ] STRING ANSAnalyte15
	[ ] INTEGER MonitorProtocol15
	[ ] INTEGER MonitorStage15
	[ ] INTEGER AdvanceToStage15
	[ ] STRING StopAfterTheNewStage15
	[ ] STRING StopIfNoCt15
	[ ] // 16
	[ ] STRING ANSAnalyte16
	[ ] INTEGER MonitorProtocol16
	[ ] INTEGER MonitorStage16
	[ ] INTEGER AdvanceToStage16
	[ ] STRING StopAfterTheNewStage16
	[ ] STRING StopIfNoCt16
[ ] //
[-] type REC_ANS_15ANALYTES_SET  is record
	[ ] // 1
	[ ] STRING ANSAnalyte1
	[ ] INTEGER MonitorProtocol1
	[ ] INTEGER MonitorStage1
	[ ] INTEGER AdvanceToStage1
	[ ] STRING StopAfterTheNewStage1
	[ ] STRING StopIfNoCt1
	[ ] // 2
	[ ] STRING ANSAnalyte2
	[ ] INTEGER MonitorProtocol2
	[ ] INTEGER MonitorStage2
	[ ] INTEGER AdvanceToStage2
	[ ] STRING StopAfterTheNewStage2
	[ ] STRING StopIfNoCt2
	[ ] // 3
	[ ] STRING ANSAnalyte3
	[ ] INTEGER MonitorProtocol3
	[ ] INTEGER MonitorStage3
	[ ] INTEGER AdvanceToStage3
	[ ] STRING StopAfterTheNewStage3
	[ ] STRING StopIfNoCt3
	[ ] // 4
	[ ] STRING ANSAnalyte4
	[ ] INTEGER MonitorProtocol4
	[ ] INTEGER MonitorStage4
	[ ] INTEGER AdvanceToStage4
	[ ] STRING StopAfterTheNewStage4
	[ ] STRING StopIfNoCt4
	[ ] // 5
	[ ] STRING ANSAnalyte5
	[ ] INTEGER MonitorProtocol5
	[ ] INTEGER MonitorStage5
	[ ] INTEGER AdvanceToStage5
	[ ] STRING StopAfterTheNewStage5
	[ ] STRING StopIfNoCt5
	[ ] // 6
	[ ] STRING ANSAnalyte6
	[ ] INTEGER MonitorProtocol6
	[ ] INTEGER MonitorStage6
	[ ] INTEGER AdvanceToStage6
	[ ] STRING StopAfterTheNewStage6
	[ ] STRING StopIfNoCt6
	[ ] // 7
	[ ] STRING ANSAnalyte7
	[ ] INTEGER MonitorProtocol7
	[ ] INTEGER MonitorStage7
	[ ] INTEGER AdvanceToStage7
	[ ] STRING StopAfterTheNewStage7
	[ ] STRING StopIfNoCt7
	[ ] // 8
	[ ] STRING ANSAnalyte8
	[ ] INTEGER MonitorProtocol8
	[ ] INTEGER MonitorStage8
	[ ] INTEGER AdvanceToStage8
	[ ] STRING StopAfterTheNewStage8
	[ ] STRING StopIfNoCt8
	[ ] // 9
	[ ] STRING ANSAnalyte9
	[ ] INTEGER MonitorProtocol9
	[ ] INTEGER MonitorStage9
	[ ] INTEGER AdvanceToStage9
	[ ] STRING StopAfterTheNewStage9
	[ ] STRING StopIfNoCt9
	[ ] // 10
	[ ] STRING ANSAnalyte10
	[ ] INTEGER MonitorProtocol10
	[ ] INTEGER MonitorStage10
	[ ] INTEGER AdvanceToStage10
	[ ] STRING StopAfterTheNewStage10
	[ ] STRING StopIfNoCt10
	[ ] //11
	[ ] STRING ANSAnalyte11
	[ ] INTEGER MonitorProtocol11
	[ ] INTEGER MonitorStage11
	[ ] INTEGER AdvanceToStage11
	[ ] STRING StopAfterTheNewStage11
	[ ] STRING StopIfNoCt11
	[ ] // 12
	[ ] STRING ANSAnalyte12
	[ ] INTEGER MonitorProtocol12
	[ ] INTEGER MonitorStage12
	[ ] INTEGER AdvanceToStage12
	[ ] STRING StopAfterTheNewStage12
	[ ] STRING StopIfNoCt12
	[ ] // 13
	[ ] STRING ANSAnalyte13
	[ ] INTEGER MonitorProtocol13
	[ ] INTEGER MonitorStage13
	[ ] INTEGER AdvanceToStage13
	[ ] STRING StopAfterTheNewStage13
	[ ] STRING StopIfNoCt13
	[ ] // 14
	[ ] STRING ANSAnalyte14
	[ ] INTEGER MonitorProtocol14
	[ ] INTEGER MonitorStage14
	[ ] INTEGER AdvanceToStage14
	[ ] STRING StopAfterTheNewStage14
	[ ] STRING StopIfNoCt14
	[ ] // 15
	[ ] STRING ANSAnalyte15
	[ ] INTEGER MonitorProtocol15
	[ ] INTEGER MonitorStage15
	[ ] INTEGER AdvanceToStage15
	[ ] STRING StopAfterTheNewStage15
	[ ] STRING StopIfNoCt15
	[ ] //
[ ] //
[ ] //Constants for Define Assays
[ ] // const PRIMARY_CURVE_ANALYSIS = 'Primary'
[ ] // const SEC_DERIVATIVE_CURVE_ANALYSIS = '2nd Deriv'
[ ] // const COMBO_CURVE_ANALYSIS = 'Combination'
[ ] // const USAGE_TARGET = 'Target'
[ ] // const USAGE_EC = 'EC'
[ ] // const USAGE_IC = 'IC'
[ ] // const USAGE_SPC = 'SPC'
[ ] // const NO = 'No'
[ ] // const YES = 'Yes'
[ ] // const SELECT = 1
[ ] // const STOP = 'Stop'
[ ] // const INSERT_BEFORE = 'Before Selected Command'
[ ] // const INSERT_AFTER = 'After Selected Command'
[ ] // const DECISION = 'Decision'
[ ] // const DEC = '.'
[ ] //
[ ] //
[ ] // FUNCTIONS
[ ] //
[+] Define1Analyte(REC_1_ANALYTE_ANS rData)
	[ ] GeneXpert®DxSystem.AssayName2.SelectAnalytes.Click()
	[ ] SelectAnalytes.SetActive( )
	[ ] SelectAnalytes.Add.Click()
	[ ] SelectAnalytes.AnalyteS.ClickCell( {1,2} )
	[ ] SelectAnalytes.AnalyteS.ComCepheidGenexpertUiUtil.SetText(rData.AnalyteName1)
	[ ] SelectAnalytes.AnalyteS.ClickCell( {1,3} )
	[ ] SelectAnalytes.AnalyteS.JavaxSwingJComboBox.Select( rData.Reporter1 )
	[ ] SelectAnalytes.OK.Click()
	[ ] GeneXpert®DxSystem.SetActive( )
[ ] //
[-] Define2Analytes(REC_2_ANALYTES_ANS rData)
	[ ] // Select analytes
	[ ] //
	[ ] GeneXpert®DxSystem.AssayName2.SelectAnalytes.Click()
	[ ] SelectAnalytes.SetActive( )
	[ ] SelectAnalytes.Add.Click()
	[ ] SelectAnalytes.AnalyteS.ClickCell( {1,2} )
	[ ] SelectAnalytes.AnalyteS.ComCepheidGenexpertUiUtil.SetText(rData.AnalyteName1)
	[ ] SelectAnalytes.AnalyteS.ClickCell( {1,3} )
	[ ] SelectAnalytes.AnalyteS.JavaxSwingJComboBox.Select( rData.Reporter1 )
	[ ] SelectAnalytes.Add.Click()
	[ ] SelectAnalytes.AnalyteS.ClickCell( {2,2} )
	[ ] SelectAnalytes.AnalyteS.ComCepheidGenexpertUiUtil.SetText(rData.AnalyteName2)
	[ ] SelectAnalytes.AnalyteS.ClickCell( {2,3} )
	[ ] SelectAnalytes.AnalyteS.JavaxSwingJComboBox.Select( rData.Reporter2)
	[ ] SelectAnalytes.OK.Click()
	[ ] GeneXpert®DxSystem.SetActive( )
	[ ] 
[ ] //
[+] Define3Analytes(REC_3_ANALYTES_ANS rData)
	[ ] // Select analytes
	[ ] //
	[ ] GeneXpert®DxSystem.AssayName2.SelectAnalytes.Click()
	[ ] SelectAnalytes.SetActive( )
	[ ] SelectAnalytes.Add.Click()
	[ ] SelectAnalytes.AnalyteS.ClickCell( {1,2} )
	[ ] SelectAnalytes.AnalyteS.ComCepheidGenexpertUiUtil.SetText(rData.AnalyteName1)
	[ ] SelectAnalytes.AnalyteS.ClickCell( {1,3} )
	[ ] SelectAnalytes.AnalyteS.JavaxSwingJComboBox.Select( rData.Reporter1 )
	[ ] SelectAnalytes.Add.Click()
	[ ] SelectAnalytes.AnalyteS.ClickCell( {2,2} )
	[ ] SelectAnalytes.AnalyteS.ComCepheidGenexpertUiUtil.SetText(rData.AnalyteName2)
	[ ] SelectAnalytes.AnalyteS.ClickCell( {2,3} )
	[ ] SelectAnalytes.AnalyteS.JavaxSwingJComboBox.Select( rData.Reporter2 )
	[ ] SelectAnalytes.Add.Click()
	[ ] SelectAnalytes.AnalyteS.ClickCell( {3,2} )
	[ ] SelectAnalytes.AnalyteS.ComCepheidGenexpertUiUtil.SetText(rData.AnalyteName3)
	[ ] SelectAnalytes.AnalyteS.ClickCell( {3,3} )
	[ ] SelectAnalytes.AnalyteS.JavaxSwingJComboBox.Select( rData.Reporter3 )
	[ ] SelectAnalytes.OK.Click()
	[ ] GeneXpert®DxSystem.SetActive( )
	[ ] 
	[ ] 
[ ] 
[+] Define4Analytes(REC_4_ANALYTES_ANS rData)
	[ ] // Select analytes
	[ ] //
	[ ] GeneXpert®DxSystem.AssayName2.SelectAnalytes.Click()
	[ ] SelectAnalytes.SetActive( )
	[ ] SelectAnalytes.Add.Click()
	[ ] SelectAnalytes.AnalyteS.ClickCell( {1,2} )
	[ ] SelectAnalytes.AnalyteS.ComCepheidGenexpertUiUtil.SetText(rData.AnalyteName1)
	[ ] SelectAnalytes.AnalyteS.ClickCell( {1,3} )
	[ ] SelectAnalytes.AnalyteS.JavaxSwingJComboBox.Select( rData.Reporter1 )
	[ ] SelectAnalytes.Add.Click()
	[ ] SelectAnalytes.AnalyteS.ClickCell( {2,2} )
	[ ] SelectAnalytes.AnalyteS.ComCepheidGenexpertUiUtil.SetText(rData.AnalyteName2)
	[ ] SelectAnalytes.AnalyteS.ClickCell( {2,3} )
	[ ] SelectAnalytes.AnalyteS.JavaxSwingJComboBox.Select( rData.Reporter2 )
	[ ] SelectAnalytes.Add.Click()
	[ ] SelectAnalytes.AnalyteS.ClickCell( {3,2} )
	[ ] SelectAnalytes.AnalyteS.ComCepheidGenexpertUiUtil.SetText(rData.AnalyteName3)
	[ ] SelectAnalytes.AnalyteS.ClickCell( {3,3} )
	[ ] SelectAnalytes.AnalyteS.JavaxSwingJComboBox.Select( rData.Reporter3 )
	[ ] SelectAnalytes.Add.Click()
	[ ] SelectAnalytes.AnalyteS.ClickCell( {4,2} )
	[ ] SelectAnalytes.AnalyteS.ComCepheidGenexpertUiUtil.SetText(rData.AnalyteName4)
	[ ] SelectAnalytes.AnalyteS.ClickCell( {4,3} )
	[ ] SelectAnalytes.AnalyteS.JavaxSwingJComboBox.Select( rData.Reporter4 )
	[ ] SelectAnalytes.OK.Click()
	[ ] GeneXpert®DxSystem.SetActive( )
	[ ] 
[ ] //
[+] Define6Analytes(REC_6_ANALYTES_ANS rData)
	[ ] // Select analytes
	[ ] //
	[ ] GeneXpert®DxSystem.AssayName2.SelectAnalytes.Click()
	[ ] SelectAnalytes.SetActive( )
	[ ] SelectAnalytes.Add.Click()
	[ ] SelectAnalytes.AnalyteS.ClickCell( {1,2} )
	[ ] SelectAnalytes.AnalyteS.ComCepheidGenexpertUiUtil.SetText(rData.AnalyteName1)
	[ ] SelectAnalytes.AnalyteS.ClickCell( {1,3} )
	[ ] SelectAnalytes.AnalyteS.JavaxSwingJComboBox.Select( rData.Reporter1 )
	[ ] SelectAnalytes.Add.Click()
	[ ] SelectAnalytes.AnalyteS.ClickCell( {2,2} )
	[ ] SelectAnalytes.AnalyteS.ComCepheidGenexpertUiUtil.SetText(rData.AnalyteName2)
	[ ] SelectAnalytes.AnalyteS.ClickCell( {2,3} )
	[ ] SelectAnalytes.AnalyteS.JavaxSwingJComboBox.Select( rData.Reporter2 )
	[ ] SelectAnalytes.Add.Click()
	[ ] SelectAnalytes.AnalyteS.ClickCell( {3,2} )
	[ ] SelectAnalytes.AnalyteS.ComCepheidGenexpertUiUtil.SetText(rData.AnalyteName3)
	[ ] SelectAnalytes.AnalyteS.ClickCell( {3,3} )
	[ ] SelectAnalytes.AnalyteS.JavaxSwingJComboBox.Select( rData.Reporter3 )
	[ ] SelectAnalytes.Add.Click()
	[ ] SelectAnalytes.AnalyteS.ClickCell( {4,2} )
	[ ] SelectAnalytes.AnalyteS.ComCepheidGenexpertUiUtil.SetText(rData.AnalyteName4)
	[ ] SelectAnalytes.AnalyteS.ClickCell( {4,3} )
	[ ] SelectAnalytes.AnalyteS.JavaxSwingJComboBox.Select( rData.Reporter4 )
	[ ] SelectAnalytes.Add.Click()
	[ ] SelectAnalytes.AnalyteS.ClickCell( {5,2} )
	[ ] SelectAnalytes.AnalyteS.ComCepheidGenexpertUiUtil.SetText(rData.AnalyteName5)
	[ ] SelectAnalytes.AnalyteS.ClickCell( {5,3} )
	[ ] SelectAnalytes.AnalyteS.JavaxSwingJComboBox.Select( rData.Reporter5 )
	[ ] SelectAnalytes.Add.Click()
	[ ] SelectAnalytes.AnalyteS.ClickCell( {6,2} )
	[ ] SelectAnalytes.AnalyteS.ComCepheidGenexpertUiUtil.SetText(rData.AnalyteName6)
	[ ] SelectAnalytes.AnalyteS.ClickCell( {6,3} )
	[ ] SelectAnalytes.AnalyteS.JavaxSwingJComboBox.Select( rData.Reporter6 )
	[ ] SelectAnalytes.OK.Click()
	[ ] GeneXpert®DxSystem.SetActive( )
	[ ] 
[ ] //
[+] DefineThresholdFor1Analyte(REC_1_ANALYTE_ANS rData)
	[ ] //Define Threshold
	[ ] //
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {1,8} )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ComCepheidGenexpertUiUtil.SetText(Str(rData.Threshold1, NULL, 1))
[ ] //
[+] DefineThresholdFor2Analytes(REC_2_ANALYTES_ANS rData)
	[ ] //Define Threshold
	[ ] //
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {1,8} )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ComCepheidGenexpertUiUtil.SetText(Str(rData.Threshold1, NULL, 1))
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {2,8} )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ComCepheidGenexpertUiUtil.SetText(Str(rData.Threshold2, NULL, 1))
[ ] //
[+] DefineThresholdFor3Analytes(REC_3_ANALYTES_ANS rData)
	[ ] //Define Threshold
	[ ] //
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {1,8} )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ComCepheidGenexpertUiUtil.SetText(Str(rData.Threshold1, NULL, 1))
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {2,8} )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ComCepheidGenexpertUiUtil.SetText(Str(rData.Threshold2, NULL, 1))
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {3,8} )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ComCepheidGenexpertUiUtil.SetText(Str(rData.Threshold3, NULL, 1))
[ ] //
[+] DefineThresholdFor4Analytes(REC_4_ANALYTES_ANS rData)
	[ ] //Define Threshold
	[ ] //
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {1,8} )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ComCepheidGenexpertUiUtil.SetText(Str(rData.Threshold1, NULL, 1))
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {2,8} )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ComCepheidGenexpertUiUtil.SetText(Str(rData.Threshold2, NULL, 1))
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {3,8} )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ComCepheidGenexpertUiUtil.SetText(Str(rData.Threshold3, NULL, 1))
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {4,8} )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ComCepheidGenexpertUiUtil.SetText(Str(rData.Threshold4, NULL, 1))
[ ] 
[+] DefineThresholdFor6Analytes(REC_6_ANALYTES_ANS rData)
	[ ] //Define Threshold
	[ ] //
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {1,8} )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ComCepheidGenexpertUiUtil.SetText(Str(rData.Threshold1, NULL, 1))
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {2,8} )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ComCepheidGenexpertUiUtil.SetText(Str(rData.Threshold2, NULL, 1))
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {3,8} )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ComCepheidGenexpertUiUtil.SetText(Str(rData.Threshold3, NULL, 1))
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {4,8} )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ComCepheidGenexpertUiUtil.SetText(Str(rData.Threshold4, NULL, 1))
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {5,8} )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ComCepheidGenexpertUiUtil.SetText(Str(rData.Threshold5, NULL, 1))
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {6,8} )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ComCepheidGenexpertUiUtil.SetText(Str(rData.Threshold6, NULL, 1))
[ ] //
[ ] // Define Boxcar Average Cycle
[ ] //
[+] DefineBoxcarAvg1Analyte(REC_1_ANALYTE_ANS rData)
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {1,11} )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ComCepheidGenexpertUiUtil.SetText(Str(rData.Boxcar1))
[ ] //
[+] DefineBoxcarAvg2Analytes(REC_2_ANALYTES_ANS rData)
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {1,11} )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ComCepheidGenexpertUiUtil.SetText(Str(rData.Boxcar1))
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {2,11} )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ComCepheidGenexpertUiUtil.SetText(Str(rData.Boxcar2))
[ ] //
[+] DefineBoxcarAvg3Analytes(REC_3_ANALYTES_ANS rData)
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {1,11} )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ComCepheidGenexpertUiUtil.SetText(Str(rData.Boxcar1))
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {2,11} )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ComCepheidGenexpertUiUtil.SetText(Str(rData.Boxcar2))
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {3,11} )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ComCepheidGenexpertUiUtil.SetText(Str(rData.Boxcar3))
[ ] 
[+] DefineBoxcarAvg4Analytes(REC_4_ANALYTES_ANS rData)
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {1,11} )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ComCepheidGenexpertUiUtil.SetText(Str(rData.Boxcar1))
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {2,11} )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ComCepheidGenexpertUiUtil.SetText(Str(rData.Boxcar2))
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {3,11} )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ComCepheidGenexpertUiUtil.SetText(Str(rData.Boxcar3))
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {4,11} )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ComCepheidGenexpertUiUtil.SetText(Str(rData.Boxcar4))
[ ] //
[+] DefineBoxcarAvg6Analytes(REC_6_ANALYTES_ANS rData)
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {1,11} )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ComCepheidGenexpertUiUtil.SetText(Str(rData.Boxcar1))
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {2,11} )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ComCepheidGenexpertUiUtil.SetText(Str(rData.Boxcar2))
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {3,11} )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ComCepheidGenexpertUiUtil.SetText(Str(rData.Boxcar3))
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {4,11} )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ComCepheidGenexpertUiUtil.SetText(Str(rData.Boxcar4))
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {5,11} )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ComCepheidGenexpertUiUtil.SetText(Str(rData.Boxcar5))
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {6,11} )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ComCepheidGenexpertUiUtil.SetText(Str(rData.Boxcar6))
	[ ] //
[ ] //
[ ] //Define Curve Analysis
[ ] //
[-] DefineCurveAnalysis1Analyte(REC_1_ANALYTE_ANS rData)
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {1,9} )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.JavaxSwingJComboBox.Select(rData.CurveAnalysis1 )
[ ] //
[+] DefineCurveAnalysis2Analytes(REC_2_ANALYTES_ANS rData)
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {2,9} )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.JavaxSwingJComboBox.Select(rData.CurveAnalysis2 )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {1,9} )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.JavaxSwingJComboBox.Select(rData.CurveAnalysis1 )
[ ] //
[+] DefineCurveAnalysis3Analytes(REC_3_ANALYTES_ANS rData)
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {3,9} )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.JavaxSwingJComboBox.Select(rData.CurveAnalysis3 )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {2,9} )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.JavaxSwingJComboBox.Select(rData.CurveAnalysis2 )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {1,9} )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.JavaxSwingJComboBox.Select(rData.CurveAnalysis1 )
[ ] 
[+] DefineCurveAnalysis4Analytes(REC_4_ANALYTES_ANS rData)
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {4,9} )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.JavaxSwingJComboBox.Select(rData.CurveAnalysis4 )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {3,9} )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.JavaxSwingJComboBox.Select(rData.CurveAnalysis3 )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {2,9} )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.JavaxSwingJComboBox.Select(rData.CurveAnalysis2 )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {1,9} )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.JavaxSwingJComboBox.Select(rData.CurveAnalysis1 )
[ ] //
[+] DefineCurveAnalysis6Analytes(REC_6_ANALYTES_ANS rData)
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {6,9} )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.JavaxSwingJComboBox.Select(rData.CurveAnalysis6 )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {5,9} )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.JavaxSwingJComboBox.Select(rData.CurveAnalysis5 )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {4,9} )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.JavaxSwingJComboBox.Select(rData.CurveAnalysis4 )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {3,9} )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.JavaxSwingJComboBox.Select(rData.CurveAnalysis3 )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {2,9} )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.JavaxSwingJComboBox.Select(rData.CurveAnalysis2 )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.ClickCell( {1,9} )
	[ ] GeneXpert®DxSystem.AssayName2.UniversalAnalysisSettings.JavaxSwingJComboBox.Select(rData.CurveAnalysis1 )
	[ ] 
[ ] //
[ ] // Set Valid Min/Max Cycles
[ ] //
[+] SetValidMinMaxCycles1Analyte(REC_1_ANALYTE_ANS rData)
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {1,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(Str(rData.VMin1))
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {1,3} )
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(Str(rData.VMax1))
[ ] //
[+] SetValidMinMaxCycles2Analytes(REC_2_ANALYTES_ANS rData)
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {1,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(Str(rData.VMin1))
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {1,3} )
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(Str(rData.VMax1))
	[ ] //
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {2,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(Str(rData.VMin2))
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {2,3} )
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(Str(rData.VMax2))
[ ] //
[+] SetValidMinMaxCycles3Analytes(REC_3_ANALYTES_ANS rData)
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {1,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(Str(rData.VMin1))
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {1,3} )
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(Str(rData.VMax1))
	[ ] 
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {2,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(Str(rData.VMin2))
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {2,3} )
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(Str(rData.VMax2))
	[ ] 
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {3,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(Str(rData.VMin3))
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {3,3} )
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(Str(rData.VMax3))
[ ] //
[+] SetValidMinMaxCycles4Analytes(REC_4_ANALYTES_ANS rData)
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {1,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(Str(rData.VMin1))
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {1,3} )
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(Str(rData.VMax1))
	[ ] 
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {2,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(Str(rData.VMin2))
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {2,3} )
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(Str(rData.VMax2))
	[ ] 
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {3,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(Str(rData.VMin3))
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {3,3} )
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(Str(rData.VMax3))
	[ ] 
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {4,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(Str(rData.VMin4))
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {4,3} )
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(Str(rData.VMax4))
[ ] //
[+] SetValidMinMaxCycles6Analytes(REC_6_ANALYTES_ANS rData)
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {1,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(Str(rData.VMin1))
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {1,3} )
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(Str(rData.VMax1))
	[ ] 
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {2,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(Str(rData.VMin2))
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {2,3} )
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(Str(rData.VMax2))
	[ ] 
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {3,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(Str(rData.VMin3))
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {3,3} )
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(Str(rData.VMax3))
	[ ] 
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {4,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(Str(rData.VMin4))
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {4,3} )
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(Str(rData.VMax4))
	[ ] 
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {5,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(Str(rData.VMin5))
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {5,3} )
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(Str(rData.VMax5))
	[ ] 
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {6,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(Str(rData.VMin6))
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ClickCell( {6,3} )
	[ ] GeneXpert®DxSystem.AssayName2.ResultAnalysisSettings1.ComCepheidGenexpertUiUtil.SetText(Str(rData.VMax6))
[ ] //
[ ] //
[ ] // Define ANS-1 and ANS-2Protocol function define protocol with 2 stages
[ ] // Stage 1: 2-Temperature Cycle
[ ] // Stage 2: 3-Temperature Cycle
[+] DefineANS1_2Protocol (REC_ANS_1_2_PROTOCOL rData1)
	[ ] // Define stage 1
	[ ] // Stage 1: 2-Temperature Cycle
	[ ] Protocol2.SetActive( )
	[ ] Protocol2.Stage11.Select( "2-Temperature Cycle" )
	[ ] Protocol2.N1.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N1.SetText( Str(rData1.NumberCyclesInStage1) )
	[ ] Protocol2.Repeat2.ClickCell( {1,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp11))
	[ ] Protocol2.Repeat2.ClickCell( {1,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs11))
	[ ] Protocol2.Repeat2.ClickCell( {1,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics11)
	[ ] Protocol2.Repeat2.ClickCell( {2,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp12))
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str (rData1.Secs12))
	[ ] Protocol2.Repeat2.ClickCell( {2,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics12)
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] //
	[ ] // Define stage 2
	[ ] // Stage 2: 3-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "3-Temperature Cycle" )
	[ ] Protocol2.N2.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N2.SetText( Str(rData1.NumberCyclesInStage2) )
	[ ] Protocol2.Repeat22.ClickCell( {1,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp21))
	[ ] Protocol2.Repeat22.ClickCell( {1,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText(Str (rData1.Secs21))
	[ ] Protocol2.Repeat22.ClickCell( {1,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics21)
	[ ] Protocol2.Repeat22.ClickCell( {2,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp22))
	[ ] Protocol2.Repeat22.ClickCell( {2,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs22))
	[ ] Protocol2.Repeat22.ClickCell( {2,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics22)
	[ ] Protocol2.Repeat22.ClickCell( {3,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp23))
	[ ] Protocol2.Repeat22.ClickCell( {3,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs23))
	[ ] Protocol2.Repeat22.ClickCell( {3,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics23)
	[ ] Protocol2.OK.Click()
	[ ] 
[ ] //
[ ] //
[ ] // DefineANS-MELT Protocol function define protocol with 3 stages
[ ] // Stage 1: Probe Check
[ ] // Stage 2: 3-Temperature Cycle
[ ] // Stage 3: Melt
[+] DefineANS_Melt_Protocol(REC_ANS_MELT_PROTOCOL rData1)
	[ ] // Define stage 1
	[ ] //Stage 1: Probe Check with default settings
	[ ] Protocol2.SetActive( )
	[ ] Protocol2.Stage11.Select( "Probe Check" )
	[ ] //
	[ ] // Define stage 2
	[ ] // Stage2: 3-Temperature Cycle
	[ ] Protocol2.Stage21.Select( "3-Temperature Cycle" )
	[ ] Protocol2.N2.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N2.SetText(Str(rData1.NumberCyclesInStage2) )
	[ ] Protocol2.Repeat2.ClickCell( {1,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp21))
	[ ] Protocol2.Repeat2.ClickCell( {1,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs21))
	[ ] Protocol2.Repeat2.ClickCell( {1,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics21)
	[ ] Protocol2.Repeat2.ClickCell( {2,1} )
	[ ] //
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp22))
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs22))
	[ ] Protocol2.Repeat2.ClickCell( {2,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics22)
	[ ] //
	[ ] Protocol2.Repeat2.ClickCell( {3,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp23))
	[ ] Protocol2.Repeat2.ClickCell( {3,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs23))
	[ ] Protocol2.Repeat2.ClickCell( {3,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics23)
	[ ] Protocol2.Repeat2.ClickCell( {3,2} )
	[ ] //
	[ ] // Define stage 3
	[ ] // Stage3: MELT
	[ ] Protocol2.Stage21.Select( "Melt Curve" )
	[ ] Protocol2.Stage22.ClickCell( {1,1} )
	[ ] Protocol2.Stage22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.StartTemp))
	[ ] Protocol2.Stage22.ClickCell( {1,2} )
	[ ] Protocol2.Stage22.ComCepheidGenexpertUiUtil.SetText(Str (rData1.EndTemp))
	[ ] Protocol2.Stage22.ClickCell( {1,3} )
	[ ] Protocol2.Stage22.ComCepheidGenexpertUiUtil.SetText(rData1.CSec)
	[ ] //
	[ ]  Protocol2.OK.Click()
	[ ] 
[ ] //
[ ] //
[ ] // DefineANS-HOLD Protocol function define protocol with 3 stages
[ ] // Stage 1: 2-Temperature Cycle
[ ] //Stage 2: Hold
[ ] // Stage 3: 3-Temperature Cycle
[+] DefineANS_Hold_Protocol(REC_ANS_HOLD_PROTOCOL rData1)
	[ ] // Define stage 1
	[ ] //
	[ ] Protocol2.SetActive( )
	[ ] Protocol2.Stage11.Select( "2-Temperature Cycle" )
	[ ] Protocol2.N1.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N1.SetText( Str(rData1.NumberCyclesInStage1) )
	[ ] Protocol2.Repeat2.ClickCell( {1,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp11))
	[ ] Protocol2.Repeat2.ClickCell( {1,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs11))
	[ ] Protocol2.Repeat2.ClickCell( {1,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics11)
	[ ] Protocol2.Repeat2.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat2.ClickCell( {2,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp12))
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs12))
	[ ] Protocol2.Repeat2.ClickCell( {2,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics12)
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] //
	[ ] // Define stage 2
	[ ] // Stage 2: Hold
	[ ] Protocol2.SetActive( )
	[ ] Protocol2.Stage11.Select( "Hold" )
	[ ] Protocol2.Stage12.ClickCell( {1,1} )
	[ ] Protocol2.Stage12.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp21))
	[ ] Protocol2.Stage12.ClickCell( {1,2} )
	[ ] Protocol2.Stage12.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs21))
	[ ] //
	[ ] //Define Stage 3
	[ ] // Stage 3: 3-Temperature Cycle
	[ ] Protocol2.Stage21.Select( "3-Temperature Cycle" )
	[ ] Protocol2.N3.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N3.SetText( Str(rData1.NumberCyclesInStage3) )
	[ ] Protocol2.Repeat22.ClickCell( {1,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp31))
	[ ] Protocol2.Repeat22.ClickCell( {1,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs31))
	[ ] Protocol2.Repeat22.ClickCell( {1,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics31)
	[ ] Protocol2.Repeat22.ClickCell( {2,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp32))
	[ ] Protocol2.Repeat22.ClickCell( {2,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs32))
	[ ] Protocol2.Repeat22.ClickCell( {2,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics32)
	[ ] Protocol2.Repeat22.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat22.ClickCell( {3,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp33))
	[ ] Protocol2.Repeat22.ClickCell( {3,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Secs33))
	[ ] Protocol2.Repeat22.ClickCell( {3,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics33)
	[ ] Protocol2.Repeat22.ClickCell( {3,2} )
	[ ] Protocol2.OK.Click()
	[ ] 
[ ] //
[ ] //
[ ] // DefineANS-END Protocol function define protocol with 3 stages
[ ] // Stage 1: Probe Check
[ ] //Stage 2: 3-Temperature Cycle
[ ] // Stage 3: End
[ ] // Stage 4: 3-Temperature Cycle
[+] DefineANS_End_Protocol(REC_ANS_END_PROTOCOL rData1)
	[ ] // Define stage 1
	[ ] //Stage 1: Probe Check with default settings
	[ ] Protocol2.SetActive( )
	[ ] Protocol2.Stage11.Select( "Probe Check" )
	[ ] //
	[ ] // Define stage 2
	[ ] // Stage2: 3-Temperature Cycle
	[ ] Protocol2.Stage21.Select( "3-Temperature Cycle" )
	[ ] Protocol2.N2.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N2.SetText(Str(rData1.NumberCyclesInStage2) )
	[ ] Protocol2.Repeat2.ClickCell( {1,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp21))
	[ ] Protocol2.Repeat2.ClickCell( {1,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs21))
	[ ] Protocol2.Repeat2.ClickCell( {1,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics21)
	[ ] Protocol2.Repeat2.ClickCell( {2,1} )
	[ ] //
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp22))
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs22))
	[ ] Protocol2.Repeat2.ClickCell( {2,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics22)
	[ ] Protocol2.Repeat2.ClickCell( {3,1} )
	[ ] //
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp23))
	[ ] Protocol2.Repeat2.ClickCell( {3,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs23))
	[ ] Protocol2.Repeat2.ClickCell( {3,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics23)
	[ ] Protocol2.Repeat2.ClickCell( {3,2} )
	[ ] //
	[ ] // Define stage 3
	[ ] // Stage3: END
	[ ] Protocol2.Stage21.Select( "End" )
	[ ] //
	[ ] // Define stage 4
	[ ] // Stage4: 3-Temperature Cycle
	[ ] Protocol2.Stage31.Select( "3-Temperature Cycle" )
	[ ] Protocol2.N4.SetPosition( 1, 2 )
	[ ] Protocol2.N4.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N4.SetText(Str(rData1.NumberCyclesInStage4))
	[ ] Protocol2.Repeat22.ClickCell( {1,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp41))
	[ ] Protocol2.Repeat22.ClickCell( {1,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs41))
	[ ] Protocol2.Repeat22.ClickCell( {1,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics41)
	[ ] Protocol2.Repeat22.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat22.ClickCell( {2,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp42))
	[ ] Protocol2.Repeat22.ClickCell( {2,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs42))
	[ ] Protocol2.Repeat22.ClickCell( {2,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics42)
	[ ] Protocol2.Repeat22.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat22.ClickCell( {3,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp43))
	[ ] Protocol2.Repeat22.ClickCell( {3,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs43))
	[ ] Protocol2.Repeat22.ClickCell( {3,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select (rData1.Optics43)
	[ ] Protocol2.Repeat22.ClickCell( {3,2} )
	[ ] 
	[ ]  Protocol2.OK.Click()
	[ ] 
[ ] //
[ ] //
[ ] // DefineANS-3 Protocol function define protocol with 3 stages
[ ] // Stage 1: 2-Temperature Cycle
[ ] //Stage 2: 3-Temperature Cycle
[ ] // Stage 3: 5-Temperature Cycle
[ ] // Stage 4: 4-Temperature Cycle
[+] DefineANS_3_Protocol(REC_ANS_3_PROTOCOL rData1)
	[ ] // Define stage 1
	[ ] //Stage 1: 2-Temperature Cycle
	[ ] Protocol2.SetActive( )
	[ ] Protocol2.Stage11.Select( "2-Temperature Cycle" )
	[ ] Protocol2.N1.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N1.SetText( Str(rData1.NumberCyclesInStage1) )
	[ ] Protocol2.Repeat2.ClickCell( {1,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp11))
	[ ] Protocol2.Repeat2.ClickCell( {1,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs11))
	[ ] Protocol2.Repeat2.ClickCell( {1,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics11)
	[ ] Protocol2.Repeat2.ClickCell( {2,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp12))
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str (rData1.Secs12))
	[ ] Protocol2.Repeat2.ClickCell( {2,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics12)
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] //
	[ ] // Define stage 2
	[ ] // Stage2: 3-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "3-Temperature Cycle" )
	[ ] Protocol2.N2.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N2.SetText(Str(rData1.NumberCyclesInStage2) )
	[ ] Protocol2.Repeat22.ClickCell( {1,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp21))
	[ ] Protocol2.Repeat22.ClickCell( {1,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs21))
	[ ] Protocol2.Repeat22.ClickCell( {1,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics21)
	[ ] Protocol2.Repeat22.ClickCell( {2,1} )
	[ ] //
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp22))
	[ ] Protocol2.Repeat22.ClickCell( {2,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs22))
	[ ] Protocol2.Repeat22.ClickCell( {2,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics22)
	[ ] //
	[ ] Protocol2.Repeat22.ClickCell( {3,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp23))
	[ ] Protocol2.Repeat22.ClickCell( {3,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs23))
	[ ] Protocol2.Repeat22.ClickCell( {3,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics23)
	[ ] Protocol2.Repeat22.ClickCell( {3,2} )
	[ ] //
	[ ] // Define stage 3
	[ ] // Stage3: 5-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "5-Temperature Cycle" )
	[ ] Protocol2.N3.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N3.SetText(Str( rData1.NumberCyclesInStage3))
	[ ] Protocol2.Repeat33.ClickCell( {1,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp31))
	[ ] Protocol2.Repeat33.ClickCell( {1,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs31))
	[ ] Protocol2.Repeat33.ClickCell( {1,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics31)
	[ ] Protocol2.Repeat33.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {2,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp32))
	[ ] Protocol2.Repeat33.ClickCell( {2,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs32))
	[ ] Protocol2.Repeat33.ClickCell( {2,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics32)
	[ ] Protocol2.Repeat33.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {3,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp33))
	[ ] Protocol2.Repeat33.ClickCell( {3,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs33))
	[ ] Protocol2.Repeat33.ClickCell( {3,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics33)
	[ ] Protocol2.Repeat33.ClickCell( {3,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {4,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp34))
	[ ] Protocol2.Repeat33.ClickCell( {4,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs34))
	[ ] Protocol2.Repeat33.ClickCell( {4,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics34)
	[ ] Protocol2.Repeat33.ClickCell( {4,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {5,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp35))
	[ ] Protocol2.Repeat33.ClickCell( {5,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs35))
	[ ] Protocol2.Repeat33.ClickCell( {5,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics35)
	[ ] Protocol2.Repeat33.ClickCell( {5,2} )
	[ ] //
	[ ] // Define stage 4
	[ ] // Stage4: 4-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "4-Temperature Cycle" )
	[ ] Protocol2.N4.SetPosition( 1, 2 )
	[ ] Protocol2.N4.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N4.SetText(Str(rData1.NumberCyclesInStage4))
	[ ] Protocol2.Repeat42.ClickCell( {1,1} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp41))
	[ ] Protocol2.Repeat42.ClickCell( {1,2} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs41))
	[ ] Protocol2.Repeat42.ClickCell( {1,3} )
	[ ] Protocol2.Repeat42.JavaxSwingJComboBox.Select (rData1.Optics41)
	[ ] Protocol2.Repeat42.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat42.ClickCell( {2,1} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp42))
	[ ] Protocol2.Repeat42.ClickCell( {2,2} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs42))
	[ ] Protocol2.Repeat42.ClickCell( {2,3} )
	[ ] Protocol2.Repeat42.JavaxSwingJComboBox.Select (rData1.Optics42)
	[ ] Protocol2.Repeat42.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat42.ClickCell( {3,1} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp43))
	[ ] Protocol2.Repeat42.ClickCell( {3,2} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs43))
	[ ] Protocol2.Repeat42.ClickCell( {3,3} )
	[ ] Protocol2.Repeat42.JavaxSwingJComboBox.Select(rData1.Optics43)
	[ ] Protocol2.Repeat42.ClickCell( {3,2} )
	[ ] //
	[ ] Protocol2.Repeat42.ClickCell( {4,1} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp44))
	[ ] Protocol2.Repeat42.ClickCell( {4,2} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs44))
	[ ] Protocol2.Repeat42.ClickCell( {4,3} )
	[ ] Protocol2.Repeat42.JavaxSwingJComboBox.Select (rData1.Optics44)
	[ ] Protocol2.Repeat42.ClickCell( {4,2} )
	[ ] 
	[ ]  Protocol2.OK.Click()
	[ ] 
[ ] //
[ ] //
[ ] // DefineANS-3a Protocol function define protocol with 3 stages
[ ] // Stage 1: 2-Temperature Cycle
[ ] //Stage 2: 5-Temperature Cycle
[ ] // Stage 3: 3-Temperature Cycle
[+] DefineANS_3a_Protocol(REC_ANS_3a_PROTOCOL rData1)
	[ ] // Define stage 1
	[ ] //Stage 1: 2-Temperature Cycle
	[ ] Protocol2.SetActive( )
	[ ] Protocol2.Stage11.Select( "2-Temperature Cycle" )
	[ ] Protocol2.N1.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N1.SetText( Str(rData1.NumberCyclesInStage1) )
	[ ] Protocol2.Repeat2.ClickCell( {1,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp11))
	[ ] Protocol2.Repeat2.ClickCell( {1,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs11))
	[ ] Protocol2.Repeat2.ClickCell( {1,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics11)
	[ ] Protocol2.Repeat2.ClickCell( {2,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp12))
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str (rData1.Secs12))
	[ ] Protocol2.Repeat2.ClickCell( {2,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics12)
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] //
	[ ] // Define stage 2
	[ ] // Stage2: 5-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "5-Temperature Cycle" )
	[ ] Protocol2.N2.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N2.SetText(Str(rData1.NumberCyclesInStage2) )
	[ ] Protocol2.Repeat22.ClickCell( {1,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp21))
	[ ] Protocol2.Repeat22.ClickCell( {1,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs21))
	[ ] Protocol2.Repeat22.ClickCell( {1,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics21)
	[ ] //
	[ ] Protocol2.Repeat22.ClickCell( {2,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp22))
	[ ] Protocol2.Repeat22.ClickCell( {2,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs22))
	[ ] Protocol2.Repeat22.ClickCell( {2,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics22)
	[ ] Protocol2.Repeat22.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat22.ClickCell( {3,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp23))
	[ ] Protocol2.Repeat22.ClickCell( {3,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs23))
	[ ] Protocol2.Repeat22.ClickCell( {3,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics23)
	[ ] Protocol2.Repeat22.ClickCell( {3,2} )
	[ ] //
	[ ] Protocol2.Repeat22.ClickCell( {4,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp24))
	[ ] Protocol2.Repeat22.ClickCell( {4,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs24))
	[ ] Protocol2.Repeat22.ClickCell( {4,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics24)
	[ ] Protocol2.Repeat22.ClickCell( {4,2} )
	[ ] //
	[ ] Protocol2.Repeat22.ClickCell( {5,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp25))
	[ ] Protocol2.Repeat22.ClickCell( {5,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs25))
	[ ] Protocol2.Repeat22.ClickCell( {5,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics25)
	[ ] Protocol2.Repeat22.ClickCell( {5,2} )
	[ ] //
	[ ] // Define stage 3
	[ ] // Stage3: 3-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "3-Temperature Cycle" )
	[ ] Protocol2.N3.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N3.SetText(Str( rData1.NumberCyclesInStage3))
	[ ] Protocol2.Repeat33.ClickCell( {1,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp31))
	[ ] Protocol2.Repeat33.ClickCell( {1,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs31))
	[ ] Protocol2.Repeat33.ClickCell( {1,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics31)
	[ ] Protocol2.Repeat33.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {2,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp32))
	[ ] Protocol2.Repeat33.ClickCell( {2,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs32))
	[ ] Protocol2.Repeat33.ClickCell( {2,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select(rData1.Optics32)
	[ ] Protocol2.Repeat33.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {3,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp33))
	[ ] Protocol2.Repeat33.ClickCell( {3,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs33))
	[ ] Protocol2.Repeat33.ClickCell( {3,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics33)
	[ ] Protocol2.Repeat33.ClickCell( {3,2} )
	[ ] //
	[ ]  Protocol2.OK.Click()
	[ ] 
[ ] //
[ ] //
[ ] // DefineANS-4 Protocol function define protocol with 4 stages
[ ] // Stage1: 2-Temperature Cycle
[ ] //Stage2: 3-Temperature Cycle
[ ] // Stage3: Hold
[ ] // Stage4: 5-Temperature Cycle
[+] DefineANS_4_Protocol(REC_ANS_4_PROTOCOL rData1)
	[ ] // Define stage 1
	[ ] //Stage 1: 2-Temperature Cycle
	[ ] Protocol2.SetActive( )
	[ ] Protocol2.Stage11.Select( "2-Temperature Cycle" )
	[ ] Protocol2.N1.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N1.SetText( Str(rData1.NumberCyclesInStage1) )
	[ ] Protocol2.Repeat2.ClickCell( {1,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp11))
	[ ] Protocol2.Repeat2.ClickCell( {1,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs11))
	[ ] Protocol2.Repeat2.ClickCell( {1,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics11)
	[ ] Protocol2.Repeat2.ClickCell( {2,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp12))
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str (rData1.Secs12))
	[ ] Protocol2.Repeat2.ClickCell( {2,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics12)
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] //
	[ ] // Define stage 2
	[ ] // Stage2: 3-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "3-Temperature Cycle" )
	[ ] Protocol2.N2.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N2.SetText(Str(rData1.NumberCyclesInStage2) )
	[ ] Protocol2.Repeat22.ClickCell( {1,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp21))
	[ ] Protocol2.Repeat22.ClickCell( {1,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs21))
	[ ] Protocol2.Repeat22.ClickCell( {1,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics21)
	[ ] Protocol2.Repeat22.ClickCell( {2,1} )
	[ ] //
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp22))
	[ ] Protocol2.Repeat22.ClickCell( {2,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs22))
	[ ] Protocol2.Repeat22.ClickCell( {2,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics22)
	[ ] //
	[ ] Protocol2.Repeat22.ClickCell( {3,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp23))
	[ ] Protocol2.Repeat22.ClickCell( {3,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs23))
	[ ] Protocol2.Repeat22.ClickCell( {3,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics23)
	[ ] Protocol2.Repeat22.ClickCell( {3,2} )
	[ ] //
	[ ] // // Define stage 3
	[ ] // // Stage3: HOLD
	[ ] Protocol2.Stage11.Select( "Hold" )
	[ ] Protocol2.Stage12.ClickCell( {1,1} )
	[ ] Protocol2.Stage12.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp31))
	[ ] Protocol2.Stage12.ClickCell( {1,2} )
	[ ] Protocol2.Stage12.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs31))
	[ ] //
	[ ] // Define stage 4
	[ ] // Stage4: 5-Temperature Cycle
	[ ] Protocol2.Stage21.Select( "5-Temperature Cycle" )
	[ ] 
	[ ] //Protocol2.Repeat31.Select( "5-Temperature Cycle" )
	[ ] Protocol2.N4.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N4.SetText( Str(rData1.NumberCyclesInStage4))
	[ ] Protocol2.Repeat33.ClickCell( {1,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp41))
	[ ] Protocol2.Repeat33.ClickCell( {1,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs41))
	[ ] Protocol2.Repeat33.ClickCell( {1,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics41)
	[ ] Protocol2.Repeat33.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {2,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp42))
	[ ] Protocol2.Repeat33.ClickCell( {2,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs42))
	[ ] Protocol2.Repeat33.ClickCell( {2,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select(rData1.Optics42)
	[ ] print(rData1.Optics42)
	[ ] Protocol2.Repeat33.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {3,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp43))
	[ ] Protocol2.Repeat33.ClickCell( {3,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs43))
	[ ] Protocol2.Repeat33.ClickCell( {3,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select(rData1.Optics43)
	[ ] Protocol2.Repeat33.ClickCell( {3,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {4,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp44))
	[ ] Protocol2.Repeat33.ClickCell( {4,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs44))
	[ ] Protocol2.Repeat33.ClickCell( {4,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select(rData1.Optics44)
	[ ] Protocol2.Repeat33.ClickCell( {4,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {5,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp45))
	[ ] Protocol2.Repeat33.ClickCell( {5,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs45))
	[ ] Protocol2.Repeat33.ClickCell( {5,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select(rData1.Optics45)
	[ ] Protocol2.Repeat33.ClickCell( {5,2} )
	[ ]   Protocol2.OK.Click()
[ ] //
[ ] //
[ ] // DefineANS-5 Protocol function define protocol with 4 stages
[ ] // Stage1: 2-Temperature Cycle
[ ] //Stage2:3-Temperature Cycle
[ ] // Stage3: Hold
[ ] // Stage4: Melt
[+] DefineANS_5_Protocol(REC_ANS_5_PROTOCOL rData1)
	[ ] // Define stage 1
	[ ] //Stage 1: 2-Temperature Cycle
	[ ] Protocol2.SetActive( )
	[ ] Protocol2.Stage11.Select( "2-Temperature Cycle" )
	[ ] Protocol2.N1.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N1.SetText( Str(rData1.NumberCyclesInStage1) )
	[ ] Protocol2.Repeat2.ClickCell( {1,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp11))
	[ ] Protocol2.Repeat2.ClickCell( {1,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs11))
	[ ] Protocol2.Repeat2.ClickCell( {1,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics11)
	[ ] Protocol2.Repeat2.ClickCell( {2,1} )
	[ ] //
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp12))
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str (rData1.Secs12))
	[ ] Protocol2.Repeat2.ClickCell( {2,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics12)
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] //
	[ ] // Define stage 2
	[ ] // Stage2: 3-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "3-Temperature Cycle" )
	[ ] Protocol2.N2.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N2.SetText(Str(rData1.NumberCyclesInStage2) )
	[ ] Protocol2.Repeat22.ClickCell( {1,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp21))
	[ ] Protocol2.Repeat22.ClickCell( {1,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs21))
	[ ] Protocol2.Repeat22.ClickCell( {1,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics21)
	[ ] Protocol2.Repeat22.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat22.ClickCell( {2,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp22))
	[ ] Protocol2.Repeat22.ClickCell( {2,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs22))
	[ ] Protocol2.Repeat22.ClickCell( {2,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics22)
	[ ] Protocol2.Repeat22.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat22.ClickCell( {3,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp23))
	[ ] Protocol2.Repeat22.ClickCell( {3,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs23))
	[ ] Protocol2.Repeat22.ClickCell( {3,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics23)
	[ ] Protocol2.Repeat22.ClickCell( {3,2} )
	[ ] //
	[ ] // Define stage 3
	[ ] // Stage3: END
	[ ] Protocol2.Stage11.Select( "End" )
	[ ] //
	[ ] // Define stage 4
	[ ] // Stage4: MELT
	[ ] Protocol2.Stage21.Select( "Melt Curve" )
	[ ] Protocol2.Stage22.ClickCell( {1,1} )
	[ ] Protocol2.Stage22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.StartTemp))
	[ ] Protocol2.Stage22.ClickCell( {1,2} )
	[ ] Protocol2.Stage22.ComCepheidGenexpertUiUtil.SetText(Str (rData1.EndTemp))
	[ ] Protocol2.Stage22.ClickCell( {1,3} )
	[ ] Protocol2.Stage22.ComCepheidGenexpertUiUtil.SetText(rData1.CSec)
	[ ] 
	[ ]  Protocol2.OK.Click()
	[ ] 
	[ ] 
[ ] //
[ ] //
[ ] // DefineANS-6 Protocol function define protocol with 5 stages
[ ] // Stage1: 2-Temperature Cycle
[ ] //Stage2: 3-Temperature Cycle
[ ] // Stage3: 5-Temperature Cycle
[ ] // Stage4: End
[ ] // Stage4: 3-Temperature Cycle
[+] DefineANS_6_Protocol(REC_ANS_6_PROTOCOL rData1)
	[ ] // Define stage 1
	[ ] //Stage 1: 2-Temperature Cycle
	[ ] Protocol2.SetActive( )
	[ ] Protocol2.Stage11.Select( "2-Temperature Cycle" )
	[ ] Protocol2.N1.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N1.SetText( Str(rData1.NumberCyclesInStage1) )
	[ ] Protocol2.Repeat2.ClickCell( {1,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp11))
	[ ] Protocol2.Repeat2.ClickCell( {1,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs11))
	[ ] Protocol2.Repeat2.ClickCell( {1,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics11)
	[ ] Protocol2.Repeat2.ClickCell( {2,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp12))
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str (rData1.Secs12))
	[ ] Protocol2.Repeat2.ClickCell( {2,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics12)
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] //
	[ ] // Define stage 2
	[ ] // Stage2: 3-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "3-Temperature Cycle" )
	[ ] Protocol2.N2.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N2.SetText(Str(rData1.NumberCyclesInStage2) )
	[ ] Protocol2.Repeat22.ClickCell( {1,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp21))
	[ ] Protocol2.Repeat22.ClickCell( {1,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs21))
	[ ] Protocol2.Repeat22.ClickCell( {1,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics21)
	[ ] Protocol2.Repeat22.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat22.ClickCell( {2,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp22))
	[ ] Protocol2.Repeat22.ClickCell( {2,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs22))
	[ ] Protocol2.Repeat22.ClickCell( {2,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics22)
	[ ] Protocol2.Repeat22.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat22.ClickCell( {3,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp23))
	[ ] Protocol2.Repeat22.ClickCell( {3,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs23))
	[ ] Protocol2.Repeat22.ClickCell( {3,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics23)
	[ ] Protocol2.Repeat22.ClickCell( {3,2} )
	[ ] //
	[ ] // Define stage 3
	[ ] // Stage3: 5-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "5-Temperature Cycle" )
	[ ] Protocol2.N3.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N3.SetText(Str( rData1.NumberCyclesInStage3))
	[ ] Protocol2.Repeat33.ClickCell( {1,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp31))
	[ ] Protocol2.Repeat33.ClickCell( {1,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs31))
	[ ] Protocol2.Repeat33.ClickCell( {1,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select(rData1.Optics31)
	[ ] Protocol2.Repeat33.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {2,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp32))
	[ ] Protocol2.Repeat33.ClickCell( {2,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs32))
	[ ] Protocol2.Repeat33.ClickCell( {2,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select(rData1.Optics32)
	[ ] Protocol2.Repeat33.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {3,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp33))
	[ ] Protocol2.Repeat33.ClickCell( {3,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs33))
	[ ] Protocol2.Repeat33.ClickCell( {3,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select(rData1.Optics33)
	[ ] Protocol2.Repeat33.ClickCell( {3,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {4,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp34))
	[ ] Protocol2.Repeat33.ClickCell( {4,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs34))
	[ ] Protocol2.Repeat33.ClickCell({4,3})
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select(rData1.Optics34)
	[ ] print(rData1.Optics34)
	[ ] Protocol2.Repeat33.ClickCell( {4,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {5,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp35))
	[ ] Protocol2.Repeat33.ClickCell( {5,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs35))
	[ ] Protocol2.Repeat33.ClickCell( {5,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics35)
	[ ] Protocol2.Repeat33.ClickCell( {5,2} )
	[ ] //
	[ ] // Define stage 4
	[ ] // Stage4: End
	[ ] Protocol2.Stage11.Select( "End" )
	[ ] //
	[ ] Protocol2.Repeat3.SetPosition( 209 )
	[ ] Protocol2.Repeat3.Click ()
	[ ] // Define Stage 5
	[ ] // Stage5: 3-Temperature Cycle
	[ ] Protocol2.Stage21.Select( "3-Temperature Cycle" )
	[ ] Protocol2.N5.SetPosition( 1, 2 )
	[ ] Protocol2.N5.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N5.SetText(Str(rData1.NumberCyclesInStage5))
	[ ] Protocol2.Repeat42.ClickCell( {1,1} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp51))
	[ ] Protocol2.Repeat42.ClickCell( {1,2} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs51))
	[ ] Protocol2.Repeat42.ClickCell( {1,3} )
	[ ] Protocol2.Repeat42.JavaxSwingJComboBox.Select(rData1.Optics51)
	[ ] Protocol2.Repeat42.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat42.ClickCell( {2,1} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp52))
	[ ] Protocol2.Repeat42.ClickCell( {2,2} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs52))
	[ ] Protocol2.Repeat42.ClickCell( {2,3} )
	[ ] Protocol2.Repeat42.JavaxSwingJComboBox.Select(rData1.Optics52)
	[ ] Protocol2.Repeat42.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat42.ClickCell( {3,1} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp53))
	[ ] Protocol2.Repeat42.ClickCell( {3,2} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs53))
	[ ] Protocol2.Repeat42.ClickCell( {3,3} )
	[ ] Protocol2.Repeat42.JavaxSwingJComboBox.Select(rData1.Optics53)
	[ ] Protocol2.Repeat42.ClickCell( {3,2} )
	[ ] // 
	[ ] Protocol2.OK.Click()
[ ] //
[ ] //
[ ] // DefineANS-7 Protocol function define protocol with 6 stages
[ ] // Stage1: 2-Temperature Cycle
[ ] //Stage2: End
[ ] // Stage3: 5-Temperature Cycle
[ ] // Stage4: 3-Temperature Cycle
[ ] // Stage4:3-Melt
[+] DefineANS_7_Protocol(REC_ANS_7_PROTOCOL rData1)
	[ ] // Define stage 1
	[ ] //Stage 1: 2-Temperature Cycle
	[ ] Protocol2.SetActive( )
	[ ] Protocol2.Stage11.Select( "2-Temperature Cycle" )
	[ ] Protocol2.N1.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N1.SetText( Str(rData1.NumberCyclesInStage1) )
	[ ] Protocol2.Repeat2.ClickCell( {1,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp11))
	[ ] Protocol2.Repeat2.ClickCell( {1,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs11))
	[ ] Protocol2.Repeat2.ClickCell( {1,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics11)
	[ ] Protocol2.Repeat2.ClickCell( {2,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp12))
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str (rData1.Secs12))
	[ ] Protocol2.Repeat2.ClickCell( {2,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics12)
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] //
	[ ] // Define stage 2
	[ ] // Stage2: End
	[ ] Protocol2.Stage11.Select( "End" )
	[ ] //
	[ ] // Stage3: 5-Temperature Cycle
	[ ] Protocol2.Stage21.Select( "5-Temperature Cycle" )
	[ ] Protocol2.N3.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N3.SetText(Str(rData1.NumberCyclesInStage3) )
	[ ] Protocol2.Repeat22.ClickCell( {1,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp31))
	[ ] Protocol2.Repeat22.ClickCell( {1,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs31))
	[ ] Protocol2.Repeat22.ClickCell( {1,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics31)
	[ ] Protocol2.Repeat22.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat22.ClickCell( {2,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp32))
	[ ] Protocol2.Repeat22.ClickCell( {2,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs32))
	[ ] Protocol2.Repeat22.ClickCell( {2,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics32)
	[ ] Protocol2.Repeat22.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat22.ClickCell( {3,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp33))
	[ ] Protocol2.Repeat22.ClickCell( {3,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs33))
	[ ] Protocol2.Repeat22.ClickCell( {3,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics33)
	[ ] Protocol2.Repeat22.ClickCell( {3,2} )
	[ ] //
	[ ] Protocol2.Repeat22.ClickCell( {4,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp34))
	[ ] Protocol2.Repeat22.ClickCell( {4,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs34))
	[ ] Protocol2.Repeat22.ClickCell( {4,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics34)
	[ ] Protocol2.Repeat22.ClickCell( {4,2} )
	[ ] //
	[ ] Protocol2.Repeat22.ClickCell( {5,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp35))
	[ ] Protocol2.Repeat22.ClickCell( {5,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs35))
	[ ] Protocol2.Repeat22.ClickCell( {5,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics35)
	[ ] Protocol2.Repeat22.ClickCell( {5,2} )
	[ ] //
	[ ] // Define stage 4
	[ ] // Stage4: 3-Temperature Cycle
	[ ] Protocol2.Stage21.Select( "3-Temperature Cycle" )
	[ ] Protocol2.N4.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N4.SetText(Str( rData1.NumberCyclesInStage4))
	[ ] Protocol2.Repeat33.ClickCell( {1,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp41))
	[ ] Protocol2.Repeat33.ClickCell( {1,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs41))
	[ ] Protocol2.Repeat33.ClickCell( {1,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select(rData1.Optics41)
	[ ] Protocol2.Repeat33.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {2,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp42))
	[ ] Protocol2.Repeat33.ClickCell( {2,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs42))
	[ ] Protocol2.Repeat33.ClickCell( {2,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics42)
	[ ] Protocol2.Repeat33.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {3,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp43))
	[ ] Protocol2.Repeat33.ClickCell( {3,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs43))
	[ ] Protocol2.Repeat33.ClickCell( {3,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics43)
	[ ] Protocol2.Repeat33.ClickCell( {3,2} )
	[ ] //
	[ ] //
	[ ] Protocol2.Repeat3.SetPosition( 506 )
	[ ] //Protocol2.Repeat3.SetPosition(198)
	[ ] // Define stage 5
	[ ] // Stage5: Melt
	[ ] Protocol2.Stage21.Select( "Melt Curve" )
	[ ] //Protocol2.Stage3.ClickCell( {1,1} )
	[ ] //Protocol2.Stage3.Zz.SetText ("abc")
	[ ] // Protocol2.Stage22.ClickCell( {1,1} )
	[ ] // Protocol2.Stage22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.StartTemp))
	[ ] // Protocol2.Stage22.ClickCell( {1,2} )
	[ ] // Protocol2.Stage22.ComCepheidGenexpertUiUtil.SetText(Str (rData1.EndTemp))
	[ ] // Protocol2.Stage22.ClickCell( {1,3} )
	[ ] // Protocol2.Stage22.ComCepheidGenexpertUiUtil.SetText(rData1.CSec)
	[ ] // 
	[ ] Protocol2.OK.Click()
	[ ] //
	[ ] 
[ ] //
[ ] //
[ ] // DefineANS-9 Protocol function define protocol with 6 stages
[ ] // Stage1: 4-Temperature Cycle
[ ] //Stage2: 2-Temperature Cycle
[ ] // Stage3: 5-Temperature Cycle
[ ] // Stage4: 3-Temperature Cycle
[ ] // Stage5: 2-Temperature Cycle
[ ] // Stage6: 2-Temperature Cycle
[+] DefineANS_9_Protocol(REC_ANS_9_PROTOCOL rData1)
	[ ] // Define stage 1
	[ ] //Stage 1: 4-Temperature Cycle
	[ ] Protocol2.SetActive( )
	[ ] Protocol2.Stage11.Select( "4-Temperature Cycle" )
	[ ] Protocol2.N1.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N1.SetText( Str(rData1.NumberCyclesInStage1) )
	[ ] Protocol2.Repeat2.ClickCell( {1,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp11))
	[ ] Protocol2.Repeat2.ClickCell( {1,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs11))
	[ ] Protocol2.Repeat2.ClickCell( {1,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics11)
	[ ] Protocol2.Repeat2.ClickCell( {2,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp12))
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str (rData1.Secs12))
	[ ] Protocol2.Repeat2.ClickCell( {2,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics12)
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat2.ClickCell( {3,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp13))
	[ ] Protocol2.Repeat2.ClickCell( {3,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str (rData1.Secs13))
	[ ] Protocol2.Repeat2.ClickCell( {3,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics13)
	[ ] Protocol2.Repeat2.ClickCell( {3,2} )
	[ ] //
	[ ] Protocol2.Repeat2.ClickCell( {4,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp14))
	[ ] Protocol2.Repeat2.ClickCell( {4,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str (rData1.Secs14))
	[ ] Protocol2.Repeat2.ClickCell( {4,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics14)
	[ ] Protocol2.Repeat2.ClickCell( {4,2} )
	[ ] //
	[ ] // Define stage 2
	[ ] // Stage2: 2-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "2-Temperature Cycle" )
	[ ] Protocol2.N2.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N2.SetText(Str(rData1.NumberCyclesInStage2) )
	[ ] Protocol2.Repeat22.ClickCell( {1,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp21))
	[ ] Protocol2.Repeat22.ClickCell( {1,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs21))
	[ ] Protocol2.Repeat22.ClickCell( {1,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics21)
	[ ] Protocol2.Repeat22.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat22.ClickCell( {2,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp22))
	[ ] Protocol2.Repeat22.ClickCell( {2,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs22))
	[ ] Protocol2.Repeat22.ClickCell( {2,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics22)
	[ ] Protocol2.Repeat22.ClickCell( {2,2} )
	[ ] //
	[ ] // Define stage 3
	[ ] // Stage3: 5-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "5-Temperature Cycle" )
	[ ] Protocol2.N3.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N3.SetText(Str( rData1.NumberCyclesInStage3))
	[ ] Protocol2.Repeat33.ClickCell( {1,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp31))
	[ ] Protocol2.Repeat33.ClickCell( {1,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs31))
	[ ] Protocol2.Repeat33.ClickCell( {1,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics31)
	[ ] Protocol2.Repeat33.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {2,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp32))
	[ ] Protocol2.Repeat33.ClickCell( {2,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs32))
	[ ] Protocol2.Repeat33.ClickCell( {2,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics32)
	[ ] Protocol2.Repeat33.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {3,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp33))
	[ ] Protocol2.Repeat33.ClickCell( {3,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs33))
	[ ] Protocol2.Repeat33.ClickCell( {3,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics33)
	[ ] Protocol2.Repeat33.ClickCell( {3,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {4,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp34))
	[ ] Protocol2.Repeat33.ClickCell( {4,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs34))
	[ ] Protocol2.Repeat33.ClickCell( {4,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics34)
	[ ] Protocol2.Repeat33.ClickCell( {4,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {5,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp35))
	[ ] Protocol2.Repeat33.ClickCell( {5,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs35))
	[ ] Protocol2.Repeat33.ClickCell( {5,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics35)
	[ ] Protocol2.Repeat33.ClickCell( {5,2} )
	[ ] //
	[ ] // Define stage 4
	[ ] // Stage4: 3-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "3-Temperature Cycle" )
	[ ] Protocol2.N4.SetPosition( 1, 2 )
	[ ] Protocol2.N4.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N4.SetText(Str(rData1.NumberCyclesInStage4))
	[ ] Protocol2.Repeat42.ClickCell( {1,1} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp41))
	[ ] Protocol2.Repeat42.ClickCell( {1,2} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs41))
	[ ] Protocol2.Repeat42.ClickCell( {1,3} )
	[ ] Protocol2.Repeat42.JavaxSwingJComboBox.Select (rData1.Optics41)
	[ ] Protocol2.Repeat42.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat42.ClickCell( {2,1} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp42))
	[ ] Protocol2.Repeat42.ClickCell( {2,2} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs42))
	[ ] Protocol2.Repeat42.ClickCell( {2,3} )
	[ ] Protocol2.Repeat42.JavaxSwingJComboBox.Select (rData1.Optics42)
	[ ] Protocol2.Repeat42.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat42.ClickCell( {3,1} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp43))
	[ ] Protocol2.Repeat42.ClickCell( {3,2} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs43))
	[ ] Protocol2.Repeat42.ClickCell( {3,3} )
	[ ] Protocol2.Repeat42.JavaxSwingJComboBox.Select(rData1.Optics43)
	[ ] Protocol2.Repeat42.ClickCell( {3,2} )
	[ ] //
	[ ] Protocol2.Repeat3.SetPosition( 578 )
	[ ] // Define stage 5
	[ ] // Stage5: 2-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "2-Temperature Cycle" )
	[ ] Protocol2.N5.SetPosition( 1, 2 )
	[ ] Protocol2.N5.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N5.SetText(Str(rData1.NumberCyclesInStage5))
	[ ] Protocol2.Repeat52.ClickCell( {1,1} )
	[ ] Protocol2.Repeat52.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp51))
	[ ] Protocol2.Repeat52.ClickCell( {1,2} )
	[ ] Protocol2.Repeat52.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs51))
	[ ] Protocol2.Repeat52.ClickCell( {1,3} )
	[ ] Protocol2.Repeat52.JavaxSwingJComboBox.Select (rData1.Optics51)
	[ ] Protocol2.Repeat52.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat52.ClickCell( {2,1} )
	[ ] Protocol2.Repeat52.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp52))
	[ ] Protocol2.Repeat52.ClickCell( {2,2} )
	[ ] Protocol2.Repeat52.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs52))
	[ ] Protocol2.Repeat52.ClickCell( {2,3} )
	[ ] Protocol2.Repeat52.JavaxSwingJComboBox.Select (rData1.Optics52)
	[ ] Protocol2.Repeat52.ClickCell( {2,2} )
	[ ] //
	[ ] // Define Stage6
	[ ] // Stage6: Melt
	[ ] Protocol2.Stage11.Select( "Melt Curve" )
	[ ] // Protocol2.Stage22.ClickCell( {1,1} )
	[ ] // Protocol2.Stage22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.StartTemp))
	[ ] // Protocol2.Stage22.ClickCell( {1,2} )
	[ ] // Protocol2.Stage22.ComCepheidGenexpertUiUtil.SetText(Str (rData1.EndTemp))
	[ ] // Protocol2.Stage22.ClickCell( {1,3} )
	[ ] // Protocol2.Stage22.ComCepheidGenexpertUiUtil.SetText(rData1.CSec)
	[ ] 
	[ ]  Protocol2.OK.Click()
[ ] //
[ ] //
[ ] // DefineANS-10 Protocol function define protocol with 8 stages
[ ] // Stage1: 4-Temperature Cycle
[ ] //Stage2: 2-Temperature Cycle
[ ] // Stage3: End
[ ] // Stage4: 5-Temperature Cycle
[ ] // Stage5: 2-Temperature Cycle
[ ] // Stage6: Hold
[ ] // Stage7: 2-Temperature Cycle
[ ] // Stage 8: Melt
[+] DefineANS_10_Protocol(REC_ANS_10_PROTOCOL rData1)
	[ ] // Define stage 1
	[ ] //Stage 1: 4-Temperature Cycle
	[ ] Protocol2.SetActive( )
	[ ] Protocol2.Stage11.Select( "4-Temperature Cycle" )
	[ ] Protocol2.N1.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N1.SetText( Str(rData1.NumberCyclesInStage1) )
	[ ] Protocol2.Repeat2.ClickCell( {1,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp11))
	[ ] Protocol2.Repeat2.ClickCell( {1,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs11))
	[ ] Protocol2.Repeat2.ClickCell( {1,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics11)
	[ ] Protocol2.Repeat2.ClickCell( {2,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp12))
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str (rData1.Secs12))
	[ ] Protocol2.Repeat2.ClickCell( {2,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics12)
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat2.ClickCell( {3,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp13))
	[ ] Protocol2.Repeat2.ClickCell( {3,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str (rData1.Secs13))
	[ ] Protocol2.Repeat2.ClickCell( {3,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics13)
	[ ] Protocol2.Repeat2.ClickCell( {3,2} )
	[ ] //
	[ ] Protocol2.Repeat2.ClickCell( {4,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp14))
	[ ] Protocol2.Repeat2.ClickCell( {4,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str (rData1.Secs14))
	[ ] Protocol2.Repeat2.ClickCell( {4,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics14)
	[ ] Protocol2.Repeat2.ClickCell( {4,2} )
	[ ] //
	[ ] // Define stage 2
	[ ] // Stage2: 2-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "2-Temperature Cycle" )
	[ ] Protocol2.N2.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N2.SetText(Str(rData1.NumberCyclesInStage2) )
	[ ] Protocol2.Repeat22.ClickCell( {1,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp21))
	[ ] Protocol2.Repeat22.ClickCell( {1,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs21))
	[ ] Protocol2.Repeat22.ClickCell( {1,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics21)
	[ ] Protocol2.Repeat22.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat22.ClickCell( {2,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp22))
	[ ] Protocol2.Repeat22.ClickCell( {2,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs22))
	[ ] Protocol2.Repeat22.ClickCell( {2,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics22)
	[ ] Protocol2.Repeat22.ClickCell( {2,2} )
	[ ] //
	[ ] // Define stage 3
	[ ] // Stage3: End
	[ ] Protocol2.Stage11.Select( "End" )
	[ ] //
	[ ] //Define Stage 4
	[ ] // Stage4: 5-Temperature Cycle
	[ ] Protocol2.Stage21.Select( "5-Temperature Cycle" )
	[ ] Protocol2.N4.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N4.SetText(Str( rData1.NumberCyclesInStage4))
	[ ] Protocol2.Repeat33.ClickCell( {1,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp41))
	[ ] Protocol2.Repeat33.ClickCell( {1,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs41))
	[ ] Protocol2.Repeat33.ClickCell( {1,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics41)
	[ ] Protocol2.Repeat33.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {2,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp42))
	[ ] Protocol2.Repeat33.ClickCell( {2,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs42))
	[ ] Protocol2.Repeat33.ClickCell( {2,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics42)
	[ ] Protocol2.Repeat33.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {3,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp43))
	[ ] Protocol2.Repeat33.ClickCell( {3,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs43))
	[ ] Protocol2.Repeat33.ClickCell( {3,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics43)
	[ ] Protocol2.Repeat33.ClickCell( {3,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {4,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp44))
	[ ] Protocol2.Repeat33.ClickCell( {4,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs44))
	[ ] Protocol2.Repeat33.ClickCell( {4,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics44)
	[ ] Protocol2.Repeat33.ClickCell( {4,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {5,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp45))
	[ ] Protocol2.Repeat33.ClickCell( {5,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs45))
	[ ] Protocol2.Repeat33.ClickCell( {5,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics45)
	[ ] Protocol2.Repeat33.ClickCell( {5,2} )
	[ ] //
	[ ] Protocol2.Repeat3.SetPosition( 578 )
	[ ] // Define stage 5
	[ ] // Stage5: 3-Temperature Cycle
	[ ] Protocol2.Stage21.Select( "3-Temperature Cycle" )
	[ ] Protocol2.N5.SetPosition( 1, 2 )
	[ ] Protocol2.N5.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N5.SetText(Str(rData1.NumberCyclesInStage5))
	[ ] Protocol2.Repeat42.ClickCell( {1,1} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp51))
	[ ] Protocol2.Repeat42.ClickCell( {1,2} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs51))
	[ ] Protocol2.Repeat42.ClickCell( {1,3} )
	[ ] Protocol2.Repeat42.JavaxSwingJComboBox.Select (rData1.Optics51)
	[ ] Protocol2.Repeat42.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat42.ClickCell( {2,1} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp52))
	[ ] Protocol2.Repeat42.ClickCell( {2,2} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs52))
	[ ] Protocol2.Repeat42.ClickCell( {2,3} )
	[ ] Protocol2.Repeat42.JavaxSwingJComboBox.Select (rData1.Optics52)
	[ ] Protocol2.Repeat42.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat42.ClickCell( {3,1} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp53))
	[ ] Protocol2.Repeat42.ClickCell( {3,2} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs53))
	[ ] Protocol2.Repeat42.ClickCell( {3,3} )
	[ ] Protocol2.Repeat42.JavaxSwingJComboBox.Select (rData1.Optics53)
	[ ] Protocol2.Repeat42.ClickCell( {3,2} )
	[ ] //
	[ ] // Define Stage6
	[ ] // Stage6:Hold
	[ ] Protocol2.Stage21.Select( "Hold" )
	[ ] Protocol2.Stage3.ClickCell( {1,1} )
	[ ] Protocol2.Stage3.Zz.SetText (Str(rData1.Temp61))
	[ ] Protocol2.Stage3.ClickCell( {1,2} )
	[ ] Protocol2.Stage3.Zz.SetText (Str(rData1.Secs61))
	[ ] // 
	[ ] // Define Stage 7
	[ ] // Stage 7: 2-Temperature Cycle
	[ ] Protocol2.Stage31.Select( "2-Temperature Cycle" )
	[ ] Protocol2.N7.SetPosition( 1, 2 )
	[ ] Protocol2.N7.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N7.SetText(Str(rData1.NumberCyclesInStage7))
	[ ] Protocol2.Repeat52.ClickCell( {1,1} )
	[ ] Protocol2.Repeat52.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp71))
	[ ] Protocol2.Repeat52.ClickCell( {1,2} )
	[ ] Protocol2.Repeat52.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs71))
	[ ] Protocol2.Repeat52.ClickCell( {1,3} )
	[ ] Protocol2.Repeat52.JavaxSwingJComboBox.Select (rData1.Optics71)
	[ ] Protocol2.Repeat52.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat52.ClickCell( {2,1} )
	[ ] Protocol2.Repeat52.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp72))
	[ ] Protocol2.Repeat52.ClickCell( {2,2} )
	[ ] Protocol2.Repeat52.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs72))
	[ ] Protocol2.Repeat52.ClickCell( {2,3} )
	[ ] Protocol2.Repeat52.JavaxSwingJComboBox.Select (rData1.Optics72)
	[ ] Protocol2.Repeat52.ClickCell( {2,2} )
	[ ] // 
	[ ] Protocol2.Repeat3.SetPosition( 850 )
	[ ] // Define stage 8
	[ ] // Stage 8: Melt Curve
	[ ] Protocol2.Stage32.Select( "Melt Curve" )
	[ ] //
	[ ]  Protocol2.OK.Click()
[ ] //
[ ] //
[ ] // DefineANS-11 Protocol function define protocol with 3 stages
[ ] // Stage1:  4-Temperature Cycle
[ ] //Stage2: 2-Temperature Cycle
[ ] // Stage3: Melt
[+] DefineANS_11_Protocol(REC_ANS_11_PROTOCOL rData1)
	[ ] // Define stage 1
	[ ] //Stage 1: 4-Temperature Cycle
	[ ] Protocol2.SetActive( )
	[ ] Protocol2.Stage11.Select( "4-Temperature Cycle" )
	[ ] Protocol2.N1.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N1.SetText( Str(rData1.NumberCyclesInStage1) )
	[ ] Protocol2.Repeat2.ClickCell( {1,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp11))
	[ ] Protocol2.Repeat2.ClickCell( {1,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs11))
	[ ] Protocol2.Repeat2.ClickCell( {1,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics11)
	[ ] Protocol2.Repeat2.ClickCell( {2,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp12))
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str (rData1.Secs12))
	[ ] Protocol2.Repeat2.ClickCell( {2,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics12)
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat2.ClickCell( {3,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp13))
	[ ] Protocol2.Repeat2.ClickCell( {3,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str (rData1.Secs13))
	[ ] Protocol2.Repeat2.ClickCell( {3,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics13)
	[ ] Protocol2.Repeat2.ClickCell( {3,2} )
	[ ] //
	[ ] Protocol2.Repeat2.ClickCell( {4,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp14))
	[ ] Protocol2.Repeat2.ClickCell( {4,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str (rData1.Secs14))
	[ ] Protocol2.Repeat2.ClickCell( {4,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics14)
	[ ] Protocol2.Repeat2.ClickCell( {4,2} )
	[ ] //
	[ ] // Define stage 2
	[ ] // Stage2: 2-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "2-Temperature Cycle" )
	[ ] Protocol2.N2.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N2.SetText(Str(rData1.NumberCyclesInStage2) )
	[ ] Protocol2.Repeat22.ClickCell( {1,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp21))
	[ ] Protocol2.Repeat22.ClickCell( {1,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs21))
	[ ] Protocol2.Repeat22.ClickCell( {1,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics21)
	[ ] Protocol2.Repeat22.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat22.ClickCell( {2,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp22))
	[ ] Protocol2.Repeat22.ClickCell( {2,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs22))
	[ ] Protocol2.Repeat22.ClickCell( {2,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics22)
	[ ] Protocol2.Repeat22.ClickCell( {2,2} )
	[ ] //
	[ ]  // Define stage3
	[ ]  // Stage 3: Melt Curve
	[ ] Protocol2.Stage11.Select( "Melt Curve" )
	[ ] Protocol2.Stage12.ClickCell( {1,1} )
	[ ] Protocol2.Stage12.ComCepheidGenexpertUiUtil.SetText (Str(rData1.StartTemp))
	[ ] Protocol2.Stage12.ClickCell( {1,2} )
	[ ] Protocol2.Stage12.ComCepheidGenexpertUiUtil.SetText (Str(rData1.EndTemp))
	[ ] Protocol2.Stage12.ClickCell( {1,3} )
	[ ] Protocol2.Stage12.ComCepheidGenexpertUiUtil.SetText ((rData1.CSec))
	[ ] //
	[ ]  Protocol2.OK.Click()
	[ ] 
[ ] //
[ ] //
[ ] // DefineANS-12 Protocol function define protocol with 8 stages
[ ] // Stage1: 4-Temperature Cycle
[ ] //Stage2: 2-Temperature Cycle
[ ] // Stage3: End
[ ] // Stage4: 5-Temperature Cycle
[ ] // Stage5: 2-Temperature Cycle
[ ] // Stage6: Hold
[ ] // Stage7: 2-Temperature Cycle
[ ] // Stage 8: Melt
[+] DefineANS_12_Protocol(REC_ANS_12_PROTOCOL rData1)
	[ ] // Define stage 1
	[ ] //Stage 1: 4-Temperature Cycle
	[ ] Protocol2.SetActive( )
	[ ] Protocol2.Stage11.Select( "4-Temperature Cycle" )
	[ ] Protocol2.N1.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N1.SetText( Str(rData1.NumberCyclesInStage1) )
	[ ] Protocol2.Repeat2.ClickCell( {1,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp11))
	[ ] Protocol2.Repeat2.ClickCell( {1,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs11))
	[ ] Protocol2.Repeat2.ClickCell( {1,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics11)
	[ ] Protocol2.Repeat2.ClickCell( {2,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp12))
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str (rData1.Secs12))
	[ ] Protocol2.Repeat2.ClickCell( {2,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics12)
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat2.ClickCell( {3,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp13))
	[ ] Protocol2.Repeat2.ClickCell( {3,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str (rData1.Secs13))
	[ ] Protocol2.Repeat2.ClickCell( {3,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics13)
	[ ] Protocol2.Repeat2.ClickCell( {3,2} )
	[ ] //
	[ ] Protocol2.Repeat2.ClickCell( {4,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp14))
	[ ] Protocol2.Repeat2.ClickCell( {4,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str (rData1.Secs14))
	[ ] Protocol2.Repeat2.ClickCell( {4,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics14)
	[ ] Protocol2.Repeat2.ClickCell( {4,2} )
	[ ] //
	[ ] // Define stage 2
	[ ] // Stage2: 2-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "2-Temperature Cycle" )
	[ ] Protocol2.N2.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N2.SetText(Str(rData1.NumberCyclesInStage2) )
	[ ] Protocol2.Repeat22.ClickCell( {1,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp21))
	[ ] Protocol2.Repeat22.ClickCell( {1,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs21))
	[ ] Protocol2.Repeat22.ClickCell( {1,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics21)
	[ ] Protocol2.Repeat22.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat22.ClickCell( {2,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp22))
	[ ] Protocol2.Repeat22.ClickCell( {2,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs22))
	[ ] Protocol2.Repeat22.ClickCell( {2,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics22)
	[ ] Protocol2.Repeat22.ClickCell( {2,2} )
	[ ] //
	[ ] // Define stage 3
	[ ] // Stage3: End
	[ ] Protocol2.Stage11.Select( "End" )
	[ ] //
	[ ] //Define Stage 4
	[ ] // Stage4: 5-Temperature Cycle
	[ ] Protocol2.Stage21.Select( "5-Temperature Cycle" )
	[ ] Protocol2.N4.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N4.SetText(Str( rData1.NumberCyclesInStage4))
	[ ] Protocol2.Repeat33.ClickCell( {1,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp41))
	[ ] Protocol2.Repeat33.ClickCell( {1,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs41))
	[ ] Protocol2.Repeat33.ClickCell( {1,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics41)
	[ ] Protocol2.Repeat33.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {2,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp42))
	[ ] Protocol2.Repeat33.ClickCell( {2,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs42))
	[ ] Protocol2.Repeat33.ClickCell( {2,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics42)
	[ ] Protocol2.Repeat33.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {3,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp43))
	[ ] Protocol2.Repeat33.ClickCell( {3,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs43))
	[ ] Protocol2.Repeat33.ClickCell( {3,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics43)
	[ ] Protocol2.Repeat33.ClickCell( {3,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {4,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp44))
	[ ] Protocol2.Repeat33.ClickCell( {4,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs44))
	[ ] Protocol2.Repeat33.ClickCell( {4,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics44)
	[ ] Protocol2.Repeat33.ClickCell( {4,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {5,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp45))
	[ ] Protocol2.Repeat33.ClickCell( {5,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs45))
	[ ] Protocol2.Repeat33.ClickCell( {5,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics45)
	[ ] Protocol2.Repeat33.ClickCell( {5,2} )
	[ ] //
	[ ] Protocol2.Repeat3.SetPosition( 578 )
	[ ] // Define stage 5
	[ ] // Stage5: 3-Temperature Cycle
	[ ] Protocol2.Stage21.Select( "3-Temperature Cycle" )
	[ ] Protocol2.N5.SetPosition( 1, 2 )
	[ ] Protocol2.N5.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N5.SetText(Str(rData1.NumberCyclesInStage5))
	[ ] Protocol2.Repeat42.ClickCell( {1,1} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp51))
	[ ] Protocol2.Repeat42.ClickCell( {1,2} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs51))
	[ ] Protocol2.Repeat42.ClickCell( {1,3} )
	[ ] Protocol2.Repeat42.JavaxSwingJComboBox.Select (rData1.Optics51)
	[ ] Protocol2.Repeat42.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat42.ClickCell( {2,1} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp52))
	[ ] Protocol2.Repeat42.ClickCell( {2,2} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs52))
	[ ] Protocol2.Repeat42.ClickCell( {2,3} )
	[ ] Protocol2.Repeat42.JavaxSwingJComboBox.Select (rData1.Optics52)
	[ ] Protocol2.Repeat42.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat42.ClickCell( {3,1} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp53))
	[ ] Protocol2.Repeat42.ClickCell( {3,2} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs53))
	[ ] Protocol2.Repeat42.ClickCell( {3,3} )
	[ ] Protocol2.Repeat42.JavaxSwingJComboBox.Select (rData1.Optics53)
	[ ] Protocol2.Repeat42.ClickCell( {3,2} )
	[ ] //
	[ ] // Define Stage6
	[ ] // Stage6:Hold
	[ ] Protocol2.Stage21.Select( "Hold" )
	[ ] Protocol2.Stage3.ClickCell( {1,1} )
	[ ] Protocol2.Stage3.Zz.SetText (Str(rData1.Temp61))
	[ ] Protocol2.Stage3.ClickCell( {1,2} )
	[ ] Protocol2.Stage3.Zz.SetText (Str(rData1.Secs61))
	[ ] // 
	[ ] // Define Stage 7
	[ ] // Stage 7: 2-Temperature Cycle
	[ ] Protocol2.Stage31.Select( "2-Temperature Cycle" )
	[ ] Protocol2.N7.SetPosition( 1, 2 )
	[ ] Protocol2.N7.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N7.SetText(Str(rData1.NumberCyclesInStage7))
	[ ] Protocol2.Repeat52.ClickCell( {1,1} )
	[ ] Protocol2.Repeat52.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp71))
	[ ] Protocol2.Repeat52.ClickCell( {1,2} )
	[ ] Protocol2.Repeat52.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs71))
	[ ] Protocol2.Repeat52.ClickCell( {1,3} )
	[ ] Protocol2.Repeat52.JavaxSwingJComboBox.Select (rData1.Optics71)
	[ ] Protocol2.Repeat52.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat52.ClickCell( {2,1} )
	[ ] Protocol2.Repeat52.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp72))
	[ ] Protocol2.Repeat52.ClickCell( {2,2} )
	[ ] Protocol2.Repeat52.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs72))
	[ ] Protocol2.Repeat52.ClickCell( {2,3} )
	[ ] Protocol2.Repeat52.JavaxSwingJComboBox.Select (rData1.Optics72)
	[ ] Protocol2.Repeat52.ClickCell( {2,2} )
	[ ] // 
	[ ] Protocol2.Repeat3.SetPosition( 850 )
	[ ] // Define stage 8
	[ ] // Stage 8: Melt Curve
	[ ] Protocol2.Stage32.Select( "Melt Curve" )
	[ ]  Protocol2.OK.Click()
[ ] 
[ ] // DefineANS-13 Protocol function define protocol with 2 stages
[ ] //Stage1: 2-Temperature Cycle
[ ] // Stage2: Melt
[+] DefineANS_13_Protocol(REC_ANS_13_PROTOCOL rData1)
	[ ] // Define stage 1
	[ ] //Stage 1: 2-Temperature Cycle
	[ ] Protocol2.SetActive( )
	[ ] Protocol2.Stage11.Select( "2-Temperature Cycle" )
	[ ] Protocol2.N1.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N1.SetText( Str(rData1.NumberCyclesInStage1) )
	[ ] Protocol2.Repeat2.ClickCell( {1,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp11))
	[ ] Protocol2.Repeat2.ClickCell( {1,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs11))
	[ ] Protocol2.Repeat2.ClickCell( {1,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics11)
	[ ] Protocol2.Repeat2.ClickCell( {2,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp12))
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str (rData1.Secs12))
	[ ] Protocol2.Repeat2.ClickCell( {2,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics12)
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] //
	[ ] // Define stage 2
	[ ] // // Stage 2: Melt Curve
	[ ] Protocol2.Stage11.Select( "Melt Curve" )
	[ ] Protocol2.Stage12.ClickCell( {1,1} )
	[ ] Protocol2.Stage12.ComCepheidGenexpertUiUtil.SetText (Str(rData1.StartTemp))
	[ ] Protocol2.Stage12.ClickCell( {1,2} )
	[ ] Protocol2.Stage12.ComCepheidGenexpertUiUtil.SetText (Str(rData1.EndTemp))
	[ ] Protocol2.Stage12.ClickCell( {1,3} )
	[ ] Protocol2.Stage12.ComCepheidGenexpertUiUtil.SetText ((rData1.CSec))
	[ ] //
	[ ]  Protocol2.OK.Click()
	[ ] 
[ ] //
[ ] //
[ ] // DefineANS-14 Protocol function define protocol with 2 stages
[ ] //Stage1: 2-Temperature Cycle
[ ] // Stage2: End
[+] DefineANS_14_Protocol(REC_ANS_14_PROTOCOL rData1)
	[ ] // Define stage 1
	[ ] //Stage 1: 2-Temperature Cycle
	[ ] Protocol2.SetActive( )
	[ ] Protocol2.Stage11.Select( "2-Temperature Cycle" )
	[ ] Protocol2.N1.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N1.SetText( Str(rData1.NumberCyclesInStage1) )
	[ ] Protocol2.Repeat2.ClickCell( {1,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp11))
	[ ] Protocol2.Repeat2.ClickCell( {1,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs11))
	[ ] Protocol2.Repeat2.ClickCell( {1,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics11)
	[ ] Protocol2.Repeat2.ClickCell( {2,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp12))
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str (rData1.Secs12))
	[ ] Protocol2.Repeat2.ClickCell( {2,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics12)
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] 
	[ ] 
	[ ] //
	[ ] // Define stage 2
	[ ] // // Stage 2: Melt Curve
	[ ] Protocol2.Stage11.Select( "End" )
	[ ]  Protocol2.OK.Click()
[ ] //
[ ] //
[ ] // DefineANS-15 Protocol function define protocol with 5 stages
[ ] // Stage1: 2-Temperature Cycle
[ ] //Stage2: 3-Temperature Cycle
[ ] // Stage3: 5-Temperature Cycle
[ ] // Stage4: 3-Temperature Cycle
[ ] // Stage5: 2-Temperature Cycle
[+] DefineANS_15_Protocol(REC_ANS_15_PROTOCOL rData1)
	[ ] // Define stage 1
	[ ] //Stage 1: 2-Temperature Cycle
	[ ] Protocol2.SetActive( )
	[ ] Protocol2.Stage11.Select( "2-Temperature Cycle" )
	[ ] Protocol2.N1.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N1.SetText( Str(rData1.NumberCyclesInStage1) )
	[ ] Protocol2.Repeat2.ClickCell( {1,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp11))
	[ ] Protocol2.Repeat2.ClickCell( {1,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs11))
	[ ] Protocol2.Repeat2.ClickCell( {1,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics11)
	[ ] Protocol2.Repeat2.ClickCell( {2,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp12))
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str (rData1.Secs12))
	[ ] Protocol2.Repeat2.ClickCell( {2,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics12)
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] //
	[ ] // Define stage 2
	[ ] // Stage2: 3-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "3-Temperature Cycle" )
	[ ] Protocol2.N2.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N2.SetText(Str(rData1.NumberCyclesInStage2) )
	[ ] Protocol2.Repeat22.ClickCell( {1,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp21))
	[ ] Protocol2.Repeat22.ClickCell( {1,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs21))
	[ ] Protocol2.Repeat22.ClickCell( {1,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics21)
	[ ] Protocol2.Repeat22.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat22.ClickCell( {2,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp22))
	[ ] Protocol2.Repeat22.ClickCell( {2,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs22))
	[ ] Protocol2.Repeat22.ClickCell( {2,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics22)
	[ ] Protocol2.Repeat22.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat22.ClickCell( {3,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp23))
	[ ] Protocol2.Repeat22.ClickCell( {3,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs23))
	[ ] Protocol2.Repeat22.ClickCell( {3,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics23)
	[ ] Protocol2.Repeat22.ClickCell( {3,2} )
	[ ] //
	[ ] // Define stage 3
	[ ] // Stage3: 5-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "5-Temperature Cycle" )
	[ ] Protocol2.N3.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N3.SetText(Str( rData1.NumberCyclesInStage4))
	[ ] Protocol2.Repeat33.ClickCell( {1,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp31))
	[ ] Protocol2.Repeat33.ClickCell( {1,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs31))
	[ ] Protocol2.Repeat33.ClickCell( {1,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics31)
	[ ] Protocol2.Repeat33.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {2,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp32))
	[ ] Protocol2.Repeat33.ClickCell( {2,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs32))
	[ ] Protocol2.Repeat33.ClickCell( {2,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics32)
	[ ] Protocol2.Repeat33.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {3,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp33))
	[ ] Protocol2.Repeat33.ClickCell( {3,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs33))
	[ ] Protocol2.Repeat33.ClickCell( {3,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics33)
	[ ] Protocol2.Repeat33.ClickCell( {3,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {4,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp34))
	[ ] Protocol2.Repeat33.ClickCell( {4,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs34))
	[ ] Protocol2.Repeat33.ClickCell( {4,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics34)
	[ ] Protocol2.Repeat33.ClickCell( {4,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {5,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp35))
	[ ] Protocol2.Repeat33.ClickCell( {5,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs35))
	[ ] Protocol2.Repeat33.ClickCell( {5,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics35)
	[ ] Protocol2.Repeat33.ClickCell( {5,2} )
	[ ] //
	[ ] // Define stage 4
	[ ] // Stage4: 3-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "3-Temperature Cycle" )
	[ ] Protocol2.N4.SetPosition( 1, 2 )
	[ ] Protocol2.N4.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N4.SetText(Str(rData1.NumberCyclesInStage4))
	[ ] Protocol2.Repeat42.ClickCell( {1,1} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp41))
	[ ] Protocol2.Repeat42.ClickCell( {1,2} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs41))
	[ ] Protocol2.Repeat42.ClickCell( {1,3} )
	[ ] Protocol2.Repeat42.JavaxSwingJComboBox.Select (rData1.Optics41)
	[ ] Protocol2.Repeat42.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat42.ClickCell( {2,1} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp42))
	[ ] Protocol2.Repeat42.ClickCell( {2,2} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs42))
	[ ] Protocol2.Repeat42.ClickCell( {2,3} )
	[ ] Protocol2.Repeat42.JavaxSwingJComboBox.Select (rData1.Optics42)
	[ ] Protocol2.Repeat42.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat42.ClickCell( {3,1} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp43))
	[ ] Protocol2.Repeat42.ClickCell( {3,2} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs43))
	[ ] Protocol2.Repeat42.ClickCell( {3,3} )
	[ ] Protocol2.Repeat42.JavaxSwingJComboBox.Select (rData1.Optics43)
	[ ] Protocol2.Repeat42.ClickCell( {3,2} )
	[ ] //
	[ ] Protocol2.Repeat3.SetPosition( 578 )
	[ ] // Define Stage 5
	[ ] // Stage 5: 2-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "2-Temperature Cycle" )
	[ ] Protocol2.N5.SetPosition( 1, 2 )
	[ ] Protocol2.N5.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N5.SetText(Str(rData1.NumberCyclesInStage5))
	[ ] Protocol2.Repeat52.ClickCell( {1,1} )
	[ ] Protocol2.Repeat52.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp51))
	[ ] Protocol2.Repeat52.ClickCell( {1,2} )
	[ ] Protocol2.Repeat52.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs51))
	[ ] Protocol2.Repeat52.ClickCell( {1,3} )
	[ ] Protocol2.Repeat52.JavaxSwingJComboBox.Select (rData1.Optics51)
	[ ] Protocol2.Repeat52.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat52.ClickCell( {2,1} )
	[ ] Protocol2.Repeat52.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp52))
	[ ] Protocol2.Repeat52.ClickCell( {2,2} )
	[ ] Protocol2.Repeat52.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs52))
	[ ] Protocol2.Repeat52.ClickCell( {2,3} )
	[ ] Protocol2.Repeat52.JavaxSwingJComboBox.Select (rData1.Optics52)
	[ ] Protocol2.Repeat52.ClickCell( {2,2} )
	[ ] // 
	[ ]  Protocol2.OK.Click()
[ ] //
[ ] //
[ ] // DefineANS-16 Protocol function define protocol with 10 stages
[ ] // Stage1: 2-Temperature Cycle
[ ] //Stage2: 3-Temperature Cycle
[ ] // Stage3: 5-Temperature Cycle
[ ] // Stage4: 3-Temperature Cycle
[ ] // Stage5: 2-Temperature Cycle
[ ] // Stage6: 3-Temperature Cycle
[ ] // Stage7: 4-Temperature Cycle
[ ] // Stage8: 2-Temperature Cycle
[ ] // Stage9: 3-Temperature Cycle
[ ] // Stage10: Hold
[+] DefineANS_16_Protocol(REC_ANS_16_PROTOCOL rData1)
	[ ] // Define stage 1
	[ ] //Stage 1: 2-Temperature Cycle
	[ ] Protocol2.SetActive( )
	[ ] Protocol2.Stage11.Select( "2-Temperature Cycle" )
	[ ] Protocol2.N1.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N1.SetText( Str(rData1.NumberCyclesInStage1) )
	[ ] Protocol2.Repeat2.ClickCell( {1,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp11))
	[ ] Protocol2.Repeat2.ClickCell( {1,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs11))
	[ ] Protocol2.Repeat2.ClickCell( {1,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics11)
	[ ] Protocol2.Repeat2.ClickCell( {2,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp12))
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str (rData1.Secs12))
	[ ] Protocol2.Repeat2.ClickCell( {2,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics12)
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] //
	[ ] // Define stage 2
	[ ] // Stage2: 3-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "3-Temperature Cycle" )
	[ ] Protocol2.N2.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N2.SetText(Str(rData1.NumberCyclesInStage2) )
	[ ] Protocol2.Repeat22.ClickCell( {1,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp21))
	[ ] Protocol2.Repeat22.ClickCell( {1,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs21))
	[ ] Protocol2.Repeat22.ClickCell( {1,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics21)
	[ ] Protocol2.Repeat22.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat22.ClickCell( {2,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp22))
	[ ] Protocol2.Repeat22.ClickCell( {2,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs22))
	[ ] Protocol2.Repeat22.ClickCell( {2,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics22)
	[ ] Protocol2.Repeat22.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat22.ClickCell( {3,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp23))
	[ ] Protocol2.Repeat22.ClickCell( {3,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs23))
	[ ] Protocol2.Repeat22.ClickCell( {3,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics23)
	[ ] Protocol2.Repeat22.ClickCell( {3,2} )
	[ ] //
	[ ] // Define stage 3
	[ ] // Stage3: 5-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "5-Temperature Cycle" )
	[ ] Protocol2.N3.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N3.SetText(Str( rData1.NumberCyclesInStage3))
	[ ] Protocol2.Repeat33.ClickCell( {1,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp31))
	[ ] Protocol2.Repeat33.ClickCell( {1,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs31))
	[ ] Protocol2.Repeat33.ClickCell( {1,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics31)
	[ ] Protocol2.Repeat33.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {2,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp32))
	[ ] Protocol2.Repeat33.ClickCell( {2,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs32))
	[ ] Protocol2.Repeat33.ClickCell( {2,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics32)
	[ ] Protocol2.Repeat33.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {3,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp33))
	[ ] Protocol2.Repeat33.ClickCell( {3,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs33))
	[ ] Protocol2.Repeat33.ClickCell( {3,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics33)
	[ ] Protocol2.Repeat33.ClickCell( {3,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {4,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp34))
	[ ] Protocol2.Repeat33.ClickCell( {4,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs34))
	[ ] Protocol2.Repeat33.ClickCell( {4,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics34)
	[ ] Protocol2.Repeat33.ClickCell( {4,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {5,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp35))
	[ ] Protocol2.Repeat33.ClickCell( {5,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs35))
	[ ] Protocol2.Repeat33.ClickCell( {5,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics35)
	[ ] Protocol2.Repeat33.ClickCell( {5,2} )
	[ ] //
	[ ] // Define stage 4
	[ ] // Stage4: 3-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "3-Temperature Cycle" )
	[ ] Protocol2.N4.SetPosition( 1, 2 )
	[ ] Protocol2.N4.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N4.SetText(Str(rData1.NumberCyclesInStage4))
	[ ] Protocol2.Repeat42.ClickCell( {1,1} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp41))
	[ ] Protocol2.Repeat42.ClickCell( {1,2} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs41))
	[ ] Protocol2.Repeat42.ClickCell( {1,3} )
	[ ] Protocol2.Repeat42.JavaxSwingJComboBox.Select (rData1.Optics41)
	[ ] Protocol2.Repeat42.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat42.ClickCell( {2,1} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp42))
	[ ] Protocol2.Repeat42.ClickCell( {2,2} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs42))
	[ ] Protocol2.Repeat42.ClickCell( {2,3} )
	[ ] Protocol2.Repeat42.JavaxSwingJComboBox.Select (rData1.Optics42)
	[ ] Protocol2.Repeat42.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat42.ClickCell( {3,1} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp43))
	[ ] Protocol2.Repeat42.ClickCell( {3,2} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs43))
	[ ] Protocol2.Repeat42.ClickCell( {3,3} )
	[ ] Protocol2.Repeat42.JavaxSwingJComboBox.Select (rData1.Optics43)
	[ ] Protocol2.Repeat42.ClickCell( {3,2} )
	[ ] //
	[ ] Protocol2.Repeat3.SetPosition( 578 )
	[ ] // Define Stage 5
	[ ] // Stage 5: 2-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "2-Temperature Cycle" )
	[ ] Protocol2.N5.SetPosition( 1, 2 )
	[ ] Protocol2.N5.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N5.SetText(Str(rData1.NumberCyclesInStage5))
	[ ] Protocol2.Repeat52.ClickCell( {1,1} )
	[ ] Protocol2.Repeat52.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp51))
	[ ] Protocol2.Repeat52.ClickCell( {1,2} )
	[ ] Protocol2.Repeat52.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs51))
	[ ] Protocol2.Repeat52.ClickCell( {1,3} )
	[ ] Protocol2.Repeat52.JavaxSwingJComboBox.Select (rData1.Optics51)
	[ ] Protocol2.Repeat52.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat52.ClickCell( {2,1} )
	[ ] Protocol2.Repeat52.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp52))
	[ ] Protocol2.Repeat52.ClickCell( {2,2} )
	[ ] Protocol2.Repeat52.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs52))
	[ ] Protocol2.Repeat52.ClickCell( {2,3} )
	[ ] Protocol2.Repeat52.JavaxSwingJComboBox.Select (rData1.Optics52)
	[ ] Protocol2.Repeat52.ClickCell( {2,2} )
	[ ] //
	[ ] // Define stage 6
	[ ] // Stage6: 3-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "3-Temperature Cycle" )
	[ ] Protocol2.N6.SetPosition( 1, 2 )
	[ ] Protocol2.N6.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N6.SetText(Str(rData1.NumberCyclesInStage6))
	[ ] Protocol2.Repeat62.ClickCell( {1,1} )
	[ ] Protocol2.Repeat62.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp61))
	[ ] Protocol2.Repeat62.ClickCell( {1,2} )
	[ ] Protocol2.Repeat62.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs61))
	[ ] Protocol2.Repeat62.ClickCell( {1,3} )
	[ ] Protocol2.Repeat62.JavaxSwingJComboBox.Select (rData1.Optics61)
	[ ] Protocol2.Repeat62.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat62.ClickCell( {2,1} )
	[ ] Protocol2.Repeat62.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp62))
	[ ] Protocol2.Repeat62.ClickCell( {2,2} )
	[ ] Protocol2.Repeat62.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs62))
	[ ] Protocol2.Repeat62.ClickCell( {2,3} )
	[ ] Protocol2.Repeat62.JavaxSwingJComboBox.Select (rData1.Optics62)
	[ ] Protocol2.Repeat62.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat62.ClickCell( {3,1} )
	[ ] Protocol2.Repeat62.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp63))
	[ ] Protocol2.Repeat62.ClickCell( {3,2} )
	[ ] Protocol2.Repeat62.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs63))
	[ ] Protocol2.Repeat62.ClickCell( {3,3} )
	[ ] Protocol2.Repeat62.JavaxSwingJComboBox.Select (rData1.Optics63)
	[ ] Protocol2.Repeat62.ClickCell( {3,2} )
	[ ] //
	[ ] // Define stage 7
	[ ] // Stage7: 4-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "4-Temperature Cycle" )
	[ ] Protocol2.N7.SetPosition( 1, 2 )
	[ ] Protocol2.N7.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N7.SetText(Str(rData1.NumberCyclesInStage7))
	[ ] Protocol2.Repeat72.ClickCell( {1,1} )
	[ ] Protocol2.Repeat72.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp71))
	[ ] Protocol2.Repeat72.ClickCell( {1,2} )
	[ ] Protocol2.Repeat72.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs71))
	[ ] Protocol2.Repeat72.ClickCell( {1,3} )
	[ ] Protocol2.Repeat72.JavaxSwingJComboBox.Select (rData1.Optics71)
	[ ] Protocol2.Repeat72.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat72.ClickCell( {2,1} )
	[ ] Protocol2.Repeat72.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp72))
	[ ] Protocol2.Repeat72.ClickCell( {2,2} )
	[ ] Protocol2.Repeat72.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs72))
	[ ] Protocol2.Repeat72.ClickCell( {2,3} )
	[ ] Protocol2.Repeat72.JavaxSwingJComboBox.Select (rData1.Optics72)
	[ ] Protocol2.Repeat72.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat72.ClickCell( {3,1} )
	[ ] Protocol2.Repeat72.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp73))
	[ ] Protocol2.Repeat72.ClickCell( {3,2} )
	[ ] Protocol2.Repeat72.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs73))
	[ ] Protocol2.Repeat72.ClickCell( {3,3} )
	[ ] Protocol2.Repeat72.JavaxSwingJComboBox.Select (rData1.Optics73)
	[ ] Protocol2.Repeat72.ClickCell( {3,2} )
	[ ] //
	[ ] Protocol2.Repeat72.ClickCell( {4,1} )
	[ ] Protocol2.Repeat72.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp74))
	[ ] Protocol2.Repeat72.ClickCell( {4,2} )
	[ ] Protocol2.Repeat72.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs74))
	[ ] Protocol2.Repeat72.ClickCell( {4,3} )
	[ ] Protocol2.Repeat72.JavaxSwingJComboBox.Select (rData1.Optics74)
	[ ] Protocol2.Repeat72.ClickCell( {4,2} )
	[ ] //
	[ ] Protocol2.Repeat3.SetPosition( 1112 )
	[ ] //
	[ ] // Define stage 8
	[ ] //Stage 8: 2-Temperature Cycle
	[ ] Protocol2.SetActive( )
	[ ] Protocol2.Stage11.Select( "2-Temperature Cycle" )
	[ ] Protocol2.N8.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N8.SetText( Str(rData1.NumberCyclesInStage8))
	[ ] Protocol2.Repeat82.ClickCell( {1,1} )
	[ ] Protocol2.Repeat82.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp81))
	[ ] Protocol2.Repeat82.ClickCell( {1,2} )
	[ ] Protocol2.Repeat82.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs81))
	[ ] Protocol2.Repeat82.ClickCell( {1,3} )
	[ ] Protocol2.Repeat82.JavaxSwingJComboBox.Select(rData1.Optics81)
	[ ] Protocol2.Repeat82.ClickCell( {2,1} )
	[ ] Protocol2.Repeat82.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp82))
	[ ] Protocol2.Repeat82.ClickCell( {2,2} )
	[ ] Protocol2.Repeat82.ComCepheidGenexpertUiUtil.SetText(Str (rData1.Secs82))
	[ ] Protocol2.Repeat82.ClickCell( {2,3} )
	[ ] Protocol2.Repeat82.JavaxSwingJComboBox.Select(rData1.Optics82)
	[ ] Protocol2.Repeat82.ClickCell( {2,2} )
	[ ] //
	[ ] // Define stage 9
	[ ] //Stage 9: 3-Temperature Cycle
	[ ] Protocol2.SetActive( )
	[ ] Protocol2.Stage11.Select( "3-Temperature Cycle" )
	[ ] Protocol2.N9.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N9.SetText( Str(rData1.NumberCyclesInStage9))
	[ ] Protocol2.Repeat92.ClickCell( {1,1} )
	[ ] Protocol2.Repeat92.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp91))
	[ ] Protocol2.Repeat92.ClickCell( {1,2} )
	[ ] Protocol2.Repeat92.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs91))
	[ ] Protocol2.Repeat92.ClickCell( {1,3} )
	[ ] Protocol2.Repeat92.JavaxSwingJComboBox.Select(rData1.Optics91)
	[ ] Protocol2.Repeat92.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat92.ClickCell( {2,1} )
	[ ] Protocol2.Repeat92.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp92))
	[ ] Protocol2.Repeat92.ClickCell( {2,2} )
	[ ] Protocol2.Repeat92.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs92))
	[ ] Protocol2.Repeat92.ClickCell( {2,3} )
	[ ] Protocol2.Repeat92.JavaxSwingJComboBox.Select(rData1.Optics92)
	[ ] Protocol2.Repeat92.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat92.ClickCell( {3,1} )
	[ ] Protocol2.Repeat92.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp93))
	[ ] Protocol2.Repeat92.ClickCell( {3,2} )
	[ ] Protocol2.Repeat92.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs93))
	[ ] Protocol2.Repeat92.ClickCell( {3,3} )
	[ ] Protocol2.Repeat92.JavaxSwingJComboBox.Select(rData1.Optics93)
	[ ] Protocol2.Repeat92.ClickCell( {3,2} )
	[ ] //
	[ ] // Define stage 10
	[ ] // Stage 10: Hold
	[ ] Protocol2.SetActive( )
	[ ] Protocol2.Stage11.Select( "Hold" )
	[ ] Protocol2.Stage2.ClickCell( {1,1} )
	[ ] Protocol2.Stage22.ComCepheidGenexpertUiUtil.SetText(Str (rData1.Temp101))
	[ ] Protocol2.Stage2.ClickCell( {1,2} )
	[ ] Protocol2.Stage22.ComCepheidGenexpertUiUtil.SetText(Str (rData1.Secs101))
	[ ] // 
	[ ]  Protocol2.OK.Click()
[ ] //
[ ] //
[ ] // DefineANS-17 Protocol1 function define protocol with 3 stages
[ ] // Stage 1: 2-Temperature Cycle
[ ] //Stage 2: 5-Temperature Cycle
[ ] // Stage 3: 3-Temperature Cycle
[+] DefineANS_17_Protocol1(REC_ANS_17_PROTOCOL rData1)
	[ ] // Define stage 1
	[ ] //Stage 1: 2-Temperature Cycle
	[ ] // Define stage 1
	[ ] //Stage 1: 2-Temperature Cycle
	[ ] Protocol2.SetActive( )
	[ ] Protocol2.Stage11.Select( "2-Temperature Cycle" )
	[ ] Protocol2.N1.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N1.SetText( Str(rData1.NumberCyclesInStage11) )
	[ ] Protocol2.Repeat2.ClickCell( {1,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp111))
	[ ] Protocol2.Repeat2.ClickCell( {1,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs111))
	[ ] Protocol2.Repeat2.ClickCell( {1,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics111)
	[ ] Protocol2.Repeat2.ClickCell( {2,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp112))
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str (rData1.Secs112))
	[ ] Protocol2.Repeat2.ClickCell( {2,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics112)
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] //
	[ ] // Define stage 2
	[ ] // Stage2: 5-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "5-Temperature Cycle" )
	[ ] Protocol2.N2.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N2.SetText(Str(rData1.NumberCyclesInStage12) )
	[ ] Protocol2.Repeat22.ClickCell( {1,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp121))
	[ ] Protocol2.Repeat22.ClickCell( {1,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs121))
	[ ] Protocol2.Repeat22.ClickCell( {1,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics121)
	[ ] //
	[ ] Protocol2.Repeat22.ClickCell( {2,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp122))
	[ ] Protocol2.Repeat22.ClickCell( {2,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs122))
	[ ] Protocol2.Repeat22.ClickCell( {2,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics122)
	[ ] Protocol2.Repeat22.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat22.ClickCell( {3,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp123))
	[ ] Protocol2.Repeat22.ClickCell( {3,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs123))
	[ ] Protocol2.Repeat22.ClickCell( {3,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics123)
	[ ] Protocol2.Repeat22.ClickCell( {3,2} )
	[ ] //
	[ ] Protocol2.Repeat22.ClickCell( {4,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp124))
	[ ] Protocol2.Repeat22.ClickCell( {4,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs124))
	[ ] Protocol2.Repeat22.ClickCell( {4,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics124)
	[ ] Protocol2.Repeat22.ClickCell( {4,2} )
	[ ] //
	[ ] Protocol2.Repeat22.ClickCell( {5,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp125))
	[ ] Protocol2.Repeat22.ClickCell( {5,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs125))
	[ ] Protocol2.Repeat22.ClickCell( {5,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics125)
	[ ] Protocol2.Repeat22.ClickCell( {5,2} )
	[ ] //
	[ ] // Define stage 3
	[ ] // Stage3: 3-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "3-Temperature Cycle" )
	[ ] Protocol2.N3.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N3.SetText(Str( rData1.NumberCyclesInStage13))
	[ ] Protocol2.Repeat33.ClickCell( {1,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp131))
	[ ] Protocol2.Repeat33.ClickCell( {1,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs131))
	[ ] Protocol2.Repeat33.ClickCell( {1,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics131)
	[ ] Protocol2.Repeat33.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {2,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp132))
	[ ] Protocol2.Repeat33.ClickCell( {2,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs132))
	[ ] Protocol2.Repeat33.ClickCell( {2,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select(rData1.Optics132)
	[ ] Protocol2.Repeat33.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {3,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp133))
	[ ] Protocol2.Repeat33.ClickCell( {3,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs133))
	[ ] Protocol2.Repeat33.ClickCell( {3,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics133)
	[ ] Protocol2.Repeat33.ClickCell( {3,2} )
	[ ] //
	[ ]  Protocol2.OK.Click()
	[ ] //
[ ] //
[ ] //
[ ] // DefineANS-17 Protocol 2 function define protocol with 4 stages
[ ] // Stage 1: 4-Temperature Cycle
[ ] //Stage 2: 2-Temperature Cycle
[ ] // Stage 3: 3-Temperature Cycle
[ ] // Stage 4: Melt
[+] DefineANS_17_Protocol2 (REC_ANS_17_PROTOCOL rData1)
	[ ] // Define stage 1
	[ ] //Stage 1: 4-Temperature Cycle
	[ ] Protocol2.SetActive( )
	[ ] Protocol2.Stage11.Select( "4-Temperature Cycle" )
	[ ] Protocol2.N1.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N1.SetText( Str(rData1.NumberCyclesInStage21) )
	[ ] Protocol2.Repeat2.ClickCell( {1,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp211))
	[ ] Protocol2.Repeat2.ClickCell( {1,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs211))
	[ ] Protocol2.Repeat2.ClickCell( {1,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics211)
	[ ] Protocol2.Repeat2.ClickCell( {2,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp212))
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str (rData1.Secs212))
	[ ] Protocol2.Repeat2.ClickCell( {2,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics212)
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat2.ClickCell( {3,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp213))
	[ ] Protocol2.Repeat2.ClickCell( {3,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str (rData1.Secs213))
	[ ] Protocol2.Repeat2.ClickCell( {3,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics213)
	[ ] Protocol2.Repeat2.ClickCell( {3,2} )
	[ ] //
	[ ] Protocol2.Repeat2.ClickCell( {4,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp214))
	[ ] Protocol2.Repeat2.ClickCell( {4,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str (rData1.Secs214))
	[ ] Protocol2.Repeat2.ClickCell( {4,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics214)
	[ ] Protocol2.Repeat2.ClickCell( {4,2} )
	[ ] //
	[ ] // Define stage 2
	[ ] // Stage2: 2-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "2-Temperature Cycle" )
	[ ] Protocol2.N2.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N2.SetText(Str(rData1.NumberCyclesInStage22) )
	[ ] Protocol2.Repeat22.ClickCell( {1,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp221))
	[ ] Protocol2.Repeat22.ClickCell( {1,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs221))
	[ ] Protocol2.Repeat22.ClickCell( {1,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics221)
	[ ] Protocol2.Repeat22.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat22.ClickCell( {2,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp222))
	[ ] Protocol2.Repeat22.ClickCell( {2,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs222))
	[ ] Protocol2.Repeat22.ClickCell( {2,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics222)
	[ ] Protocol2.Repeat22.ClickCell( {2,2} )
	[ ] //
	[ ] // Define stage 3
	[ ] // Stage3: 3-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "3-Temperature Cycle" )
	[ ] Protocol2.N3.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N3.SetText(Str( rData1.NumberCyclesInStage23))
	[ ] Protocol2.Repeat33.ClickCell( {1,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp231))
	[ ] Protocol2.Repeat33.ClickCell( {1,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs231))
	[ ] Protocol2.Repeat33.ClickCell( {1,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics231)
	[ ] Protocol2.Repeat33.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {2,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp232))
	[ ] Protocol2.Repeat33.ClickCell( {2,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs232))
	[ ] Protocol2.Repeat33.ClickCell( {2,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics232)
	[ ] Protocol2.Repeat33.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {3,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp233))
	[ ] Protocol2.Repeat33.ClickCell( {3,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs233))
	[ ] Protocol2.Repeat33.ClickCell( {3,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics233)
	[ ] Protocol2.Repeat33.ClickCell( {3,2} )
	[ ] //
	[ ] // Define stage 4
	[ ] // // Stage 4: Melt Curve
	[ ] Protocol2.Stage11.Select( "Melt Curve" )
	[ ] Protocol2.Stage12.ClickCell( {1,1} )
	[ ] Protocol2.Stage12.ComCepheidGenexpertUiUtil.SetText (Str(rData1.StartTemp2))
	[ ] Protocol2.Stage12.ClickCell( {1,2} )
	[ ] Protocol2.Stage12.ComCepheidGenexpertUiUtil.SetText (Str(rData1.EndTemp2))
	[ ] Protocol2.Stage12.ClickCell( {1,3} )
	[ ] Protocol2.Stage12.ComCepheidGenexpertUiUtil.SetText ((rData1.CSec2))
	[ ] //
	[ ]  Protocol2.OK.Click()
[ ] //
[ ] //
[ ] // DefineANS-20 Protocol function define protocol with 3 stages 
[ ] // Stage1: 2-Temperature Cycle
[ ] //Stage2: 5-Temperature Cycle
[ ] // Stage3: 2-Temperature Cycle
[+] DefineANS_20_Protocol(REC_ANS_20_PROTOCOL rData1)
	[ ] // Define stage 1
	[ ] //Stage 1: 2-Temperature Cycle
	[ ] Protocol2.SetActive( )
	[ ] Protocol2.Stage11.Select( "2-Temperature Cycle" )
	[ ] Protocol2.N1.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N1.SetText( Str(rData1.NumberCyclesInStage1) )
	[ ] Protocol2.Repeat2.ClickCell( {1,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp11))
	[ ] Protocol2.Repeat2.ClickCell( {1,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs11))
	[ ] Protocol2.Repeat2.ClickCell( {1,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics11)
	[ ] Protocol2.Repeat2.ClickCell( {2,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp12))
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str (rData1.Secs12))
	[ ] Protocol2.Repeat2.ClickCell( {2,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics12)
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] //
	[ ] // Define stage 2
	[ ] // Stage2: 5-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "5-Temperature Cycle" )
	[ ] Protocol2.N2.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N2.SetText(Str(rData1.NumberCyclesInStage2) )
	[ ] Protocol2.Repeat22.ClickCell( {1,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp21))
	[ ] Protocol2.Repeat22.ClickCell( {1,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs21))
	[ ] Protocol2.Repeat22.ClickCell( {1,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics21)
	[ ] Protocol2.Repeat22.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat22.ClickCell( {2,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp22))
	[ ] Protocol2.Repeat22.ClickCell( {2,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs22))
	[ ] Protocol2.Repeat22.ClickCell( {2,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics22)
	[ ] Protocol2.Repeat22.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat22.ClickCell( {3,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp23))
	[ ] Protocol2.Repeat22.ClickCell( {3,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs23))
	[ ] Protocol2.Repeat22.ClickCell( {3,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics23)
	[ ] Protocol2.Repeat22.ClickCell( {3,2} )
	[ ] //
	[ ] Protocol2.Repeat22.ClickCell( {4,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp24))
	[ ] Protocol2.Repeat22.ClickCell( {4,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs24))
	[ ] Protocol2.Repeat22.ClickCell( {4,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics24)
	[ ] Protocol2.Repeat22.ClickCell( {4,2} )
	[ ] //
	[ ] Protocol2.Repeat22.ClickCell( {5,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp25))
	[ ] Protocol2.Repeat22.ClickCell( {5,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs25))
	[ ] Protocol2.Repeat22.ClickCell( {5,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics25)
	[ ] Protocol2.Repeat22.ClickCell( {5,2} )
	[ ] 
	[ ] // Define stage 3
	[ ] // Stage3: 3-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "3-Temperature Cycle" )
	[ ] Protocol2.N3.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N3.SetText(Str( rData1.NumberCyclesInStage3))
	[ ] Protocol2.Repeat33.ClickCell( {1,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp31))
	[ ] Protocol2.Repeat33.ClickCell( {1,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs31))
	[ ] Protocol2.Repeat33.ClickCell( {1,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics31)
	[ ] Protocol2.Repeat33.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {2,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp32))
	[ ] Protocol2.Repeat33.ClickCell( {2,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs32))
	[ ] Protocol2.Repeat33.ClickCell( {2,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics32)
	[ ] Protocol2.Repeat33.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {3,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp33))
	[ ] Protocol2.Repeat33.ClickCell( {3,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs33))
	[ ] Protocol2.Repeat33.ClickCell( {3,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics33)
	[ ] Protocol2.Repeat33.ClickCell( {3,2} )
	[ ] //
	[ ] Protocol2.OK.Click()
[ ] //
[ ] //
[ ] // Define ANS-21 prptocol 1
[ ] // Stage1: 2-Temperature Cycle
[ ] //Stage2: 5-Temperature Cycle
[ ] // Stage3: 3-Temperature Cycle
[ ] // Stage4: Hold
[+] DefineANS_21_Protocol_1(REC_ANS_21_PROTOCOL rData1)
	[ ] // Define stage 1 in Protocol 1
	[ ] //Stage 1: 2-Temperature Cycle
	[ ] Protocol2.SetActive( )
	[ ] Protocol2.Stage11.Select( "2-Temperature Cycle" )
	[ ] Protocol2.N1.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N1.SetText( Str(rData1.NumberCyclesInStage11) )
	[ ] Protocol2.Repeat2.ClickCell( {1,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp111))
	[ ] Protocol2.Repeat2.ClickCell( {1,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs111))
	[ ] Protocol2.Repeat2.ClickCell( {1,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics111)
	[ ] Protocol2.Repeat2.ClickCell( {2,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp112))
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str (rData1.Secs112))
	[ ] Protocol2.Repeat2.ClickCell( {2,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics112)
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] //
	[ ] // Define stage 2  in Protocol 1
	[ ] // Stage2: 5-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "5-Temperature Cycle" )
	[ ] Protocol2.N2.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N2.SetText(Str(rData1.NumberCyclesInStage12) )
	[ ] Protocol2.Repeat22.ClickCell( {1,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp121))
	[ ] Protocol2.Repeat22.ClickCell( {1,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs121))
	[ ] Protocol2.Repeat22.ClickCell( {1,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics121)
	[ ] Protocol2.Repeat22.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat22.ClickCell( {2,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp122))
	[ ] Protocol2.Repeat22.ClickCell( {2,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs122))
	[ ] Protocol2.Repeat22.ClickCell( {2,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics122)
	[ ] Protocol2.Repeat22.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat22.ClickCell( {3,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp123))
	[ ] Protocol2.Repeat22.ClickCell( {3,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs123))
	[ ] Protocol2.Repeat22.ClickCell( {3,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics123)
	[ ] Protocol2.Repeat22.ClickCell( {3,2} )
	[ ] //
	[ ] Protocol2.Repeat22.ClickCell( {4,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp124))
	[ ] Protocol2.Repeat22.ClickCell( {4,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs124))
	[ ] Protocol2.Repeat22.ClickCell( {4,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics124)
	[ ] Protocol2.Repeat22.ClickCell( {4,2} )
	[ ] //
	[ ] Protocol2.Repeat22.ClickCell( {5,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp125))
	[ ] Protocol2.Repeat22.ClickCell( {5,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs125))
	[ ] Protocol2.Repeat22.ClickCell( {5,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics125)
	[ ] Protocol2.Repeat22.ClickCell( {5,2} )
	[ ] 
	[ ] // Define stage 3  in Protocol 1
	[ ] // Stage3: 3-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "3-Temperature Cycle" )
	[ ] Protocol2.N3.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N3.SetText(Str( rData1.NumberCyclesInStage13))
	[ ] Protocol2.Repeat33.ClickCell( {1,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp131))
	[ ] Protocol2.Repeat33.ClickCell( {1,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs131))
	[ ] Protocol2.Repeat33.ClickCell( {1,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics131)
	[ ] Protocol2.Repeat33.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {2,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp132))
	[ ] Protocol2.Repeat33.ClickCell( {2,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs132))
	[ ] Protocol2.Repeat33.ClickCell( {2,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics132)
	[ ] Protocol2.Repeat33.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {3,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp133))
	[ ] Protocol2.Repeat33.ClickCell( {3,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs133))
	[ ] Protocol2.Repeat33.ClickCell( {3,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics133)
	[ ] Protocol2.Repeat33.ClickCell( {3,2} )
	[ ] //
	[ ] // Define Stage 4
	[ ] // Stage4: Hold
	[ ] Protocol2.Stage11.Select( "Hold" )
	[ ] Protocol2.Stage12.ClickCell( {1,1} )
	[ ] Protocol2.Stage12.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp141))
	[ ] Protocol2.Stage12.ClickCell( {1,2} )
	[ ] Protocol2.Stage12.ComCepheidGenexpertUiUtil.SetText(Str (rData1.Secs141))
	[ ] Protocol2.OK.Click()
	[ ] //
	[ ] 
[ ] //
[ ] //
[ ] // Define ANS-21 prptocol 2
[ ] // Stage1: Hold
[ ] //Stage2: 3-Temperature Cycle
[ ] // Stage3: 3-Temperature Cycle
[ ] // Stage4: 3-Temperature Cycle
[+] DefineANS_21_Protocol_2(REC_ANS_21_PROTOCOL rData1)
	[ ] // Define Stage 1 in Protocol 2
	[ ] // Stage1: Hold
	[ ] Protocol2.Stage11.Select( "Hold" )
	[ ]  Protocol2.Stage12.ClickCell( {1,1} )
	[ ] Protocol2.Stage12.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp211))
	[ ]  Protocol2.Stage12.ClickCell( {1,2} )
	[ ] Protocol2.Stage12.ComCepheidGenexpertUiUtil.SetText(Str (rData1.Secs211))
	[ ] //
	[ ] // Define stage 2  in Protocol 2
	[ ] // Stage2: 3-Temperature Cycle
	[ ] Protocol2.Stage21.Select( "3-Temperature Cycle" )
	[ ] Protocol2.N2.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N2.SetText(Str(rData1.NumberCyclesInStage22))
	[ ] Protocol2.Repeat11.ClickCell( {1,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp221))
	[ ] Protocol2.Repeat11.ClickCell( {1,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs221))
	[ ] Protocol2.Repeat11.ClickCell( {1,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics221)
	[ ] Protocol2.Repeat11.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat11.ClickCell( {2,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp222))
	[ ] Protocol2.Repeat11.ClickCell( {2,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs222))
	[ ] Protocol2.Repeat11.ClickCell( {2,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics222)
	[ ] Protocol2.Repeat11.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat11.ClickCell( {3,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp223))
	[ ] Protocol2.Repeat11.ClickCell( {3,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs223))
	[ ] Protocol2.Repeat11.ClickCell( {3,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics223)
	[ ] Protocol2.Repeat11.ClickCell( {3,2} )
	[ ] //
	[ ] // Define stage 3  in Protocol 2
	[ ] // Stage3: 2-Temperature Cycle
	[ ] Protocol2.Stage21.Select( "2-Temperature Cycle" )
	[ ] Protocol2.N3.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N3.SetText(Str(rData1.NumberCyclesInStage23))
	[ ] Protocol2.Repeat22.ClickCell( {1,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp231))
	[ ] Protocol2.Repeat22.ClickCell( {1,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs231))
	[ ] Protocol2.Repeat22.ClickCell( {1,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics231)
	[ ] Protocol2.Repeat22.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat22.ClickCell( {2,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp232))
	[ ] Protocol2.Repeat22.ClickCell( {2,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs232))
	[ ] Protocol2.Repeat22.ClickCell( {2,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics232)
	[ ] Protocol2.Repeat22.ClickCell( {2,2} )
	[ ] //
	[ ] // Define stage 4 in Protocol 2
	[ ] // Stage4: 3-Temperature Cycle
	[ ] Protocol2.Stage21.Select( "3-Temperature Cycle" )
	[ ] Protocol2.N4.SetPosition( 1, 2 )
	[ ] Protocol2.N4.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N4.SetText(Str(rData1.NumberCyclesInStage24))
	[ ] Protocol2.Repeat33.ClickCell( {1,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp241))
	[ ] Protocol2.Repeat33.ClickCell( {1,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs241))
	[ ] Protocol2.Repeat33.ClickCell( {1,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics241)
	[ ] Protocol2.Repeat33.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {2,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp242))
	[ ] Protocol2.Repeat33.ClickCell( {2,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs242))
	[ ] Protocol2.Repeat33.ClickCell( {2,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics242)
	[ ] Protocol2.Repeat33.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {3,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp243))
	[ ] Protocol2.Repeat33.ClickCell( {3,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs243))
	[ ] Protocol2.Repeat33.ClickCell( {3,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics243)
	[ ] Protocol2.Repeat33.ClickCell( {3,2} )
	[ ] //
	[ ] Protocol2.OK.Click()
[ ] //
[ ] //
[ ] // Define ANS-22
[ ] // Stage1: Hold
[ ] // Stage2: 2-Temperature Cycle
[ ] // Stage3: 3-Temperature Cycle
[ ] // Stage4: 2-Temperature Cycle
[ ] // Stage5: Hold
[-] DefineANS_22_Protocol(REC_ANS_22_PROTOCOL rData1)
	[ ] // Define Stage 1
	[ ] // Stage1: Hold
	[ ] Protocol2.Stage11.Select( "Hold" )
	[ ]  Protocol2.Stage12.ClickCell( {1,1} )
	[ ] Protocol2.Stage12.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp11))
	[ ]  Protocol2.Stage12.ClickCell( {1,2} )
	[ ] Protocol2.Stage12.ComCepheidGenexpertUiUtil.SetText(Str (rData1.Secs11))
	[ ] //
	[ ] // Define stage 2
	[ ] // Stage2: 2-Temperature Cycle
	[ ] Protocol2.Stage21.Select( "2-Temperature Cycle" )
	[ ] Protocol2.N2.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N2.SetText(Str(rData1.NumberCyclesInStage2) )
	[ ] Protocol2.Repeat2.ClickCell( {1,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp21))
	[ ] Protocol2.Repeat2.ClickCell( {1,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs21))
	[ ] Protocol2.Repeat2.ClickCell( {1,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics21)
	[ ] Protocol2.Repeat2.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat2.ClickCell( {2,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp22))
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs22))
	[ ] Protocol2.Repeat2.ClickCell( {2,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics22)
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] //
	[ ] // Define stage 3 
	[ ] // Stage3: 3-Temperature Cycle
	[ ] Protocol2.Stage21.Select( "3-Temperature Cycle" )
	[ ] Protocol2.N3.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N3.SetText(Str( rData1.NumberCyclesInStage3))
	[ ] Protocol2.Repeat33.ClickCell( {1,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp31))
	[ ] Protocol2.Repeat33.ClickCell( {1,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs31))
	[ ] Protocol2.Repeat33.ClickCell( {1,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics31)
	[ ] Protocol2.Repeat33.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {2,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp32))
	[ ] Protocol2.Repeat33.ClickCell( {2,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs32))
	[ ] Protocol2.Repeat33.ClickCell( {2,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics32)
	[ ] Protocol2.Repeat33.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {3,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp33))
	[ ] Protocol2.Repeat33.ClickCell( {3,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs33))
	[ ] Protocol2.Repeat33.ClickCell( {3,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics33)
	[ ] Protocol2.Repeat33.ClickCell( {3,2} )
	[ ] // Define stage 4 i
	[ ] // Stage4: 2-Temperature Cycle
	[ ] Protocol2.Stage21.Select( "3-Temperature Cycle" )
	[ ] Protocol2.N4.SetPosition( 1, 2 )
	[ ] Protocol2.N4.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N4.SetText(Str(rData1.NumberCyclesInStage4))
	[ ] Protocol2.Repeat33.ClickCell( {1,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp41))
	[ ] Protocol2.Repeat33.ClickCell( {1,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs41))
	[ ] Protocol2.Repeat33.ClickCell( {1,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics41)
	[ ] Protocol2.Repeat33.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {2,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp42))
	[ ] Protocol2.Repeat33.ClickCell( {2,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs42))
	[ ] Protocol2.Repeat33.ClickCell( {2,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics42)
	[ ] Protocol2.Repeat33.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat3.SetPosition( 578 )
	[ ] 
	[ ] // Define Stage5
	[ ] // Stage6:Hold
	[ ] Protocol2.Stage21.Select( "Hold" )
	[ ] Protocol2.Stage3.ClickCell( {1,1} )
	[ ] Protocol2.Stage3.Zz.SetText (Str(rData1.Temp51))
	[ ] Protocol2.Stage3.ClickCell( {1,2} )
	[ ] Protocol2.Stage3.Zz.SetText (Str(rData1.Secs51))
	[ ] //
	[ ] // Save Protocol
	[ ]  Protocol2.OK.Click()
	[ ] //
	[ ] 
	[ ] //
	[ ] 
[ ] //
[ ] //
[ ] // Define ANS-23 prptocol 1
[ ] // Stage1: 2-Temperature Cycle
[ ] // Stage2: 3-Temperature Cycle
[+] DefineANS_23_Protocol_1(REC_ANS_23_PROTOCOL rData1)
	[ ] // Define stage 1in Protocol 1
	[ ] //Stage 1: 2-Temperature Cycle
	[ ] Protocol2.SetActive( )
	[ ] Protocol2.Stage11.Select( "2-Temperature Cycle" )
	[ ] Protocol2.N1.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N1.SetText(Str(rData1.NumberCyclesInStage11))
	[ ] Protocol2.Repeat2.ClickCell( {1,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp111))
	[ ] Protocol2.Repeat2.ClickCell( {1,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs111))
	[ ] Protocol2.Repeat2.ClickCell( {1,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics111)
	[ ] Protocol2.Repeat2.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat2.ClickCell( {2,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp112))
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs112))
	[ ] Protocol2.Repeat2.ClickCell( {2,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics112)
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] //
	[ ] //Define Stage 2 in Protocol 1
	[ ] // Stage3: 3-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "3-Temperature Cycle" )
	[ ] Protocol2.N2.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N2.SetText(Str(rData1.NumberCyclesInStage12) )
	[ ] Protocol2.Repeat22.ClickCell( {1,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp121))
	[ ] Protocol2.Repeat22.ClickCell( {1,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs121))
	[ ] Protocol2.Repeat22.ClickCell( {1,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics121)
	[ ] Protocol2.Repeat22.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat22.ClickCell( {2,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp122))
	[ ] Protocol2.Repeat22.ClickCell( {2,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs122))
	[ ] Protocol2.Repeat22.ClickCell( {2,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics122)
	[ ] Protocol2.Repeat22.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat22.ClickCell( {3,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp123))
	[ ] Protocol2.Repeat22.ClickCell( {3,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs123))
	[ ] Protocol2.Repeat22.ClickCell( {3,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics123)
	[ ] Protocol2.Repeat22.ClickCell( {3,2} )
	[ ] //
	[ ] // Save Protocol
	[ ]  Protocol2.OK.Click()
	[ ] //
[ ] //
[ ] //
[ ] // Define ANS-23 prptocol 2
[ ] // Stage1: 2-Temperature Cycle
[ ] // Stage2: 3-Temperature Cycle
[+] DefineANS_23_Protocol_2(REC_ANS_23_PROTOCOL rData1)
	[ ] // Define Stage 1 in Protocol 2
	[ ] Protocol2.Stage11.Select( "4-Temperature Cycle" )
	[ ] Protocol2.N1.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N1.SetText(Str(rData1.NumberCyclesInStage21))
	[ ] Protocol2.Repeat2.ClickCell( {1,1})
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp211))
	[ ] Protocol2.Repeat2.ClickCell( {1,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs211))
	[ ] Protocol2.Repeat2.ClickCell( {1,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics211)
	[ ] Protocol2.Repeat2.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat2.ClickCell( {2,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp212))
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs212))
	[ ] Protocol2.Repeat2.ClickCell( {2,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics212)
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat2.ClickCell( {3,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp213))
	[ ] Protocol2.Repeat2.ClickCell( {3,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs213))
	[ ] Protocol2.Repeat2.ClickCell( {3,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics213)
	[ ] Protocol2.Repeat2.ClickCell( {3,2} )
	[ ] //
	[ ] Protocol2.Repeat2.ClickCell( {4,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp214))
	[ ] Protocol2.Repeat2.ClickCell( {4,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs214))
	[ ] Protocol2.Repeat2.ClickCell( {4,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics214)
	[ ] Protocol2.Repeat2.ClickCell( {4,2} )
	[ ] //
	[ ] //Define Stage 2 in Protocol 2
	[ ] // Stage2: 2-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "2-Temperature Cycle" )
	[ ] Protocol2.N2.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N2.SetText(Str(rData1.NumberCyclesInStage12) )
	[ ] Protocol2.Repeat22.ClickCell( {1,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp221))
	[ ] Protocol2.Repeat22.ClickCell( {1,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs221))
	[ ] Protocol2.Repeat22.ClickCell( {1,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics221)
	[ ] Protocol2.Repeat22.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat22.ClickCell( {2,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp222))
	[ ] Protocol2.Repeat22.ClickCell( {2,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs222))
	[ ] Protocol2.Repeat22.ClickCell( {2,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics222)
	[ ] Protocol2.Repeat22.ClickCell( {2,2} )
	[ ] //
	[ ] // Save Protocol 2
	[ ]  Protocol2.OK.Click()
[ ] //
[ ] //
[ ] // Define protocol ANS-25
[ ] // Stage1: 2-Temperature Cycle
[ ] //Stage2: 4-Temperature Cycle
[ ] 
[+] DefineANS_25_Protocol(REC_ANS_25_PROTOCOL rData1)
	[ ] // Define stage 1
	[ ] //Stage 1: 2-Temperature Cycle
	[ ] Protocol2.SetActive( )
	[ ] Protocol2.Stage11.Select( "2-Temperature Cycle" )
	[ ] Protocol2.N1.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N1.SetText( Str(rData1.NumberCyclesInStage1) )
	[ ] Protocol2.Repeat2.ClickCell( {1,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp11))
	[ ] Protocol2.Repeat2.ClickCell( {1,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs11))
	[ ] Protocol2.Repeat2.ClickCell( {1,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics11)
	[ ] Protocol2.Repeat2.ClickCell( {2,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp12))
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str (rData1.Secs12))
	[ ] Protocol2.Repeat2.ClickCell( {2,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics12)
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] //
	[ ] // Define stage 2
	[ ] // Stage2: 4-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "4-Temperature Cycle" )
	[ ] Protocol2.N2.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N2.SetText(Str(rData1.NumberCyclesInStage2) )
	[ ] Protocol2.Repeat22.ClickCell( {1,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp21))
	[ ] Protocol2.Repeat22.ClickCell( {1,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs21))
	[ ] Protocol2.Repeat22.ClickCell( {1,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics21)
	[ ] Protocol2.Repeat22.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat22.ClickCell( {2,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp22))
	[ ] Protocol2.Repeat22.ClickCell( {2,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs22))
	[ ] Protocol2.Repeat22.ClickCell( {2,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics22)
	[ ] Protocol2.Repeat22.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat22.ClickCell( {3,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp23))
	[ ] Protocol2.Repeat22.ClickCell( {3,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs23))
	[ ] Protocol2.Repeat22.ClickCell( {3,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics23)
	[ ] Protocol2.Repeat22.ClickCell( {3,2} )
	[ ] //
	[ ] Protocol2.Repeat22.ClickCell( {4,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp24))
	[ ] Protocol2.Repeat22.ClickCell( {4,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs24))
	[ ] Protocol2.Repeat22.ClickCell( {4,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics24)
	[ ] Protocol2.Repeat22.ClickCell( {4,2} )
	[ ]  Protocol2.OK.Click()
	[ ] //
[ ] //
[ ] //
[ ] // Define protocol ANS-24
[ ] // Stage1: 2-Temperature Cycle
[ ] //Stage2: 3-Temperature Cycle
[ ] // Stage3: 4-Temperature Cycle
[ ] // Stage4: 5-Temperature Cycle
[ ] // Stage5: 2-Temperature Cycle
[ ] // Stage6: 3-Temperature Cycle
[ ] // Stage7: Hold
[ ] // Stage8: Melt
[+] DefineANS_24_Protocol(REC_ANS_24_PROTOCOL rData1)
	[ ] // Define stage 1
	[ ] //Stage 1: 2-Temperature Cycle
	[ ] Protocol2.SetActive( )
	[ ] Protocol2.Stage11.Select( "2-Temperature Cycle" )
	[ ] Protocol2.N1.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N1.SetText( Str(rData1.NumberCyclesInStage1) )
	[ ] Protocol2.Repeat2.ClickCell( {1,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp11))
	[ ] Protocol2.Repeat2.ClickCell( {1,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs11))
	[ ] Protocol2.Repeat2.ClickCell( {1,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics11)
	[ ] Protocol2.Repeat2.ClickCell( {2,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp12))
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str (rData1.Secs12))
	[ ] Protocol2.Repeat2.ClickCell( {2,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics12)
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] //
	[ ] // Define stage 2
	[ ] // Stage2: 3-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "3-Temperature Cycle" )
	[ ] Protocol2.N2.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N2.SetText(Str(rData1.NumberCyclesInStage2) )
	[ ] Protocol2.Repeat22.ClickCell( {1,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp21))
	[ ] Protocol2.Repeat22.ClickCell( {1,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs21))
	[ ] Protocol2.Repeat22.ClickCell( {1,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics21)
	[ ] Protocol2.Repeat22.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat22.ClickCell( {2,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp22))
	[ ] Protocol2.Repeat22.ClickCell( {2,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs22))
	[ ] Protocol2.Repeat22.ClickCell( {2,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics22)
	[ ] Protocol2.Repeat22.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat22.ClickCell( {3,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp23))
	[ ] Protocol2.Repeat22.ClickCell( {3,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs23))
	[ ] Protocol2.Repeat22.ClickCell( {3,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics23)
	[ ] Protocol2.Repeat22.ClickCell( {3,2} )
	[ ] //
	[ ] // Define stage 3
	[ ] // Stage3: 4-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "4-Temperature Cycle" )
	[ ] Protocol2.N3.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N3.SetText(Str( rData1.NumberCyclesInStage3))
	[ ] Protocol2.Repeat33.ClickCell( {1,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp31))
	[ ] Protocol2.Repeat33.ClickCell( {1,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs31))
	[ ] Protocol2.Repeat33.ClickCell( {1,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics31)
	[ ] Protocol2.Repeat33.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {2,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp32))
	[ ] Protocol2.Repeat33.ClickCell( {2,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs32))
	[ ] Protocol2.Repeat33.ClickCell( {2,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics32)
	[ ] Protocol2.Repeat33.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {3,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp33))
	[ ] Protocol2.Repeat33.ClickCell( {3,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs33))
	[ ] Protocol2.Repeat33.ClickCell( {3,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics33)
	[ ] Protocol2.Repeat33.ClickCell( {3,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {4,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp34))
	[ ] Protocol2.Repeat33.ClickCell( {4,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs34))
	[ ] Protocol2.Repeat33.ClickCell( {4,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics34)
	[ ] Protocol2.Repeat33.ClickCell( {4,2} )
	[ ] //
	[ ] // Define stage 4
	[ ] // Stage4: 5-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "5-Temperature Cycle" )
	[ ] Protocol2.N4.SetPosition( 1, 2 )
	[ ] Protocol2.N4.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N4.SetText(Str(rData1.NumberCyclesInStage4))
	[ ] Protocol2.Repeat42.ClickCell( {1,1} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp41))
	[ ] Protocol2.Repeat42.ClickCell( {1,2} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs41))
	[ ] Protocol2.Repeat42.ClickCell( {1,3} )
	[ ] Protocol2.Repeat42.JavaxSwingJComboBox.Select (rData1.Optics41)
	[ ] Protocol2.Repeat42.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat42.ClickCell( {2,1} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp42))
	[ ] Protocol2.Repeat42.ClickCell( {2,2} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs42))
	[ ] Protocol2.Repeat42.ClickCell( {2,3} )
	[ ] Protocol2.Repeat42.JavaxSwingJComboBox.Select (rData1.Optics42)
	[ ] Protocol2.Repeat42.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat42.ClickCell( {3,1} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp43))
	[ ] Protocol2.Repeat42.ClickCell( {3,2} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs43))
	[ ] Protocol2.Repeat42.ClickCell( {3,3} )
	[ ] Protocol2.Repeat42.JavaxSwingJComboBox.Select (rData1.Optics43)
	[ ] Protocol2.Repeat42.ClickCell( {3,2} )
	[ ] //
	[ ] Protocol2.Repeat42.ClickCell( {4,1} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp44))
	[ ] Protocol2.Repeat42.ClickCell( {4,2} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs44))
	[ ] Protocol2.Repeat42.ClickCell( {4,3} )
	[ ] Protocol2.Repeat42.JavaxSwingJComboBox.Select (rData1.Optics44)
	[ ] Protocol2.Repeat42.ClickCell( {4,2} )
	[ ] //
	[ ] Protocol2.Repeat42.ClickCell( {5,1} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp45))
	[ ] Protocol2.Repeat42.ClickCell( {5,2} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs45))
	[ ] Protocol2.Repeat42.ClickCell( {5,3} )
	[ ] Protocol2.Repeat42.JavaxSwingJComboBox.Select (rData1.Optics45)
	[ ] Protocol2.Repeat42.ClickCell( {5,2} )
	[ ] //
	[ ] Protocol2.Repeat3.SetPosition( 578 )
	[ ] // Define Stage 5
	[ ] // Stage 5: 3-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "2-Temperature Cycle" )
	[ ] Protocol2.N5.SetPosition( 1, 2 )
	[ ] Protocol2.N5.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N5.SetText(Str(rData1.NumberCyclesInStage5))
	[ ] Protocol2.Repeat52.ClickCell( {1,1} )
	[ ] Protocol2.Repeat52.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp51))
	[ ] Protocol2.Repeat52.ClickCell( {1,2} )
	[ ] Protocol2.Repeat52.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs51))
	[ ] Protocol2.Repeat52.ClickCell( {1,3} )
	[ ] Protocol2.Repeat52.JavaxSwingJComboBox.Select (rData1.Optics51)
	[ ] Protocol2.Repeat52.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat52.ClickCell( {2,1} )
	[ ] Protocol2.Repeat52.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp52))
	[ ] Protocol2.Repeat52.ClickCell( {2,2} )
	[ ] Protocol2.Repeat52.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs52))
	[ ] Protocol2.Repeat52.ClickCell( {2,3} )
	[ ] Protocol2.Repeat52.JavaxSwingJComboBox.Select (rData1.Optics52)
	[ ] Protocol2.Repeat52.ClickCell( {2,2} )
	[ ] //
	[ ] // Define stage 6
	[ ] // Stage6: 3-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "3-Temperature Cycle" )
	[ ] Protocol2.N6.SetPosition( 1, 2 )
	[ ] Protocol2.N6.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N6.SetText(Str(rData1.NumberCyclesInStage6))
	[ ] Protocol2.Repeat62.ClickCell( {1,1} )
	[ ] Protocol2.Repeat62.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp61))
	[ ] Protocol2.Repeat62.ClickCell( {1,2} )
	[ ] Protocol2.Repeat62.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs61))
	[ ] Protocol2.Repeat62.ClickCell( {1,3} )
	[ ] Protocol2.Repeat62.JavaxSwingJComboBox.Select (rData1.Optics61)
	[ ] Protocol2.Repeat62.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat62.ClickCell( {2,1} )
	[ ] Protocol2.Repeat62.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp62))
	[ ] Protocol2.Repeat62.ClickCell( {2,2} )
	[ ] Protocol2.Repeat62.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs62))
	[ ] Protocol2.Repeat62.ClickCell( {2,3} )
	[ ] Protocol2.Repeat62.JavaxSwingJComboBox.Select (rData1.Optics62)
	[ ] Protocol2.Repeat62.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat62.ClickCell( {3,1} )
	[ ] Protocol2.Repeat62.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp63))
	[ ] Protocol2.Repeat62.ClickCell( {3,2} )
	[ ] Protocol2.Repeat62.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs63))
	[ ] Protocol2.Repeat62.ClickCell( {3,3} )
	[ ] Protocol2.Repeat62.JavaxSwingJComboBox.Select (rData1.Optics63)
	[ ] Protocol2.Repeat62.ClickCell( {3,2} )
	[ ] //
	[ ] Protocol2.Repeat3.SetPosition( 850 )
	[ ] // Define stage 7
	[ ] // Stage7: Hold
	[ ] Protocol2.SetActive( )
	[ ] Protocol2.Stage11.Select( "Hold" )
	[ ] Protocol2.Stage2.ClickCell( {1,1} )
	[ ] Protocol2.Stage22.ComCepheidGenexpertUiUtil.SetText(Str (rData1.Temp71))
	[ ] Protocol2.Stage2.ClickCell( {1,2} )
	[ ] Protocol2.Stage22.ComCepheidGenexpertUiUtil.SetText(Str (rData1.Secs71))
	[ ] //
	[ ] // Define stage 8
	[ ] // Stage8: Melt
	[ ] Protocol2.Stage21.Select( "Melt Curve" )
	[ ]  Protocol2.OK.Click()
[ ] //
[ ] //
[ ] // DefineMRSA1 Protocol function define protocol with 9 stages
[ ] // Stage1: 2-Temperature Cycle
[ ] //Stage2: 2-Temperature Cycle
[ ] // Stage3: 2-Temperature Cycle
[ ] // Stage4: 2-Temperature Cycle
[ ] // Stage5: 2-Temperature Cycle
[ ] // Stage6: 2-Temperature Cycle
[ ] // Stage7: 2-Temperature Cycle
[ ] // Stage8: 2-Temperature Cycle
[ ] // Stage9: End
[+] Define_MRSA1_Protocol(REC_MRSA1_PROTOCOL rData1)
	[ ] // Define stage 1
	[ ] //Stage 1: 2-Temperature Cycle
	[ ] Protocol2.SetActive( )
	[ ] Protocol2.Stage11.Select( "2-Temperature Cycle" )
	[ ] Protocol2.N1.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N1.SetText( Str(rData1.NumberCyclesInStage1) )
	[ ] Protocol2.Repeat2.ClickCell( {1,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp11))
	[ ] Protocol2.Repeat2.ClickCell( {1,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs11))
	[ ] Protocol2.Repeat2.ClickCell( {1,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics11)
	[ ] Protocol2.Repeat2.ClickCell( {2,1} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp12))
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] Protocol2.Repeat11.ComCepheidGenexpertUiUtil.SetText(Str (rData1.Secs12))
	[ ] Protocol2.Repeat2.ClickCell( {2,3} )
	[ ] Protocol2.Repeat11.JavaxSwingJComboBox.Select(rData1.Optics12)
	[ ] Protocol2.Repeat2.ClickCell( {2,2} )
	[ ] //
	[ ] // Define stage 2
	[ ] // Stage2: 3-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "2-Temperature Cycle" )
	[ ] Protocol2.N2.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N2.SetText(Str(rData1.NumberCyclesInStage2) )
	[ ] Protocol2.Repeat22.ClickCell( {1,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp21))
	[ ] Protocol2.Repeat22.ClickCell( {1,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs21))
	[ ] Protocol2.Repeat22.ClickCell( {1,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics21)
	[ ] Protocol2.Repeat22.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat22.ClickCell( {2,1} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp22))
	[ ] Protocol2.Repeat22.ClickCell( {2,2} )
	[ ] Protocol2.Repeat22.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs22))
	[ ] Protocol2.Repeat22.ClickCell( {2,3} )
	[ ] Protocol2.Repeat22.JavaxSwingJComboBox.Select(rData1.Optics22)
	[ ] Protocol2.Repeat22.ClickCell( {2,2} )
	[ ] //
	[ ] // Define stage 3
	[ ] // Stage3: 2-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "2-Temperature Cycle" )
	[ ] Protocol2.N3.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N3.SetText(Str( rData1.NumberCyclesInStage3))
	[ ] Protocol2.Repeat33.ClickCell( {1,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp31))
	[ ] Protocol2.Repeat33.ClickCell( {1,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs31))
	[ ] Protocol2.Repeat33.ClickCell( {1,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics31)
	[ ] Protocol2.Repeat33.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat33.ClickCell( {2,1} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp32))
	[ ] Protocol2.Repeat33.ClickCell( {2,2} )
	[ ] Protocol2.Repeat33.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs32))
	[ ] Protocol2.Repeat33.ClickCell( {2,3} )
	[ ] Protocol2.Repeat33.JavaxSwingJComboBox.Select (rData1.Optics32)
	[ ] Protocol2.Repeat33.ClickCell( {2,2} )
	[ ] //
	[ ] // Define stage 4
	[ ] // Stage4: 2-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "2-Temperature Cycle" )
	[ ] Protocol2.N4.SetPosition( 1, 2 )
	[ ] Protocol2.N4.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N4.SetText(Str(rData1.NumberCyclesInStage4))
	[ ] Protocol2.Repeat42.ClickCell( {1,1} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp41))
	[ ] Protocol2.Repeat42.ClickCell( {1,2} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs41))
	[ ] Protocol2.Repeat42.ClickCell( {1,3} )
	[ ] Protocol2.Repeat42.JavaxSwingJComboBox.Select (rData1.Optics41)
	[ ] Protocol2.Repeat42.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat42.ClickCell( {2,1} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp42))
	[ ] Protocol2.Repeat42.ClickCell( {2,2} )
	[ ] Protocol2.Repeat42.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs42))
	[ ] Protocol2.Repeat42.ClickCell( {2,3} )
	[ ] Protocol2.Repeat42.JavaxSwingJComboBox.Select (rData1.Optics42)
	[ ] Protocol2.Repeat42.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat3.SetPosition( 578 )
	[ ] //
	[ ] // Define Stage 5
	[ ] // Stage 5: 2-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "2-Temperature Cycle" )
	[ ] Protocol2.N5.SetPosition( 1, 2 )
	[ ] Protocol2.N5.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N5.SetText(Str(rData1.NumberCyclesInStage5))
	[ ] Protocol2.Repeat52.ClickCell( {1,1} )
	[ ] Protocol2.Repeat52.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp51))
	[ ] Protocol2.Repeat52.ClickCell( {1,2} )
	[ ] Protocol2.Repeat52.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs51))
	[ ] Protocol2.Repeat52.ClickCell( {1,3} )
	[ ] Protocol2.Repeat52.JavaxSwingJComboBox.Select (rData1.Optics51)
	[ ] Protocol2.Repeat52.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat52.ClickCell( {2,1} )
	[ ] Protocol2.Repeat52.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp52))
	[ ] Protocol2.Repeat52.ClickCell( {2,2} )
	[ ] Protocol2.Repeat52.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs52))
	[ ] Protocol2.Repeat52.ClickCell( {2,3} )
	[ ] Protocol2.Repeat52.JavaxSwingJComboBox.Select (rData1.Optics52)
	[ ] Protocol2.Repeat52.ClickCell( {2,2} )
	[ ] //
	[ ] // Define stage 6
	[ ] // Stage6: 2-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "2-Temperature Cycle" )
	[ ] Protocol2.N6.SetPosition( 1, 2 )
	[ ] Protocol2.N6.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N6.SetText(Str(rData1.NumberCyclesInStage6))
	[ ] Protocol2.Repeat62.ClickCell( {1,1} )
	[ ] Protocol2.Repeat62.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp61))
	[ ] Protocol2.Repeat62.ClickCell( {1,2} )
	[ ] Protocol2.Repeat62.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs61))
	[ ] Protocol2.Repeat62.ClickCell( {1,3} )
	[ ] Protocol2.Repeat62.JavaxSwingJComboBox.Select (rData1.Optics61)
	[ ] Protocol2.Repeat62.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat62.ClickCell( {2,1} )
	[ ] Protocol2.Repeat62.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp62))
	[ ] Protocol2.Repeat62.ClickCell( {2,2} )
	[ ] Protocol2.Repeat62.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs62))
	[ ] Protocol2.Repeat62.ClickCell( {2,3} )
	[ ] Protocol2.Repeat62.JavaxSwingJComboBox.Select (rData1.Optics62)
	[ ] Protocol2.Repeat62.ClickCell( {2,2} )
	[ ] //
	[ ] // Define stage 7
	[ ] // Stage7: 2-Temperature Cycle
	[ ] Protocol2.Stage11.Select( "2-Temperature Cycle" )
	[ ] Protocol2.N7.SetPosition( 1, 2 )
	[ ] Protocol2.N7.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N7.SetText(Str(rData1.NumberCyclesInStage7))
	[ ] Protocol2.Repeat72.ClickCell( {1,1} )
	[ ] Protocol2.Repeat72.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp71))
	[ ] Protocol2.Repeat72.ClickCell( {1,2} )
	[ ] Protocol2.Repeat72.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs71))
	[ ] Protocol2.Repeat72.ClickCell( {1,3} )
	[ ] Protocol2.Repeat72.JavaxSwingJComboBox.Select (rData1.Optics71)
	[ ] Protocol2.Repeat72.ClickCell( {1,2} )
	[ ] //
	[ ] Protocol2.Repeat72.ClickCell( {2,1} )
	[ ] Protocol2.Repeat72.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Temp72))
	[ ] Protocol2.Repeat72.ClickCell( {2,2} )
	[ ] Protocol2.Repeat72.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs72))
	[ ] Protocol2.Repeat72.ClickCell( {2,3} )
	[ ] Protocol2.Repeat72.JavaxSwingJComboBox.Select (rData1.Optics72)
	[ ] Protocol2.Repeat72.ClickCell( {2,2} )
	[ ] //
	[ ] Protocol2.Repeat3.SetPosition( 1112 )
	[ ] //
	[ ] // Define stage 8
	[ ] //Stage 8: 2-Temperature Cycle
	[ ] Protocol2.SetActive( )
	[ ] Protocol2.Stage11.Select( "2-Temperature Cycle" )
	[ ] Protocol2.N8.SetSelRange( 1, 1, 1, 2 )
	[ ] Protocol2.N8.SetText( Str(rData1.NumberCyclesInStage8))
	[ ] Protocol2.Repeat82.ClickCell( {1,1} )
	[ ] Protocol2.Repeat82.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp81))
	[ ] Protocol2.Repeat82.ClickCell( {1,2} )
	[ ] Protocol2.Repeat82.ComCepheidGenexpertUiUtil.SetText (Str(rData1.Secs81))
	[ ] Protocol2.Repeat82.ClickCell( {1,3} )
	[ ] Protocol2.Repeat82.JavaxSwingJComboBox.Select(rData1.Optics81)
	[ ] Protocol2.Repeat82.ClickCell( {2,1} )
	[ ] Protocol2.Repeat82.ComCepheidGenexpertUiUtil.SetText(Str(rData1.Temp82))
	[ ] Protocol2.Repeat82.ClickCell( {2,2} )
	[ ] Protocol2.Repeat82.ComCepheidGenexpertUiUtil.SetText(Str (rData1.Secs82))
	[ ] Protocol2.Repeat82.ClickCell( {2,3} )
	[ ] Protocol2.Repeat82.JavaxSwingJComboBox.Select(rData1.Optics82)
	[ ] Protocol2.Repeat82.ClickCell( {2,2} )
	[ ]  // Define stage9
	[ ]  // Stage 9: End
	[ ] Protocol2.Stage11.Select( "End" )
	[ ] //
	[ ]  Protocol2.OK.Click()
	[ ] //
[ ] //
[ ] //
[ ] //
[+] DefineAdvanceToNewStage1(REC_ANS_1ANALYTE_SET rAdvance)
	[ ] GeneXpert®DxSystem.AssayName2.AddCriterion.Click()
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {1,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.ANSAnalyte1)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {1,4} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorProtocol1)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {1,5} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorStage1 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {1,6} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.AdvanceToStage1)
	[ ] // Set Stop After The New Stage option
	[-] if (rAdvance.StopAfterTheNewStage1 == 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {1,7} )
	[ ] // Stop If No Ct option
	[+] if (rAdvance.StopIfNoCt1== 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {1,8} )
	[ ] //
[ ] //
[+] DefineAdvanceToNewStage2(REC_ANS_2ANALYTES_SET rAdvance)
	[ ] GeneXpert®DxSystem.AssayName2.AddCriterion.Click()
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {1,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.ANSAnalyte1)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {1,4} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorProtocol1)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {1,5} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorStage1 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {1,6} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.AdvanceToStage1)
	[ ] // Set Stop After The New Stage option
	[+] if (rAdvance.StopAfterTheNewStage1 == 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {1,7} )
	[ ] // Stop If No Ct option
	[+] if (rAdvance.StopIfNoCt1== 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {1,8} )
	[ ] //2
	[ ] GeneXpert®DxSystem.AssayName2.AddCriterion.Click()
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {2,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.ANSAnalyte2 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {2,4} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorProtocol2)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {2,5} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorStage2 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {2,6} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.AdvanceToStage2)
	[ ] //Set Stop After The New Stage option
	[-] if (rAdvance.StopAfterTheNewStage2 == 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {2,7} )
	[ ] //Stop If No Ct option
	[-] if (rAdvance.StopIfNoCt2== 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {2,8} )
	[ ] //
[ ] //
[+] DefineAdvanceToNewStage3(REC_ANS_3ANALYTES_SET rAdvance)
	[ ] GeneXpert®DxSystem.AssayName2.AddCriterion.Click()
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {1,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.ANSAnalyte1)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {1,4} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorProtocol1)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {1,5} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorStage1 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {1,6} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.AdvanceToStage1)
	[ ] // Set Stop After The New Stage option
	[-] if (rAdvance.StopAfterTheNewStage1 == 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {1,7} )
	[ ] // Stop If No Ct option
	[+] if (rAdvance.StopIfNoCt1== 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {1,8} )
	[ ] //2
	[ ] GeneXpert®DxSystem.AssayName2.AddCriterion.Click()
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {2,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.ANSAnalyte2 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {2,4} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorProtocol2)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {2,5} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorStage2 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {2,6} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.AdvanceToStage2)
	[ ] //Set Stop After The New Stage option
	[-] if (rAdvance.StopAfterTheNewStage2 == YES)
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {2,7} )
	[ ] //Stop If No Ct option
	[-] if (rAdvance.StopIfNoCt2==YES)
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {2,8} )
	[ ] //3
	[ ] GeneXpert®DxSystem.AssayName2.AddCriterion.Click()
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {3,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.ANSAnalyte3 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {3,4} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorProtocol3)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {3,5} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorStage3)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {3,6} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.AdvanceToStage3)
	[ ] //Set Stop After The New Stage option
	[-] if (rAdvance.StopAfterTheNewStage3 == YES)
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {3,7} )
	[ ] //Stop If No Ct option
	[-] if (rAdvance.StopIfNoCt3== YES)
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {3,8} )
	[ ] 
[ ] //
[+] DefineAdvanceToNewStage4(REC_ANS_4ANALYTES_SET rAdvance)
	[ ] GeneXpert®DxSystem.AssayName2.AddCriterion.Click()
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {1,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.ANSAnalyte1)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {1,4} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorProtocol1)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {1,5} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorStage1 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {1,6} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.AdvanceToStage1)
	[ ] // Set Stop After The New Stage option
	[+] if (rAdvance.StopAfterTheNewStage1 == 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {1,7} )
	[ ] // Stop If No Ct option
	[+] if (rAdvance.StopIfNoCt1== 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {1,8} )
	[ ] //2
	[ ] GeneXpert®DxSystem.AssayName2.AddCriterion.Click()
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {2,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.ANSAnalyte2 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {2,4} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorProtocol2)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {2,5} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorStage2 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {2,6} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.AdvanceToStage2)
	[ ] //Set Stop After The New Stage option
	[-] if (rAdvance.StopAfterTheNewStage2 == 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {2,7} )
	[ ] //Stop If No Ct option
	[-] if (rAdvance.StopIfNoCt2== 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {2,8} )
	[ ] //3
	[ ] GeneXpert®DxSystem.AssayName2.AddCriterion.Click()
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {3,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.ANSAnalyte3 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {3,4} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorProtocol3)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {3,5} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorStage3 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {3,6} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.AdvanceToStage3)
	[ ] //Set Stop After The New Stage option
	[-] if (rAdvance.StopAfterTheNewStage3 == 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {3,7} )
	[ ] //Stop If No Ct option
	[-] if (rAdvance.StopIfNoCt3== 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {3,8} )
	[ ] //4
	[ ] GeneXpert®DxSystem.AssayName2.AddCriterion.Click()
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {4,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.ANSAnalyte4 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {4,4} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorProtocol4)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {4,5} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorStage4 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {4,6} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.AdvanceToStage4)
	[ ] //Set Stop After The New Stage option
	[-] if (rAdvance.StopAfterTheNewStage4 == 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {4,7} )
	[ ] //Stop If No Ct option
	[-] if (rAdvance.StopIfNoCt4== 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {4,8} )
	[ ] //
[ ] //
[+] DefineAdvanceToNewStage6(REC_ANS_6ANALYTES_SET rAdvance)
	[ ] // 1
	[ ] // GeneXpert®DxSystem.AssayName2.AddCriterion.Click()
	[ ] GeneXpert®DxSystem.AssayName2.AddCriterion.Click()
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {1,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.ANSAnalyte1)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {1,4} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorProtocol1)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {1,5} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorStage1 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {1,6} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.AdvanceToStage1)
	[ ] // Set Stop After The New Stage option
	[+] if (rAdvance.StopAfterTheNewStage1 == 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {1,7} )
	[ ] // Stop If No Ct option
	[+] if (rAdvance.StopIfNoCt1== 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {1,8} )
	[ ] //2
	[ ] GeneXpert®DxSystem.AssayName2.AddCriterion.Click()
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {2,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.ANSAnalyte2 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {2,4} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorProtocol2)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {2,5} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorStage2 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {2,6} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.AdvanceToStage2)
	[ ] //Set Stop After The New Stage option
	[-] if (rAdvance.StopAfterTheNewStage2 == 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {2,7} )
	[ ] //Stop If No Ct option
	[-] if (rAdvance.StopIfNoCt2== 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {2,8} )
	[ ] //3
	[ ] GeneXpert®DxSystem.AssayName2.AddCriterion.Click()
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {3,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.ANSAnalyte3 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {3,4} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorProtocol3)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {3,5} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorStage3 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {3,6} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.AdvanceToStage3)
	[ ] //Set Stop After The New Stage option
	[-] if (rAdvance.StopAfterTheNewStage3 == 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {3,7} )
	[ ] //Stop If No Ct option
	[-] if (rAdvance.StopIfNoCt3== 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {3,8} )
	[ ] //4
	[ ] GeneXpert®DxSystem.AssayName2.AddCriterion.Click()
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {4,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.ANSAnalyte4 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {4,4} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorProtocol4)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {4,5} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorStage4 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {4,6} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.AdvanceToStage4)
	[ ] //Set Stop After The New Stage option
	[-] if (rAdvance.StopAfterTheNewStage4 == 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {4,7} )
	[ ] //Stop If No Ct option
	[-] if (rAdvance.StopIfNoCt4== 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {4,8} )
	[ ] //5
	[ ] GeneXpert®DxSystem.AssayName2.AddCriterion.Click()
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {5,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.ANSAnalyte5 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {5,4} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorProtocol5)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {5,5} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorStage5 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {5,6} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.AdvanceToStage5)
	[ ] //Set Stop After The New Stage option
	[-] if (rAdvance.StopAfterTheNewStage5 == 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {5,7} )
	[ ] //Stop If No Ct option
	[-] if (rAdvance.StopIfNoCt5== 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {5,8} )
	[ ] //6
	[ ] GeneXpert®DxSystem.AssayName2.AddCriterion.Click()
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {6,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.ANSAnalyte6 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {6,4} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorProtocol6)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {6,5} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorStage6 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {6,6} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.AdvanceToStage6)
	[ ] //Set Stop After The New Stage option
	[-] if (rAdvance.StopAfterTheNewStage6 == 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {6,7} )
	[ ] //Stop If No Ct option
	[-] if (rAdvance.StopIfNoCt6== 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {6,8} )
	[ ] //
[ ] //
[ ] //
[-] DefineAdvanceToNewStage15(REC_ANS_15ANALYTES_SET rAdvance)
	[ ] GeneXpert®DxSystem.AssayName2.AddCriterion.Click()
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {1,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.ANSAnalyte1)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {1,4} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorProtocol1)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {1,5} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorStage1 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {1,6} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.AdvanceToStage1)
	[ ] // Set Stop After The New Stage option
	[+] if (rAdvance.StopAfterTheNewStage1 == 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {1,7} )
	[ ] // Stop If No Ct option
	[+] if (rAdvance.StopIfNoCt1== 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {1,8} )
	[ ] //2
	[ ] GeneXpert®DxSystem.AssayName2.AddCriterion.Click()
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {2,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.ANSAnalyte2 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {2,4} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorProtocol2)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {2,5} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorStage2 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {2,6} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.AdvanceToStage2)
	[ ] //Set Stop After The New Stage option
	[-] if (rAdvance.StopAfterTheNewStage2 == 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {2,7} )
	[ ] //Stop If No Ct option
	[-] if (rAdvance.StopIfNoCt2== 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {2,8} )
	[ ] //3
	[ ] GeneXpert®DxSystem.AssayName2.AddCriterion.Click()
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {3,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.ANSAnalyte3 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {3,4} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorProtocol3)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {3,5} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorStage3 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {3,6} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.AdvanceToStage3)
	[ ] //Set Stop After The New Stage option
	[-] if (rAdvance.StopAfterTheNewStage3 == 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {3,7} )
	[ ] //Stop If No Ct option
	[-] if (rAdvance.StopIfNoCt3== 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {3,8} )
	[ ] //4
	[ ] GeneXpert®DxSystem.AssayName2.AddCriterion.Click()
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {4,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.ANSAnalyte4 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {4,4} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorProtocol4)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {4,5} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorStage4 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {4,6} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.AdvanceToStage4)
	[ ] //Set Stop After The New Stage option
	[-] if (rAdvance.StopAfterTheNewStage4 == 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {4,7} )
	[ ] //Stop If No Ct option
	[-] if (rAdvance.StopIfNoCt4== 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {4,8} )
	[ ] //5
	[ ] GeneXpert®DxSystem.AssayName2.AddCriterion.Click()
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {5,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.ANSAnalyte5 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {5,4} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorProtocol5)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {5,5} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorStage5 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {5,6} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.AdvanceToStage5)
	[ ] //Set Stop After The New Stage option
	[-] if (rAdvance.StopAfterTheNewStage5 == 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {5,7} )
	[ ] //Stop If No Ct option
	[-] if (rAdvance.StopIfNoCt5== 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {5,8} )
	[ ] //6
	[ ] GeneXpert®DxSystem.AssayName2.AddCriterion.Click()
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {6,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.ANSAnalyte6 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {6,4} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorProtocol6)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {6,5} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorStage6 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {6,6} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.AdvanceToStage6)
	[ ] //Set Stop After The New Stage option
	[-] if (rAdvance.StopAfterTheNewStage6 == 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {6,7} )
	[ ] //Stop If No Ct option
	[-] if (rAdvance.StopIfNoCt6== 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {6,8} )
	[ ] //7
	[ ] GeneXpert®DxSystem.AssayName2.AddCriterion.Click()
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {7,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.ANSAnalyte7 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {7,4} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorProtocol7)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {7,5} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorStage7)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {7,6} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.AdvanceToStage7)
	[ ] //Set Stop After The New Stage option
	[-] if (rAdvance.StopAfterTheNewStage7 == 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {7,7} )
	[ ] //Stop If No Ct option
	[-] if (rAdvance.StopIfNoCt7== 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {7,8} )
	[ ] //8
	[ ] GeneXpert®DxSystem.AssayName2.AddCriterion.Click()
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {8,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.ANSAnalyte8 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {8,4} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorProtocol8)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {8,5} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorStage8)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {8,6} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.AdvanceToStage8)
	[ ] //Set Stop After The New Stage option
	[-] if (rAdvance.StopAfterTheNewStage8 == 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {8,7} )
	[ ] //Stop If No Ct option
	[-] if (rAdvance.StopIfNoCt8== 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {8,8} )
	[ ] //9
	[ ] GeneXpert®DxSystem.AssayName2.AddCriterion.Click()
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {9,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.ANSAnalyte9 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {9,4} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorProtocol9)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {9,5} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorStage9)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {9,6} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.AdvanceToStage9)
	[ ] //Set Stop After The New Stage option
	[-] if (rAdvance.StopAfterTheNewStage9 == 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {9,7} )
	[ ] //Stop If No Ct option
	[-] if (rAdvance.StopIfNoCt9== 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {9,8} )
	[ ] //10
	[ ] GeneXpert®DxSystem.AssayName2.AddCriterion.Click()
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {10,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.ANSAnalyte10 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {10,4} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorProtocol10)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {10,5} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorStage10)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {10,6} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.AdvanceToStage10)
	[ ] //Set Stop After The New Stage option
	[-] if (rAdvance.StopAfterTheNewStage10 == 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {10,7} )
	[ ] //Stop If No Ct option
	[-] if (rAdvance.StopIfNoCt10== 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {10,8} )
	[ ] //11
	[ ] GeneXpert®DxSystem.AssayName2.AddCriterion.Click()
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {11,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.ANSAnalyte11 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {11,4} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorProtocol11)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {11,5} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorStage11)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {11,6} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.AdvanceToStage11)
	[ ] //Set Stop After The New Stage option
	[-] if (rAdvance.StopAfterTheNewStage11 == 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {11,7} )
	[ ] //Stop If No Ct option
	[-] if (rAdvance.StopIfNoCt11== 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {11,8} )
	[ ] //12
	[ ] GeneXpert®DxSystem.AssayName2.AddCriterion.Click()
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {12,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.ANSAnalyte12 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {12,4} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorProtocol12)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {12,5} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorStage12)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {12,6} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.AdvanceToStage12)
	[ ] //Set Stop After The New Stage option
	[-] if (rAdvance.StopAfterTheNewStage12 == 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {12,7} )
	[ ] //Stop If No Ct option
	[-] if (rAdvance.StopIfNoCt12== 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {12,8} )
	[ ] //13
	[ ] GeneXpert®DxSystem.AssayName2.AddCriterion.Click()
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {13,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.ANSAnalyte13 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {13,4} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorProtocol13)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {13,5} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorStage13)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {13,6} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.AdvanceToStage13)
	[ ] //Set Stop After The New Stage option
	[-] if (rAdvance.StopAfterTheNewStage13 == 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {13,7} )
	[ ] //Stop If No Ct option
	[-] if (rAdvance.StopIfNoCt13== 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {13,8} )
	[ ] //14
	[ ] GeneXpert®DxSystem.AssayName2.AddCriterion.Click()
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {14,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.ANSAnalyte14 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {14,4} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorProtocol14)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {14,5} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorStage14)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {14,6} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.AdvanceToStage14)
	[ ] //Set Stop After The New Stage option
	[-] if (rAdvance.StopAfterTheNewStage14 == 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {14,7} )
	[ ] //Stop If No Ct option
	[-] if (rAdvance.StopIfNoCt14== 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {14,8} )
	[ ] //15
	[ ] GeneXpert®DxSystem.AssayName2.AddCriterion.Click()
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {15,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.ANSAnalyte15 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {15,4} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorProtocol15)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {15,5} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorStage15)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {15,6} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.AdvanceToStage15)
	[ ] //Set Stop After The New Stage option
	[-] if (rAdvance.StopAfterTheNewStage15 == 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {15,7} )
	[ ] //Stop If No Ct option
	[-] if (rAdvance.StopIfNoCt15== 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {15,8} )
[ ] 
[-] DefineAdvanceToNewStage16(REC_ANS_16ANALYTES_SET rAdvance)
	[ ] // 1
	[ ] GeneXpert®DxSystem.AssayName2.AddCriterion.Click()
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {1,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.ANSAnalyte1)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {1,4} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorProtocol1)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {1,5} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorStage1 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {1,6} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.AdvanceToStage1)
	[ ] // Set Stop After The New Stage option
	[+] if (rAdvance.StopAfterTheNewStage1 == 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {1,7} )
	[ ] // Stop If No Ct option
	[+] if (rAdvance.StopIfNoCt1== 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {1,8} )
	[ ] //2
	[ ] GeneXpert®DxSystem.AssayName2.AddCriterion.Click()
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {2,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.ANSAnalyte2 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {2,4} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorProtocol2)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {2,5} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorStage2 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {2,6} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.AdvanceToStage2)
	[ ] //Set Stop After The New Stage option
	[-] if (rAdvance.StopAfterTheNewStage2 == 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {2,7} )
	[ ] //Stop If No Ct option
	[-] if (rAdvance.StopIfNoCt2== 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {2,8} )
	[ ] //3
	[ ] GeneXpert®DxSystem.AssayName2.AddCriterion.Click()
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {3,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.ANSAnalyte3 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {3,4} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorProtocol3)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {3,5} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorStage3 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {3,6} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.AdvanceToStage3)
	[ ] //Set Stop After The New Stage option
	[-] if (rAdvance.StopAfterTheNewStage3 == 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {3,7} )
	[ ] //Stop If No Ct option
	[-] if (rAdvance.StopIfNoCt3== 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {3,8} )
	[ ] //4
	[ ] GeneXpert®DxSystem.AssayName2.AddCriterion.Click()
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {4,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.ANSAnalyte4 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {4,4} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorProtocol4)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {4,5} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorStage4 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {4,6} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.AdvanceToStage4)
	[ ] //Set Stop After The New Stage option
	[-] if (rAdvance.StopAfterTheNewStage4 == 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {4,7} )
	[ ] //Stop If No Ct option
	[-] if (rAdvance.StopIfNoCt4== 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {4,8} )
	[ ] //5
	[ ] GeneXpert®DxSystem.AssayName2.AddCriterion.Click()
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {5,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.ANSAnalyte5 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {5,4} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorProtocol5)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {5,5} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorStage5 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {5,6} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.AdvanceToStage5)
	[ ] //Set Stop After The New Stage option
	[-] if (rAdvance.StopAfterTheNewStage5 == 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {5,7} )
	[ ] //Stop If No Ct option
	[-] if (rAdvance.StopIfNoCt5== 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {5,8} )
	[ ] //6
	[ ] GeneXpert®DxSystem.AssayName2.AddCriterion.Click()
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {6,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.ANSAnalyte6 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {6,4} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorProtocol6)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {6,5} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorStage6 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {6,6} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.AdvanceToStage6)
	[ ] //Set Stop After The New Stage option
	[-] if (rAdvance.StopAfterTheNewStage6 == 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {6,7} )
	[ ] //Stop If No Ct option
	[-] if (rAdvance.StopIfNoCt6== 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {6,8} )
	[ ] //7
	[ ] GeneXpert®DxSystem.AssayName2.AddCriterion.Click()
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {7,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.ANSAnalyte7 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {7,4} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorProtocol7)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {7,5} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorStage7)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {7,6} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.AdvanceToStage7)
	[ ] //Set Stop After The New Stage option
	[-] if (rAdvance.StopAfterTheNewStage7 == 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {7,7} )
	[ ] //Stop If No Ct option
	[-] if (rAdvance.StopIfNoCt7== 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {7,8} )
	[ ] //8
	[ ] GeneXpert®DxSystem.AssayName2.AddCriterion.Click()
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {8,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.ANSAnalyte8 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {8,4} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorProtocol8)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {8,5} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorStage8)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {8,6} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.AdvanceToStage8)
	[ ] //Set Stop After The New Stage option
	[-] if (rAdvance.StopAfterTheNewStage8 == 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {8,7} )
	[ ] //Stop If No Ct option
	[-] if (rAdvance.StopIfNoCt8== 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {8,8} )
	[ ] //9
	[ ] GeneXpert®DxSystem.AssayName2.AddCriterion.Click()
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {9,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.ANSAnalyte9 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {9,4} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorProtocol9)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {9,5} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorStage9)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {9,6} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.AdvanceToStage9)
	[ ] //Set Stop After The New Stage option
	[-] if (rAdvance.StopAfterTheNewStage9 == 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {9,7} )
	[ ] //Stop If No Ct option
	[-] if (rAdvance.StopIfNoCt9== 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {9,8} )
	[ ] //10
	[ ] GeneXpert®DxSystem.AssayName2.AddCriterion.Click()
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {10,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.ANSAnalyte10 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {10,4} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorProtocol10)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {10,5} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorStage10)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {10,6} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.AdvanceToStage10)
	[ ] //Set Stop After The New Stage option
	[-] if (rAdvance.StopAfterTheNewStage10 == 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {10,7} )
	[ ] //Stop If No Ct option
	[-] if (rAdvance.StopIfNoCt10== 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {10,8} )
	[ ] //11
	[ ] GeneXpert®DxSystem.AssayName2.AddCriterion.Click()
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {11,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.ANSAnalyte11 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {11,4} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorProtocol11)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {11,5} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorStage11)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {11,6} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.AdvanceToStage11)
	[ ] //Set Stop After The New Stage option
	[-] if (rAdvance.StopAfterTheNewStage11 == 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {11,7} )
	[ ] //Stop If No Ct option
	[-] if (rAdvance.StopIfNoCt11== 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {11,8} )
	[ ] //12
	[ ] GeneXpert®DxSystem.AssayName2.AddCriterion.Click()
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {12,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.ANSAnalyte12 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {12,4} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorProtocol12)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {12,5} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorStage12)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {12,6} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.AdvanceToStage12)
	[ ] //Set Stop After The New Stage option
	[-] if (rAdvance.StopAfterTheNewStage12 == 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {12,7} )
	[ ] //Stop If No Ct option
	[-] if (rAdvance.StopIfNoCt12== 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {12,8} )
	[ ] //13
	[ ] GeneXpert®DxSystem.AssayName2.AddCriterion.Click()
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {13,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.ANSAnalyte13 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {13,4} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorProtocol13)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {13,5} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorStage13)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {13,6} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.AdvanceToStage13)
	[ ] //Set Stop After The New Stage option
	[-] if (rAdvance.StopAfterTheNewStage13 == 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {13,7} )
	[ ] //Stop If No Ct option
	[-] if (rAdvance.StopIfNoCt13== 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {13,8} )
	[ ] //14
	[ ] GeneXpert®DxSystem.AssayName2.AddCriterion.Click()
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {14,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.ANSAnalyte14 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {14,4} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorProtocol14)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {14,5} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorStage14)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {14,6} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.AdvanceToStage14)
	[ ] //Set Stop After The New Stage option
	[-] if (rAdvance.StopAfterTheNewStage14 == 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {14,7} )
	[ ] //Stop If No Ct option
	[-] if (rAdvance.StopIfNoCt14== 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {14,8} )
	[ ] //15
	[ ] GeneXpert®DxSystem.AssayName2.AddCriterion.Click()
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {15,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.ANSAnalyte15 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {15,4} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorProtocol15)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {15,5} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorStage15)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {15,6} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.AdvanceToStage15)
	[ ] //Set Stop After The New Stage option
	[-] if (rAdvance.StopAfterTheNewStage15 == 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {15,7} )
	[ ] //Stop If No Ct option
	[-] if (rAdvance.StopIfNoCt15== 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {15,8} )
	[ ] //16
	[ ] GeneXpert®DxSystem.AssayName2.AddCriterion.Click()
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {16,2} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.ANSAnalyte16 )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {16,4} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorProtocol16)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {16,5} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.MonitorStage16)
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {16,6} )
	[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.JavaxSwingJComboBox.Select( rAdvance.AdvanceToStage16)
	[ ] //Set Stop After The New Stage option
	[-] if (rAdvance.StopAfterTheNewStage16 == 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {16,7} )
	[ ] //Stop If No Ct option
	[-] if (rAdvance.StopIfNoCt16== 'Yes')
		[ ] GeneXpert®DxSystem.AssayName2.ComCepheidGenexpertUiPanel.ClickCell( {16,8} )
	[ ] 
