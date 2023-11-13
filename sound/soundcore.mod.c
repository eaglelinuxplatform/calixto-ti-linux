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

SYMBOL_CRC(register_sound_dsp, 0xcd1d6084, "");
SYMBOL_CRC(register_sound_mixer, 0xf63a3f26, "");
SYMBOL_CRC(register_sound_special, 0x10370695, "");
SYMBOL_CRC(register_sound_special_device, 0x7f198911, "");
SYMBOL_CRC(sound_class, 0x0b5b59ab, "");
SYMBOL_CRC(unregister_sound_dsp, 0xcd083b10, "");
SYMBOL_CRC(unregister_sound_mixer, 0x7afc9d8a, "");
SYMBOL_CRC(unregister_sound_special, 0x99c95fa5, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x5a6d5863, "try_module_get" },
	{ 0x1697d536, "__class_create" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xca3ce6df, "class_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x92997ed8, "_printk" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x1449535e, "module_put" },
	{ 0xf66696c7, "device_create" },
	{ 0xec40dc18, "noop_llseek" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb58cea90, "__register_chrdev" },
	{ 0x4d7965c8, "device_destroy" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x97255bdf, "strlen" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6C0DA390FF9F34CF4A63CB0");
