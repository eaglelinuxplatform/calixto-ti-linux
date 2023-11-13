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

SYMBOL_CRC(iio_register_sw_device_type, 0x9536aa06, "");
SYMBOL_CRC(iio_sw_device_create, 0x69238cfd, "");
SYMBOL_CRC(iio_sw_device_destroy, 0xe9a070ed, "");
SYMBOL_CRC(iio_unregister_sw_device_type, 0x7c3d3aa1, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x43bc2090, "configfs_register_default_group" },
	{ 0xf3c70885, "iio_configfs_subsys" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x958731b0, "configfs_unregister_default_group" },
	{ 0x1449535e, "module_put" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5a6d5863, "try_module_get" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x92997ed8, "_printk" },
	{ 0xf1ac9a3e, "config_item_set_name" },
	{ 0xbfe13d19, "config_item_put" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "industrialio-configfs");


MODULE_INFO(srcversion, "612F2D2273C02BCD6132840");
