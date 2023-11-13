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

SYMBOL_CRC(cfg80211_register_netdevice, 0x76f66584, "");
SYMBOL_CRC(cfg80211_stop_iface, 0x252ed538, "");
SYMBOL_CRC(cfg80211_unregister_wdev, 0xd68c6fd7, "");
SYMBOL_CRC(wiphy_free, 0x188ee3ff, "");
SYMBOL_CRC(wiphy_new_nm, 0x7850420b, "");
SYMBOL_CRC(wiphy_register, 0x13c0c526, "");
SYMBOL_CRC(wiphy_rfkill_set_hw_state_reason, 0x41419f7f, "");
SYMBOL_CRC(wiphy_rfkill_start_polling, 0x5e9724b2, "");
SYMBOL_CRC(wiphy_unregister, 0xb172a861, "");
SYMBOL_CRC(cfg80211_shutdown_all_interfaces, 0x0df9077d, "_gpl");
SYMBOL_CRC(ieee80211_radiotap_iterator_init, 0x43afadee, "");
SYMBOL_CRC(ieee80211_radiotap_iterator_next, 0x7acb86ed, "");
SYMBOL_CRC(bridge_tunnel_header, 0x1879fcbd, "");
SYMBOL_CRC(cfg80211_calculate_bitrate, 0x4d888bc1, "");
SYMBOL_CRC(cfg80211_check_combinations, 0xa6b91645, "");
SYMBOL_CRC(cfg80211_classify8021d, 0xd3d3db92, "");
SYMBOL_CRC(cfg80211_free_nan_func, 0x8fa02936, "");
SYMBOL_CRC(cfg80211_get_iftype_ext_capa, 0x5a911539, "");
SYMBOL_CRC(cfg80211_get_p2p_attr, 0xf5596d89, "");
SYMBOL_CRC(cfg80211_get_station, 0x2b739c47, "");
SYMBOL_CRC(cfg80211_iftype_allowed, 0x53badaa8, "");
SYMBOL_CRC(cfg80211_iter_combinations, 0xd39acdee, "");
SYMBOL_CRC(cfg80211_send_layer2_update, 0xa37d3ec8, "");
SYMBOL_CRC(cfg80211_sinfo_alloc_tid_stats, 0x935ed1e9, "");
SYMBOL_CRC(ieee80211_amsdu_to_8023s, 0xf0910e2e, "");
SYMBOL_CRC(ieee80211_bss_get_elem, 0x429c0c31, "");
SYMBOL_CRC(ieee80211_chandef_to_operating_class, 0x3643b80f, "");
SYMBOL_CRC(ieee80211_channel_to_freq_khz, 0x5584448a, "");
SYMBOL_CRC(ieee80211_data_to_8023_exthdr, 0x525006ec, "");
SYMBOL_CRC(ieee80211_freq_khz_to_channel, 0x6bedf402, "");
SYMBOL_CRC(ieee80211_get_channel_khz, 0x4632de65, "");
SYMBOL_CRC(ieee80211_get_hdrlen_from_skb, 0x98366c1f, "");
SYMBOL_CRC(ieee80211_get_mesh_hdrlen, 0xd56d55f3, "");
SYMBOL_CRC(ieee80211_get_num_supported_channels, 0x8fbd4c14, "");
SYMBOL_CRC(ieee80211_get_response_rate, 0x46ff300c, "");
SYMBOL_CRC(ieee80211_get_vht_max_nss, 0x7c3ac925, "");
SYMBOL_CRC(ieee80211_hdrlen, 0x7ef39823, "");
SYMBOL_CRC(ieee80211_ie_split_ric, 0x38cb594a, "");
SYMBOL_CRC(ieee80211_mandatory_rates, 0x97b516c7, "");
SYMBOL_CRC(ieee80211_operating_class_to_band, 0xf40bc2f5, "");
SYMBOL_CRC(ieee80211_s1g_channel_width, 0x0cc95bc2, "");
SYMBOL_CRC(rfc1042_header, 0x69b18f43, "");
SYMBOL_CRC(freq_reg_info, 0x2629da8e, "");
SYMBOL_CRC(get_wiphy_regdom, 0x78bfcf0b, "");
SYMBOL_CRC(reg_initiator_name, 0xdba126c1, "");
SYMBOL_CRC(reg_query_regdb_wmm, 0x1ce2497f, "");
SYMBOL_CRC(regulatory_hint, 0xd76244d7, "");
SYMBOL_CRC(regulatory_pre_cac_allowed, 0x8c60aca8, "");
SYMBOL_CRC(regulatory_set_wiphy_regd, 0xbb47ce59, "");
SYMBOL_CRC(regulatory_set_wiphy_regd_sync, 0x006dfd79, "");
SYMBOL_CRC(wiphy_apply_custom_regulatory, 0x57130052, "");
SYMBOL_CRC(cfg80211_bss_flush, 0xdf3e95af, "");
SYMBOL_CRC(cfg80211_bss_iter, 0x940c238c, "");
SYMBOL_CRC(cfg80211_find_elem_match, 0x9d6cba30, "");
SYMBOL_CRC(cfg80211_find_vendor_elem, 0x79b82a71, "");
SYMBOL_CRC(cfg80211_get_bss, 0x164bab18, "");
SYMBOL_CRC(cfg80211_get_ies_channel_number, 0xc1242b9b, "");
SYMBOL_CRC(cfg80211_inform_bss_data, 0x780cb1be, "");
SYMBOL_CRC(cfg80211_inform_bss_frame_data, 0x6e1ece79, "");
SYMBOL_CRC(cfg80211_is_element_inherited, 0xcc1a7c48, "");
SYMBOL_CRC(cfg80211_merge_profile, 0x8b24e88f, "");
SYMBOL_CRC(cfg80211_put_bss, 0x93bc40ed, "");
SYMBOL_CRC(cfg80211_ref_bss, 0x2c9f066c, "");
SYMBOL_CRC(cfg80211_scan_done, 0x7f7e9cb3, "");
SYMBOL_CRC(cfg80211_sched_scan_results, 0x1c5d3f06, "");
SYMBOL_CRC(cfg80211_sched_scan_stopped, 0x146fd5b0, "");
SYMBOL_CRC(cfg80211_sched_scan_stopped_locked, 0xee50aaa2, "");
SYMBOL_CRC(cfg80211_unlink_bss, 0xf18540b4, "");
SYMBOL_CRC(__cfg80211_alloc_event_skb, 0xfa73a72d, "");
SYMBOL_CRC(__cfg80211_alloc_reply_skb, 0xf1b2022a, "");
SYMBOL_CRC(__cfg80211_send_event_skb, 0xeadbd892, "");
SYMBOL_CRC(cfg80211_assoc_comeback, 0x5d879295, "");
SYMBOL_CRC(cfg80211_bss_color_notify, 0x01408288, "");
SYMBOL_CRC(cfg80211_ch_switch_notify, 0x1901824e, "");
SYMBOL_CRC(cfg80211_ch_switch_started_notify, 0x719dbd1e, "");
SYMBOL_CRC(cfg80211_check_station_change, 0xc7fb8164, "");
SYMBOL_CRC(cfg80211_conn_failed, 0xb04b1ba4, "");
SYMBOL_CRC(cfg80211_control_port_tx_status, 0xe1dfae8b, "");
SYMBOL_CRC(cfg80211_cqm_beacon_loss_notify, 0x7cf49d56, "");
SYMBOL_CRC(cfg80211_cqm_pktloss_notify, 0x3090a91c, "");
SYMBOL_CRC(cfg80211_cqm_rssi_notify, 0x387f54bd, "");
SYMBOL_CRC(cfg80211_cqm_txe_notify, 0x7ff664f8, "");
SYMBOL_CRC(cfg80211_crit_proto_stopped, 0x1bee3dd4, "");
SYMBOL_CRC(cfg80211_del_sta_sinfo, 0xedeb65e3, "");
SYMBOL_CRC(cfg80211_external_auth_request, 0x94364c75, "");
SYMBOL_CRC(cfg80211_ft_event, 0x6ac23dcc, "");
SYMBOL_CRC(cfg80211_gtk_rekey_notify, 0xc8343194, "");
SYMBOL_CRC(cfg80211_mgmt_tx_status_ext, 0x2f1c1e53, "");
SYMBOL_CRC(cfg80211_nan_func_terminated, 0x2f1f6750, "");
SYMBOL_CRC(cfg80211_nan_match, 0x9619cf68, "");
SYMBOL_CRC(cfg80211_new_sta, 0xf19d02ed, "");
SYMBOL_CRC(cfg80211_notify_new_peer_candidate, 0x0416dad3, "");
SYMBOL_CRC(cfg80211_pmksa_candidate_notify, 0xdc04b86e, "");
SYMBOL_CRC(cfg80211_probe_status, 0x8bd7a166, "");
SYMBOL_CRC(cfg80211_ready_on_channel, 0xe8db1793, "");
SYMBOL_CRC(cfg80211_remain_on_channel_expired, 0xa95df988, "");
SYMBOL_CRC(cfg80211_report_obss_beacon_khz, 0xcb4a09fa, "");
SYMBOL_CRC(cfg80211_report_wowlan_wakeup, 0xcd470ae1, "");
SYMBOL_CRC(cfg80211_rx_control_port, 0xa8f07456, "");
SYMBOL_CRC(cfg80211_rx_spurious_frame, 0xc1f23968, "");
SYMBOL_CRC(cfg80211_rx_unexpected_4addr_frame, 0x796ff1a9, "");
SYMBOL_CRC(cfg80211_rx_unprot_mlme_mgmt, 0x562eced9, "");
SYMBOL_CRC(cfg80211_sta_opmode_change_notify, 0xc40c9df9, "");
SYMBOL_CRC(cfg80211_tdls_oper_request, 0x7e323d9f, "");
SYMBOL_CRC(cfg80211_tx_mgmt_expired, 0x8f98fee1, "");
SYMBOL_CRC(cfg80211_update_owe_info_event, 0xaa7422db, "");
SYMBOL_CRC(cfg80211_vendor_cmd_get_sender, 0x453b0ff1, "_gpl");
SYMBOL_CRC(cfg80211_vendor_cmd_reply, 0xc75251d5, "_gpl");
SYMBOL_CRC(__cfg80211_radar_event, 0x1d91f719, "");
SYMBOL_CRC(cfg80211_assoc_failure, 0x84c7dd87, "");
SYMBOL_CRC(cfg80211_auth_timeout, 0x6f0ff1f1, "");
SYMBOL_CRC(cfg80211_background_cac_abort, 0x93a5bbde, "");
SYMBOL_CRC(cfg80211_cac_event, 0x95eecec3, "");
SYMBOL_CRC(cfg80211_michael_mic_failure, 0xf3ddbe01, "");
SYMBOL_CRC(cfg80211_rx_assoc_resp, 0xe0976ca5, "");
SYMBOL_CRC(cfg80211_rx_mgmt_ext, 0x6a6b986f, "");
SYMBOL_CRC(cfg80211_rx_mlme_mgmt, 0x2856f8ac, "");
SYMBOL_CRC(cfg80211_tx_mlme_mgmt, 0xeace300f, "");
SYMBOL_CRC(cfg80211_ibss_joined, 0x5a3b05a9, "");
SYMBOL_CRC(cfg80211_connect_done, 0x26ae97b0, "");
SYMBOL_CRC(cfg80211_disconnected, 0xbbcf9635, "");
SYMBOL_CRC(cfg80211_port_authorized, 0x8388f7b5, "");
SYMBOL_CRC(cfg80211_roamed, 0x6647efee, "");
SYMBOL_CRC(cfg80211_any_usable_channels, 0x1470d342, "");
SYMBOL_CRC(cfg80211_chandef_compatible, 0xd97eaad4, "");
SYMBOL_CRC(cfg80211_chandef_create, 0x06ca71fd, "");
SYMBOL_CRC(cfg80211_chandef_dfs_required, 0x029f6722, "");
SYMBOL_CRC(cfg80211_chandef_usable, 0x73af5792, "");
SYMBOL_CRC(cfg80211_chandef_valid, 0xc4b4fc27, "");
SYMBOL_CRC(cfg80211_reg_can_beacon, 0xc425aa11, "");
SYMBOL_CRC(cfg80211_reg_can_beacon_relax, 0xcd24650b, "");
SYMBOL_CRC(wdev_chandef, 0x67466afb, "");
SYMBOL_CRC(cfg80211_get_drvinfo, 0x0f6703fd, "");
SYMBOL_CRC(cfg80211_pmsr_complete, 0x645d0b81, "_gpl");
SYMBOL_CRC(cfg80211_pmsr_report, 0x3b0d5026, "_gpl");
SYMBOL_CRC(wiphy_read_of_freq_limits, 0x55f9af2a, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe914e41e, "strcpy" },
	{ 0xa8a08caf, "trace_print_array_seq" },
	{ 0x67617ea6, "__sock_create" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xa42aba59, "verify_pkcs7_signature" },
	{ 0x62741661, "skb_copy_bits" },
	{ 0xc41bc980, "iwe_stream_add_value" },
	{ 0xfa941bb7, "skb_put" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x57674fd7, "__sw_hweight16" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xbcc15e75, "ktime_get_coarse_with_offset" },
	{ 0xee54f561, "dev_set_name" },
	{ 0xef706529, "consume_skb" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x933dc050, "__nla_validate" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x3beffb35, "nla_reserve" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x4676d27, "trace_raw_output_prep" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xbfaa04fe, "nla_put_64bit" },
	{ 0x8dd4f313, "__trace_trigger_soft_disabled" },
	{ 0x49970de8, "finish_wait" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xfe5eb6e6, "request_firmware" },
	{ 0xc4ea270a, "trace_event_printf" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xb312e47e, "device_initialize" },
	{ 0xa4d05df0, "skb_add_rx_frag" },
	{ 0x17b5e4bd, "genlmsg_put" },
	{ 0x74e895b3, "trace_event_raw_init" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xd9333230, "genlmsg_multicast_allns" },
	{ 0x637493f3, "__wake_up" },
	{ 0x9a6fff32, "unregister_netdevice_queue" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x2f7337bd, "keyring_alloc" },
	{ 0xd1bf472a, "netdev_err" },
	{ 0x9b976591, "device_rename" },
	{ 0x3323213, "trace_event_buffer_commit" },
	{ 0xa3f30645, "eth_type_trans" },
	{ 0x1e8fac8e, "wireless_nlevent_flush" },
	{ 0xd46b54dd, "flush_delayed_work" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x1000e51, "schedule" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x7c8cea9e, "key_create_or_update" },
	{ 0x2c6007e1, "put_device" },
	{ 0x4733c600, "netlink_broadcast" },
	{ 0xae6286bb, "net_ns_type_operations" },
	{ 0x9aac8012, "__alloc_skb" },
	{ 0xe61a6643, "__current" },
	{ 0x305d2083, "sysfs_create_link" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xbdabc1b4, "inet_csk_get_port" },
	{ 0xd852dc4e, "key_put" },
	{ 0x4e7cbc7e, "kobject_uevent_env" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0x4b169df5, "__dev_get_by_index" },
	{ 0xd7d82541, "perf_trace_run_bpf_submit" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x9574b7b2, "__class_register" },
	{ 0x45312867, "init_net" },
	{ 0xdb9788a6, "request_firmware_nowait" },
	{ 0x8978ba7c, "skb_pull" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xc33aa545, "device_add" },
	{ 0xd1f3e39c, "sysfs_remove_link" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x4d0e8846, "init_uts_ns" },
	{ 0x90d8af31, "platform_device_unregister" },
	{ 0x32714601, "netlink_unicast" },
	{ 0xb2942dad, "dev_get_by_index" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0xf9729b3a, "dev_close" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x80c4c319, "crc32_le" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x8b1e3dd1, "skb_push" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x8e9e820e, "debugfs_remove" },
	{ 0xfffdee95, "wireless_send_event" },
	{ 0x714b06aa, "nla_put" },
	{ 0x9e1b61bc, "trace_event_reg" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xcd279169, "nla_find" },
	{ 0xea4a09cb, "mod_delayed_work_on" },
	{ 0x8ebf658, "of_find_property" },
	{ 0xc787f3c5, "class_unregister" },
	{ 0x3d9f21fe, "__cpu_online_mask" },
	{ 0x9e3b34de, "unregister_pernet_device" },
	{ 0x71c90087, "memcmp" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x11089ac7, "_ctype" },
	{ 0x1cfee4f1, "device_del" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0x5f754e5a, "memset" },
	{ 0x9d2cf4c7, "param_ops_charp" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x9f24529f, "__pskb_pull_tail" },
	{ 0xf758551a, "netif_rx" },
	{ 0xfe94257b, "__netdev_alloc_skb" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xabc58048, "skb_trim" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x7bdac3ca, "of_prop_next_u32" },
	{ 0x18c95432, "__put_net" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3c00f507, "get_net_ns_by_pid" },
	{ 0xedd9fe72, "debugfs_rename" },
	{ 0xeea0399, "strscpy" },
	{ 0x869bf511, "platform_device_register_full" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xac1c7622, "trace_event_buffer_reserve" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe4ea4aab, "param_ops_bool" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xc8e173ed, "_find_next_bit_le" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0xf1cc1ee5, "sock_release" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0x88ca894b, "genl_unregister_family" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xea07d716, "page_address" },
	{ 0xea124bd1, "gcd" },
	{ 0x97255bdf, "strlen" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x581e2394, "__nla_parse" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0x9fafa4fb, "mem_map" },
	{ 0xeca42068, "debugfs_create_dir" },
	{ 0xe12e54fb, "genl_register_family" },
	{ 0xe4b88ba7, "__dev_change_net_namespace" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x4ae4635, "trace_handle_return" },
	{ 0x9e223cc8, "register_pernet_device" },
	{ 0xe83202df, "get_net_ns_by_fd" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x92b57248, "flush_work" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x130d9731, "register_netdevice" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "56A0863ABE7FD565DCF4545");
