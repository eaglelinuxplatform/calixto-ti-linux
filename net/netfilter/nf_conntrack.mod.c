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

SYMBOL_CRC(nf_ct_destroy, 0x3b08a8f0, "");
SYMBOL_CRC(__nf_conntrack_confirm, 0x2bff2cc8, "_gpl");
SYMBOL_CRC(__nf_ct_change_status, 0x377e2446, "_gpl");
SYMBOL_CRC(__nf_ct_change_timeout, 0xeb70db39, "_gpl");
SYMBOL_CRC(__nf_ct_refresh_acct, 0x8b8c18a0, "_gpl");
SYMBOL_CRC(nf_conntrack_alloc, 0xe8e1003e, "_gpl");
SYMBOL_CRC(nf_conntrack_alter_reply, 0x004d3d2a, "_gpl");
SYMBOL_CRC(nf_conntrack_expect_lock, 0x4ea258d2, "_gpl");
SYMBOL_CRC(nf_conntrack_find_get, 0x7ecfa786, "_gpl");
SYMBOL_CRC(nf_conntrack_free, 0xb9017b42, "_gpl");
SYMBOL_CRC(nf_conntrack_hash, 0x28eff409, "_gpl");
SYMBOL_CRC(nf_conntrack_hash_check_insert, 0xadd8d73f, "_gpl");
SYMBOL_CRC(nf_conntrack_htable_size, 0x8ffe7e89, "_gpl");
SYMBOL_CRC(nf_conntrack_in, 0x421356b8, "_gpl");
SYMBOL_CRC(nf_conntrack_lock, 0x473e385d, "_gpl");
SYMBOL_CRC(nf_conntrack_locks, 0x8c6e11f4, "_gpl");
SYMBOL_CRC(nf_conntrack_max, 0xf38bcdf3, "_gpl");
SYMBOL_CRC(nf_conntrack_tuple_taken, 0x658d457a, "_gpl");
SYMBOL_CRC(nf_ct_acct_add, 0x9fac5147, "_gpl");
SYMBOL_CRC(nf_ct_alloc_hashtable, 0x289c3714, "_gpl");
SYMBOL_CRC(nf_ct_change_status_common, 0x6ed9551f, "_gpl");
SYMBOL_CRC(nf_ct_delete, 0x9481aa8c, "_gpl");
SYMBOL_CRC(nf_ct_get_id, 0xd71dab28, "_gpl");
SYMBOL_CRC(nf_ct_get_tuplepr, 0xb27358a9, "_gpl");
SYMBOL_CRC(nf_ct_invert_tuple, 0xfe731af8, "_gpl");
SYMBOL_CRC(nf_ct_iterate_cleanup_net, 0x917568d3, "_gpl");
SYMBOL_CRC(nf_ct_iterate_destroy, 0xa7e9bc70, "_gpl");
SYMBOL_CRC(nf_ct_kill_acct, 0x45d5a7cd, "_gpl");
SYMBOL_CRC(nf_ct_port_nla_policy, 0x1d7675b8, "_gpl");
SYMBOL_CRC(nf_ct_port_nlattr_to_tuple, 0xafbd6cf5, "_gpl");
SYMBOL_CRC(nf_ct_port_nlattr_tuple_size, 0xd505c3e0, "_gpl");
SYMBOL_CRC(nf_ct_port_tuple_to_nlattr, 0x517a7403, "_gpl");
SYMBOL_CRC(nf_ct_tmpl_alloc, 0xcbdfe454, "_gpl");
SYMBOL_CRC(nf_ct_tmpl_free, 0xe929b214, "_gpl");
SYMBOL_CRC(nf_conntrack_count, 0xf839799e, "_gpl");
SYMBOL_CRC(__nf_ct_expect_find, 0xbf878b6b, "_gpl");
SYMBOL_CRC(nf_ct_expect_alloc, 0x653127e3, "_gpl");
SYMBOL_CRC(nf_ct_expect_find_get, 0xac8eb331, "_gpl");
SYMBOL_CRC(nf_ct_expect_hash, 0xec8beba6, "_gpl");
SYMBOL_CRC(nf_ct_expect_hsize, 0xc18ac88d, "_gpl");
SYMBOL_CRC(nf_ct_expect_init, 0x84ac4eb0, "_gpl");
SYMBOL_CRC(nf_ct_expect_iterate_destroy, 0x995dd0da, "_gpl");
SYMBOL_CRC(nf_ct_expect_iterate_net, 0xe1d21c1f, "_gpl");
SYMBOL_CRC(nf_ct_expect_put, 0x414c6ff5, "_gpl");
SYMBOL_CRC(nf_ct_expect_related_report, 0x41befd5d, "_gpl");
SYMBOL_CRC(nf_ct_remove_expect, 0x539bda05, "_gpl");
SYMBOL_CRC(nf_ct_remove_expectations, 0xcc13c4bd, "_gpl");
SYMBOL_CRC(nf_ct_unexpect_related, 0x8963fca0, "_gpl");
SYMBOL_CRC(nf_ct_unlink_expect_report, 0xea5d6de4, "_gpl");
SYMBOL_CRC(__nf_conntrack_helper_find, 0x5b4bef45, "_gpl");
SYMBOL_CRC(__nf_ct_try_assign_helper, 0x437c9bbf, "_gpl");
SYMBOL_CRC(nf_conntrack_helper_put, 0x843eeaf0, "_gpl");
SYMBOL_CRC(nf_conntrack_helper_register, 0x9b76e264, "_gpl");
SYMBOL_CRC(nf_conntrack_helper_try_module_get, 0x5ba156cd, "_gpl");
SYMBOL_CRC(nf_conntrack_helper_unregister, 0xb76b109b, "_gpl");
SYMBOL_CRC(nf_conntrack_helpers_register, 0x70e1f8de, "_gpl");
SYMBOL_CRC(nf_conntrack_helpers_unregister, 0x1a81aba9, "_gpl");
SYMBOL_CRC(nf_ct_helper_expectfn_find_by_name, 0x95015aa9, "_gpl");
SYMBOL_CRC(nf_ct_helper_expectfn_find_by_symbol, 0xe48353c6, "_gpl");
SYMBOL_CRC(nf_ct_helper_expectfn_register, 0xf27bb6a8, "_gpl");
SYMBOL_CRC(nf_ct_helper_expectfn_unregister, 0x5adb68b1, "_gpl");
SYMBOL_CRC(nf_ct_helper_ext_add, 0x808e5358, "_gpl");
SYMBOL_CRC(nf_ct_helper_hash, 0x693c3961, "_gpl");
SYMBOL_CRC(nf_ct_helper_hsize, 0xc40f284c, "_gpl");
SYMBOL_CRC(nf_ct_helper_init, 0xb30b0b52, "_gpl");
SYMBOL_CRC(nf_ct_helper_log, 0x960e340b, "_gpl");
SYMBOL_CRC(nf_nat_helper_put, 0xc7e5689a, "_gpl");
SYMBOL_CRC(nf_nat_helper_register, 0x1414e8c0, "_gpl");
SYMBOL_CRC(nf_nat_helper_try_module_get, 0x0bc00f80, "_gpl");
SYMBOL_CRC(nf_nat_helper_unregister, 0x105affbc, "_gpl");
SYMBOL_CRC(nf_confirm, 0x65888bcb, "_gpl");
SYMBOL_CRC(nf_ct_bridge_register, 0x66137d37, "_gpl");
SYMBOL_CRC(nf_ct_bridge_unregister, 0x464e335c, "_gpl");
SYMBOL_CRC(nf_ct_l4proto_find, 0xb7f876f3, "_gpl");
SYMBOL_CRC(nf_ct_l4proto_log_invalid, 0x6f37de66, "_gpl");
SYMBOL_CRC(nf_ct_netns_get, 0x07115c55, "_gpl");
SYMBOL_CRC(nf_ct_netns_put, 0x0bfb6975, "_gpl");
SYMBOL_CRC(nf_l4proto_log_invalid, 0xcb141074, "_gpl");
SYMBOL_CRC(__nf_ct_ext_find, 0x4df34c83, "");
SYMBOL_CRC(nf_ct_ext_add, 0xea04305f, "");
SYMBOL_CRC(nf_ct_seq_adjust, 0x9193d0ae, "_gpl");
SYMBOL_CRC(nf_ct_seq_offset, 0xc12f3296, "_gpl");
SYMBOL_CRC(nf_ct_seqadj_init, 0x27950dfc, "_gpl");
SYMBOL_CRC(nf_ct_seqadj_set, 0x57b2186b, "_gpl");
SYMBOL_CRC(nf_ct_tcp_seqadj_set, 0x441e0226, "_gpl");
SYMBOL_CRC(nf_ct_destroy_timeout, 0xd505d075, "_gpl");
SYMBOL_CRC(nf_ct_set_timeout, 0x5a74d631, "_gpl");
SYMBOL_CRC(nf_ct_timeout_hook, 0x7898866d, "_gpl");
SYMBOL_CRC(nf_ct_untimeout, 0xda95a486, "_gpl");
SYMBOL_CRC(nf_conn_pernet_ecache, 0xce13470f, "_gpl");
SYMBOL_CRC(nf_conntrack_eventmask_report, 0x6a7b75bb, "_gpl");
SYMBOL_CRC(nf_conntrack_register_notifier, 0xc5ed6cda, "_gpl");
SYMBOL_CRC(nf_conntrack_unregister_notifier, 0xbeec7b7d, "_gpl");
SYMBOL_CRC(nf_ct_deliver_cached_events, 0x06730440, "_gpl");
SYMBOL_CRC(nf_ct_ecache_ext_add, 0xc8f97856, "_gpl");
SYMBOL_CRC(nf_connlabels_get, 0xd61aa53b, "_gpl");
SYMBOL_CRC(nf_connlabels_put, 0x3697551f, "_gpl");
SYMBOL_CRC(nf_connlabels_replace, 0x36362e8d, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4e70f340, "__do_once_done" },
	{ 0x421d4dcf, "krealloc" },
	{ 0x5a6d5863, "try_module_get" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x36cbf366, "nf_defrag_ipv4_disable" },
	{ 0xa627be55, "nf_ip6_checksum" },
	{ 0xa682da73, "proc_dou8vec_minmax" },
	{ 0x62741661, "skb_copy_bits" },
	{ 0x9098ac8b, "param_ops_uint" },
	{ 0x61c76b3a, "proc_dointvec_jiffies" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x5e068c61, "register_net_sysctl" },
	{ 0x12cabc89, "siphash_2u64" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x258f5a9c, "nf_register_sockopt" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xbfaa04fe, "nla_put_64bit" },
	{ 0xd5f89485, "param_set_uint" },
	{ 0xb2692191, "nf_defrag_ipv4_enable" },
	{ 0x9d669763, "memcpy" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x37a0cba, "kfree" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xaf1274ad, "kmem_cache_create" },
	{ 0x25d89497, "nf_ct_hook" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x48c39a62, "register_pernet_subsys" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x92997ed8, "_printk" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x1000e51, "schedule" },
	{ 0x7ec7fdc6, "nf_unregister_sockopt" },
	{ 0x61542b6a, "param_get_uint" },
	{ 0xc8827b75, "sysctl_vals" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x86f9b8a, "nf_defrag_ipv6_disable" },
	{ 0xe558ba1f, "ipv6_skip_exthdr" },
	{ 0xbd35b754, "nf_register_net_hooks" },
	{ 0xdb9178ea, "kmem_cache_alloc" },
	{ 0xe61a6643, "__current" },
	{ 0x1449535e, "module_put" },
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0x800473f, "__cond_resched" },
	{ 0xb3ba47bf, "nf_checksum" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x45312867, "init_net" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x24d273d1, "add_timer" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xe42d74c0, "kmem_cache_free" },
	{ 0x714b06aa, "nla_put" },
	{ 0x9a60ad29, "nf_checksum_partial" },
	{ 0xe5d81b84, "skb_ensure_writable" },
	{ 0xea4a09cb, "mod_delayed_work_on" },
	{ 0x12f85125, "nf_unregister_net_hooks" },
	{ 0xb020a468, "lock_sock_nested" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x8039b3fd, "_totalram_pages" },
	{ 0x48da9274, "unregister_pernet_subsys" },
	{ 0x6d2fc5a6, "net_namespace_list" },
	{ 0x5f754e5a, "memset" },
	{ 0x19f33626, "nf_ctnetlink_has_listener" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xe561c238, "nf_log_packet" },
	{ 0x2488d0e0, "nf_ip_checksum" },
	{ 0x91a9c232, "__siphash_unaligned" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb1d7438, "down_read" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x7674c3c8, "nla_policy_len" },
	{ 0xb15b4109, "crc32c" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x7a9663ef, "__skb_checksum" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xcbead8c5, "generic_atomic64_read" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe4ea4aab, "param_ops_bool" },
	{ 0x6d0b40c7, "inet_proto_csum_replace4" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xefe7da83, "nf_defrag_ipv6_enable" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x86eb0c08, "proc_dointvec" },
	{ 0xf65e6332, "nf_nat_hook" },
	{ 0xf44a904a, "net_ns_barrier" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0x91637e86, "unregister_net_sysctl_table" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x97255bdf, "strlen" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x581e2394, "__nla_parse" },
	{ 0x11c96efd, "nf_queue_nf_hook_drop" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xa7b3181c, "up_read" },
	{ 0x56a6a76c, "net_rwsem" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x711b8a9b, "__crc32c_le_shift" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x9ce561c8, "generic_atomic64_add" },
	{ 0x9858f364, "get_random_u8" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x662362a8, "kmem_cache_destroy" },
	{ 0x7b629328, "release_sock" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "nf_defrag_ipv4,nf_defrag_ipv6");


MODULE_INFO(srcversion, "CDCCA1AD995D7C25E8AA816");
