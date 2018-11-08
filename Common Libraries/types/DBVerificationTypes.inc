[ ] // Record to hold the information from the verification spreadsheet - TCTR-1
[+] type EXCELREC_TCTR_1  is record
	[ ] STRING assayName
	[ ] Integer rowNum
	[ ] STRING assayResultCombo
	[ ] STRING sampleID
	[ ] STRING resultColorText
	[ ] STRING result_text
	[ ] STRING result_text_color
	[ ] STRING result_key
	[ ] INTEGER result_text_reference
	[ ] INTEGER text_color_reference
	[ ] INTEGER default_result_text_reference
	[ ] INTEGER default_text_color_reference
[ ] 
[ ] // Record to hold the information from the verification spreadsheet - TCTR-2
[+] type EXCELREC_TCTR_2  is record
	[ ] STRING sAssayName
	[ ] INTEGER iRowNum
	[ ] STRING sAssayResultCombo
	[ ] STRING sSampleID
	[ ] STRING sResultColorText
	[ ] STRING result_text
	[ ] INTEGER result_text_color
	[ ] STRING result_key
	[ ] INTEGER result_text_reference
	[ ] INTEGER text_color_reference
[ ] 
[ ] // Record to hold the information from the verification spreadsheet - TCTR-3
[+] type EXCELREC_TCTR_3  is record
	[ ] STRING sAssayName
	[ ] INTEGER iRowNum
	[ ] STRING sAssayResult1
	[ ] STRING sAssayResult2
	[ ] STRING sAssayResult3
	[ ] STRING sAssayResult4
	[ ] STRING sAssayResult5
	[ ] STRING sSampleID
	[ ] STRING sResultColorText
	[ ] STRING result_text
	[ ] INTEGER result_text_color
	[ ] STRING result_key
	[ ] INTEGER result_text_reference
	[ ] INTEGER text_color_reference
[ ] 
[ ] // Record to hold the information from the verification spreadsheet - TCTR-4
[+] type EXCELREC_TCTR_4  is record
	[ ] STRING sAssayName
	[ ] INTEGER iRowNum
	[ ] STRING sAssayResult1
	[ ] STRING sAssayResult2
	[ ] STRING sAssayResult3
	[ ] STRING sAssayResult4
	[ ] STRING sAssayResult5
	[ ] STRING sAssayResult6
	[ ] STRING sSampleID
	[ ] STRING sResultColorText
	[ ] STRING result_text
	[ ] INTEGER result_text_color
	[ ] STRING result_key
	[ ] INTEGER result_text_reference
	[ ] INTEGER text_color_reference
[ ] 
[ ] // Record to hold the information from the verificaton spreadsheet - OTR-1
[-] type ORGANISM  is record
	[ ] INTEGER iRowNum
	[ ] STRING sAssayName
	[ ] STRING sOrgName
	[ ] STRING result_key
	[ ] INTEGER result_text_reference
	[ ] INTEGER text_color_reference
	[ ] INTEGER result_index
[ ] 
[ ] // Record to hold the information from the verificaton spreadsheet - OTR-1
[-] type TEST_CTR  is record
	[ ] INTEGER iRowNum
	[ ] STRING sAnalyteName
	[ ] STRING sSampleID
	[ ] STRING sTestResult
	[ ] STRING result_text
	[ ] STRING  result_text_color
[ ] 
