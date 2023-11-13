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
	{ 0xe89e829d, "nft_register_expr" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xd1f2eee2, "nf_logger_find_get" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x45bd19de, "nla_strscpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xc4380b23, "nft_request_module" },
	{ 0xe558ba1f, "ipv6_skip_exthdr" },
	{ 0xe1dcf64a, "audit_log_format" },
	{ 0x62741661, "skb_copy_bits" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7e28b9d7, "nft_unregister_expr" },
	{ 0xb8cd3a7f, "nf_logger_put" },
	{ 0x97255bdf, "strlen" },
	{ 0x714b06aa, "nla_put" },
	{ 0xe561c238, "nf_log_packet" },
	{ 0x72c0b937, "audit_log_start" },
	{ 0xeb37101c, "audit_log_end" },
	{ 0xb44e18ea, "audit_enabled" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "nf_tables");


MODULE_INFO(srcversion, "8BAF2AA0BFB3A6771543A60");
