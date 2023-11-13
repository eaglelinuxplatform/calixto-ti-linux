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
	{ 0x3ec40239, "idr_alloc_u32" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9df95135, "tcf_exts_validate_ex" },
	{ 0x45bd19de, "nla_strscpy" },
	{ 0xaeab7afe, "__dev_get_by_name" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x92997ed8, "_printk" },
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0x5f754e5a, "memset" },
	{ 0x894fc1b3, "register_tcf_proto_ops" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x73c942b1, "unregister_tcf_proto_ops" },
	{ 0x714b06aa, "nla_put" },
	{ 0x4920875a, "tcf_exts_dump" },
	{ 0x14a03eed, "tcf_exts_dump_stats" },
	{ 0xabc58048, "skb_trim" },
	{ 0x4b169df5, "__dev_get_by_index" },
	{ 0x97255bdf, "strlen" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x792b1cdb, "tcf_action_exec" },
	{ 0x62741661, "skb_copy_bits" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xce9f18e0, "tc_setup_cb_destroy" },
	{ 0xe65057b8, "tc_setup_cb_add" },
	{ 0x8149bf09, "tc_setup_cb_call" },
	{ 0x7cb17603, "tc_setup_cb_reoffload" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xf86f27cd, "idr_alloc_cyclic" },
	{ 0x37a0cba, "kfree" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x50dbd189, "tcf_exts_destroy" },
	{ 0x18c95432, "__put_net" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xa346975c, "idr_remove" },
	{ 0xbe0e3cba, "tcf_queue_work" },
	{ 0x2878e15a, "idr_destroy" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x581e2394, "__nla_parse" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x9d669763, "memcpy" },
	{ 0x6fbe4717, "idr_replace" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "18E4C3D23EA3EE0753CAACA");
