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
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x32aea1d0, "of_platform_depopulate" },
	{ 0xcd538084, "__pm_runtime_idle" },
	{ 0xc5745645, "__pm_runtime_disable" },
	{ 0xf866b105, "__pm_runtime_set_status" },
	{ 0xe3ae1810, "pm_runtime_enable" },
	{ 0x53d71abb, "regulator_enable" },
	{ 0xfdba06aa, "regulator_is_enabled" },
	{ 0x9ed8ac9c, "regulator_disable" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x48ab7808, "platform_get_irq" },
	{ 0xef441af3, "devm_platform_ioremap_resource" },
	{ 0x8ebf658, "of_find_property" },
	{ 0x1aba37c0, "devm_regulator_get" },
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0xa93e1320, "of_device_is_compatible" },
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0x801c7bcb, "dev_driver_string" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x83ca686d, "extcon_get_edev_by_phandle" },
	{ 0x355afada, "devm_extcon_register_notifier" },
	{ 0xaacfee82, "extcon_get_state" },
	{ 0x5097d865, "of_platform_populate" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,dwc3");
MODULE_ALIAS("of:N*T*Cti,dwc3C*");
MODULE_ALIAS("of:N*T*Cti,am437x-dwc3");
MODULE_ALIAS("of:N*T*Cti,am437x-dwc3C*");

MODULE_INFO(srcversion, "4BFB434977D35CDAC4A09E5");
