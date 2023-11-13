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

SYMBOL_CRC(s5h1420_attach, 0xe5be1bba, "");
SYMBOL_CRC(s5h1420_get_tuner_i2c_adapter, 0x923cdaf8, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x5f754e5a, "memset" },
	{ 0x9d669763, "memcpy" },
	{ 0xf58bc2a5, "i2c_transfer" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf9a482f9, "msleep" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xefbe44be, "i2c_del_adapter" },
	{ 0x37a0cba, "kfree" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xeea0399, "strscpy" },
	{ 0xe2ba9bdc, "i2c_add_adapter" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7291CB6DCFD1BF100D88799");
