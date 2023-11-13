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
	{ 0x894fc1b3, "register_tcf_proto_ops" },
	{ 0x7505bdef, "memchr_inv" },
	{ 0x714b06aa, "nla_put" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5f754e5a, "memset" },
	{ 0x8149bf09, "tc_setup_cb_call" },
	{ 0x37a0cba, "kfree" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x7f275aef, "skb_flow_dissector_init" },
	{ 0xac62049e, "rhashtable_destroy" },
	{ 0x1449535e, "module_put" },
	{ 0x73c942b1, "unregister_tcf_proto_ops" },
	{ 0x581e2394, "__nla_parse" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x6011eb03, "rhashtable_init" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x9d669763, "memcpy" },
	{ 0x71c90087, "memcmp" },
	{ 0x5261322c, "rht_bucket_nested" },
	{ 0xce9f18e0, "tc_setup_cb_destroy" },
	{ 0xa47fb141, "tcf_exts_num_actions" },
	{ 0x2d17728f, "flow_rule_alloc" },
	{ 0xf6323082, "tc_setup_offload_action" },
	{ 0xe65057b8, "tc_setup_cb_add" },
	{ 0x5a852951, "tc_cleanup_offload_action" },
	{ 0x27f9c7f8, "tcf_action_update_hw_stats" },
	{ 0x16366edf, "skb_flow_dissect_meta" },
	{ 0x6ffd14d4, "skb_flow_dissect_tunnel_info" },
	{ 0xc15e9eee, "skb_flow_dissect_ct" },
	{ 0x98959fab, "skb_flow_dissect_hash" },
	{ 0xadcff13c, "__skb_flow_dissect" },
	{ 0x792b1cdb, "tcf_action_exec" },
	{ 0x50dbd189, "tcf_exts_destroy" },
	{ 0x18c95432, "__put_net" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe61a6643, "__current" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xa7119f65, "rht_bucket_nested_insert" },
	{ 0x6bb04338, "rhashtable_insert_slow" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa038f306, "__rht_bucket_nested" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x7e2c085, "radix_tree_tagged" },
	{ 0x47925794, "idr_find" },
	{ 0xbe0e3cba, "tcf_queue_work" },
	{ 0xa8f7f280, "idr_get_next_ul" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7cb17603, "tc_setup_cb_reoffload" },
	{ 0xa346975c, "idr_remove" },
	{ 0x2878e15a, "idr_destroy" },
	{ 0x47c9369a, "__module_get" },
	{ 0xabc58048, "skb_trim" },
	{ 0x8f157e1e, "tcf_exts_terse_dump" },
	{ 0x4b169df5, "__dev_get_by_index" },
	{ 0x97255bdf, "strlen" },
	{ 0x4920875a, "tcf_exts_dump" },
	{ 0x14a03eed, "tcf_exts_dump_stats" },
	{ 0x45bd19de, "nla_strscpy" },
	{ 0xaeab7afe, "__dev_get_by_name" },
	{ 0x933dc050, "__nla_validate" },
	{ 0x9df95135, "tcf_exts_validate_ex" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x6fbe4717, "idr_replace" },
	{ 0x3ec40239, "idr_alloc_u32" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E2D016C4BFFC9CCA3B3AB68");
