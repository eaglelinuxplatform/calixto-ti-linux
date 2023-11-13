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
	{ 0x1212c326, "i2c_register_driver" },
	{ 0x732e56d8, "gpiod_set_value_cansleep" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x62c6484b, "i2c_unregister_device" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x6196a6ec, "i2c_del_driver" },
	{ 0x7ca92e2b, "regmap_update_bits_base" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x5ec1a11d, "of_device_get_match_data" },
	{ 0x67b00a79, "devm_clk_get" },
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0xd236e21b, "devm_gpiod_get_optional" },
	{ 0xf4ec3d1b, "__devm_regmap_init_i2c" },
	{ 0x15aafeb7, "i2c_new_dummy_device" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x9d669763, "memcpy" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x6ce4ec1b, "regmap_write" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4534861e, "regmap_read" },
	{ 0x8733236, "intlog10" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "dvb-core");

MODULE_ALIAS("i2c:mn884433");
MODULE_ALIAS("i2c:mn884434-0");
MODULE_ALIAS("i2c:mn884434-1");
MODULE_ALIAS("of:N*T*Csocionext,mn884433");
MODULE_ALIAS("of:N*T*Csocionext,mn884433C*");
MODULE_ALIAS("of:N*T*Csocionext,mn884434-0");
MODULE_ALIAS("of:N*T*Csocionext,mn884434-0C*");
MODULE_ALIAS("of:N*T*Csocionext,mn884434-1");
MODULE_ALIAS("of:N*T*Csocionext,mn884434-1C*");

MODULE_INFO(srcversion, "ED7E56C6BAA51A5E9FD89B9");
