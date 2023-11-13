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

SYMBOL_CRC(dibx000_exit_i2c_master, 0x2fb5059f, "");
SYMBOL_CRC(dibx000_get_i2c_adapter, 0x86af5c2f, "");
SYMBOL_CRC(dibx000_i2c_set_speed, 0xc6ad16d3, "");
SYMBOL_CRC(dibx000_init_i2c_master, 0x8e5d709d, "");
SYMBOL_CRC(dibx000_reset_i2c_master, 0xe3f1c39c, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x92997ed8, "_printk" },
	{ 0xcedc99af, "mutex_lock_interruptible" },
	{ 0xf58bc2a5, "i2c_transfer" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xefbe44be, "i2c_del_adapter" },
	{ 0x5f754e5a, "memset" },
	{ 0x9d669763, "memcpy" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xeea0399, "strscpy" },
	{ 0xe2ba9bdc, "i2c_add_adapter" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6DD11745A53310101937BB2");
