[ ] use "..\SQLHEADERS.inc"
[ ] 
[-] LIST UniversalBegin = <text>
	[ ] Assay
	[ ] Assay Version
	[ ] Sample ID
	[ ] Cartridge S/N
	[ ] Reagent Lot ID
	[ ] Test Type
	[ ] Instrument S/N
	[ ] Module S/N
	[ ] S/W Version
	[ ] Start Time
	[ ] Status
	[ ] Test Result
[ ] 
[-] LIST UniversalEnd = <text>
	[ ] Max Pressure (PSI)
	[ ] Min Pressure (PSI)
	[ ] Error
	[ ] Patient ID
	[ ] Quantitative Value
	[ ] Quantitative Unit
	[ ] Interpretation Flag
	[ ] User
[ ] 
[-] LIST AnalyteAndProbeCheckHeaders = <text>
	[ ] Analyte Name
	[ ] Usage
	[ ] Target #
	[ ] Analyte Result
	[ ] Ct
	[ ] EndPt
	[ ] Curve Fit
	[ ] Target Delta Ct
	[ ] Prb Chk 1
	[ ] Prb Chk 2
	[ ] Prb Chk 3
	[ ] Probe Check Result
	[ ] 2nd Deriv Peak Height
	[ ] Cycles
[ ] 
[-] LIST AnalyteResultHeaders = <text>
	[ ] Analyte Name
	[ ] Usage
	[ ] Target #
	[ ] Analyte Result
	[ ] Ct
	[ ] EndPt
	[ ] Curve Fit
	[ ] Target Delta Ct
	[ ] 2nd Deriv Peak Height
	[ ] Cycles
[ ] 
[-] LIST ProbeCheckHeaders = <text>
	[ ] Analyte Name
	[ ] Usage
	[ ] Prb Chk 1
	[ ] Prb Chk 2
	[ ] Prb Chk 3
	[ ] Probe Check Result
[ ] 
[-] LIST CurveFitAndBackgroundHeaders = <text>
	[ ] Analyte Name
	[ ] Usage
	[ ] Background Slope
	[ ] Background Offset
	[ ] Background RMS Error
	[ ] Cycle Offset
	[ ] Shape Factor
	[ ] Vertical Scaling
	[ ] Vertical Offset
	[ ] Slope
	[ ] Slope To Vertical Scaling Ratio
	[ ] NRSE
	[ ] Cycles
	[ ] Failed Limit Check
[ ] 
[-] LIST Engr = <text>
	[ ] Notes
	[ ] Run Notes
[ ] 
[-] LIST resCorrOutput = <text>
	[ ] Assay Name
	[ ] Protocol Number
	[ ] Source Channel Analyte Name
	[ ] Source Channel Reporter Name
	[ ] Crosstalk Channel Analyte Name
	[ ] Crosstalk Channel Report Name
	[ ] Test Start Time
	[ ] Sample ID
	[ ] Append Time
	[ ] Ignore Code
	[ ] m Slope
	[ ] R^2
	[ ] NA: Residual Crosstalk correction action is required
	[ ] A: All Primary crosstalk channel data are within range. No action required.
	[ ] B: Source channel endpoint < Min source channel endpint. No action required.
	[ ] B2: Source channel analyte does not have a non-zero Ct value. No action required.
	[ ] C: Crosstalk channel endpoint > max crosstalk channel endpoint. No action required.
	[ ] D: Absolute value of Slope of Correlation > max ABS correlation slope. No action required.
[ ] 
[-] LIST show_target_quant_values = <text>
	[ ] Quantitative Value
[ ] 
[-] LIST ALLHEADERS = <text>
	[ ] Assay
	[ ] Assay Version
	[ ] Sample ID
	[ ] Cartridge S/N
	[ ] Reagent Lot ID
	[ ] Test Type
	[ ] Instrument S/N
	[ ] Module S/N
	[ ] S/W Version
	[ ] Start Time
	[ ] Status
	[ ] Test Result
	[ ] Analyte Name
	[ ] Usage
	[ ] Target #
	[ ] Analyte Result
	[ ] Ct
	[ ] EndPt
	[ ] Curve Fit
	[ ] Target Delta Ct
	[ ] Prb Chk 1
	[ ] Prb Chk 2
	[ ] Prb Chk 3
	[ ] Probe Check Result
	[ ] 2nd Deriv Peak Height
	[ ] Cycles
	[ ] Background Slope
	[ ] Background Offset
	[ ] Background RMS Error
	[ ] Cycle Offset
	[ ] Shape Factor
	[ ] Vertical Scaling
	[ ] Vertical Offset
	[ ] Slope
	[ ] Slope To Vertical Scaling Ratio
	[ ] NRSE
	[ ] Failed Limit Check
	[ ] Max Pressure (PSI)
	[ ] Min Pressure (PSI)
	[ ] Error
	[ ] Patient ID
	[ ] Quantitative Value
	[ ] Quantitative Unit
	[ ] Interpretation Flag
	[ ] User
	[ ] Notes
	[ ] Run Notes
	[ ] LDA Totals
	[ ] Cartridge
[ ] 
[-] LIST OF STRING SQLHEADERS = {...}
	[ ] SQLHEADER01
	[ ] SQLHEADER02
	[ ] SQLHEADER03
	[ ] SQLHEADER04
	[ ] SQLHEADER05
	[ ] SQLHEADER06
	[ ] SQLHEADER07
	[ ] SQLHEADER08
	[ ] SQLHEADER09
	[ ] SQLHEADER10
	[ ] SQLHEADER11
	[ ] SQLHEADER12
	[ ] SQLHEADER13
	[ ] SQLHEADER14
	[ ] SQLHEADER15
	[ ] SQLHEADER16
	[ ] SQLHEADER17
	[ ] SQLHEADER18
	[ ] SQLHEADER19
	[ ] SQLHEADER20
	[ ] SQLHEADER21
	[ ] SQLHEADER22
	[ ] SQLHEADER23
	[ ] SQLHEADER24
	[ ] SQLHEADER25
	[ ] SQLHEADER26
	[ ] SQLHEADER27
	[ ] SQLHEADER28
	[ ] SQLHEADER29
	[ ] SQLHEADER30
	[ ] SQLHEADER31
	[ ] SQLHEADER32
	[ ] SQLHEADER33
	[ ] SQLHEADER34
	[ ] SQLHEADER35
	[ ] SQLHEADER36
	[ ] SQLHEADER37
	[ ] SQLHEADER38
	[ ] SQLHEADER39
	[ ] SQLHEADER40
	[ ] SQLHEADER41
	[ ] SQLHEADER42
	[ ] SQLHEADER43
	[ ] SQLHEADER44
	[ ] SQLHEADER45
	[ ] SQLHEADER46
	[ ] SQLHEADER47
	[ ] SQLHEADER48
	[ ] SQLHEADER49
