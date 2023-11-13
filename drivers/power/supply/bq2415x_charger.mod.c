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
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xf58bc2a5, "i2c_transfer" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb5431a6, "power_supply_get_drvdata" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x6196a6ec, "i2c_del_driver" },
	{ 0x5aaa7b3f, "power_supply_get_property" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6b81c38b, "power_supply_unreg_notifier" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xc3595f10, "power_supply_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xa346975c, "idr_remove" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0xaa19e4aa, "_kstrtol" },
	{ 0x84b183ae, "strncmp" },
	{ 0xc675b096, "sysfs_notify" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x692a4f08, "idr_alloc" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xcf1ab7a4, "device_property_read_u32_array" },
	{ 0x6b0d3011, "__of_parse_phandle_with_args" },
	{ 0x5cecd801, "power_supply_register" },
	{ 0x136209db, "power_supply_reg_notifier" },
	{ 0x9f474f5d, "power_supply_get_by_phandle" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x6de7b70a, "power_supply_get_by_name" },
	{ 0x15b6f0ae, "power_supply_put" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,bq24150");
MODULE_ALIAS("of:N*T*Cti,bq24150C*");
MODULE_ALIAS("of:N*T*Cti,bq24150a");
MODULE_ALIAS("of:N*T*Cti,bq24150aC*");
MODULE_ALIAS("of:N*T*Cti,bq24151");
MODULE_ALIAS("of:N*T*Cti,bq24151C*");
MODULE_ALIAS("of:N*T*Cti,bq24151a");
MODULE_ALIAS("of:N*T*Cti,bq24151aC*");
MODULE_ALIAS("of:N*T*Cti,bq24152");
MODULE_ALIAS("of:N*T*Cti,bq24152C*");
MODULE_ALIAS("of:N*T*Cti,bq24153");
MODULE_ALIAS("of:N*T*Cti,bq24153C*");
MODULE_ALIAS("of:N*T*Cti,bq24153a");
MODULE_ALIAS("of:N*T*Cti,bq24153aC*");
MODULE_ALIAS("of:N*T*Cti,bq24155");
MODULE_ALIAS("of:N*T*Cti,bq24155C*");
MODULE_ALIAS("of:N*T*Cti,bq24156");
MODULE_ALIAS("of:N*T*Cti,bq24156C*");
MODULE_ALIAS("of:N*T*Cti,bq24156a");
MODULE_ALIAS("of:N*T*Cti,bq24156aC*");
MODULE_ALIAS("of:N*T*Cti,bq24157s");
MODULE_ALIAS("of:N*T*Cti,bq24157sC*");
MODULE_ALIAS("of:N*T*Cti,bq24158");
MODULE_ALIAS("of:N*T*Cti,bq24158C*");
MODULE_ALIAS("i2c:bq2415x");
MODULE_ALIAS("i2c:bq24150");
MODULE_ALIAS("i2c:bq24150a");
MODULE_ALIAS("i2c:bq24151");
MODULE_ALIAS("i2c:bq24151a");
MODULE_ALIAS("i2c:bq24152");
MODULE_ALIAS("i2c:bq24153");
MODULE_ALIAS("i2c:bq24153a");
MODULE_ALIAS("i2c:bq24155");
MODULE_ALIAS("i2c:bq24156");
MODULE_ALIAS("i2c:bq24156a");
MODULE_ALIAS("i2c:bq24157s");
MODULE_ALIAS("i2c:bq24158");

MODULE_INFO(srcversion, "D9B54FBF6F28D50BCDB49F4");
