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
	{ 0x1212c326, "i2c_register_driver" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x7ca92e2b, "regmap_update_bits_base" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x9494c5fc, "rdev_get_drvdata" },
	{ 0x4534861e, "regmap_read" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x99bb8806, "memmove" },
	{ 0x732e56d8, "gpiod_set_value_cansleep" },
	{ 0x6196a6ec, "i2c_del_driver" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x19d8a156, "of_match_device" },
	{ 0xf4ec3d1b, "__devm_regmap_init_i2c" },
	{ 0xd236e21b, "devm_gpiod_get_optional" },
	{ 0x6ce4ec1b, "regmap_write" },
	{ 0x901afb3d, "devm_regulator_register" },
	{ 0xfa200f29, "of_get_regulator_init_data" },
	{ 0x8ebf658, "of_find_property" },
	{ 0x145f46fe, "regulator_list_voltage_linear" },
	{ 0xe2012fd0, "regulator_map_voltage_linear" },
	{ 0x8897b7c7, "regulator_set_voltage_time_sel" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:tps62360");
MODULE_ALIAS("i2c:tps62361");
MODULE_ALIAS("i2c:tps62362");
MODULE_ALIAS("i2c:tps62363");
MODULE_ALIAS("of:N*T*Cti,tps62360");
MODULE_ALIAS("of:N*T*Cti,tps62360C*");
MODULE_ALIAS("of:N*T*Cti,tps62361");
MODULE_ALIAS("of:N*T*Cti,tps62361C*");
MODULE_ALIAS("of:N*T*Cti,tps62362");
MODULE_ALIAS("of:N*T*Cti,tps62362C*");
MODULE_ALIAS("of:N*T*Cti,tps62363");
MODULE_ALIAS("of:N*T*Cti,tps62363C*");

MODULE_INFO(srcversion, "84F11885D678784D3A83876");
