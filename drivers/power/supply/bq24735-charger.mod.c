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
	{ 0x60b9e6ae, "i2c_smbus_write_word_data" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x6196a6ec, "i2c_del_driver" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xd236e21b, "devm_gpiod_get_optional" },
	{ 0x92aa0907, "gpiod_get_value_cansleep" },
	{ 0xd00270c6, "i2c_smbus_read_word_data" },
	{ 0xc17d0db0, "devm_power_supply_register" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0xcf1ab7a4, "device_property_read_u32_array" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x4091ed3e, "devm_add_action" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xcf8f30f4, "devm_kasprintf" },
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0x8ebf658, "of_find_property" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb5431a6, "power_supply_get_drvdata" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x95bd69d7, "power_supply_changed" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,bq24735");
MODULE_ALIAS("of:N*T*Cti,bq24735C*");
MODULE_ALIAS("i2c:bq24735-charger");

MODULE_INFO(srcversion, "6F95EB4F484F965414F84EF");
