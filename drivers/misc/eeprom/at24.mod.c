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
	{ 0x53d71abb, "regulator_enable" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x9ed8ac9c, "regulator_disable" },
	{ 0xc5745645, "__pm_runtime_disable" },
	{ 0xf866b105, "__pm_runtime_set_status" },
	{ 0x1212c326, "i2c_register_driver" },
	{ 0x92997ed8, "_printk" },
	{ 0x6196a6ec, "i2c_del_driver" },
	{ 0xc6cbbc89, "capable" },
	{ 0x11016feb, "regmap_get_device" },
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x6a639cfa, "regmap_bulk_read" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xcd538084, "__pm_runtime_idle" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0x70c2a3b2, "i2c_match_id" },
	{ 0x19d8a156, "of_match_device" },
	{ 0x5ec1a11d, "of_device_get_match_data" },
	{ 0xcf1ab7a4, "device_property_read_u32_array" },
	{ 0xc8c63ab0, "device_property_present" },
	{ 0x52842d82, "_dev_warn" },
	{ 0xf4ec3d1b, "__devm_regmap_init_i2c" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x1aba37c0, "devm_regulator_get" },
	{ 0x39139a3c, "devm_i2c_new_dummy_device" },
	{ 0xe3ae1810, "pm_runtime_enable" },
	{ 0xc4c9faa5, "devm_nvmem_register" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0xf969a542, "device_property_read_string" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x695b108, "regmap_bulk_write" },
	{ 0x869b215e, "pm_runtime_force_suspend" },
	{ 0xcc37b4f7, "pm_runtime_force_resume" },
	{ 0x9098ac8b, "param_ops_uint" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:INT3499:*");
MODULE_ALIAS("acpi*:TPF0001:*");
MODULE_ALIAS("of:N*T*Catmel,24c00");
MODULE_ALIAS("of:N*T*Catmel,24c00C*");
MODULE_ALIAS("of:N*T*Catmel,24c01");
MODULE_ALIAS("of:N*T*Catmel,24c01C*");
MODULE_ALIAS("of:N*T*Catmel,24cs01");
MODULE_ALIAS("of:N*T*Catmel,24cs01C*");
MODULE_ALIAS("of:N*T*Catmel,24c02");
MODULE_ALIAS("of:N*T*Catmel,24c02C*");
MODULE_ALIAS("of:N*T*Catmel,24cs02");
MODULE_ALIAS("of:N*T*Catmel,24cs02C*");
MODULE_ALIAS("of:N*T*Catmel,24mac402");
MODULE_ALIAS("of:N*T*Catmel,24mac402C*");
MODULE_ALIAS("of:N*T*Catmel,24mac602");
MODULE_ALIAS("of:N*T*Catmel,24mac602C*");
MODULE_ALIAS("of:N*T*Catmel,spd");
MODULE_ALIAS("of:N*T*Catmel,spdC*");
MODULE_ALIAS("of:N*T*Catmel,24c04");
MODULE_ALIAS("of:N*T*Catmel,24c04C*");
MODULE_ALIAS("of:N*T*Catmel,24cs04");
MODULE_ALIAS("of:N*T*Catmel,24cs04C*");
MODULE_ALIAS("of:N*T*Catmel,24c08");
MODULE_ALIAS("of:N*T*Catmel,24c08C*");
MODULE_ALIAS("of:N*T*Catmel,24cs08");
MODULE_ALIAS("of:N*T*Catmel,24cs08C*");
MODULE_ALIAS("of:N*T*Catmel,24c16");
MODULE_ALIAS("of:N*T*Catmel,24c16C*");
MODULE_ALIAS("of:N*T*Catmel,24cs16");
MODULE_ALIAS("of:N*T*Catmel,24cs16C*");
MODULE_ALIAS("of:N*T*Catmel,24c32");
MODULE_ALIAS("of:N*T*Catmel,24c32C*");
MODULE_ALIAS("of:N*T*Catmel,24cs32");
MODULE_ALIAS("of:N*T*Catmel,24cs32C*");
MODULE_ALIAS("of:N*T*Catmel,24c64");
MODULE_ALIAS("of:N*T*Catmel,24c64C*");
MODULE_ALIAS("of:N*T*Catmel,24cs64");
MODULE_ALIAS("of:N*T*Catmel,24cs64C*");
MODULE_ALIAS("of:N*T*Catmel,24c128");
MODULE_ALIAS("of:N*T*Catmel,24c128C*");
MODULE_ALIAS("of:N*T*Catmel,24c256");
MODULE_ALIAS("of:N*T*Catmel,24c256C*");
MODULE_ALIAS("of:N*T*Catmel,24c512");
MODULE_ALIAS("of:N*T*Catmel,24c512C*");
MODULE_ALIAS("of:N*T*Catmel,24c1024");
MODULE_ALIAS("of:N*T*Catmel,24c1024C*");
MODULE_ALIAS("of:N*T*Catmel,24c1025");
MODULE_ALIAS("of:N*T*Catmel,24c1025C*");
MODULE_ALIAS("of:N*T*Catmel,24c2048");
MODULE_ALIAS("of:N*T*Catmel,24c2048C*");
MODULE_ALIAS("i2c:24c00");
MODULE_ALIAS("i2c:24c01");
MODULE_ALIAS("i2c:24cs01");
MODULE_ALIAS("i2c:24c02");
MODULE_ALIAS("i2c:24cs02");
MODULE_ALIAS("i2c:24mac402");
MODULE_ALIAS("i2c:24mac602");
MODULE_ALIAS("i2c:spd");
MODULE_ALIAS("i2c:24c02-vaio");
MODULE_ALIAS("i2c:24c04");
MODULE_ALIAS("i2c:24cs04");
MODULE_ALIAS("i2c:24c08");
MODULE_ALIAS("i2c:24cs08");
MODULE_ALIAS("i2c:24c16");
MODULE_ALIAS("i2c:24cs16");
MODULE_ALIAS("i2c:24c32");
MODULE_ALIAS("i2c:24cs32");
MODULE_ALIAS("i2c:24c64");
MODULE_ALIAS("i2c:24cs64");
MODULE_ALIAS("i2c:24c128");
MODULE_ALIAS("i2c:24c256");
MODULE_ALIAS("i2c:24c512");
MODULE_ALIAS("i2c:24c1024");
MODULE_ALIAS("i2c:24c1025");
MODULE_ALIAS("i2c:24c2048");
MODULE_ALIAS("i2c:at24");

MODULE_INFO(srcversion, "BE9A5E0CB0EAD160A64F9E0");
