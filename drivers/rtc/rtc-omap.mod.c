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

SYMBOL_CRC(omap_rtc_power_off_program, 0x6ffa34f1, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xcb99963, "__platform_driver_register" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x76bc84f4, "pinctrl_dev_get_drvdata" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xd411be68, "pinconf_generic_dt_node_to_map" },
	{ 0x183a46c2, "rtc_update_irq" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x19d8a156, "of_match_device" },
	{ 0x48ab7808, "platform_get_irq" },
	{ 0x67b00a79, "devm_clk_get" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xef441af3, "devm_platform_ioremap_resource" },
	{ 0xe3ae1810, "pm_runtime_enable" },
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0x7c375e08, "device_set_wakeup_capable" },
	{ 0x137a017f, "device_wakeup_enable" },
	{ 0xb61278b3, "devm_rtc_allocate_device" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0x6b05779b, "devm_pinctrl_register" },
	{ 0xf95b5b16, "__devm_rtc_register_device" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x723ae2b4, "device_wakeup_disable" },
	{ 0xcd538084, "__pm_runtime_idle" },
	{ 0xc5745645, "__pm_runtime_disable" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x815588a6, "clk_enable" },
	{ 0x8ebf658, "of_find_property" },
	{ 0x4e001107, "devm_rtc_nvmem_register" },
	{ 0x60a32ea9, "pm_power_off" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb3dea4cf, "pinconf_generic_dt_free_map" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,am3352-rtc");
MODULE_ALIAS("of:N*T*Cti,am3352-rtcC*");
MODULE_ALIAS("of:N*T*Cti,da830-rtc");
MODULE_ALIAS("of:N*T*Cti,da830-rtcC*");
MODULE_ALIAS("platform:omap_rtc");
MODULE_ALIAS("platform:am3352-rtc");
MODULE_ALIAS("platform:da830-rtc");

MODULE_INFO(srcversion, "D40A65E5DF64DC39451E055");
