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
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xe2445ec5, "nfnetlink_subsys_register" },
	{ 0x92997ed8, "_printk" },
	{ 0x48c39a62, "register_pernet_subsys" },
	{ 0xecefd17c, "nfnetlink_subsys_unregister" },
	{ 0x5f2c19e0, "nfnl_ct_hook" },
	{ 0x441e0226, "nf_ct_tcp_seqadj_set" },
	{ 0x414c6ff5, "nf_ct_expect_put" },
	{ 0x36362e8d, "nf_connlabels_replace" },
	{ 0x714b06aa, "nla_put" },
	{ 0x7674c3c8, "nla_policy_len" },
	{ 0xb7f876f3, "nf_ct_l4proto_find" },
	{ 0xbeec7b7d, "nf_conntrack_unregister_notifier" },
	{ 0xc5ed6cda, "nf_conntrack_register_notifier" },
	{ 0xd04ca1ea, "__netlink_dump_start" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x71c90087, "memcmp" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0xf65e6332, "nf_nat_hook" },
	{ 0x48da9274, "unregister_pernet_subsys" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x91a9c232, "__siphash_unaligned" },
	{ 0x12cabc89, "siphash_2u64" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x4e70f340, "__do_once_done" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x581e2394, "__nla_parse" },
	{ 0xcbead8c5, "generic_atomic64_read" },
	{ 0xbfaa04fe, "nla_put_64bit" },
	{ 0xad4fd0b5, "generic_atomic64_xchg" },
	{ 0x5f754e5a, "memset" },
	{ 0x933dc050, "__nla_validate" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xac8eb331, "nf_ct_expect_find_get" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xea5d6de4, "nf_ct_unlink_expect_report" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xe1d21c1f, "nf_ct_expect_iterate_net" },
	{ 0x4ea258d2, "nf_conntrack_expect_lock" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4df34c83, "__nf_ct_ext_find" },
	{ 0xeeb484f5, "__nlmsg_put" },
	{ 0xabc58048, "skb_trim" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x97255bdf, "strlen" },
	{ 0xcc13c4bd, "nf_ct_remove_expectations" },
	{ 0x5b4bef45, "__nf_conntrack_helper_find" },
	{ 0xeb70db39, "__nf_ct_change_timeout" },
	{ 0x377e2446, "__nf_ct_change_status" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x653127e3, "nf_ct_expect_alloc" },
	{ 0x95015aa9, "nf_ct_helper_expectfn_find_by_name" },
	{ 0x41befd5d, "nf_ct_expect_related_report" },
	{ 0x9aac8012, "__alloc_skb" },
	{ 0xf839799e, "nf_conntrack_count" },
	{ 0x86f72da8, "nfnetlink_unicast" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0xf38bcdf3, "nf_conntrack_max" },
	{ 0xd71dab28, "nf_ct_get_id" },
	{ 0xe61a6643, "__current" },
	{ 0x473e385d, "nf_conntrack_lock" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x9481aa8c, "nf_ct_delete" },
	{ 0x8ffe7e89, "nf_conntrack_htable_size" },
	{ 0x8c6e11f4, "nf_conntrack_locks" },
	{ 0x28eff409, "nf_conntrack_hash" },
	{ 0x7ecfa786, "nf_conntrack_find_get" },
	{ 0xbf878b6b, "__nf_ct_expect_find" },
	{ 0x24d273d1, "add_timer" },
	{ 0xe48353c6, "nf_ct_helper_expectfn_find_by_symbol" },
	{ 0xffcb6fa4, "nfnetlink_has_listeners" },
	{ 0x6f98602a, "nfnetlink_set_err" },
	{ 0xaf5b69e4, "nfnetlink_send" },
	{ 0xc18ac88d, "nf_ct_expect_hsize" },
	{ 0xec8beba6, "nf_ct_expect_hash" },
	{ 0xce13470f, "nf_conn_pernet_ecache" },
	{ 0xe8e1003e, "nf_conntrack_alloc" },
	{ 0x808e5358, "nf_ct_helper_ext_add" },
	{ 0xea04305f, "nf_ct_ext_add" },
	{ 0xc8f97856, "nf_ct_ecache_ext_add" },
	{ 0x6ed9551f, "nf_ct_change_status_common" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xadd8d73f, "nf_conntrack_hash_check_insert" },
	{ 0xb9017b42, "nf_conntrack_free" },
	{ 0x6a7b75bb, "nf_conntrack_eventmask_report" },
	{ 0x917568d3, "nf_ct_iterate_cleanup_net" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "nfnetlink,nf_conntrack");


MODULE_INFO(srcversion, "66FB6FBE50FD0C9E6FE49AD");
