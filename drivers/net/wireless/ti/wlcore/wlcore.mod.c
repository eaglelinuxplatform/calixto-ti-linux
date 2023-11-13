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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(wl12xx_debug_level, 0x06d3b27e, "_gpl");
SYMBOL_CRC(wlcore_alloc_hw, 0x01798fc4, "_gpl");
SYMBOL_CRC(wlcore_free_hw, 0xd2545a97, "_gpl");
SYMBOL_CRC(wlcore_probe, 0xd3257716, "_gpl");
SYMBOL_CRC(wlcore_remove, 0xdc421910, "_gpl");
SYMBOL_CRC(wlcore_set_key, 0x2b9f0920, "_gpl");
SYMBOL_CRC(wl1271_cmd_configure, 0xf8c2c257, "_gpl");
SYMBOL_CRC(wl1271_cmd_data_path, 0x2bafc483, "_gpl");
SYMBOL_CRC(wl1271_cmd_send, 0xf9396291, "_gpl");
SYMBOL_CRC(wl1271_cmd_test, 0x3aa32dc1, "_gpl");
SYMBOL_CRC(wl12xx_cmd_build_probe_req, 0x6f0498d0, "_gpl");
SYMBOL_CRC(wlcore_cmd_generic_cfg, 0xfedba0b4, "_gpl");
SYMBOL_CRC(wlcore_cmd_wait_for_event_or_timeout, 0x239f1aed, "_gpl");
SYMBOL_CRC(wlcore_get_native_channel_type, 0x20351125, "_gpl");
SYMBOL_CRC(wlcore_disable_interrupts, 0x3bd2b8c9, "_gpl");
SYMBOL_CRC(wlcore_disable_interrupts_nosync, 0x1f745ca6, "_gpl");
SYMBOL_CRC(wlcore_enable_interrupts, 0xffd3f8a2, "_gpl");
SYMBOL_CRC(wlcore_set_partition, 0x31ce7cc9, "_gpl");
SYMBOL_CRC(wlcore_synchronize_interrupts, 0x29e4234f, "_gpl");
SYMBOL_CRC(wlcore_translate_addr, 0x186538d1, "_gpl");
SYMBOL_CRC(wlcore_event_ba_rx_constraint, 0x14bef130, "_gpl");
SYMBOL_CRC(wlcore_event_beacon_loss, 0x08b9c389, "_gpl");
SYMBOL_CRC(wlcore_event_channel_switch, 0x844d40d8, "_gpl");
SYMBOL_CRC(wlcore_event_dummy_packet, 0xca42a8e0, "_gpl");
SYMBOL_CRC(wlcore_event_fw_logger, 0x67502b8c, "_gpl");
SYMBOL_CRC(wlcore_event_inactive_sta, 0xcf503666, "_gpl");
SYMBOL_CRC(wlcore_event_max_tx_failure, 0x8c57e38c, "_gpl");
SYMBOL_CRC(wlcore_event_roc_complete, 0x2d46c05b, "_gpl");
SYMBOL_CRC(wlcore_event_rssi_trigger, 0xd83f326a, "_gpl");
SYMBOL_CRC(wlcore_event_sched_scan_completed, 0xb7cc804b, "_gpl");
SYMBOL_CRC(wlcore_event_soft_gemini_sense, 0x60280dcf, "_gpl");
SYMBOL_CRC(wl1271_free_tx_id, 0x0c7cd34a, "");
SYMBOL_CRC(wl12xx_is_dummy_packet, 0x9dbeb932, "");
SYMBOL_CRC(wlcore_calc_packet_alignment, 0xb6bcb4a2, "");
SYMBOL_CRC(wlcore_tx_complete, 0x1c8fac8b, "");
SYMBOL_CRC(wl1271_tx_flush, 0x7eeb78e3, "_gpl");
SYMBOL_CRC(wl1271_tx_min_rate_get, 0xba7afa1d, "_gpl");
SYMBOL_CRC(wl1271_acx_init_mem_config, 0x7d1b9a36, "_gpl");
SYMBOL_CRC(wl1271_acx_pm_config, 0x82c93f0b, "_gpl");
SYMBOL_CRC(wl1271_acx_set_ht_capabilities, 0x4b3ee849, "_gpl");
SYMBOL_CRC(wl1271_acx_sleep_auth, 0xdf3ea0dc, "_gpl");
SYMBOL_CRC(wl12xx_acx_mem_cfg, 0x15d87ea6, "_gpl");
SYMBOL_CRC(wlcore_boot_run_firmware, 0xc4817f7b, "_gpl");
SYMBOL_CRC(wlcore_boot_upload_firmware, 0x29ea23bf, "_gpl");
SYMBOL_CRC(wlcore_boot_upload_nvs, 0x2d595ec4, "_gpl");
SYMBOL_CRC(wl1271_debugfs_update_stats, 0xb80a481d, "_gpl");
SYMBOL_CRC(wl1271_format_buffer, 0xc1db71fa, "_gpl");
SYMBOL_CRC(wlcore_scan_sched_scan_results, 0x981ae6fc, "_gpl");
SYMBOL_CRC(wlcore_scan_sched_scan_ssid_list, 0x056bfa95, "_gpl");
SYMBOL_CRC(wlcore_set_scan_chan_params, 0x57af2d94, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc1514a3b, "free_irq" },
	{ 0xd76f6099, "vscnprintf" },
	{ 0xc54acce8, "ieee80211_connection_loss" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0x7c375e08, "device_set_wakeup_capable" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xb95eeeb, "ieee80211_iterate_interfaces" },
	{ 0xff77a4a5, "ieee80211_sched_scan_stopped" },
	{ 0x9098ac8b, "param_ops_uint" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0xb488139c, "ieee80211_chswitch_done" },
	{ 0xfa941bb7, "skb_put" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xef706529, "consume_skb" },
	{ 0x99bb8806, "memmove" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xc37335b0, "complete" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x735faf6b, "skb_dequeue" },
	{ 0x3ff02157, "pm_runtime_set_autosuspend_delay" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x3c82f653, "ieee80211_free_hw" },
	{ 0x9edcd102, "ieee80211_probereq_get" },
	{ 0xfe5eb6e6, "request_firmware" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x961b4df4, "ieee80211_ap_probereq_get" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xf4111549, "ieee80211_nullfunc_get" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x1f0483dd, "ieee80211_pspoll_get" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xcd2680dd, "ieee80211_register_hw" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x34877340, "ieee80211_restart_hw" },
	{ 0x98366c1f, "ieee80211_get_hdrlen_from_skb" },
	{ 0x4c6bb68e, "dev_pm_set_dedicated_wake_irq" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x5afd7914, "ieee80211_stop_rx_ba_session" },
	{ 0x81f860cb, "ieee80211_wake_queue" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x89fdba70, "device_create_bin_file" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xdaa09489, "ieee80211_find_sta" },
	{ 0x668b595, "_kstrtoul" },
	{ 0x92997ed8, "_printk" },
	{ 0xb391754c, "pm_wakeup_dev_event" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x79b82a71, "cfg80211_find_vendor_elem" },
	{ 0xe3ae1810, "pm_runtime_enable" },
	{ 0xe61a6643, "__current" },
	{ 0x88db665b, "kstrtoul_from_user" },
	{ 0xb8e280d8, "skb_queue_tail" },
	{ 0x723ae2b4, "device_wakeup_disable" },
	{ 0x9d6cba30, "cfg80211_find_elem_match" },
	{ 0xa64a9908, "device_create_file" },
	{ 0xb7f0bf6d, "wiphy_to_ieee80211_hw" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x90f0becb, "ieee80211_queue_delayed_work" },
	{ 0xee5333ad, "ieee80211_proberesp_get" },
	{ 0x137a017f, "device_wakeup_enable" },
	{ 0xdb9788a6, "request_firmware_nowait" },
	{ 0xe450090f, "simple_open" },
	{ 0x8978ba7c, "skb_pull" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x826781f6, "platform_get_resource" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x8965a351, "ieee80211_remain_on_channel_expired" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x8b1e3dd1, "skb_push" },
	{ 0x8e9e820e, "debugfs_remove" },
	{ 0x328a05f1, "strncpy" },
	{ 0xf9493ce3, "no_seek_end_llseek" },
	{ 0x9c5238c5, "ieee80211_wake_queues" },
	{ 0xd9dc0a68, "ieee80211_report_low_ack" },
	{ 0x71c90087, "memcmp" },
	{ 0x96603250, "kmalloc_large" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x4dce47d8, "_raw_spin_trylock" },
	{ 0x5769f8ba, "ieee80211_free_txskb" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xcedc99af, "mutex_lock_interruptible" },
	{ 0xb6ad681a, "ieee80211_alloc_hw_nm" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xc037a42c, "default_llseek" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0x5f754e5a, "memset" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x69b18f43, "rfc1042_header" },
	{ 0x9d2cf4c7, "param_ops_charp" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0x999315c9, "ieee80211_tx_status" },
	{ 0x157519ad, "ieee80211_stop_queue" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xfe94257b, "__netdev_alloc_skb" },
	{ 0xcb510bc2, "complete_all" },
	{ 0x3739f00f, "ieee80211_ready_on_channel" },
	{ 0x8acc6814, "ieee80211_stop_queues" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xabc58048, "skb_trim" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xdeca2c65, "ieee80211_cqm_beacon_loss_notify" },
	{ 0xa81f2ce4, "debugfs_create_file" },
	{ 0x999e8297, "vfree" },
	{ 0xed447467, "ieee80211_sched_scan_results" },
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0x98b5927b, "ieee80211_scan_completed" },
	{ 0x6ffac80d, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0xbea1de1d, "dev_pm_clear_wake_irq" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xcc37b4f7, "pm_runtime_force_resume" },
	{ 0x5a2470b2, "ieee80211_unregister_hw" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0xc8e173ed, "_find_next_bit_le" },
	{ 0xe8721e7, "ieee80211_beacon_get_tim" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0x320da0c7, "ieee80211_cqm_rssi_notify" },
	{ 0x15cfb2b3, "_find_first_zero_bit_le" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x9580c7ff, "__pm_runtime_suspend" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xef9df396, "ieee80211_queue_work" },
	{ 0x2cb2870f, "__pm_runtime_use_autosuspend" },
	{ 0xb4afd56c, "ieee80211_sta_ps_transition" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x581e2394, "__nla_parse" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0xc5745645, "__pm_runtime_disable" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xeca42068, "debugfs_create_dir" },
	{ 0x36fdd5b3, "generic_file_llseek" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x869b215e, "pm_runtime_force_suspend" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0xcd538084, "__pm_runtime_idle" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xb0d11909, "device_remove_bin_file" },
	{ 0x214a0676, "device_remove_file" },
	{ 0x334c8988, "ieee80211_csa_finish" },
	{ 0xf70e9132, "skb_queue_head" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x92b57248, "flush_work" },
	{ 0x7585a43c, "ieee80211_rx_napi" },
	{ 0xa6e3c970, "_find_first_bit_le" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "mac80211,cfg80211");


MODULE_INFO(srcversion, "1F7352481BF0DF9E8BCCD05");
