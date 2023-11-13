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

SYMBOL_CRC(au8522_analog_i2c_gate_ctrl, 0x83db1a30, "");
SYMBOL_CRC(au8522_get_state, 0xacf5094f, "");
SYMBOL_CRC(au8522_i2c_gate_ctrl, 0xfe371c8e, "");
SYMBOL_CRC(au8522_init, 0xb3d4cb55, "");
SYMBOL_CRC(au8522_led_ctrl, 0xb229521c, "");
SYMBOL_CRC(au8522_readreg, 0x08baa629, "");
SYMBOL_CRC(au8522_release_state, 0x42b33083, "");
SYMBOL_CRC(au8522_sleep, 0x31890248, "");
SYMBOL_CRC(au8522_writereg, 0x7a8c066d, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf58bc2a5, "i2c_transfer" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "85463878324D71B131F2A22");
