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

SYMBOL_CRC(nf_br_ops, 0xdc3c475b, "_gpl");
SYMBOL_CRC(br_fdb_clear_offload, 0xabae5b89, "_gpl");
SYMBOL_CRC(br_fdb_find_port, 0xe82c1354, "_gpl");
SYMBOL_CRC(br_dev_queue_push_xmit, 0x7302da9d, "_gpl");
SYMBOL_CRC(br_forward, 0x5cce834c, "_gpl");
SYMBOL_CRC(br_forward_finish, 0x06aa8dd9, "_gpl");
SYMBOL_CRC(br_port_flag_is_set, 0x85d00e4f, "_gpl");
SYMBOL_CRC(br_handle_frame_finish, 0xa6804103, "_gpl");
SYMBOL_CRC(br_get_ageing_time, 0xbf2a4642, "_gpl");
SYMBOL_CRC(br_port_get_stp_state, 0xf3face81, "_gpl");
SYMBOL_CRC(br_multicast_enabled, 0x07617400, "_gpl");
SYMBOL_CRC(br_multicast_has_querier_adjacent, 0x2b5c3190, "_gpl");
SYMBOL_CRC(br_multicast_has_querier_anywhere, 0xe2167bd3, "_gpl");
SYMBOL_CRC(br_multicast_has_router_adjacent, 0x21b55d6b, "_gpl");
SYMBOL_CRC(br_multicast_list_adjacent, 0xe5a1f724, "_gpl");
SYMBOL_CRC(br_multicast_router, 0xf2bc11e3, "_gpl");
SYMBOL_CRC(br_vlan_enabled, 0xae8a238f, "_gpl");
SYMBOL_CRC(br_vlan_get_info, 0x1b5c8573, "_gpl");
SYMBOL_CRC(br_vlan_get_info_rcu, 0xa5452958, "_gpl");
SYMBOL_CRC(br_vlan_get_proto, 0x5ec529d1, "_gpl");
SYMBOL_CRC(br_vlan_get_pvid, 0x86a65665, "_gpl");
SYMBOL_CRC(br_vlan_get_pvid_rcu, 0x74d8650d, "_gpl");
SYMBOL_CRC(br_mst_enabled, 0xe6ffe6ec, "_gpl");
SYMBOL_CRC(br_mst_get_info, 0x8447e811, "_gpl");
SYMBOL_CRC(br_mst_get_state, 0x914aaf6b, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x382c2d13, "netdev_lower_get_next" },
	{ 0xbf2fd502, "dev_set_mtu" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x3b335406, "dev_pre_changeaddr_notify" },
	{ 0xa038f306, "__rht_bucket_nested" },
	{ 0x62741661, "skb_copy_bits" },
	{ 0xeeb484f5, "__nlmsg_put" },
	{ 0xceb831b7, "switchdev_port_attr_set" },
	{ 0x6ceae53f, "ipv6_mc_check_mld" },
	{ 0xfa941bb7, "skb_put" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x82636ea3, "call_switchdev_notifiers" },
	{ 0xc3f488e5, "sysfs_create_file_ns" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xc921175e, "netdev_update_features" },
	{ 0xef706529, "consume_skb" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x99bb8806, "memmove" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x2e7e2a6a, "__traceiter_br_fdb_add" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xbfaa04fe, "nla_put_64bit" },
	{ 0x64fa5beb, "__traceiter_br_fdb_update" },
	{ 0x644b8be1, "dev_uc_del" },
	{ 0xf601e4a8, "rtnl_link_register" },
	{ 0xe2b3207a, "unregister_switchdev_notifier" },
	{ 0x7ac0772c, "sysfs_create_bin_file" },
	{ 0x9d669763, "memcpy" },
	{ 0x910a9293, "dev_get_iflink" },
	{ 0x37a0cba, "kfree" },
	{ 0x2d3f7c61, "dev_set_promiscuity" },
	{ 0x44da5d0f, "__csum_ipv6_magic" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x6011eb03, "rhashtable_init" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x9a6fff32, "unregister_netdevice_queue" },
	{ 0xaf1274ad, "kmem_cache_create" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x971e0afa, "netdev_state_change" },
	{ 0xaeab7afe, "__dev_get_by_name" },
	{ 0xcdf4d106, "ether_setup" },
	{ 0xd1bf472a, "netdev_err" },
	{ 0x8727083f, "pskb_expand_head" },
	{ 0x48c39a62, "register_pernet_subsys" },
	{ 0x54e80604, "brioctl_set" },
	{ 0x9f77ed8, "dev_addr_mod" },
	{ 0x62f77f68, "arp_xmit" },
	{ 0x668b595, "_kstrtoul" },
	{ 0xa1971662, "alloc_netdev_mqs" },
	{ 0x1f5ca117, "passthru_features_check" },
	{ 0xa91f47f, "nla_put_nohdr" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x450984b1, "netdev_rx_handler_unregister" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x2cf33cf7, "rtnl_af_register" },
	{ 0x9aac8012, "__alloc_skb" },
	{ 0xdb9178ea, "kmem_cache_alloc" },
	{ 0xe61a6643, "__current" },
	{ 0x34d08fa4, "rtnl_set_sk_err" },
	{ 0x21486500, "skb_vlan_pop" },
	{ 0x305d2083, "sysfs_create_link" },
	{ 0x800473f, "__cond_resched" },
	{ 0x3b07947f, "ipv6_dev_get_saddr" },
	{ 0xcef4d5b4, "__alloc_percpu_gfp" },
	{ 0x49f26466, "kstrndup" },
	{ 0x32f72148, "nla_reserve_64bit" },
	{ 0x92f1d8b0, "__ip_mc_dec_group" },
	{ 0x4b169df5, "__dev_get_by_index" },
	{ 0xba2259bb, "rtnl_link_unregister" },
	{ 0x7e3191f6, "try_to_del_timer_sync" },
	{ 0x36242943, "switchdev_deferred_process" },
	{ 0xa2683b3f, "dev_get_port_parent_id" },
	{ 0x45312867, "init_net" },
	{ 0x29d1e767, "ipv6_stub" },
	{ 0x3b7e7bf3, "inet_confirm_addr" },
	{ 0x8978ba7c, "skb_pull" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xd1f3e39c, "sysfs_remove_link" },
	{ 0x7ea5c224, "skb_vlan_untag" },
	{ 0x8677245d, "unregister_switchdev_blocking_notifier" },
	{ 0xb2d67522, "rtnl_af_unregister" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xa7eedcc4, "call_usermodehelper" },
	{ 0xf4f14de6, "rtnl_trylock" },
	{ 0xd149222e, "arp_send" },
	{ 0xe18177bd, "dev_get_by_index_rcu" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0xabef34ee, "__tracepoint_br_fdb_add" },
	{ 0x45240c3f, "__traceiter_fdb_delete" },
	{ 0x652032cb, "mac_pton" },
	{ 0x8b1e3dd1, "skb_push" },
	{ 0xe42d74c0, "kmem_cache_free" },
	{ 0xaee041bf, "ndo_dflt_fdb_dump" },
	{ 0x84b183ae, "strncmp" },
	{ 0xa72f8853, "netdev_upper_dev_unlink" },
	{ 0x678ad63f, "netif_receive_skb" },
	{ 0x714b06aa, "nla_put" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xd5f5b104, "llc_mac_hdr_init" },
	{ 0x14d4a9c5, "_change_bit" },
	{ 0xe6cffcf9, "free_netdev" },
	{ 0xbea5ff1e, "static_key_initialized" },
	{ 0xcd279169, "nla_find" },
	{ 0xea4a09cb, "mod_delayed_work_on" },
	{ 0x8b7c8fe7, "kobject_init_and_add" },
	{ 0x37f2d645, "__skb_warn_lro_forwarding" },
	{ 0xd932a814, "ns_capable" },
	{ 0xc7f98859, "inet_select_addr" },
	{ 0x3d9f21fe, "__cpu_online_mask" },
	{ 0x71c90087, "memcmp" },
	{ 0x1b579ffe, "sysfs_create_group" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc765e4fe, "ethtool_op_get_link" },
	{ 0x6d294e43, "clock_t_to_jiffies" },
	{ 0x95b439fa, "arp_create" },
	{ 0x26c1452b, "__ethtool_get_link_ksettings" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xcf523f43, "stp_proto_register" },
	{ 0x8bcafe56, "rtnl_register_module" },
	{ 0x8fc090a3, "__tracepoint_br_fdb_update" },
	{ 0xf52e3e9f, "sysfs_rename_link_ns" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x48da9274, "unregister_pernet_subsys" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0x5f754e5a, "memset" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0xa7119f65, "rht_bucket_nested_insert" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x7fce0655, "switchdev_port_obj_add" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9f24529f, "__pskb_pull_tail" },
	{ 0x97ffdaab, "dev_get_tstats64" },
	{ 0xad645234, "register_switchdev_notifier" },
	{ 0xf758551a, "netif_rx" },
	{ 0xece784c2, "rb_first" },
	{ 0x3b94f80a, "ip_mc_check_igmp" },
	{ 0xfe94257b, "__netdev_alloc_skb" },
	{ 0xac62049e, "rhashtable_destroy" },
	{ 0x485182a8, "switchdev_port_obj_del" },
	{ 0x1d77f1f3, "netdev_master_upper_dev_link" },
	{ 0x131db64a, "system_long_wq" },
	{ 0x7be9fa8a, "kobject_create_and_add" },
	{ 0xabc58048, "skb_trim" },
	{ 0x2600b0a5, "nf_hook_slow" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xa036ef7, "__ip_mc_inc_group" },
	{ 0x1a2ac67, "netdev_walk_all_upper_dev_rcu" },
	{ 0x4b711b3d, "sysfs_remove_group" },
	{ 0x17c6df61, "__traceiter_br_fdb_external_learn_add" },
	{ 0x142a99f5, "in_dev_finish_destroy" },
	{ 0x6bb04338, "rhashtable_insert_slow" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5a12e98, "__tracepoint_fdb_delete" },
	{ 0xeea0399, "strscpy" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x407d4405, "__dev_queue_xmit" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x2b04214c, "vlan_vid_add" },
	{ 0x50f3795b, "neigh_destroy" },
	{ 0xa4d275b9, "__tracepoint_br_fdb_external_learn_add" },
	{ 0x59403edf, "kobject_del" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xcfb8ae07, "__dev_kfree_skb_any" },
	{ 0x8e024dcf, "call_netdevice_notifiers" },
	{ 0xc14ddf56, "is_skb_forwardable" },
	{ 0x87127fe4, "vlan_vid_del" },
	{ 0x1e0ceabf, "dev_set_allmulti" },
	{ 0xe7f256af, "net_ns_get_ownership" },
	{ 0xee38ef57, "register_switchdev_blocking_notifier" },
	{ 0xd491f314, "netdev_master_upper_dev_get" },
	{ 0x35f1cfe7, "ipv6_dev_mc_inc" },
	{ 0xf3ea16fe, "rtnl_notify" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xf16731f3, "netif_carrier_off" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x4cd74e54, "__vlan_find_dev_deep_rcu" },
	{ 0x5089f45f, "ip_send_check" },
	{ 0xc8e173ed, "_find_next_bit_le" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x60181f35, "skb_copy" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x9cc51289, "skb_clone" },
	{ 0x2645afde, "metadata_dst_alloc" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x53036ac9, "dst_release" },
	{ 0xf278f519, "netif_carrier_on" },
	{ 0x1504b38c, "kobject_uevent" },
	{ 0xbdb77329, "arp_tbl" },
	{ 0x3758165b, "ipv6_dev_mc_dec" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x72070c99, "netdev_rx_handler_register" },
	{ 0x58768b42, "dev_uc_add" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x32dbd174, "netif_set_tso_max_size" },
	{ 0x15cfb2b3, "_find_first_zero_bit_le" },
	{ 0x2273a653, "dev_disable_lro" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x6ef56660, "ipv6_chk_addr" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xa7d21ca7, "dev_get_flags" },
	{ 0x97255bdf, "strlen" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x581e2394, "__nla_parse" },
	{ 0xaec0b087, "netdev_notice" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x7b52e38, "rtnl_unregister" },
	{ 0x64491fd8, "nf_queue" },
	{ 0x9eeb9f1, "netif_set_tso_max_segs" },
	{ 0x349cba85, "strchr" },
	{ 0x780995d7, "sysfs_remove_bin_file" },
	{ 0x5261322c, "rht_bucket_nested" },
	{ 0x3bfd8286, "stp_proto_unregister" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xa51a2967, "_find_next_zero_bit_le" },
	{ 0x837ea369, "neigh_lookup" },
	{ 0x662362a8, "kmem_cache_destroy" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa827df71, "kobject_put" },
	{ 0x130d9731, "register_netdevice" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "llc,stp");


MODULE_INFO(srcversion, "3165BFF72BC6897DD141BB7");
