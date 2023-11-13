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

SYMBOL_CRC(drxk_attach, 0xec76f4ed, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd0e9fb09, "release_firmware" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xfe5eb6e6, "request_firmware" },
	{ 0x8733236, "intlog10" },
	{ 0x9d669763, "memcpy" },
	{ 0x5a069f8c, "__i2c_transfer" },
	{ 0x37a0cba, "kfree" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x92997ed8, "_printk" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xf58bc2a5, "i2c_transfer" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0xf9a482f9, "msleep" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "dvb-core");


MODULE_INFO(srcversion, "F96CEFB055A0ECDC1048C01");
