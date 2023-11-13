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
	{ 0xcb99963, "__platform_driver_register" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xd6a91f54, "twl_i2c_read" },
	{ 0xf9722676, "twl_i2c_write" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xc99e2a55, "twl_rev" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x2dcbfe48, "devm_pwmchip_add" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,twl4030-pwmled");
MODULE_ALIAS("of:N*T*Cti,twl4030-pwmledC*");
MODULE_ALIAS("of:N*T*Cti,twl6030-pwmled");
MODULE_ALIAS("of:N*T*Cti,twl6030-pwmledC*");

MODULE_INFO(srcversion, "AB23D1601406AE7705B11B8");
