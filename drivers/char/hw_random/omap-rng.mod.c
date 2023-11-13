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
	{ 0xcb99963, "__platform_driver_register" },
	{ 0xcd538084, "__pm_runtime_idle" },
	{ 0xc5745645, "__pm_runtime_disable" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x216d759a, "mmiocpy" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xef441af3, "devm_platform_ioremap_resource" },
	{ 0xc080505, "devm_kstrdup" },
	{ 0xe3ae1810, "pm_runtime_enable" },
	{ 0x67b00a79, "devm_clk_get" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x5ec1a11d, "of_device_get_match_data" },
	{ 0xa93e1320, "of_device_is_compatible" },
	{ 0x48ab7808, "platform_get_irq" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0x1aa9df9a, "devm_hwrng_register" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "rng-core");

MODULE_ALIAS("of:N*T*Cti,omap2-rng");
MODULE_ALIAS("of:N*T*Cti,omap2-rngC*");
MODULE_ALIAS("of:N*T*Cti,omap4-rng");
MODULE_ALIAS("of:N*T*Cti,omap4-rngC*");
MODULE_ALIAS("of:N*T*Cinside-secure,safexcel-eip76");
MODULE_ALIAS("of:N*T*Cinside-secure,safexcel-eip76C*");

MODULE_INFO(srcversion, "5F94C0C844001F96D371899");
