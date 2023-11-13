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
	{ 0x6a639cfa, "regmap_bulk_read" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4534861e, "regmap_read" },
	{ 0x6ce4ec1b, "regmap_write" },
	{ 0x695b108, "regmap_bulk_write" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x7ca92e2b, "regmap_update_bits_base" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x183a46c2, "rtc_update_irq" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xf4ec3d1b, "__devm_regmap_init_i2c" },
	{ 0xe5bf01a, "device_get_match_data" },
	{ 0xb61278b3, "devm_rtc_allocate_device" },
	{ 0x7c375e08, "device_set_wakeup_capable" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0xf95b5b16, "__devm_rtc_register_device" },
	{ 0xcf1ab7a4, "device_property_read_u32_array" },
	{ 0xc8c63ab0, "device_property_present" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xe4dc5e72, "rtc_add_group" },
	{ 0x12f222b7, "devm_hwmon_device_register_with_groups" },
	{ 0x8d7ecf91, "device_property_read_string_array" },
	{ 0x5f64d5de, "devm_clk_register" },
	{ 0x97c0d8e0, "of_clk_add_provider" },
	{ 0x5f754e5a, "memset" },
	{ 0x4e001107, "devm_rtc_nvmem_register" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x96a03f96, "of_clk_src_onecell_get" },
	{ 0x6196a6ec, "i2c_del_driver" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "hwmon");

MODULE_ALIAS("of:N*T*Cdallas,ds1307");
MODULE_ALIAS("of:N*T*Cdallas,ds1307C*");
MODULE_ALIAS("of:N*T*Cdallas,ds1308");
MODULE_ALIAS("of:N*T*Cdallas,ds1308C*");
MODULE_ALIAS("of:N*T*Cdallas,ds1337");
MODULE_ALIAS("of:N*T*Cdallas,ds1337C*");
MODULE_ALIAS("of:N*T*Cdallas,ds1338");
MODULE_ALIAS("of:N*T*Cdallas,ds1338C*");
MODULE_ALIAS("of:N*T*Cdallas,ds1339");
MODULE_ALIAS("of:N*T*Cdallas,ds1339C*");
MODULE_ALIAS("of:N*T*Cdallas,ds1388");
MODULE_ALIAS("of:N*T*Cdallas,ds1388C*");
MODULE_ALIAS("of:N*T*Cdallas,ds1340");
MODULE_ALIAS("of:N*T*Cdallas,ds1340C*");
MODULE_ALIAS("of:N*T*Cdallas,ds1341");
MODULE_ALIAS("of:N*T*Cdallas,ds1341C*");
MODULE_ALIAS("of:N*T*Cmaxim,ds3231");
MODULE_ALIAS("of:N*T*Cmaxim,ds3231C*");
MODULE_ALIAS("of:N*T*Cst,m41t0");
MODULE_ALIAS("of:N*T*Cst,m41t0C*");
MODULE_ALIAS("of:N*T*Cst,m41t00");
MODULE_ALIAS("of:N*T*Cst,m41t00C*");
MODULE_ALIAS("of:N*T*Cst,m41t11");
MODULE_ALIAS("of:N*T*Cst,m41t11C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp7940x");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp7940xC*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp7941x");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp7941xC*");
MODULE_ALIAS("of:N*T*Cpericom,pt7c4338");
MODULE_ALIAS("of:N*T*Cpericom,pt7c4338C*");
MODULE_ALIAS("of:N*T*Cepson,rx8025");
MODULE_ALIAS("of:N*T*Cepson,rx8025C*");
MODULE_ALIAS("of:N*T*Cisil,isl12057");
MODULE_ALIAS("of:N*T*Cisil,isl12057C*");
MODULE_ALIAS("of:N*T*Cepson,rx8130");
MODULE_ALIAS("of:N*T*Cepson,rx8130C*");
MODULE_ALIAS("i2c:ds1307");
MODULE_ALIAS("i2c:ds1308");
MODULE_ALIAS("i2c:ds1337");
MODULE_ALIAS("i2c:ds1338");
MODULE_ALIAS("i2c:ds1339");
MODULE_ALIAS("i2c:ds1388");
MODULE_ALIAS("i2c:ds1340");
MODULE_ALIAS("i2c:ds1341");
MODULE_ALIAS("i2c:ds3231");
MODULE_ALIAS("i2c:m41t0");
MODULE_ALIAS("i2c:m41t00");
MODULE_ALIAS("i2c:m41t11");
MODULE_ALIAS("i2c:mcp7940x");
MODULE_ALIAS("i2c:mcp7941x");
MODULE_ALIAS("i2c:pt7c4338");
MODULE_ALIAS("i2c:rx8025");
MODULE_ALIAS("i2c:isl12057");
MODULE_ALIAS("i2c:rx8130");

MODULE_INFO(srcversion, "5A229E60A3A481CED15EB3A");
