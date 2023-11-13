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

SYMBOL_CRC(am335x_tsc_se_adc_done, 0x73b17eb2, "_gpl");
SYMBOL_CRC(am335x_tsc_se_clr, 0x06f379d9, "_gpl");
SYMBOL_CRC(am335x_tsc_se_set_cache, 0x385dad76, "_gpl");
SYMBOL_CRC(am335x_tsc_se_set_once, 0x27bf4386, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x6ce4ec1b, "regmap_write" },
	{ 0x637493f3, "__wake_up" },
	{ 0xcb99963, "__platform_driver_register" },
	{ 0xb46e68b0, "device_for_each_child" },
	{ 0xcd538084, "__pm_runtime_idle" },
	{ 0x4534861e, "regmap_read" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc5745645, "__pm_runtime_disable" },
	{ 0x3b99d99, "mfd_remove_devices" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0xe61a6643, "__current" },
	{ 0x6578533e, "prepare_to_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x49970de8, "finish_wait" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x5ec1a11d, "of_device_get_match_data" },
	{ 0xa93e1320, "of_device_is_compatible" },
	{ 0x9cae81f1, "of_get_child_by_name" },
	{ 0x8ebf658, "of_find_property" },
	{ 0x7bdac3ca, "of_prop_next_u32" },
	{ 0x48ab7808, "platform_get_irq" },
	{ 0x826781f6, "platform_get_resource" },
	{ 0x600e4576, "devm_ioremap_resource" },
	{ 0xd5288ef2, "__devm_regmap_init_mmio_clk" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe3ae1810, "pm_runtime_enable" },
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0x67b00a79, "devm_clk_get" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x974977bb, "mfd_add_devices" },
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,am3359-tscadc");
MODULE_ALIAS("of:N*T*Cti,am3359-tscadcC*");
MODULE_ALIAS("of:N*T*Cti,am4372-magadc");
MODULE_ALIAS("of:N*T*Cti,am4372-magadcC*");

MODULE_INFO(srcversion, "67E2055B6925E1A27811F8B");
