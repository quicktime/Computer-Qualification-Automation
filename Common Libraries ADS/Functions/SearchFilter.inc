[ ] use "..\..\Common Libraries ADS\MasterUseStmtsADS.inc"
[ ] 
[ ] // Filters tests by the supplied patient ID
[-] Filter_By_PatientID(STRING pID)
	[ ] ASK.SetActive()
	[ ] ASK.Web.Browser.DropDownMenu1.Click()
	[ ] ASK.Web.Browser.Filter_By_PatientID.Click()
	[ ] ASK.Web.Browser.SearchFilter_Textfield0.SetText(pID)
[ ] 
[ ] // Filters tests by the supplied sample ID
[-] Filter_By_SampleID(STRING sID)
	[ ] ASK.SetActive()
	[ ] ASK.Web.Browser.TestTable_refreshB.Click()
	[ ] ASK.Web.Browser.DropDownMenu1.Click()
	[ ] ASK.Web.Browser.Filter_By_SampleID.Click()	
	[ ] ASK.Web.Browser.SearchFilter_Textfield0.SetText(sID)
[ ] 
[ ] // Filters tests by the supplied result
[-] Filter_By_Result(STRING result)
	[ ] ASK.SetActive()
	[ ] ASK.Web.Browser.DropDownMenu1.Click()
	[ ] ASK.Web.Browser.Filter_By_Result.Click()
	[ ] ASK.Web.Browser.SearchFilter_Textfield0.SetText(result)
[ ] 
[ ] // Filters tests by the supplied module name
[-] Filter_By_ModuleName(STRING moduleName)
	[ ] ASK.SetActive()
	[ ] ASK.Web.Browser.DropDownMenu1.Click()
	[ ] ASK.Web.Browser.Filter_By_ModuleName.Click()
	[ ] ASK.Web.Browser.SearchFilter_Textfield0.SetText(moduleName)
[ ] 
[ ] // Filters tests by the supplied module serial number
[-] Filter_By_ModuleSerial(STRING moduleSerial)
	[ ] ASK.SetActive()
	[ ] ASK.Web.Browser.DropDownMenu1.Click()
	[ ] ASK.Web.Browser.Filter_By_ModuleSerial.Click()
	[ ] ASK.Web.Browser.SearchFilter_Textfield0.SetText(moduleSerial)
[ ] 
[ ] // Filters tests by the supplied user
[-] Filter_By_User(STRING user)
	[ ] ASK.SetActive()
	[ ] ASK.Web.Browser.DropDownMenu1.Click()
	[ ] ASK.Web.Browser.Filter_By_User.Click()
	[ ] ASK.Web.Browser.SearchFilter_Textfield0.SetText(user)
[ ] 
[ ] // Filters tests by the supplied assay
[-] Filter_By_Assay(STRING assay)
	[ ] ASK.SetActive()
	[ ] ASK.Web.Browser.DropDownMenu1.Click()
	[ ] ASK.Web.Browser.Filter_By_Assay.Click()
	[ ] ASK.Web.Browser.SearchFilter_Textfield0.SetText(assay)
[ ] 
[ ] // Filters tests by the supplied version
[-] Filter_By_Version(STRING version)
	[ ] ASK.SetActive()
	[ ] ASK.Web.Browser.DropDownMenu1.Click()
	[ ] ASK.Web.Browser.Filter_By_Version.Click()
	[ ] ASK.Web.Browser.SearchFilter_Textfield0.SetText(version)
[ ] 
[ ] // Filters tests by the supplied lot
[-] Filter_By_Lot(STRING lot)
	[ ] ASK.SetActive()
	[ ] ASK.Web.Browser.DropDownMenu1.Click()
	[ ] ASK.Web.Browser.Filter_By_Lot.Click()
	[ ] ASK.Web.Browser.SearchFilter_Textfield0.SetText(lot)
[ ] 
[ ] // Filters tests by the supplied assayType
[-] Filter_By_AssayType(STRING assayType)
	[ ] ASK.SetActive()
	[ ] ASK.Web.Browser.DropDownMenu1.Click()
	[ ] ASK.Web.Browser.Filter_By_AssayType.Click()
	[ ] ASK.Web.Browser.SearchFilter_Textfield0.SetText(assayType)
[ ] 
[ ] // Filters tests by the supplied status
[-] Filter_By_Status(STRING status)
	[ ] ASK.SetActive()
	[ ] ASK.Web.Browser.DropDownMenu1.Click()
	[ ] ASK.Web.Browser.Filter_By_Status.Click()
	[ ] ASK.Web.Browser.SearchFilter_Textfield0.SetText(status)
[ ] 
[ ] // Filters tests by the supplied error
[-] Filter_By_Error(STRING error)
	[ ] ASK.SetActive()
	[ ] ASK.Web.Browser.DropDownMenu1.Click()
	[ ] ASK.Web.Browser.Filter_By_Error.Click()
	[ ] ASK.Web.Browser.SearchFilter_Textfield0.SetText(error)
[ ] 
[ ] // Filters tests by the supplied start time
[-] Filter_By_StartTime(STRING startTime)
	[ ] ASK.SetActive()
	[ ] ASK.Web.Browser.DropDownMenu1.Click()
	[ ] ASK.Web.Browser.Filter_By_StartTime.Click()
	[ ] ASK.Web.Browser.SearchFilter_Textfield0.SetText(startTime)
