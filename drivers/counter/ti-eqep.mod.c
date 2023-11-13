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
	{ 0xa2bb223d, "counter_unregister" },
	{ 0xcd538084, "__pm_runtime_idle" },
	{ 0xc5745645, "__pm_runtime_disable" },
	{ 0xaa716bc0, "counter_priv" },
	{ 0x7ca92e2b, "regmap_update_bits_base" },
	{ 0x4534861e, "regmap_read" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x6ce4ec1b, "regmap_write" },
	{ 0x1a7e28fb, "devm_counter_alloc" },
	{ 0xef441af3, "devm_platform_ioremap_resource" },
	{ 0xd5288ef2, "__devm_regmap_init_mmio_clk" },
	{ 0xe3ae1810, "pm_runtime_enable" },
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0xc085a6fa, "counter_add" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "counter");

MODULE_ALIAS("of:N*T*Cti,am3352-eqep");
MODULE_ALIAS("of:N*T*Cti,am3352-eqepC*");

MODULE_INFO(srcversion, "F3808ABE0EEED65905428FD");
