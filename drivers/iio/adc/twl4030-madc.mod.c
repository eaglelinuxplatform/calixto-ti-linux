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
	{ 0xcb99963, "__platform_driver_register" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xd6a91f54, "twl_i2c_read" },
	{ 0xf9722676, "twl_i2c_write" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xc8e173ed, "_find_next_bit_le" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0xf2a95050, "devm_iio_device_alloc" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x48ab7808, "platform_get_irq" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0x1aba37c0, "devm_regulator_get" },
	{ 0x53d71abb, "regulator_enable" },
	{ 0x6d38e373, "__iio_device_register" },
	{ 0x8ebf658, "of_find_property" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x9ed8ac9c, "regulator_disable" },
	{ 0x1826c1bb, "iio_device_unregister" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Cti,twl4030-madc");
MODULE_ALIAS("of:N*T*Cti,twl4030-madcC*");

MODULE_INFO(srcversion, "EBC4E17043C804A0BC2F83D");
