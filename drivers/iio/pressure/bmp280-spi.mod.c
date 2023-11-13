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
	{ 0xa2669883, "__spi_register_driver" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8e153130, "spi_write_then_read" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf98c9d6b, "spi_get_device_id" },
	{ 0x80748366, "spi_setup" },
	{ 0x9bd21ea7, "__devm_regmap_init" },
	{ 0xd7865cc2, "bmp280_common_probe" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x45517b56, "bmp380_regmap_config" },
	{ 0xaa03cdb7, "bmp280_regmap_config" },
	{ 0x408510d5, "bmp180_regmap_config" },
	{ 0xbb4f160b, "driver_unregister" },
	{ 0x1e35615d, "bmp280_dev_pm_ops" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "bmp280");

MODULE_ALIAS("spi:bmp180");
MODULE_ALIAS("spi:bmp181");
MODULE_ALIAS("spi:bmp280");
MODULE_ALIAS("spi:bme280");
MODULE_ALIAS("spi:bmp380");
MODULE_ALIAS("of:N*T*Cbosch,bmp085");
MODULE_ALIAS("of:N*T*Cbosch,bmp085C*");
MODULE_ALIAS("of:N*T*Cbosch,bmp180");
MODULE_ALIAS("of:N*T*Cbosch,bmp180C*");
MODULE_ALIAS("of:N*T*Cbosch,bmp181");
MODULE_ALIAS("of:N*T*Cbosch,bmp181C*");
MODULE_ALIAS("of:N*T*Cbosch,bmp280");
MODULE_ALIAS("of:N*T*Cbosch,bmp280C*");
MODULE_ALIAS("of:N*T*Cbosch,bme280");
MODULE_ALIAS("of:N*T*Cbosch,bme280C*");
MODULE_ALIAS("of:N*T*Cbosch,bmp380");
MODULE_ALIAS("of:N*T*Cbosch,bmp380C*");

MODULE_INFO(srcversion, "B8A888BEDC6871B72BDC7BA");
