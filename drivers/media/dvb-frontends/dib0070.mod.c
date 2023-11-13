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

SYMBOL_CRC(dib0070_attach, 0xa2379b2b, "");
SYMBOL_CRC(dib0070_ctrl_agc_filter, 0x345de4cd, "");
SYMBOL_CRC(dib0070_get_rf_output, 0x71198aa5, "");
SYMBOL_CRC(dib0070_set_rf_output, 0x7e0cd63b, "");
SYMBOL_CRC(dib0070_wbd_offset, 0xeb1ecb12, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xcedc99af, "mutex_lock_interruptible" },
	{ 0xf58bc2a5, "i2c_transfer" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x92997ed8, "_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9d669763, "memcpy" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C0A805714E0C41FB78A1E27");
