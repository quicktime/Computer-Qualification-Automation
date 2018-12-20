[ ] STRING sDeclare = "DECLARE @myvar char(20)"
[ ] STRING sSet = "SET @myvar = (SELECT"
[ ] STRING sFrom = "FROM gx_db.dbo.test WHERE sample_id = 'sID'"
[ ] STRING sWhere = "WHERE id = @myvar"
[ ] STRING sOffset = "OFFSET 0 ROWS"
[ ] 
[ ] STRING sAssayID = "DECLARE @assayid nvarchar(20) SET @assayid = (SELECT id FROM test WHERE sample_id = 'sID');"
[ ] STRING sAnalyteCount = "DECLARE @count int SET @count = (SELECT COUNT(analyte_id) FROM view_analyte WHERE assay_id = @assayid);"
[ ] STRING sAnalyteID = "DECLARE @analyteid nvarchar(20) SET @analyteid = (SELECT analyte_id FROM view_analyte WHERE assay_id = @assayid ORDER BY analyte_id DESC OFFSET (@count - (@count - 1)) ROWS);"
[ ] STRING sAnalyteResultFrom = "FROM view_analyte_result WHERE analyte_id = @analyteid"
[ ] 
[ ] STRING SQLHEADER01 = "{sDeclare} {sSet} test.assay_id {sFrom}); SELECT name FROM gx_db.dbo.assay {sWhere}" // Assay Name
[ ] STRING SQLHEADER02 = "{sDeclare} {sSet} test.assay_id {sFrom}); SELECT version FROM gx_db.dbo.assay {sWhere}" // Assay Version
[ ] STRING SQLHEADER03 = "SELECT test.sample_id {sFrom}" // Sample ID
[ ] STRING SQLHEADER04 = "SELECT test.cart_serial_number {sFrom}" // Cartridge S/N
[ ] STRING SQLHEADER05 = "SELECT test.rgt_lot_id {sFrom}" // Reagent Lot ID
[ ] STRING SQLHEADER06 = "SELECT test.test_type {sFrom}" // Test Type
[ ] STRING SQLHEADER07 = "{sDeclare} {sSet} test.id {sFrom}); SELECT instrument_serial_number FROM gx_db.dbo.test_data {sWhere}" // Instrument S/N
[ ] STRING SQLHEADER08 = "{sDeclare} {sSet} test.id {sFrom}); SELECT site_serial_number FROM gx_db.dbo.test_data {sWhere}" // Module S/N
[ ] STRING SQLHEADER09 = "SELECT test.sw_version {sFrom}" // S/W Version
[ ] STRING SQLHEADER10 = "SELECT test.creation_time {sFrom}" // Start Time
[ ] STRING SQLHEADER11 = "{sDeclare} {sSet} test.id {sFrom}); SELECT state FROM gx_db.dbo.test_data {sWhere}" // Status
[ ] STRING SQLHEADER12 = "SELECT test.result_text {sFrom}" // Test Result
[ ] STRING SQLHEADER13 = "{sDeclare} {sSet} test.assay_id {sFrom}); SELECT name FROM gx_db.dbo.analyte WHERE parent_id = @myvar ORDER BY analyte.id ASC {sOffset}" // Analyte Name
[ ] STRING SQLHEADER14 = "{sDeclare} {sSet} test.assay_id {sFrom}); SELECT usage FROM gx_db.dbo.analyte WHERE parent_id = @myvar ORDER BY analyte.id ASC {sOffset}" // Usage
[ ] STRING SQLHEADER15 = "{sDeclare} {sSet} test.assay_id {sFrom}); SELECT CONVERT(VARCHAR(MAX), target,1) FROM gx_db.dbo.analyte WHERE parent_id = @myvar ORDER BY analyte.id ASC {sOffset}" // Target #
[ ] STRING SQLHEADER16 = "{sAssayID} {sAnalyteCount} {sAnalyteID} SELECT reason {sAnalyteResultFrom}" // Analyte Result
[ ] STRING SQLHEADER17 = "{sAssayID} {sAnalyteCount} {sAnalyteID} SELECT cycle_threshold {sAnalyteResultFrom}" // Ct
[ ] STRING SQLHEADER18 = "{sAssayID} {sAnalyteCount} {sAnalyteID} SELECT endpoint {sAnalyteResultFrom}" // EndPt
[ ] STRING SQLHEADER19 = "{sAssayID} {sAnalyteCount} {sAnalyteID} SELECT curve_fit_result {sAnalyteResultFrom}" // Curve Fit
[ ] STRING SQLHEADER20 = "{sAssayID} {sAnalyteCount} {sAnalyteID} SELECT delta_ct {sAnalyteResultFrom}" // Target Delta Ct
[ ] STRING SQLHEADER21 = "{sAssayID} {sAnalyteCount} {sAnalyteID} SELECT second_deriv_peak_height {sAnalyteResultFrom}" // 2nd Deriv Peak Height - TODO: figure out data reduction formulas from D2138
[ ] STRING SQLHEADER22 = "{sAssayID} {sAnalyteCount} {sAnalyteID} SELECT probe_check_reading_1 {sAnalyteResultFrom}" // Prb Chk 1 - From ADF
[ ] STRING SQLHEADER23 = "{sAssayID} {sAnalyteCount} {sAnalyteID} SELECT probe_check_reading_2 {sAnalyteResultFrom}" // Prb Chk 2 - From ADF
[ ] STRING SQLHEADER24 = "{sAssayID} {sAnalyteCount} {sAnalyteID} SELECT probe_check_reading_3 {sAnalyteResultFrom}" // Prb Chk 3 - From ADF
[ ] STRING SQLHEADER25 = "{sAssayID} {sAnalyteCount} {sAnalyteID} SELECT probe_check_result {sAnalyteResultFrom}" // Prb Check Result - D2138 Section 6.2
[ ] STRING SQLHEADER26 = "" // Cycles - TODO: figure out data reduction formulas from D2138
[ ] STRING SQLHEADER27 = "" // Background Slope - TODO: figure out data reduction formulas from D2138
[ ] STRING SQLHEADER28 = "" // Background Offset - TODO: figure out data reduction formulas from D2138
[ ] STRING SQLHEADER29 = "" // Background RMS Error - D2138 Section 16.7
[ ] STRING SQLHEADER30 = "" // Cycle Offset - TODO: figure out data reduction formulas from D2138
[ ] STRING SQLHEADER31 = "" // Shape Factor - TODO: figure out data reduction formulas from D2138
[ ] STRING SQLHEADER32 = "" // Vertical Scaling - The absolute value of the difference between 1st point and end point
[ ] STRING SQLHEADER33 = "" // Vertical Offset - The 5th point
[ ] STRING SQLHEADER34 = "" // Slope - TODO: figure out data reduction formulas from D2138
[ ] STRING SQLHEADER35 = "" // Slope To Vertical Scaling Ratio - From ADF (Curve Fit Settings)
[ ] STRING SQLHEADER36 = "" // NRSE - From ADF (Curve Fit Settings)
[ ] STRING SQLHEADER37 = "" // Failed Limit Check - ASK SRS Section 9.3.12 (blank if curve fit not performed)
[ ] STRING SQLHEADER38 = "" // Max Pressure (PSI) - ASK SRS Section 8.9.3.1.3.1
[ ] STRING SQLHEADER39 = "" // Min Pressure (PSI) - ASK SRS Section 8.9.3.1.3.2
[ ] STRING SQLHEADER40 = "{sDeclare} {sSet} test.id {sFrom}); SELECT details FROM gx_db.dbo.test_data_error WHERE parent_id = @myvar" // Errors
[ ] STRING SQLHEADER41 = "SELECT test.patient_id {sFrom}" // Patient ID
[ ] STRING SQLHEADER42 = "" // Quantitative Value - ASK SRS Section 8.9.3.1.3.5
[ ] STRING SQLHEADER43 = "" // Quantitative Unit - ASK SRS Section 8.9.3.1.3.6
[ ] STRING SQLHEADER44 = "" // Interpretation Flag - ASK SRS Section 8.9.3.1.3.7
[ ] STRING SQLHEADER45 = "{sDeclare} {sSet} test.user_id {sFrom}); SELECT full_name FROM gx_db.dbo.users {sWhere}" // User
[ ] STRING SQLHEADER46 = "SELECT test.notes {sFrom}" // Notes
[ ] STRING SQLHEADER47 = "" // Run Notes
[ ] STRING SQLHEADER48 = "" // LDA Totals
[ ] STRING SQLHEADER49 = "" // Cartridge
