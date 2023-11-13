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
	{ 0xd3e0fb5b, "i2c_smbus_read_byte_data" },
	{ 0xeea0399, "strscpy" },
	{ 0x593a1daa, "i2c_smbus_write_byte_data" },
	{ 0x4534861e, "regmap_read" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9ed8ac9c, "regulator_disable" },
	{ 0x6196a6ec, "i2c_del_driver" },
	{ 0x6ce4ec1b, "regmap_write" },
	{ 0x5ec1a11d, "of_device_get_match_data" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x1aba37c0, "devm_regulator_get" },
	{ 0xf4ec3d1b, "__devm_regmap_init_i2c" },
	{ 0x53d71abb, "regulator_enable" },
	{ 0x4091ed3e, "devm_add_action" },
	{ 0x10448f79, "devm_hwmon_device_register_with_info" },
	{ 0x70c2a3b2, "i2c_match_id" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "hwmon");

MODULE_ALIAS("of:N*T*Cadi,adt75");
MODULE_ALIAS("of:N*T*Cadi,adt75C*");
MODULE_ALIAS("of:N*T*Catmel,at30ts74");
MODULE_ALIAS("of:N*T*Catmel,at30ts74C*");
MODULE_ALIAS("of:N*T*Cdallas,ds1775");
MODULE_ALIAS("of:N*T*Cdallas,ds1775C*");
MODULE_ALIAS("of:N*T*Cdallas,ds75");
MODULE_ALIAS("of:N*T*Cdallas,ds75C*");
MODULE_ALIAS("of:N*T*Cdallas,ds7505");
MODULE_ALIAS("of:N*T*Cdallas,ds7505C*");
MODULE_ALIAS("of:N*T*Cgmt,g751");
MODULE_ALIAS("of:N*T*Cgmt,g751C*");
MODULE_ALIAS("of:N*T*Cnational,lm75");
MODULE_ALIAS("of:N*T*Cnational,lm75C*");
MODULE_ALIAS("of:N*T*Cnational,lm75a");
MODULE_ALIAS("of:N*T*Cnational,lm75aC*");
MODULE_ALIAS("of:N*T*Cnational,lm75b");
MODULE_ALIAS("of:N*T*Cnational,lm75bC*");
MODULE_ALIAS("of:N*T*Cmaxim,max6625");
MODULE_ALIAS("of:N*T*Cmaxim,max6625C*");
MODULE_ALIAS("of:N*T*Cmaxim,max6626");
MODULE_ALIAS("of:N*T*Cmaxim,max6626C*");
MODULE_ALIAS("of:N*T*Cmaxim,max31725");
MODULE_ALIAS("of:N*T*Cmaxim,max31725C*");
MODULE_ALIAS("of:N*T*Cmaxim,max31726");
MODULE_ALIAS("of:N*T*Cmaxim,max31726C*");
MODULE_ALIAS("of:N*T*Cmaxim,mcp980x");
MODULE_ALIAS("of:N*T*Cmaxim,mcp980xC*");
MODULE_ALIAS("of:N*T*Cnxp,pct2075");
MODULE_ALIAS("of:N*T*Cnxp,pct2075C*");
MODULE_ALIAS("of:N*T*Cst,stds75");
MODULE_ALIAS("of:N*T*Cst,stds75C*");
MODULE_ALIAS("of:N*T*Cst,stlm75");
MODULE_ALIAS("of:N*T*Cst,stlm75C*");
MODULE_ALIAS("of:N*T*Cmicrochip,tcn75");
MODULE_ALIAS("of:N*T*Cmicrochip,tcn75C*");
MODULE_ALIAS("of:N*T*Cti,tmp100");
MODULE_ALIAS("of:N*T*Cti,tmp100C*");
MODULE_ALIAS("of:N*T*Cti,tmp101");
MODULE_ALIAS("of:N*T*Cti,tmp101C*");
MODULE_ALIAS("of:N*T*Cti,tmp105");
MODULE_ALIAS("of:N*T*Cti,tmp105C*");
MODULE_ALIAS("of:N*T*Cti,tmp112");
MODULE_ALIAS("of:N*T*Cti,tmp112C*");
MODULE_ALIAS("of:N*T*Cti,tmp175");
MODULE_ALIAS("of:N*T*Cti,tmp175C*");
MODULE_ALIAS("of:N*T*Cti,tmp275");
MODULE_ALIAS("of:N*T*Cti,tmp275C*");
MODULE_ALIAS("of:N*T*Cti,tmp75");
MODULE_ALIAS("of:N*T*Cti,tmp75C*");
MODULE_ALIAS("of:N*T*Cti,tmp75b");
MODULE_ALIAS("of:N*T*Cti,tmp75bC*");
MODULE_ALIAS("of:N*T*Cti,tmp75c");
MODULE_ALIAS("of:N*T*Cti,tmp75cC*");
MODULE_ALIAS("of:N*T*Cti,tmp1075");
MODULE_ALIAS("of:N*T*Cti,tmp1075C*");
MODULE_ALIAS("i2c:adt75");
MODULE_ALIAS("i2c:at30ts74");
MODULE_ALIAS("i2c:ds1775");
MODULE_ALIAS("i2c:ds75");
MODULE_ALIAS("i2c:ds7505");
MODULE_ALIAS("i2c:g751");
MODULE_ALIAS("i2c:lm75");
MODULE_ALIAS("i2c:lm75a");
MODULE_ALIAS("i2c:lm75b");
MODULE_ALIAS("i2c:max6625");
MODULE_ALIAS("i2c:max6626");
MODULE_ALIAS("i2c:max31725");
MODULE_ALIAS("i2c:max31726");
MODULE_ALIAS("i2c:mcp980x");
MODULE_ALIAS("i2c:pct2075");
MODULE_ALIAS("i2c:stds75");
MODULE_ALIAS("i2c:stlm75");
MODULE_ALIAS("i2c:tcn75");
MODULE_ALIAS("i2c:tmp100");
MODULE_ALIAS("i2c:tmp101");
MODULE_ALIAS("i2c:tmp105");
MODULE_ALIAS("i2c:tmp112");
MODULE_ALIAS("i2c:tmp175");
MODULE_ALIAS("i2c:tmp275");
MODULE_ALIAS("i2c:tmp75");
MODULE_ALIAS("i2c:tmp75b");
MODULE_ALIAS("i2c:tmp75c");
MODULE_ALIAS("i2c:tmp1075");

MODULE_INFO(srcversion, "9ACEE2CA2612623A87D3707");
