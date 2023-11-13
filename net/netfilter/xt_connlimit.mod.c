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
	{ 0x781babab, "xt_register_match" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x9311b104, "nf_conncount_destroy" },
	{ 0xf76551dd, "nf_conncount_init" },
	{ 0xc5502f1e, "nf_conncount_count" },
	{ 0xb27358a9, "nf_ct_get_tuplepr" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0x249b9a0d, "xt_unregister_match" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "x_tables,nf_conncount,nf_conntrack");


MODULE_INFO(srcversion, "442328BAC8BCCBDBEBF70DE");
