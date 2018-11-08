[ ] //
[ ] // General Constants
[ ] //
[ ] const DEC = '.'
[ ] const PATH = 'C:\GeneXpert\export\'
[ ] const COMMA = ','
[ ] const ZERO = '0'
[ ] const ZERO_LONG = '0.0'
[ ] const ZERO_VLONG = '0.000000'
[ ] const NOTAPPLICABLE = 'NA'
[ ] // Added for fields where 'NA' is a valid value. Steve 4/29/2014
[ ] const NOTAPPLICABLE1 = 'NA-1'
[ ] const DBNULLVALUE = "-9999.000000"
[ ] const GUINULLVALUE = ' '
[ ] const BLANK = ''
[ ] const CHECKED = 'Check'
[ ] const NUM_DELTA_CONDITIONS = 6
[ ] const GXA = '.gxa'
[ ] const GXR = '.gxr'
[ ] const NO_ENTRY = 'No Entry'
[ ] const ORT34 = 'ORT-34'
[ ] const DEFAULT = 'Default'
[ ] const HEADER = 'GeneXpert Dx System'
[ ] const D11268_MIN = 1
[ ] const D11268_MAX = 100
[ ] const DB_PASSWORD = 'c9P40hD89#'
[ ] const SKIP_STRING_VERIFICATION_FLAG = "NA"  //added by JG 7/31/17
[ ] const SKIP_NUMERICAL_VERIFICATION_FLAG = "-9999.000000"
[ ] const VERIFICATION_NUMERICAL_NULL_VALUE = "-9999.999999" //End of Addition
[ ] 
[ ] //
[ ] // Constants for Define Assays
[ ] //
[ ] const PRIMARY_CURVE_ANALYSIS = 'Primary'
[ ] const SEC_DERIV_CURVE_ANALYSIS = '2nd Deriv'
[ ] const COMBO_CURVE_ANALYSIS = 'Combination'
[ ] 
[ ] const  USAGE_TARGET = 'Target'
[ ] const USAGE_EC = 'EC'
[ ] const USAGE_IC = 'IC'
[ ] const USAGE_SPC = 'SPC'
[ ] 
[ ] const SPC = 'SPC'
[ ] const IC = 'IC' 
[ ] const TARGET = 'Target'
[ ] 
[ ] const GXDR4 = 'GXDR-4'
[ ] const GXDR35 = 'GXDR-35'
[ ] const GXDR60 = 'GXDR-60'
[ ] const GXDRBSUB32 = 'GXDR-BSub32'
[ ] 
[ ] const BASIC = 'Basic'
[ ] const SEMI_QUANT = 'Semi Quantitative'
[ ] const DELTA_CT = 'Delta Ct'
[ ] 
[ ] const DELTA_CT_LESS =  'Delta Ct < -Early Delta Ct Max'
[ ] const DELTA_CT_BETWEEN = '-Early Delta Ct Max <= Delta Ct <= Late Delta Ct Max'
[ ] const DELTA_CT_GREATER = 'Delta Ct > Late Delta Ct Max'
[ ] const NORMAL = 'NORMAL'
[ ] const HETEROZYGOUS = 'HETEROZYGOUS'
[ ] const HOMOZYGOUS = 'HOMOZYGOUS'
[ ] 
[ ] const SEMICOLON = ';'
[ ] const BASIC_USER = 'basic1'
[ ] // Commented out since the research user is no longer part of the GX Dx application Steve 5/8/2012
[ ] // const RESEARCH_USER = 'research1'
[ ] const DETAIL_USER = 'detail1'
[ ] 
[ ] //
[ ] // Constants for View Results
[ ] //
[ ] const PAD = '          '
[ ] const BACKGROUNDCOLOR = 'background-color: #'
[ ] const FONTCOLOR = ' color: #'
[ ] const ENDTABLETAG = '</table>'
[ ] const ROW0 = 'tr.row0 '
[ ] const ROW1 = 'tr.row1 '
[ ] 
[ ] const ROW1_OR = 'tr.row0 '
[ ] const ROW2 = 'tr.row1 '
[ ] const ROW3 = 'tr.row2 '
[ ] const ROW4 = 'tr.row3 '
[ ] const ROW5 = 'tr.row4 '
[ ] const ROW6 = 'tr.row5 '
[ ] const ROW7 = 'tr.row6 '
[ ] const ROW8 = 'tr.row7 '
[ ] const ROW9 = 'tr.row8 '
[ ] const ROW10 = 'tr.row9 '
[ ] const ROW11 = 'tr.row10 '
[ ] const ROW12 = 'tr.row11 '
[ ] 
[ ] const TEST_RESULT_TAB = 'Test Result'
[ ] const ANALYTE_RESULT_TAB = 'Analyte Result'
[ ] const DETAIL_TAB = 'Detail'
[ ] const MELT_TAB = 'Melt Peaks'
[ ] const ERRORS_TAB = 'Errors'
[ ] const LDA_TAB = 'LDA Totals'
[ ] const SUPPORT_TAB = 'Support'
[ ] const NOTREPORTED = 'Not Reported'
[ ] const POS = 'POS'
[ ] const NEG = 'NEG'
[ ] const INVALID = 'INVALID' 
[ ] 
[ ] const NA = 'NA'
[ ] const FAIL = 'FAIL'
[ ] const PASS = 'PASS'
[ ] const NO_RESULT = 'NO_RESULT'
[ ] 
[ ] const ASSAY_DISCLAIMER = 'Assay'
[ ] const LIGHT_BLUE_DISCLAIMER = 'Light Blue'
[ ] const LIGHT_GRAY_DISCLAIMER = 'Light Gray'
[ ] const RED_DISCLAIMER = 'Red'
[ ] const GREEN_DISCLAIMER= 'Green'
[ ] const YELLOW_DISCLAIMER = 'Yellow'
[ ] const WHITE_DISCLAIMER = 'White'
[ ] const DISCLAIMER_MAX_LENGTH = 256
[ ] const TEST_DISCLAIMER_FONT_SIZE_DETAIL = 12
[ ] const TEST_DISCLAIMER_FONT_SIZE_BASIC = 16
[ ] 
[ ] //
[ ] // Constants used in Assay Factory
[ ] //
[ ] const CEPHEIDPRODUCTCODE = '99'
[ ] const APPLIEDFIELD = 'Applied Field'
[ ] const IVD = 'In Vitro Diagnostic'
[ ] const IUO = 'Investigational Use Only'
[ ] const RUO = 'Research Use Only'
[ ] const REFERENCE = 'Reference'
[ ] const TEMPLATE = 'Template'
[ ] 
[ ] // Constants used in D8380 Probe Check 
[ ] //
[ ] const  sREAD_LINE = ',Temperature (°C),Melt Normalized,Melt 1st Derivative,Melt Raw,Melt Normalized,Melt 1st Derivative,Melt Raw,Melt Normalized,Melt 1st Derivative,Melt Raw'
[ ] const sTEST_RESULT_TAB = 'Test Result'
[ ] const sDETAIL_TAB = 'Detail'
[ ] const sERRORS_TAB = 'Errors'
[ ] const sPATH = 'C:\GeneXpert\export\'
[ ] const sPRB_CHK = 'Probe Check Details'
[ ] const sDEC = '.'
[ ] const sERROR = 'ERROR'
[ ] const sERROR_MIXED = 'Error'
[ ] const sCOMMA = ','
[ ] const NO = 'No'
[ ] // Constants used in D8381 Curve Fitting
[ ] const sNONE = '<None>'
[ ] const sMESSAGE_SECTION = 'Messages'
[ ] STRING  sSTR_FIND =  'Error'
[ ] const PROBE_CHECK_STAGE = 'Probe Check'
[ ] const  MELT_CURVE_STAGE = 'Melt Curve'
[ ] const  TWO_TEMPERATURE_CYCLE_STAGE=' 2-Temperature Cycle'
[ ] 
[ ] //
[ ] // Constants used in D8383 Background Subtraction and Crosstalk Correction
[ ] const SELECT = 1
[ ] const CHECK = 1
[ ] const Support  ='Support'
[ ] const AnalyteResult = 'Analyte Result'
[ ] const Detail = 'Detail'
[ ] const TestResult = 'Test Result'
[ ] 
[ ] // Constants used in D10342 Melt
[ ] const sNO = 'No'
[ ] const sProbeCheck = 'Probe Check'
[ ] const sMeltCurve = 'Melt Curve'
[ ] const sAnalysisSettingsLotCommon ='Analysis Settings - Lot common'
[ ] const sProtocol = 'Protocol'
[ ] const  s2TemperatureCycle=' 2-Temperature Cycle'
[ ] 
[ ] // Constants used in D2708 Advanse To New Stage
[ ] const YES = 'Yes'
[ ] const STOP = 'Stop'
[ ] const INSERT_BEFORE = 'Before Selected Command'
[ ] const INSERT_AFTER = 'After Selected Command'
[ ] const DECISION = 'Decision'
[ ] 
[ ] // Constants used in D8384 Percent Ratio
[ ] 
[ ] const PROBE_CHECK = 'Probe Check'
[ ] const MELT_CURVE = 'Melt Curve'
[ ] const ANALYSIS_SETTINGS_LOT_COMMON ='Analysis Settings - Lot common'
[ ] const PROTOCOL = 'Protocol'
[ ] const  TWO_TEMPERATURE_CYCLE=' 2-Temperature Cycle'
[ ] 
[ ] 
