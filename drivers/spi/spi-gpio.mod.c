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
	{ 0x732e56d8, "gpiod_set_value_cansleep" },
	{ 0x27a8b3d2, "gpiod_direction_input" },
	{ 0x9f662a0a, "gpiod_direction_output" },
	{ 0x7fea2060, "spi_bitbang_cleanup" },
	{ 0x66cc0f25, "spi_bitbang_setup" },
	{ 0x6cde73c8, "__devm_spi_alloc_controller" },
	{ 0xd236e21b, "devm_gpiod_get_optional" },
	{ 0x301d3b5, "devm_gpiod_get" },
	{ 0x1d5ab32c, "spi_bitbang_init" },
	{ 0x4f02d137, "devm_spi_register_controller" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xde775963, "devm_gpiod_get_index" },
	{ 0xb7d42c25, "spi_bitbang_setup_transfer" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x92aa0907, "gpiod_get_value_cansleep" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "spi-bitbang");

MODULE_ALIAS("of:N*T*Cspi-gpio");
MODULE_ALIAS("of:N*T*Cspi-gpioC*");

MODULE_INFO(srcversion, "6E7D3450B1A424A7456FC23");
