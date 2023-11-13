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
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xfea15b62, "input_event" },
	{ 0x57674fd7, "__sw_hweight16" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xe08ffaa9, "devm_input_allocate_device" },
	{ 0x48ab7808, "platform_get_irq" },
	{ 0xf349eb74, "matrix_keypad_build_keymap" },
	{ 0x87249862, "input_set_capability" },
	{ 0xf70284f2, "input_register_device" },
	{ 0xf9722676, "twl_i2c_write" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0xeff6e460, "matrix_keypad_parse_properties" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "matrix-keymap");

MODULE_ALIAS("of:N*T*Cti,twl4030-keypad");
MODULE_ALIAS("of:N*T*Cti,twl4030-keypadC*");

MODULE_INFO(srcversion, "2006DA2E16ED5E44AD10A83");
