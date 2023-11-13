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
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0xcd538084, "__pm_runtime_idle" },
	{ 0x7604f1d3, "pwmchip_remove" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xc5745645, "__pm_runtime_disable" },
	{ 0x52842d82, "_dev_warn" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x67b00a79, "devm_clk_get" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xef441af3, "devm_platform_ioremap_resource" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xf9d78058, "pwmchip_add" },
	{ 0xe3ae1810, "pm_runtime_enable" },
	{ 0xa93e1320, "of_device_is_compatible" },
	{ 0xf18bebde, "dev_err_probe" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x815588a6, "clk_enable" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,am3352-ehrpwm");
MODULE_ALIAS("of:N*T*Cti,am3352-ehrpwmC*");
MODULE_ALIAS("of:N*T*Cti,am33xx-ehrpwm");
MODULE_ALIAS("of:N*T*Cti,am33xx-ehrpwmC*");

MODULE_INFO(srcversion, "D936B419D50B151158F4D50");
