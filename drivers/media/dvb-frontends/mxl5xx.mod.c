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

SYMBOL_CRC(mxl5xx_attach, 0x47cc6a9d, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x37a0cba, "kfree" },
	{ 0x5f754e5a, "memset" },
	{ 0x9d669763, "memcpy" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xf58bc2a5, "i2c_transfer" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x999e8297, "vfree" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E2FF0F663D9EA8A5C1625B6");
