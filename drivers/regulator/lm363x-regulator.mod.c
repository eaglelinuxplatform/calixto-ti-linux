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
	{ 0x3b54a102, "rdev_get_id" },
	{ 0x4534861e, "regmap_read" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x3f2df465, "gpiod_get_index_optional" },
	{ 0xb1b0e08, "gpiod_put" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x7ca92e2b, "regmap_update_bits_base" },
	{ 0x901afb3d, "devm_regulator_register" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x145f46fe, "regulator_list_voltage_linear" },
	{ 0x6b07cf41, "regulator_set_voltage_sel_regmap" },
	{ 0x6cb869e5, "regulator_get_voltage_sel_regmap" },
	{ 0x256f0f32, "regulator_enable_regmap" },
	{ 0xc0145306, "regulator_disable_regmap" },
	{ 0x13f26493, "regulator_is_enabled_regmap" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "60D55BB07CFE8AD7DE60E6D");
