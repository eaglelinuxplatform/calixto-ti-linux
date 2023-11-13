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
	{ 0x72f498c7, "xt_rateest_put" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xe8d6cd76, "xt_rateest_lookup" },
	{ 0x4df2ea84, "gen_estimator_read" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x249b9a0d, "xt_unregister_match" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "x_tables,xt_RATEEST");


MODULE_INFO(srcversion, "262EF45B0AEC34E2B71881C");
