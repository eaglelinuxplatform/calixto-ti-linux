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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(bq27xxx_battery_setup, 0xfc1a4ba2, "_gpl");
SYMBOL_CRC(bq27xxx_battery_teardown, 0x74a57f06, "_gpl");
SYMBOL_CRC(bq27xxx_battery_update, 0xfbd1ebae, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb5431a6, "power_supply_get_drvdata" },
	{ 0xea4a09cb, "mod_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xc3595f10, "power_supply_unregister" },
	{ 0xd5f89485, "param_set_uint" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x5f754e5a, "memset" },
	{ 0x95bd69d7, "power_supply_changed" },
	{ 0x71c90087, "memcmp" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x697d200a, "power_supply_register_no_ws" },
	{ 0xf4ebd3d6, "power_supply_get_battery_info" },
	{ 0xf18bebde, "dev_err_probe" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x61542b6a, "param_get_uint" },
	{ 0xe4ea4aab, "param_ops_bool" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6985DDC83E0D7A86DB404D0");
