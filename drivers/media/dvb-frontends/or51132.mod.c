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

SYMBOL_CRC(or51132_attach, 0x6d0ca3c3, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf58bc2a5, "i2c_transfer" },
	{ 0x92997ed8, "_printk" },
	{ 0x8733236, "intlog10" },
	{ 0x37a0cba, "kfree" },
	{ 0xfe5eb6e6, "request_firmware" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0xf9a482f9, "msleep" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x9d669763, "memcpy" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "dvb-core");


MODULE_INFO(srcversion, "49823442D538D1E1CBF314C");
