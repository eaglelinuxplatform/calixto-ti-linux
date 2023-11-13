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
	{ 0x3247a5d2, "__nft_reg_track_cancel" },
	{ 0x692bdd0a, "nft_parse_register_store" },
	{ 0x2ec2fb76, "nft_meta_get_init" },
	{ 0x7e28b9d7, "nft_unregister_expr" },
	{ 0xacbe22b6, "nft_meta_get_eval" },
	{ 0xff11cbda, "netdev_master_upper_dev_get_rcu" },
	{ 0xae8a238f, "br_vlan_enabled" },
	{ 0x5ec529d1, "br_vlan_get_proto" },
	{ 0x74d8650d, "br_vlan_get_pvid_rcu" },
	{ 0x328a05f1, "strncpy" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2334b6ea, "nft_meta_set_eval" },
	{ 0xa6368d8b, "nft_meta_set_init" },
	{ 0xe2b6c2c6, "nft_meta_set_destroy" },
	{ 0xce383e10, "nft_meta_set_dump" },
	{ 0x91f1c6a8, "nft_meta_set_validate" },
	{ 0x82a20bbd, "nft_meta_get_dump" },
	{ 0xf15bd18e, "nft_meta_get_reduce" },
	{ 0xc015c870, "nft_meta_policy" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,bridge");


MODULE_INFO(srcversion, "D142154F5C453D89A9D303B");
