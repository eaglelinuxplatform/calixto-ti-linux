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
	{ 0xf232a435, "nft_register_obj" },
	{ 0xe89e829d, "nft_register_expr" },
	{ 0x29c0617c, "nft_unregister_obj" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xe61a6643, "__current" },
	{ 0xd4f0b903, "nf_conncount_gc_list" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xb2d711d4, "nf_conncount_cache_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xbfb6975, "nf_ct_netns_put" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x5aba9fda, "nf_conncount_list_init" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x7115c55, "nf_ct_netns_get" },
	{ 0x7e28b9d7, "nft_unregister_expr" },
	{ 0x714b06aa, "nla_put" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x13c0b4e9, "nf_conncount_add" },
	{ 0xb27358a9, "nf_ct_get_tuplepr" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,nf_conncount,nf_conntrack");


MODULE_INFO(srcversion, "9C36D1030DFDAFC64E201A2");
