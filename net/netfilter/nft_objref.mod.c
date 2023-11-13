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
	{ 0xe89e829d, "nft_register_expr" },
	{ 0x97255bdf, "strlen" },
	{ 0x714b06aa, "nla_put" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x5e513c74, "nft_obj_lookup" },
	{ 0x2da04e4c, "nf_tables_destroy_set" },
	{ 0x734403de, "nf_tables_deactivate_set" },
	{ 0xefc3b948, "nf_tables_activate_set" },
	{ 0xba4e29e4, "nft_set_lookup_global" },
	{ 0xe2b8cc13, "nft_parse_register_load" },
	{ 0x465fe534, "nf_tables_bind_set" },
	{ 0xaaf4750d, "nft_set_catchall_lookup" },
	{ 0x7e28b9d7, "nft_unregister_expr" },
	{ 0xfc80c5a3, "nft_dump_register" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "nf_tables");


MODULE_INFO(srcversion, "2FCB8A862A7C70754CE477D");
