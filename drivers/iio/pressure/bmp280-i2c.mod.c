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
	{ 0xf4ec3d1b, "__devm_regmap_init_i2c" },
	{ 0xd7865cc2, "bmp280_common_probe" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x45517b56, "bmp380_regmap_config" },
	{ 0xaa03cdb7, "bmp280_regmap_config" },
	{ 0x408510d5, "bmp180_regmap_config" },
	{ 0x6196a6ec, "i2c_del_driver" },
	{ 0x1e35615d, "bmp280_dev_pm_ops" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "bmp280");

MODULE_ALIAS("i2c:bmp085");
MODULE_ALIAS("i2c:bmp180");
MODULE_ALIAS("i2c:bmp280");
MODULE_ALIAS("i2c:bme280");
MODULE_ALIAS("i2c:bmp380");
MODULE_ALIAS("of:N*T*Cbosch,bmp085");
MODULE_ALIAS("of:N*T*Cbosch,bmp085C*");
MODULE_ALIAS("of:N*T*Cbosch,bmp180");
MODULE_ALIAS("of:N*T*Cbosch,bmp180C*");
MODULE_ALIAS("of:N*T*Cbosch,bmp280");
MODULE_ALIAS("of:N*T*Cbosch,bmp280C*");
MODULE_ALIAS("of:N*T*Cbosch,bme280");
MODULE_ALIAS("of:N*T*Cbosch,bme280C*");
MODULE_ALIAS("of:N*T*Cbosch,bmp380");
MODULE_ALIAS("of:N*T*Cbosch,bmp380C*");

MODULE_INFO(srcversion, "20353FD4C6C5B60FC7C3B8A");
