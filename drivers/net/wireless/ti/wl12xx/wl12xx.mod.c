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


static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xba7afa1d, "wl1271_tx_min_rate_get" },
	{ 0xf9396291, "wl1271_cmd_send" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x2d46c05b, "wlcore_event_roc_complete" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x56bfa95, "wlcore_scan_sched_scan_ssid_list" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x186538d1, "wlcore_translate_addr" },
	{ 0xc4817f7b, "wlcore_boot_run_firmware" },
	{ 0x57af2d94, "wlcore_set_scan_chan_params" },
	{ 0xb80a481d, "wl1271_debugfs_update_stats" },
	{ 0x9d669763, "memcpy" },
	{ 0xc1db71fa, "wl1271_format_buffer" },
	{ 0x1c8fac8b, "wlcore_tx_complete" },
	{ 0x37a0cba, "kfree" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xd2545a97, "wlcore_free_hw" },
	{ 0x60280dcf, "wlcore_event_soft_gemini_sense" },
	{ 0x981ae6fc, "wlcore_scan_sched_scan_results" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x8c57e38c, "wlcore_event_max_tx_failure" },
	{ 0x92997ed8, "_printk" },
	{ 0xdc421910, "wlcore_remove" },
	{ 0x3bd2b8c9, "wlcore_disable_interrupts" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x844d40d8, "wlcore_event_channel_switch" },
	{ 0x90f0becb, "ieee80211_queue_delayed_work" },
	{ 0xe450090f, "simple_open" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x3aa32dc1, "wl1271_cmd_test" },
	{ 0xffd3f8a2, "wlcore_enable_interrupts" },
	{ 0x31ce7cc9, "wlcore_set_partition" },
	{ 0xdf3ea0dc, "wl1271_acx_sleep_auth" },
	{ 0x29ea23bf, "wlcore_boot_upload_firmware" },
	{ 0xb7cc804b, "wlcore_event_sched_scan_completed" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0x15d87ea6, "wl12xx_acx_mem_cfg" },
	{ 0x2bafc483, "wl1271_cmd_data_path" },
	{ 0x9d2cf4c7, "param_ops_charp" },
	{ 0xf8c2c257, "wl1271_cmd_configure" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xcb99963, "__platform_driver_register" },
	{ 0x4b3ee849, "wl1271_acx_set_ht_capabilities" },
	{ 0xa81f2ce4, "debugfs_create_file" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x1798fc4, "wlcore_alloc_hw" },
	{ 0xd3257716, "wlcore_probe" },
	{ 0x239f1aed, "wlcore_cmd_wait_for_event_or_timeout" },
	{ 0xd83f326a, "wlcore_event_rssi_trigger" },
	{ 0xb6bcb4a2, "wlcore_calc_packet_alignment" },
	{ 0x82c93f0b, "wl1271_acx_pm_config" },
	{ 0x14bef130, "wlcore_event_ba_rx_constraint" },
	{ 0xcf503666, "wlcore_event_inactive_sta" },
	{ 0xca42a8e0, "wlcore_event_dummy_packet" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x8b9c389, "wlcore_event_beacon_loss" },
	{ 0xeca42068, "debugfs_create_dir" },
	{ 0x36fdd5b3, "generic_file_llseek" },
	{ 0x7d1b9a36, "wl1271_acx_init_mem_config" },
	{ 0x2b9f0920, "wlcore_set_key" },
	{ 0x6d3b27e, "wl12xx_debug_level" },
	{ 0x2d595ec4, "wlcore_boot_upload_nvs" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x6f0498d0, "wl12xx_cmd_build_probe_req" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "wlcore,mac80211");

MODULE_ALIAS("platform:wl12xx");

MODULE_INFO(srcversion, "28638E379495466AE9EF17E");
