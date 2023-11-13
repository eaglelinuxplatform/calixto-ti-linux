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

SYMBOL_CRC(nft_do_chain, 0x81a4f180, "_gpl");
SYMBOL_CRC(__nft_reg_track_cancel, 0x3247a5d2, "_gpl");
SYMBOL_CRC(__nft_release_basechain, 0x468d61f9, "_gpl");
SYMBOL_CRC(nf_tables_activate_set, 0xefc3b948, "_gpl");
SYMBOL_CRC(nf_tables_bind_set, 0x465fe534, "_gpl");
SYMBOL_CRC(nf_tables_deactivate_flowtable, 0x84d8e710, "_gpl");
SYMBOL_CRC(nf_tables_deactivate_set, 0x734403de, "_gpl");
SYMBOL_CRC(nf_tables_destroy_set, 0x2da04e4c, "_gpl");
SYMBOL_CRC(nf_tables_trans_destroy_flush_work, 0x3251d762, "_gpl");
SYMBOL_CRC(nft_chain_validate, 0x2e6afadd, "_gpl");
SYMBOL_CRC(nft_chain_validate_dependency, 0x8e2f3f8b, "_gpl");
SYMBOL_CRC(nft_chain_validate_hooks, 0xf34237a1, "_gpl");
SYMBOL_CRC(nft_data_dump, 0x22ff4199, "_gpl");
SYMBOL_CRC(nft_data_init, 0x5aeeacb4, "_gpl");
SYMBOL_CRC(nft_data_release, 0xdfc102df, "_gpl");
SYMBOL_CRC(nft_dump_register, 0xfc80c5a3, "_gpl");
SYMBOL_CRC(nft_flowtable_lookup, 0x174ecbb5, "_gpl");
SYMBOL_CRC(nft_obj_lookup, 0x5e513c74, "_gpl");
SYMBOL_CRC(nft_obj_notify, 0xfa1ed4ef, "_gpl");
SYMBOL_CRC(nft_parse_register_load, 0xe2b8cc13, "_gpl");
SYMBOL_CRC(nft_parse_register_store, 0x692bdd0a, "_gpl");
SYMBOL_CRC(nft_parse_u32_check, 0xde57b5f5, "_gpl");
SYMBOL_CRC(nft_reg_track_cancel, 0x29ffda25, "_gpl");
SYMBOL_CRC(nft_reg_track_update, 0x283e727a, "_gpl");
SYMBOL_CRC(nft_register_chain_type, 0x8465fb8f, "_gpl");
SYMBOL_CRC(nft_register_expr, 0xe89e829d, "_gpl");
SYMBOL_CRC(nft_register_flowtable_type, 0xc2bc6943, "_gpl");
SYMBOL_CRC(nft_register_obj, 0xf232a435, "_gpl");
SYMBOL_CRC(nft_request_module, 0xc4380b23, "_gpl");
SYMBOL_CRC(nft_set_catchall_gc, 0xcae759b4, "_gpl");
SYMBOL_CRC(nft_set_catchall_lookup, 0xaaf4750d, "_gpl");
SYMBOL_CRC(nft_set_elem_destroy, 0x338117bd, "_gpl");
SYMBOL_CRC(nft_set_lookup_global, 0xba4e29e4, "_gpl");
SYMBOL_CRC(nft_unregister_chain_type, 0x63093599, "_gpl");
SYMBOL_CRC(nft_unregister_expr, 0x7e28b9d7, "_gpl");
SYMBOL_CRC(nft_unregister_flowtable_type, 0x3baefed3, "_gpl");
SYMBOL_CRC(nft_unregister_obj, 0x29c0617c, "_gpl");
SYMBOL_CRC(nft_trace_enabled, 0xa9ffc821, "_gpl");
SYMBOL_CRC(nft_expr_reduce_bitwise, 0x6076d899, "_gpl");
SYMBOL_CRC(nft_meta_get_dump, 0x82a20bbd, "_gpl");
SYMBOL_CRC(nft_meta_get_eval, 0xacbe22b6, "_gpl");
SYMBOL_CRC(nft_meta_get_init, 0x2ec2fb76, "_gpl");
SYMBOL_CRC(nft_meta_get_reduce, 0xf15bd18e, "_gpl");
SYMBOL_CRC(nft_meta_policy, 0xc015c870, "_gpl");
SYMBOL_CRC(nft_meta_set_destroy, 0xe2b6c2c6, "_gpl");
SYMBOL_CRC(nft_meta_set_dump, 0xce383e10, "_gpl");
SYMBOL_CRC(nft_meta_set_eval, 0x2334b6ea, "_gpl");
SYMBOL_CRC(nft_meta_set_init, 0xa6368d8b, "_gpl");
SYMBOL_CRC(nft_meta_set_validate, 0x91f1c6a8, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4e70f340, "__do_once_done" },
	{ 0xd04ca1ea, "__netlink_dump_start" },
	{ 0x2d17728f, "flow_rule_alloc" },
	{ 0x5a6d5863, "try_module_get" },
	{ 0xa038f306, "__rht_bucket_nested" },
	{ 0x9968aacb, "__audit_log_nfcfg" },
	{ 0x62741661, "skb_copy_bits" },
	{ 0xeeb484f5, "__nlmsg_put" },
	{ 0xfa941bb7, "skb_put" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xedbaee5e, "nla_strcmp" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x99bb8806, "memmove" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x3beffb35, "nla_reserve" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7a53a06d, "flow_indr_dev_exists" },
	{ 0xdc13d2, "__kmalloc_node" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xbfaa04fe, "nla_put_64bit" },
	{ 0xca9360b5, "rb_next" },
	{ 0x8b618d08, "overflowuid" },
	{ 0xa5a91711, "_raw_write_lock_bh" },
	{ 0x6f98602a, "nfnetlink_set_err" },
	{ 0x75d0deb9, "nsecs_to_jiffies64" },
	{ 0x6d7c7dcc, "bitmap_cut" },
	{ 0x2d52254e, "flow_block_cb_free" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xfbea611e, "_raw_read_unlock_bh" },
	{ 0xe2445ec5, "nfnetlink_subsys_register" },
	{ 0xb6f859f4, "_raw_read_lock_bh" },
	{ 0xf5cd2774, "ip6_route_me_harder" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xeca957d1, "__bitmap_and" },
	{ 0x6011eb03, "rhashtable_init" },
	{ 0x49871971, "_raw_write_unlock_bh" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x47c9369a, "__module_get" },
	{ 0xdaf65445, "vsnprintf" },
	{ 0x3b08a01d, "rhashtable_walk_enter" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xaeab7afe, "__dev_get_by_name" },
	{ 0x48c39a62, "register_pernet_subsys" },
	{ 0x39bc8d8c, "__ip_options_compile" },
	{ 0x92997ed8, "_printk" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xf82ec573, "rb_prev" },
	{ 0x4bb20611, "nf_route" },
	{ 0x9aac8012, "__alloc_skb" },
	{ 0x7171121c, "overflowgid" },
	{ 0xe61a6643, "__current" },
	{ 0x1449535e, "module_put" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0x800473f, "__cond_resched" },
	{ 0x169d9091, "nf_unregister_net_hook" },
	{ 0xcef4d5b4, "__alloc_percpu_gfp" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0xb963b866, "nf_register_net_hook" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x1427b20f, "__skb_get_hash" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xf14d0631, "ip_route_me_harder" },
	{ 0x423f97c5, "skb_store_bits" },
	{ 0xe18177bd, "dev_get_by_index_rcu" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x86f72da8, "nfnetlink_unicast" },
	{ 0x714b06aa, "nla_put" },
	{ 0x328a05f1, "strncpy" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xe5d81b84, "skb_ensure_writable" },
	{ 0xbea5ff1e, "static_key_initialized" },
	{ 0xc0ff12fb, "nla_strdup" },
	{ 0x1cea3104, "rhashtable_walk_start_check" },
	{ 0x71c90087, "memcmp" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xf05c5710, "flow_indr_dev_setup_offload" },
	{ 0x621eb946, "rhashtable_walk_stop" },
	{ 0xb44e18ea, "audit_enabled" },
	{ 0x838d2bc8, "siphash_3u32" },
	{ 0x48da9274, "unregister_pernet_subsys" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0x8a2efae0, "rhashtable_free_and_destroy" },
	{ 0xf4afda6, "skb_checksum" },
	{ 0x5f754e5a, "memset" },
	{ 0x92ec510d, "jiffies64_to_msecs" },
	{ 0xa7119f65, "rht_bucket_nested_insert" },
	{ 0xaf5b69e4, "nfnetlink_send" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xa8f7601d, "__get_task_comm" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9f24529f, "__pskb_pull_tail" },
	{ 0xece784c2, "rb_first" },
	{ 0xecefd17c, "nfnetlink_subsys_unregister" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xabc58048, "skb_trim" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x18c95432, "__put_net" },
	{ 0xa68613dd, "get_jiffies_64" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x6bb04338, "rhashtable_insert_slow" },
	{ 0xa935396c, "ipv6_find_hdr" },
	{ 0xb15b4109, "crc32c" },
	{ 0xeea0399, "strscpy" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x7a9663ef, "__skb_checksum" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x6d0b40c7, "inet_proto_csum_replace4" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x78ee8b6f, "rhltable_init" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0xc8e173ed, "_find_next_bit_le" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xfff5afc, "time64_to_tm" },
	{ 0x53036ac9, "dst_release" },
	{ 0x45bd19de, "nla_strscpy" },
	{ 0x21a9138a, "rhashtable_walk_next" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x15cfb2b3, "_find_first_zero_bit_le" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x97255bdf, "strlen" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x581e2394, "__nla_parse" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x349cba85, "strchr" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x5261322c, "rht_bucket_nested" },
	{ 0xd5dd942d, "rhashtable_walk_exit" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x711b8a9b, "__crc32c_le_shift" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x18e60984, "__do_once_start" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xffcb6fa4, "nfnetlink_has_listeners" },
	{ 0x92b57248, "flush_work" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "1BE240D1E9BB0215FD79ED4");
