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
	{ 0xc54acce8, "ieee80211_connection_loss" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0xf9396291, "wl1271_cmd_send" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x9dbeb932, "wl12xx_is_dummy_packet" },
	{ 0x99bb8806, "memmove" },
	{ 0x2d46c05b, "wlcore_event_roc_complete" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x56bfa95, "wlcore_scan_sched_scan_ssid_list" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x186538d1, "wlcore_translate_addr" },
	{ 0xc4817f7b, "wlcore_boot_run_firmware" },
	{ 0xfe5eb6e6, "request_firmware" },
	{ 0x57af2d94, "wlcore_set_scan_chan_params" },
	{ 0xb80a481d, "wl1271_debugfs_update_stats" },
	{ 0x9d669763, "memcpy" },
	{ 0xc1db71fa, "wl1271_format_buffer" },
	{ 0x37a0cba, "kfree" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xd2545a97, "wlcore_free_hw" },
	{ 0x98366c1f, "ieee80211_get_hdrlen_from_skb" },
	{ 0x981ae6fc, "wlcore_scan_sched_scan_results" },
	{ 0x5afd7914, "ieee80211_stop_rx_ba_session" },
	{ 0xc7cd34a, "wl1271_free_tx_id" },
	{ 0x8c57e38c, "wlcore_event_max_tx_failure" },
	{ 0x34ca145c, "kstrtou8_from_user" },
	{ 0xdaa09489, "ieee80211_find_sta" },
	{ 0x92997ed8, "_printk" },
	{ 0xdc421910, "wlcore_remove" },
	{ 0x3bd2b8c9, "wlcore_disable_interrupts" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xfa73a72d, "__cfg80211_alloc_event_skb" },
	{ 0x844d40d8, "wlcore_event_channel_switch" },
	{ 0x88db665b, "kstrtoul_from_user" },
	{ 0xb8e280d8, "skb_queue_tail" },
	{ 0xeadbd892, "__cfg80211_send_event_skb" },
	{ 0x90f0becb, "ieee80211_queue_delayed_work" },
	{ 0xe450090f, "simple_open" },
	{ 0x8978ba7c, "skb_pull" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x7b9a90c4, "irq_get_irq_data" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x714b06aa, "nla_put" },
	{ 0xffd3f8a2, "wlcore_enable_interrupts" },
	{ 0x328a05f1, "strncpy" },
	{ 0x31ce7cc9, "wlcore_set_partition" },
	{ 0x29ea23bf, "wlcore_boot_upload_firmware" },
	{ 0xb7cc804b, "wlcore_event_sched_scan_completed" },
	{ 0xc037a42c, "default_llseek" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0x5f754e5a, "memset" },
	{ 0x9d2cf4c7, "param_ops_charp" },
	{ 0xf8c2c257, "wl1271_cmd_configure" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcb99963, "__platform_driver_register" },
	{ 0x20351125, "wlcore_get_native_channel_type" },
	{ 0xa81f2ce4, "debugfs_create_file" },
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x1798fc4, "wlcore_alloc_hw" },
	{ 0xe4ea4aab, "param_ops_bool" },
	{ 0xd3257716, "wlcore_probe" },
	{ 0x239f1aed, "wlcore_cmd_wait_for_event_or_timeout" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xd83f326a, "wlcore_event_rssi_trigger" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0x67502b8c, "wlcore_event_fw_logger" },
	{ 0xb61c920, "ieee80211_radar_detected" },
	{ 0x14bef130, "wlcore_event_ba_rx_constraint" },
	{ 0xcf503666, "wlcore_event_inactive_sta" },
	{ 0xca42a8e0, "wlcore_event_dummy_packet" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x9580c7ff, "__pm_runtime_suspend" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0x8b9c389, "wlcore_event_beacon_loss" },
	{ 0xeca42068, "debugfs_create_dir" },
	{ 0x36fdd5b3, "generic_file_llseek" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x2b9f0920, "wlcore_set_key" },
	{ 0x6d3b27e, "wl12xx_debug_level" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x6f0498d0, "wl12xx_cmd_build_probe_req" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "mac80211,wlcore,cfg80211");

MODULE_ALIAS("platform:wl18xx");

MODULE_INFO(srcversion, "AB4F0F63E643AE4E2F29118");
