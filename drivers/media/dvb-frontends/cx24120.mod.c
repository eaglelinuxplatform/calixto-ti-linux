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

SYMBOL_CRC(cx24120_attach, 0x1a1ad808, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x37a0cba, "kfree" },
	{ 0xf58bc2a5, "i2c_transfer" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x9d669763, "memcpy" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "EC583C73F22517F1990A5BF");
