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

SYMBOL_CRC(_mwifiex_dbg, 0x6df6697a, "_gpl");
SYMBOL_CRC(mwifiex_add_card, 0xa37f3257, "_gpl");
SYMBOL_CRC(mwifiex_drv_info_dump, 0xc21ed4d1, "_gpl");
SYMBOL_CRC(mwifiex_main_process, 0x34d24d69, "_gpl");
SYMBOL_CRC(mwifiex_multi_chan_resync, 0x8a2e39a1, "_gpl");
SYMBOL_CRC(mwifiex_prepare_fw_dump_info, 0xe4fd7f08, "_gpl");
SYMBOL_CRC(mwifiex_queue_main_work, 0x1d7db27d, "_gpl");
SYMBOL_CRC(mwifiex_reinit_sw, 0xc1aef674, "_gpl");
SYMBOL_CRC(mwifiex_remove_card, 0x3695f7c6, "_gpl");
SYMBOL_CRC(mwifiex_shutdown_sw, 0x74ed8283, "_gpl");
SYMBOL_CRC(mwifiex_upload_device_dump, 0x5af10faf, "_gpl");
SYMBOL_CRC(mwifiex_dnld_fw, 0x28851490, "_gpl");
SYMBOL_CRC(mwifiex_process_hs_config, 0x28bf890d, "_gpl");
SYMBOL_CRC(mwifiex_process_sleep_confirm_resp, 0xdc242f71, "_gpl");
SYMBOL_CRC(mwifiex_alloc_dma_align_buf, 0xd4dad9f3, "_gpl");
SYMBOL_CRC(mwifiex_fw_dump_event, 0xb75f6e5d, "_gpl");
SYMBOL_CRC(mwifiex_init_shutdown_fw, 0x68d30008, "_gpl");
SYMBOL_CRC(mwifiex_handle_rx_packet, 0x24c35651, "_gpl");
SYMBOL_CRC(mwifiex_write_data_complete, 0x49806940, "_gpl");
SYMBOL_CRC(mwifiex_deauthenticate_all, 0xd53450b1, "_gpl");
SYMBOL_CRC(mwifiex_cancel_hs, 0xbec413db, "_gpl");
SYMBOL_CRC(mwifiex_disable_auto_ds, 0x183885a0, "_gpl");
SYMBOL_CRC(mwifiex_enable_hs, 0xd0caf9a9, "_gpl");
SYMBOL_CRC(mwifiex_add_virtual_intf, 0x71d799b4, "_gpl");
SYMBOL_CRC(mwifiex_del_virtual_intf, 0x84429ea9, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x1c5d3f06, "cfg80211_sched_scan_results" },
	{ 0x2e93a825, "skb_complete_wifi_ack" },
	{ 0xe914e41e, "strcpy" },
	{ 0x2f1c1e53, "cfg80211_mgmt_tx_status_ext" },
	{ 0x6e0be10e, "device_set_wakeup_enable" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0x7c375e08, "device_set_wakeup_capable" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0x9098ac8b, "param_ops_uint" },
	{ 0xfa941bb7, "skb_put" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0x29f6722, "cfg80211_chandef_dfs_required" },
	{ 0x7f7e9cb3, "cfg80211_scan_done" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x146fd5b0, "cfg80211_sched_scan_stopped" },
	{ 0xf3de4e03, "param_ops_ushort" },
	{ 0x99bb8806, "memmove" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xa95df988, "cfg80211_remain_on_channel_expired" },
	{ 0x95eecec3, "cfg80211_cac_event" },
	{ 0x735faf6b, "skb_dequeue" },
	{ 0x21ea5251, "__bitmap_weight" },
	{ 0x49970de8, "finish_wait" },
	{ 0x76f66584, "cfg80211_register_netdevice" },
	{ 0xfe5eb6e6, "request_firmware" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xf0910e2e, "ieee80211_amsdu_to_8023s" },
	{ 0x2c9f066c, "cfg80211_ref_bss" },
	{ 0x8c0215f2, "pm_system_wakeup" },
	{ 0x9d669763, "memcpy" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xd76244d7, "regulatory_hint" },
	{ 0x37a0cba, "kfree" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x67669b9f, "eth_validate_addr" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x637493f3, "__wake_up" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xc4b4fc27, "cfg80211_chandef_valid" },
	{ 0xf19d02ed, "cfg80211_new_sta" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xd45ddb66, "kstrtobool_from_user" },
	{ 0xbbcf9635, "cfg80211_disconnected" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xcdf4d106, "ether_setup" },
	{ 0x9f77ed8, "dev_addr_mod" },
	{ 0xa3f30645, "eth_type_trans" },
	{ 0x668b595, "_kstrtoul" },
	{ 0xa1971662, "alloc_netdev_mqs" },
	{ 0x7850420b, "wiphy_new_nm" },
	{ 0x92997ed8, "_printk" },
	{ 0xe8db1793, "cfg80211_ready_on_channel" },
	{ 0xb391754c, "pm_wakeup_dev_event" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xd3d3db92, "cfg80211_classify8021d" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x79b82a71, "cfg80211_find_vendor_elem" },
	{ 0x13c0c526, "wiphy_register" },
	{ 0x93bc40ed, "cfg80211_put_bss" },
	{ 0xc6d8fb77, "netif_device_detach" },
	{ 0x1901824e, "cfg80211_ch_switch_notify" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0xe61a6643, "__current" },
	{ 0x4e0577fc, "netif_device_attach" },
	{ 0xb8e280d8, "skb_queue_tail" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x4632de65, "ieee80211_get_channel_khz" },
	{ 0x1d91f719, "__cfg80211_radar_event" },
	{ 0x7e323d9f, "cfg80211_tdls_oper_request" },
	{ 0x723ae2b4, "device_wakeup_disable" },
	{ 0x9d6cba30, "cfg80211_find_elem_match" },
	{ 0xa346975c, "idr_remove" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x137a017f, "device_wakeup_enable" },
	{ 0x5a3b05a9, "cfg80211_ibss_joined" },
	{ 0xdb9788a6, "request_firmware_nowait" },
	{ 0xe450090f, "simple_open" },
	{ 0x8978ba7c, "skb_pull" },
	{ 0x692a4f08, "idr_alloc" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x57130052, "wiphy_apply_custom_regulatory" },
	{ 0xf3ddbe01, "cfg80211_michael_mic_failure" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0xf9729b3a, "dev_close" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x8b1e3dd1, "skb_push" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x8e9e820e, "debugfs_remove" },
	{ 0x84b183ae, "strncmp" },
	{ 0xedeb65e3, "cfg80211_del_sta_sinfo" },
	{ 0xb172a861, "wiphy_unregister" },
	{ 0xe6cffcf9, "free_netdev" },
	{ 0x71c90087, "memcmp" },
	{ 0x96603250, "kmalloc_large" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x56072e69, "dev_coredumpv" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xcedc99af, "mutex_lock_interruptible" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x164bab18, "cfg80211_get_bss" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x11089ac7, "_ctype" },
	{ 0xff5316d2, "netif_tx_stop_all_queues" },
	{ 0x2d3d94d6, "netif_tx_wake_queue" },
	{ 0x2878e15a, "idr_destroy" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0x5f754e5a, "memset" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x69b18f43, "rfc1042_header" },
	{ 0x9d2cf4c7, "param_ops_charp" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x163ce293, "of_property_read_variable_u8_array" },
	{ 0xf758551a, "netif_rx" },
	{ 0xfe94257b, "__netdev_alloc_skb" },
	{ 0xcb510bc2, "complete_all" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xabc58048, "skb_trim" },
	{ 0xead23951, "skb_unlink" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xee50aaa2, "cfg80211_sched_scan_stopped_locked" },
	{ 0xecdbbd5c, "skb_realloc_headroom" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x246790df, "idr_for_each" },
	{ 0xa81f2ce4, "debugfs_create_file" },
	{ 0xd68c6fd7, "cfg80211_unregister_wdev" },
	{ 0x999e8297, "vfree" },
	{ 0x6a6b986f, "cfg80211_rx_mgmt_ext" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe4ea4aab, "param_ops_bool" },
	{ 0x97106714, "memdup_user_nul" },
	{ 0xcfb8ae07, "__dev_kfree_skb_any" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xf16731f3, "netif_carrier_off" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x60181f35, "skb_copy" },
	{ 0x9cc51289, "skb_clone" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0xf278f519, "netif_carrier_on" },
	{ 0x6ca71fd, "cfg80211_chandef_create" },
	{ 0xcd470ae1, "cfg80211_report_wowlan_wakeup" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x780cb1be, "cfg80211_inform_bss_data" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xcd6cf361, "irq_of_parse_and_map" },
	{ 0x97255bdf, "strlen" },
	{ 0x1879fcbd, "bridge_tunnel_header" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x429c0c31, "ieee80211_bss_get_elem" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xeca42068, "debugfs_create_dir" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x26ae97b0, "cfg80211_connect_done" },
	{ 0x188ee3ff, "wiphy_free" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x387f54bd, "cfg80211_cqm_rssi_notify" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf70e9132, "skb_queue_head" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "cfg80211");


MODULE_INFO(srcversion, "E9B8BDCB782676BD3748763");
