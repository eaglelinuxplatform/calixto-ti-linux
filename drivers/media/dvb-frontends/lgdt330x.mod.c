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
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(lgdt330x_attach, 0x751d9ee4, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5f754e5a, "memset" },
	{ 0xeea0399, "strscpy" },
	{ 0xa319e2db, "i2c_new_client_device" },
	{ 0x1212c326, "i2c_register_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0x2f4a0dbf, "i2c_transfer_buffer_flags" },
	{ 0x52842d82, "_dev_warn" },
	{ 0xd37e9c2, "_dev_printk" },
	{ 0x62c6484b, "i2c_unregister_device" },
	{ 0xf58bc2a5, "i2c_transfer" },
	{ 0x6196a6ec, "i2c_del_driver" },
	{ 0x8733236, "intlog10" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x9d669763, "memcpy" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "dvb-core");

MODULE_ALIAS("i2c:lgdt330x");

MODULE_INFO(srcversion, "061457E1C2FE79E25BF9AF0");
