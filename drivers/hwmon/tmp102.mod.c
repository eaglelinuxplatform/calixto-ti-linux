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
	{ 0x7ca92e2b, "regmap_update_bits_base" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x4534861e, "regmap_read" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x6ce4ec1b, "regmap_write" },
	{ 0x6196a6ec, "i2c_del_driver" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xf4ec3d1b, "__devm_regmap_init_i2c" },
	{ 0x4091ed3e, "devm_add_action" },
	{ 0x10448f79, "devm_hwmon_device_register_with_info" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "hwmon");

MODULE_ALIAS("of:N*T*Cti,tmp102");
MODULE_ALIAS("of:N*T*Cti,tmp102C*");
MODULE_ALIAS("i2c:tmp102");

MODULE_INFO(srcversion, "C8F1AA4C0C7A04AE48BAA77");
