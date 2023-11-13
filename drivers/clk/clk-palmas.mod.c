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
	{ 0x47b14f42, "of_clk_del_provider" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x4534861e, "regmap_read" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5ec1a11d, "of_device_get_match_data" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0xf26b2380, "devm_clk_hw_register" },
	{ 0x7ca92e2b, "regmap_update_bits_base" },
	{ 0x1b3ce152, "of_clk_add_hw_provider" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x5538ed4e, "palmas_ext_control_req_config" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x408109b1, "of_clk_hw_simple_get" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,palmas-clk32kg");
MODULE_ALIAS("of:N*T*Cti,palmas-clk32kgC*");
MODULE_ALIAS("of:N*T*Cti,palmas-clk32kgaudio");
MODULE_ALIAS("of:N*T*Cti,palmas-clk32kgaudioC*");

MODULE_INFO(srcversion, "72DF1FEDC2B137509084FB6");
