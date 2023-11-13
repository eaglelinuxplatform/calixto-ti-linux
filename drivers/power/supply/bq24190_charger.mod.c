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
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xd3e0fb5b, "i2c_smbus_read_byte_data" },
	{ 0xb5431a6, "power_supply_get_drvdata" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6196a6ec, "i2c_del_driver" },
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x9580c7ff, "__pm_runtime_suspend" },
	{ 0x9494c5fc, "rdev_get_drvdata" },
	{ 0x52842d82, "_dev_warn" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xc8c63ab0, "device_property_present" },
	{ 0x593a1daa, "i2c_smbus_write_byte_data" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xc3595f10, "power_supply_unregister" },
	{ 0xcd538084, "__pm_runtime_idle" },
	{ 0x2cb2870f, "__pm_runtime_use_autosuspend" },
	{ 0xc5745645, "__pm_runtime_disable" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x95bd69d7, "power_supply_changed" },
	{ 0xa324780b, "extcon_set_state_sync" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x328a05f1, "strncpy" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xae6b96bb, "devm_extcon_dev_allocate" },
	{ 0xb8d66b53, "devm_extcon_dev_register" },
	{ 0xe3ae1810, "pm_runtime_enable" },
	{ 0x3ff02157, "pm_runtime_set_autosuspend_delay" },
	{ 0x5cecd801, "power_supply_register" },
	{ 0xcf1ab7a4, "device_property_read_u32_array" },
	{ 0xf4ebd3d6, "power_supply_get_battery_info" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0x901afb3d, "devm_regulator_register" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x64df8b98, "power_supply_get_property_from_supplier" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,bq24190");
MODULE_ALIAS("of:N*T*Cti,bq24190C*");
MODULE_ALIAS("of:N*T*Cti,bq24192");
MODULE_ALIAS("of:N*T*Cti,bq24192C*");
MODULE_ALIAS("of:N*T*Cti,bq24192i");
MODULE_ALIAS("of:N*T*Cti,bq24192iC*");
MODULE_ALIAS("of:N*T*Cti,bq24196");
MODULE_ALIAS("of:N*T*Cti,bq24196C*");
MODULE_ALIAS("i2c:bq24190");
MODULE_ALIAS("i2c:bq24192");
MODULE_ALIAS("i2c:bq24192i");
MODULE_ALIAS("i2c:bq24196");

MODULE_INFO(srcversion, "15CB807C2B2DE623DAA1A8D");
