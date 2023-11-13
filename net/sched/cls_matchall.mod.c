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
	{ 0x5f754e5a, "memset" },
	{ 0xa47fb141, "tcf_exts_num_actions" },
	{ 0x2d17728f, "flow_rule_alloc" },
	{ 0xf6323082, "tc_setup_offload_action" },
	{ 0x7cb17603, "tc_setup_cb_reoffload" },
	{ 0x5a852951, "tc_cleanup_offload_action" },
	{ 0x37a0cba, "kfree" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x792b1cdb, "tcf_action_exec" },
	{ 0x73c942b1, "unregister_tcf_proto_ops" },
	{ 0x50dbd189, "tcf_exts_destroy" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x18c95432, "__put_net" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xce9f18e0, "tc_setup_cb_destroy" },
	{ 0x714b06aa, "nla_put" },
	{ 0xc8e173ed, "_find_next_bit_le" },
	{ 0xbfaa04fe, "nla_put_64bit" },
	{ 0x4920875a, "tcf_exts_dump" },
	{ 0x14a03eed, "tcf_exts_dump_stats" },
	{ 0x8149bf09, "tc_setup_cb_call" },
	{ 0x27f9c7f8, "tcf_action_update_hw_stats" },
	{ 0xabc58048, "skb_trim" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0xbe0e3cba, "tcf_queue_work" },
	{ 0x581e2394, "__nla_parse" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0x9df95135, "tcf_exts_validate_ex" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xe65057b8, "tc_setup_cb_add" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7B37391777309AE13E276F1");
