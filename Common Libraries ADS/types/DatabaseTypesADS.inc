[-] type TESTTABLE is record
	[ ] INT id
	[ ] INT version
	[ ] INT result_text_type
	[ ] INT assay_id
	[ ] INT parent_id
	[ ] BOOLEAN is_current_test
	[ ] STRING cartridge_barcode
	[ ] LONG cart_serial_number
	[ ] STRING creation_time // DATETIME
	[ ] INT data_reduction_algorithm
	[ ] INT error_status
	[ ] STRING expiration_date // DATETIME
	[ ] STRING guid
	[ ] BOOLEAN is_scanned_patient_id
	[ ] BOOLEAN is_scanned_sample_id
	[ ] STRING modification_time // DATETIME
	[ ] STRING notes
	[ ] STRING order_time // DATETIME
	[ ] STRING other_sample_type_text
	[ ] STRING result_text
	[ ] STRING result_color
	[ ] STRING rgt_lot_id
	[ ] STRING sample_id
	[ ] STRING sample_type_key
	[ ] STRING sw_version
	[ ] INT user_id
	[ ] INT patient_id
	[ ] INT test_type
[ ] 
[-] type ASSAYTABLE is record
	[ ] INT id
	[ ] INT version
	[ ] INT parent_id
	[ ] INT assay_index
	[ ] INT result_text_type
	[ ] INT assay_lock_type
	[ ] INT assay_type
	[ ] INT assay_version
	[ ] STRING command_bytes // varbinary
	[ ] INT command_sequence_format
	[ ] STRING comments
	[ ] INT company_code
	[ ] STRING creation_time // DATETIME
	[ ] INT data_reduction_algorithm
	[ ] INT default_result_text_index
	[ ] INT default_text_color_reference
	[ ] STRING disclaimer
	[ ] STRING guid
	[ ] BOOLEAN is_active
	[ ] BOOLEAN is_clia_waived
	[ ] STRING lock_comments
	[ ] STRING lock_time // DATETIME
	[ ] STRING modification_time // DATETIME
	[ ] STRING name
	[ ] BOOLEAN need_lsp
	[ ] STRING picture // varbinary
	[ ] INT prep_cartridge_shelf_life
	[ ] INT product_code
	[ ] STRING sample_prep_instruction
	[ ] STRING sample_prep_video // varbinary
	[ ] BOOLEAN use_background_subtraction
	[ ] BOOLEAN use_melt_all_peaks
	[ ] INT user_id
[ ] 
[-] type TESTHISTORYTABLE is record
	[ ] INT id
	[ ] INT parent_id
	[ ] STRING creation_time // DATETIME
	[ ] STRING field_name
	[ ] STRING new_content
	[ ] STRING old_content
	[ ] INT user_id
