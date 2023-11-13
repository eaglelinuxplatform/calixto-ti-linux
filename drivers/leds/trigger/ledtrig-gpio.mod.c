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
	{ 0xe4c02d0b, "led_trigger_register" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x700879d, "gpio_to_desc" },
	{ 0xef4769d9, "gpiod_get_raw_value_cansleep" },
	{ 0x49626748, "led_set_brightness_nosleep" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x668b595, "_kstrtoul" },
	{ 0x9e69e4f0, "led_trigger_unregister" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x3dabb96b, "gpiod_to_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8ED3BFCF6A6536461F2B76A");
