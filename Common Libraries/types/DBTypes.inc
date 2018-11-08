[ ] //
[ ] // Type definitions
[ ] //
[ ] 
[+] type INTERPRETATION is record
	[ ] STRING sAnalyteName  
	[ ] INTEGER iInterpretation
	[ ] INTEGER iUsage
[ ] 
[-] type DBVERSION is record
	[ ] INTEGER iMajor
	[ ] INTEGER iMinor
	[ ] INTEGER iBuild
	[ ] INTEGER iFix
	[ ] 
[ ] 
[+] type ANALYTE2 is record
	[ ] STRING sSampleID  
	[ ] STRING sAssayName 
	[ ] STRING sAnalyteName1
	[ ] INTEGER iAnalyteInterpretation1
	[ ] INTEGER iAnalyteUsage1
	[ ] STRING sAnalyteName2
	[ ] INTEGER iAnalyteInterpretation2
	[ ] INTEGER iAnalyteUsage2
[ ] 
[+] type ANALYTE3 is record
	[ ] STRING sSampleID  
	[ ] STRING sAssayName 
	[ ] STRING sAnalyteName1
	[ ] INTEGER iAnalyteInterpretation1
	[ ] INTEGER iAnalyteUsage1
	[ ] STRING sAnalyteName2
	[ ] INTEGER iAnalyteInterpretation2
	[ ] INTEGER iAnalyteUsage2
	[ ] STRING sAnalyteName3
	[ ] INTEGER iAnalyteInterpretation3
	[ ] INTEGER iAnalyteUsage3
[ ] 
[+] type ANALYTE4 is record
	[ ] STRING sSampleID  
	[ ] STRING sAssayName 
	[ ] STRING sAnalyteName1
	[ ] INTEGER iAnalyteInterpretation1
	[ ] INTEGER iAnalyteUsage1
	[ ] STRING sAnalyteName2
	[ ] INTEGER iAnalyteInterpretation2
	[ ] INTEGER iAnalyteUsage2
	[ ] STRING sAnalyteName3
	[ ] INTEGER iAnalyteInterpretation3
	[ ] INTEGER iAnalyteUsage3
	[ ] STRING sAnalyteName4
	[ ] INTEGER iAnalyteInterpretation4
	[ ] INTEGER iAnalyteUsage4
[ ] 
[+] type ANALYTE6 is record					// D8384 Percent Ratio
	[ ] STRING sSampleID  
	[ ] STRING sAssayName 
	[ ] STRING sAnalyteName1
	[ ] INTEGER iAnalyteInterpretation1
	[ ] INTEGER iAnalyteUsage1
	[ ] STRING sAnalyteName2
	[ ] INTEGER iAnalyteInterpretation2
	[ ] INTEGER iAnalyteUsage2
	[ ] STRING sAnalyteName3
	[ ] INTEGER iAnalyteInterpretation3
	[ ] INTEGER iAnalyteUsage3
	[ ] STRING sAnalyteName4
	[ ] INTEGER iAnalyteInterpretation4
	[ ] INTEGER iAnalyteUsage4
	[ ] STRING sAnalyteName5
	[ ] INTEGER iAnalyteInterpretation5
	[ ] INTEGER iAnalyteUsage5
	[ ] STRING sAnalyteName6
	[ ] INTEGER iAnalyteInterpretation6
	[ ] INTEGER iAnalyteUsage6
[ ] 
[+] type REC_AR_1_4 is record
	[ ] STRING sSampleID  
	[ ] STRING sAssayName 
	[ ] STRING sAnalyteName1
	[ ] INTEGER iAnalyteInterpretation1
	[ ] INTEGER iAnalyteUsage1
	[ ] STRING sAnalyteName2
	[ ] INTEGER iAnalyteInterpretation2
	[ ] INTEGER iAnalyteUsage2
[ ] 
[+] type REC_AR_2_3_5_6 is record
	[ ] STRING sSampleID  
	[ ] STRING sAssayName 
	[ ] STRING sAnalyteName1
	[ ] INTEGER iAnalyteInterpretation1
	[ ] INTEGER iAnalyteUsage1
	[ ] STRING sAnalyteName2
	[ ] INTEGER iAnalyteInterpretation2
	[ ] INTEGER iAnalyteUsage2
	[ ] STRING sAnalyteName3
	[ ] INTEGER iAnalyteInterpretation3
	[ ] INTEGER iAnalyteUsage3
[ ] 
[+] type REC_CA_3_4_5 is record
	[ ] STRING sSampleID  
	[ ] STRING sAssayName 
	[ ] STRING sAnalyteName1
	[ ] INTEGER iAnalyteInterpretation1
	[ ] INTEGER iAnalyteUsage1
	[ ] STRING sAnalyteName2
	[ ] INTEGER iAnalyteInterpretation2
	[ ] INTEGER iAnalyteUsage2
	[ ] STRING sAnalyteName3
	[ ] INTEGER iAnalyteInterpretation3
	[ ] INTEGER iAnalyteUsage3
[ ] 
[+] type REC_ER_1 is record
	[ ] STRING sSampleID  
	[ ] STRING sAssayName 
	[ ] STRING sAnalyteName1
	[ ] INTEGER iAnalyteInterpretation1
	[ ] INTEGER iAnalyteUsage1
	[ ] STRING sAnalyteName2
	[ ] INTEGER iAnalyteInterpretation2
	[ ] INTEGER iAnalyteUsage2
	[ ] STRING sAnalyteName3
	[ ] INTEGER iAnalyteInterpretation3
	[ ] INTEGER iAnalyteUsage3
	[ ] STRING sAnalyteName4
	[ ] INTEGER iAnalyteInterpretation4
	[ ] INTEGER iAnalyteUsage4
[ ] 
[+] type REC_IB_1_3 is record
	[ ] STRING sSampleID  
	[ ] STRING sAssayName 
	[ ] STRING sAnalyteName1
	[ ] INTEGER iAnalyteInterpretation1
	[ ] INTEGER iAnalyteUsage1
	[ ] STRING sAnalyteName2
	[ ] INTEGER iAnalyteInterpretation2
	[ ] INTEGER iAnalyteUsage2
	[ ] STRING sAnalyteName3
	[ ] INTEGER iAnalyteInterpretation3
	[ ] INTEGER iAnalyteUsage3
	[ ] STRING sAnalyteName4
	[ ] INTEGER iAnalyteInterpretation4
	[ ] INTEGER iAnalyteUsage4
[ ] 
[+] type REC_IB_4_6 is record
	[ ] STRING sSampleID  
	[ ] STRING sAssayName 
	[ ] STRING sAnalyteName1
	[ ] INTEGER iAnalyteInterpretation1
	[ ] INTEGER iAnalyteUsage1
	[ ] STRING sAnalyteName2
	[ ] INTEGER iAnalyteInterpretation2
	[ ] INTEGER iAnalyteUsage2
	[ ] STRING sAnalyteName3
	[ ] INTEGER iAnalyteInterpretation3
	[ ] INTEGER iAnalyteUsage3
	[ ] STRING sAnalyteName4
	[ ] INTEGER iAnalyteInterpretation4
	[ ] INTEGER iAnalyteUsage4
	[ ] STRING sAnalyteName5
	[ ] INTEGER iAnalyteInterpretation5
	[ ] INTEGER iAnalyteUsage5
	[ ] STRING sAnalyteName6
	[ ] INTEGER iAnalyteInterpretation6
	[ ] INTEGER iAnalyteUsage6
[ ] 
[+] type ORGANISM_DB is record
	[ ] STRING sAssayName 
	[ ] STRING sOrganism1
	[ ] STRING sOrganism2
	[ ] STRING sOrganism3
[ ] 
[+] type ANALYTE is record
	[ ] INTEGER iAnalyteIndex
	[ ] STRING  sAnalyteName
	[ ] 
[ ] 
[+] type CONTROL_INTERPRETATION is record
	[ ] INTEGER iTestID
	[ ] INTEGER iAssayID
	[ ] STRING sSampleID
	[ ] STRING sTargetResult
	[ ] STRING sICResult
	[ ] STRING sSPCResult
	[ ] STRING sInterpretation
	[ ] INTEGER iAnalyteIndex
	[ ] STRING sUsage
	[ ] STRING sAnalyteName
	[ ] 
[ ] 
[+] type GUI_ANALYTES is record
	[ ] STRING  sAnalyteName
	[ ] STRING sUsage
	[ ] STRING sTargetNum
	[ ] 
[ ] 
[+] type CONTROL_TARGETS is record
	[ ] STRING  sControlName
	[ ] STRING sControlUsage
	[ ] STRING sTargetName
	[ ] 
[ ] 
[+] type REC_ASSAY_RENAME is record
	[ ] STRING sExistingAssayName
	[ ] STRING sNewAssayName
[ ] 
[+] type REC_CHANGE_ASSAY_CONC is record
	[ ] STRING  sAssayName
	[ ] REAL rNewConc
[ ] 
[-] type REC_CHANGE_CONC_ALL is record
	[ ] REAL rNewConc
[ ] 
[-] type REC_CHANGE_ASSAY_CONC_ANALYTE  is record
	[ ] STRING  sAssayName
	[ ] REAL rNewConc
	[ ] STRING sAnalyteName
[ ] 
[ ] 
