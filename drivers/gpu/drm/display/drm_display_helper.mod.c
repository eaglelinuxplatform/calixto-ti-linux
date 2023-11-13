#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(drm_dp_dual_mode_detect, 0xe96da9fd, "");
SYMBOL_CRC(drm_dp_dual_mode_get_tmds_output, 0x53130c7b, "");
SYMBOL_CRC(drm_dp_dual_mode_max_tmds_clock, 0x7272c0d6, "");
SYMBOL_CRC(drm_dp_dual_mode_read, 0x69945f22, "");
SYMBOL_CRC(drm_dp_dual_mode_set_tmds_output, 0x9bdb0514, "");
SYMBOL_CRC(drm_dp_dual_mode_write, 0x8b4f0cea, "");
SYMBOL_CRC(drm_dp_get_dual_mode_type_name, 0x5407ae9e, "");
SYMBOL_CRC(drm_lspcon_get_mode, 0xf14f98ac, "");
SYMBOL_CRC(drm_lspcon_set_mode, 0xd37fcff9, "");
SYMBOL_CRC(drm_dp_128b132b_cds_interlane_align_done, 0x92b9835e, "");
SYMBOL_CRC(drm_dp_128b132b_eq_interlane_align_done, 0x6a4df8c5, "");
SYMBOL_CRC(drm_dp_128b132b_lane_channel_eq_done, 0xc8b6a8ae, "");
SYMBOL_CRC(drm_dp_128b132b_lane_symbol_locked, 0xd5a95eae, "");
SYMBOL_CRC(drm_dp_128b132b_link_training_failed, 0x6aacee47, "");
SYMBOL_CRC(drm_dp_128b132b_read_aux_rd_interval, 0xee90d8ce, "");
SYMBOL_CRC(drm_dp_aux_init, 0x1d72a333, "");
SYMBOL_CRC(drm_dp_aux_register, 0xc339f807, "");
SYMBOL_CRC(drm_dp_aux_unregister, 0xc3b14176, "");
SYMBOL_CRC(drm_dp_bw_code_to_link_rate, 0x73011db0, "");
SYMBOL_CRC(drm_dp_channel_eq_ok, 0xedcf81ce, "");
SYMBOL_CRC(drm_dp_clock_recovery_ok, 0x8d701329, "");
SYMBOL_CRC(drm_dp_downstream_420_passthrough, 0xf689ad25, "");
SYMBOL_CRC(drm_dp_downstream_444_to_420_conversion, 0x2fa94ef2, "");
SYMBOL_CRC(drm_dp_downstream_debug, 0x967c0c5f, "");
SYMBOL_CRC(drm_dp_downstream_id, 0x42f3083a, "");
SYMBOL_CRC(drm_dp_downstream_is_tmds, 0x68d8dce7, "");
SYMBOL_CRC(drm_dp_downstream_is_type, 0xc79ecffb, "");
SYMBOL_CRC(drm_dp_downstream_max_bpc, 0x23961837, "");
SYMBOL_CRC(drm_dp_downstream_max_dotclock, 0x392a838b, "");
SYMBOL_CRC(drm_dp_downstream_max_tmds_clock, 0x6b53e216, "");
SYMBOL_CRC(drm_dp_downstream_min_tmds_clock, 0x63a477fb, "");
SYMBOL_CRC(drm_dp_downstream_mode, 0x76b029e5, "");
SYMBOL_CRC(drm_dp_downstream_rgb_to_ycbcr_conversion, 0xfb1a7a5a, "");
SYMBOL_CRC(drm_dp_dpcd_probe, 0x2d05e0db, "");
SYMBOL_CRC(drm_dp_dpcd_read, 0x8533223c, "");
SYMBOL_CRC(drm_dp_dpcd_read_link_status, 0x4e6e8365, "");
SYMBOL_CRC(drm_dp_dpcd_read_phy_link_status, 0xc660f070, "");
SYMBOL_CRC(drm_dp_dpcd_write, 0x8fd6bf4f, "");
SYMBOL_CRC(drm_dp_dsc_sink_line_buf_depth, 0x06c49551, "");
SYMBOL_CRC(drm_dp_dsc_sink_max_slice_count, 0x6615069e, "");
SYMBOL_CRC(drm_dp_dsc_sink_supported_input_bpcs, 0x3a8063f3, "");
SYMBOL_CRC(drm_dp_get_adjust_request_pre_emphasis, 0x582f248e, "");
SYMBOL_CRC(drm_dp_get_adjust_request_voltage, 0xc5c99a79, "");
SYMBOL_CRC(drm_dp_get_adjust_tx_ffe_preset, 0xccf54d5e, "");
SYMBOL_CRC(drm_dp_get_pcon_max_frl_bw, 0x7053fa72, "");
SYMBOL_CRC(drm_dp_get_phy_test_pattern, 0xca5a915c, "");
SYMBOL_CRC(drm_dp_link_rate_to_bw_code, 0x26815dbc, "");
SYMBOL_CRC(drm_dp_link_train_channel_eq_delay, 0x237d3bb1, "");
SYMBOL_CRC(drm_dp_link_train_clock_recovery_delay, 0xf3cb5c53, "");
SYMBOL_CRC(drm_dp_lttpr_count, 0xaf267620, "");
SYMBOL_CRC(drm_dp_lttpr_link_train_channel_eq_delay, 0xdbaf5ef7, "");
SYMBOL_CRC(drm_dp_lttpr_link_train_clock_recovery_delay, 0x1709ddcf, "");
SYMBOL_CRC(drm_dp_lttpr_max_lane_count, 0x1605d0ed, "");
SYMBOL_CRC(drm_dp_lttpr_max_link_rate, 0x01c4bba9, "");
SYMBOL_CRC(drm_dp_lttpr_pre_emphasis_level_3_supported, 0x76ff6644, "");
SYMBOL_CRC(drm_dp_lttpr_voltage_swing_level_3_supported, 0x1b0a1fdc, "");
SYMBOL_CRC(drm_dp_pcon_convert_rgb_to_ycbcr, 0x5029629b, "");
SYMBOL_CRC(drm_dp_pcon_dsc_bpp_incr, 0x4603c416, "");
SYMBOL_CRC(drm_dp_pcon_dsc_max_slice_width, 0xc020c0c1, "");
SYMBOL_CRC(drm_dp_pcon_dsc_max_slices, 0xe5360b84, "");
SYMBOL_CRC(drm_dp_pcon_enc_is_dsc_1_2, 0x59f27ed7, "");
SYMBOL_CRC(drm_dp_pcon_frl_configure_1, 0x253b58c3, "");
SYMBOL_CRC(drm_dp_pcon_frl_configure_2, 0xe7f8c409, "");
SYMBOL_CRC(drm_dp_pcon_frl_enable, 0x4b62a785, "");
SYMBOL_CRC(drm_dp_pcon_frl_prepare, 0x2eafb456, "");
SYMBOL_CRC(drm_dp_pcon_hdmi_frl_link_error_count, 0x6bdf22fc, "");
SYMBOL_CRC(drm_dp_pcon_hdmi_link_active, 0x47bbe364, "");
SYMBOL_CRC(drm_dp_pcon_hdmi_link_mode, 0xe0e247f9, "");
SYMBOL_CRC(drm_dp_pcon_is_frl_ready, 0x070c3028, "");
SYMBOL_CRC(drm_dp_pcon_pps_default, 0x457dd9e8, "");
SYMBOL_CRC(drm_dp_pcon_pps_override_buf, 0xf6643962, "");
SYMBOL_CRC(drm_dp_pcon_pps_override_param, 0xc88e9491, "");
SYMBOL_CRC(drm_dp_pcon_reset_frl_config, 0x65d6209c, "");
SYMBOL_CRC(drm_dp_phy_name, 0x5a86f411, "");
SYMBOL_CRC(drm_dp_psr_setup_time, 0xa1fefe6a, "");
SYMBOL_CRC(drm_dp_read_channel_eq_delay, 0x2f6262db, "");
SYMBOL_CRC(drm_dp_read_clock_recovery_delay, 0xc1042417, "");
SYMBOL_CRC(drm_dp_read_desc, 0x595b6bf5, "");
SYMBOL_CRC(drm_dp_read_downstream_info, 0x0ea19984, "");
SYMBOL_CRC(drm_dp_read_dpcd_caps, 0x3b39125d, "");
SYMBOL_CRC(drm_dp_read_lttpr_common_caps, 0x4f8a5caa, "");
SYMBOL_CRC(drm_dp_read_lttpr_phy_caps, 0xac0681da, "");
SYMBOL_CRC(drm_dp_read_sink_count, 0xba539aef, "");
SYMBOL_CRC(drm_dp_read_sink_count_cap, 0x47559387, "");
SYMBOL_CRC(drm_dp_remote_aux_init, 0xa4bdd97e, "");
SYMBOL_CRC(drm_dp_send_real_edid_checksum, 0x17b53f27, "");
SYMBOL_CRC(drm_dp_set_phy_test_pattern, 0x45d054dc, "");
SYMBOL_CRC(drm_dp_set_subconnector_property, 0x04922f37, "");
SYMBOL_CRC(drm_dp_start_crc, 0x24ed5efe, "");
SYMBOL_CRC(drm_dp_stop_crc, 0xb33dd99b, "");
SYMBOL_CRC(drm_dp_subconnector_type, 0xf68741fb, "");
SYMBOL_CRC(drm_dp_vsc_sdp_log, 0x43fbdce0, "");
SYMBOL_CRC(drm_edp_backlight_disable, 0xf690f17c, "");
SYMBOL_CRC(drm_edp_backlight_enable, 0x8361fce3, "");
SYMBOL_CRC(drm_edp_backlight_init, 0x47513450, "");
SYMBOL_CRC(drm_edp_backlight_set_level, 0xc2b1f2f1, "");
SYMBOL_CRC(drm_panel_dp_aux_backlight, 0x3bf87eb4, "");
SYMBOL_CRC(drm_atomic_get_mst_payload_state, 0x23d4fc6d, "");
SYMBOL_CRC(drm_atomic_get_mst_topology_state, 0x6e2005a0, "");
SYMBOL_CRC(drm_atomic_get_new_mst_topology_state, 0x27515e33, "");
SYMBOL_CRC(drm_atomic_get_old_mst_topology_state, 0xdb75876a, "");
SYMBOL_CRC(drm_dp_add_payload_part1, 0xcbb69bbd, "");
SYMBOL_CRC(drm_dp_add_payload_part2, 0x468d1adb, "");
SYMBOL_CRC(drm_dp_atomic_find_time_slots, 0x532e131c, "");
SYMBOL_CRC(drm_dp_atomic_release_time_slots, 0x50d4c91e, "");
SYMBOL_CRC(drm_dp_calc_pbn_mode, 0x8ca2d9e4, "");
SYMBOL_CRC(drm_dp_check_act_status, 0xcb889fab, "");
SYMBOL_CRC(drm_dp_get_vc_payload_bw, 0x95fed478, "");
SYMBOL_CRC(drm_dp_mst_add_affected_dsc_crtcs, 0x5b403d29, "");
SYMBOL_CRC(drm_dp_mst_atomic_check, 0x4cd92cbb, "");
SYMBOL_CRC(drm_dp_mst_atomic_enable_dsc, 0x3178300e, "");
SYMBOL_CRC(drm_dp_mst_atomic_setup_commit, 0xbb59c466, "");
SYMBOL_CRC(drm_dp_mst_atomic_wait_for_dependencies, 0x9503c18b, "");
SYMBOL_CRC(drm_dp_mst_connector_early_unregister, 0xfe3fa213, "");
SYMBOL_CRC(drm_dp_mst_connector_late_register, 0x61ee3983, "");
SYMBOL_CRC(drm_dp_mst_detect_port, 0xf17e234a, "");
SYMBOL_CRC(drm_dp_mst_dsc_aux_for_port, 0x47807191, "");
SYMBOL_CRC(drm_dp_mst_dump_topology, 0xdd700ad7, "");
SYMBOL_CRC(drm_dp_mst_get_edid, 0x5532fb11, "");
SYMBOL_CRC(drm_dp_mst_get_port_malloc, 0x94492f68, "");
SYMBOL_CRC(drm_dp_mst_hpd_irq_handle_event, 0xc554103e, "");
SYMBOL_CRC(drm_dp_mst_hpd_irq_send_new_request, 0x2b926912, "");
SYMBOL_CRC(drm_dp_mst_put_port_malloc, 0x96ec6af2, "");
SYMBOL_CRC(drm_dp_mst_root_conn_atomic_check, 0xa7087287, "");
SYMBOL_CRC(drm_dp_mst_topology_mgr_destroy, 0x7d276a9c, "");
SYMBOL_CRC(drm_dp_mst_topology_mgr_init, 0xa1080756, "");
SYMBOL_CRC(drm_dp_mst_topology_mgr_resume, 0xbde3eeb1, "");
SYMBOL_CRC(drm_dp_mst_topology_mgr_set_mst, 0xee60d54e, "");
SYMBOL_CRC(drm_dp_mst_topology_mgr_suspend, 0x4230df08, "");
SYMBOL_CRC(drm_dp_mst_topology_state_funcs, 0x764c9679, "");
SYMBOL_CRC(drm_dp_mst_update_slots, 0xff123837, "");
SYMBOL_CRC(drm_dp_read_mst_cap, 0x1847a6e4, "");
SYMBOL_CRC(drm_dp_remove_payload, 0xaaa9ef0e, "");
SYMBOL_CRC(drm_dp_send_power_updown_phy, 0x4859df1a, "");
SYMBOL_CRC(drm_dp_send_query_stream_enc_status, 0xfc2ae412, "");
SYMBOL_CRC(drm_dsc_compute_rc_parameters, 0xfe12bcb9, "");
SYMBOL_CRC(drm_dsc_dp_pps_header_init, 0x648d953b, "");
SYMBOL_CRC(drm_dsc_dp_rc_buffer_size, 0x1a5bf3ca, "");
SYMBOL_CRC(drm_dsc_pps_payload_pack, 0x58d8fcaa, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb5a06a60, "drm_crtc_add_crc_entry" },
	{ 0xb9c4492c, "___drm_dbg" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x6b203f6f, "drm_connector_register" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xf824c7db, "__drm_printfn_debug" },
	{ 0x11d70fe0, "drm_atomic_get_private_obj_state" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x49970de8, "finish_wait" },
	{ 0x984ceea2, "drm_atomic_private_obj_init" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x7edf470b, "drm_edid_duplicate" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x55e6631d, "drm_connector_unregister" },
	{ 0x637493f3, "__wake_up" },
	{ 0x380f883f, "drm_mode_object_put" },
	{ 0x801c7bcb, "dev_driver_string" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x69353664, "__drm_debug" },
	{ 0x924592b7, "__drm_atomic_helper_private_obj_duplicate_state" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x22bfcce3, "drm_atomic_private_obj_fini" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0xefbe44be, "i2c_del_adapter" },
	{ 0x5447782c, "drm_dev_printk" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0xa41c32d1, "drm_atomic_get_crtc_state" },
	{ 0x1bc5c923, "drm_crtc_wait_one_vblank" },
	{ 0xd39ffdc3, "drm_modeset_lock" },
	{ 0x9b12d707, "drm_modeset_unlock" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x7505bdef, "memchr_inv" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x8b579540, "drm_modeset_lock_single_interruptible" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xb5fdc18f, "mutex_is_locked" },
	{ 0xe060ef1e, "drm_crtc_commit_wait" },
	{ 0xe2fe5175, "drm_atomic_get_new_private_obj_state" },
	{ 0x71c90087, "memcmp" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xe5d6b629, "drm_atomic_get_old_private_obj_state" },
	{ 0xbbf142c1, "__drm_dev_dbg" },
	{ 0x5f754e5a, "memset" },
	{ 0x52842d82, "_dev_warn" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xae277372, "__drm_crtc_commit_free" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xfd0f592, "mutex_trylock" },
	{ 0xe2ba9bdc, "i2c_add_adapter" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xa248afde, "drm_detect_monitor_audio" },
	{ 0xa68613dd, "get_jiffies_64" },
	{ 0x8b09b0f9, "drm_object_property_set_value" },
	{ 0x28779e52, "drm_printf" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xa28dda74, "drm_kms_helper_hotplug_event" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x4418ca21, "seq_printf" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xf58bc2a5, "i2c_transfer" },
	{ 0x890e2b8d, "drm_display_mode_from_cea_vic" },
	{ 0x46372883, "seq_puts" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0xd37e9c2, "_dev_printk" },
	{ 0x5138844c, "drm_get_edid" },
	{ 0x6c70f75a, "devm_backlight_device_register" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x93bcda2d, "drm_atomic_get_connector_state" },
	{ 0x7c545285, "drm_edid_get_monitor_name" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x92b57248, "flush_work" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "drm,drm_kms_helper");


MODULE_INFO(srcversion, "B62F197FEF0A29979BB2FBC");
