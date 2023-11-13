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

SYMBOL_CRC(dib7000m_attach, 0x509a5074, "");
SYMBOL_CRC(dib7000m_get_i2c_master, 0x7691632c, "");
SYMBOL_CRC(dib7000m_pid_filter, 0x8d925d30, "");
SYMBOL_CRC(dib7000m_pid_filter_ctrl, 0x2902bd36, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x86af5c2f, "dibx000_get_i2c_adapter" },
	{ 0xcedc99af, "mutex_lock_interruptible" },
	{ 0xf58bc2a5, "i2c_transfer" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x92997ed8, "_printk" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9d669763, "memcpy" },
	{ 0x2fb5059f, "dibx000_exit_i2c_master" },
	{ 0x37a0cba, "kfree" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x8e5d709d, "dibx000_init_i2c_master" },
	{ 0xf9a482f9, "msleep" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "dibx000_common");


MODULE_INFO(srcversion, "D90A23CFE1F9E24D3DD810A");
