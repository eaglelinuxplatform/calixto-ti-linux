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
	{ 0xcb99963, "__platform_driver_register" },
	{ 0x7604f1d3, "pwmchip_remove" },
	{ 0x2c6007e1, "put_device" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x6b0d3011, "__of_parse_phandle_with_args" },
	{ 0x7535ef29, "of_find_device_by_node" },
	{ 0x1a6f0b65, "of_get_property" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xf9d78058, "pwmchip_add" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,omap-dmtimer-pwm");
MODULE_ALIAS("of:N*T*Cti,omap-dmtimer-pwmC*");

MODULE_INFO(srcversion, "62A2A9519BA0252EBA14BDF");
