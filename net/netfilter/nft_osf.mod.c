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
	{ 0x283e727a, "nft_reg_track_update" },
	{ 0xf34237a1, "nft_chain_validate_hooks" },
	{ 0x714b06aa, "nla_put" },
	{ 0xfc80c5a3, "nft_dump_register" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x692bdd0a, "nft_parse_register_store" },
	{ 0x7e28b9d7, "nft_unregister_expr" },
	{ 0xbac2448a, "nf_osf_find" },
	{ 0xeea0399, "strscpy" },
	{ 0x328a05f1, "strncpy" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x62741661, "skb_copy_bits" },
	{ 0x35eff5e0, "nf_osf_fingers" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,nfnetlink_osf");


MODULE_INFO(srcversion, "FD394FB8EA72F7109AF89B7");
