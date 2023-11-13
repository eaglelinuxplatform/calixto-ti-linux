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

SYMBOL_CRC(au8522_attach, 0x1ecf4fd3, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x42b33083, "au8522_release_state" },
	{ 0xacf5094f, "au8522_get_state" },
	{ 0x9d669763, "memcpy" },
	{ 0xb3d4cb55, "au8522_init" },
	{ 0xfe371c8e, "au8522_i2c_gate_ctrl" },
	{ 0x92997ed8, "_printk" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x83db1a30, "au8522_analog_i2c_gate_ctrl" },
	{ 0x8baa629, "au8522_readreg" },
	{ 0xb229521c, "au8522_led_ctrl" },
	{ 0x7a8c066d, "au8522_writereg" },
	{ 0xf9a482f9, "msleep" },
	{ 0x31890248, "au8522_sleep" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "au8522_common");


MODULE_INFO(srcversion, "9046C5BFE26DA6555A7C336");
