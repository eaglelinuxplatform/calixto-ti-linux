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

SYMBOL_CRC(simple_tuner_attach, 0xa0ab29de, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x92997ed8, "_printk" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf58bc2a5, "i2c_transfer" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x9d669763, "memcpy" },
	{ 0xeea0399, "strscpy" },
	{ 0xc2821775, "tuner_count" },
	{ 0x4c48939e, "tuners" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xb673bbae, "i2c_clients_command" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0xe0df8796, "param_array_ops" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "tuner-types");


MODULE_INFO(srcversion, "15CCC2314C87F120ECBDFF2");
