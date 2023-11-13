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
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xe89e829d, "nft_register_expr" },
	{ 0xe2445ec5, "nfnetlink_subsys_register" },
	{ 0x92997ed8, "_printk" },
	{ 0x7e28b9d7, "nft_unregister_expr" },
	{ 0x1449535e, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xecefd17c, "nfnetlink_subsys_unregister" },
	{ 0x3beffb35, "nla_reserve" },
	{ 0x9d669763, "memcpy" },
	{ 0x5f754e5a, "memset" },
	{ 0x581e2394, "__nla_parse" },
	{ 0x3251d762, "nf_tables_trans_destroy_flush_work" },
	{ 0xcaddf3f4, "xt_check_match" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xa2e27a22, "xt_check_target" },
	{ 0xc4380b23, "nft_request_module" },
	{ 0x5a6d5863, "try_module_get" },
	{ 0xddf68fc6, "xt_find_revision" },
	{ 0x9aac8012, "__alloc_skb" },
	{ 0xeeb484f5, "__nlmsg_put" },
	{ 0x97255bdf, "strlen" },
	{ 0x714b06aa, "nla_put" },
	{ 0x86f72da8, "nfnetlink_unicast" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xabc58048, "skb_trim" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x5bf7e0fc, "xt_request_find_target" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xa6928057, "xt_request_find_match" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,nfnetlink,x_tables");


MODULE_INFO(srcversion, "932845B6241131C55E31D99");
