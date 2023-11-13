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

SYMBOL_CRC(i2c_bit_add_bus, 0x67fe474f, "");
SYMBOL_CRC(i2c_bit_add_numbered_bus, 0x6158dd8b, "");
SYMBOL_CRC(i2c_bit_algo, 0x9f684f66, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x92997ed8, "_printk" },
	{ 0xfad94b4a, "i2c_add_numbered_adapter" },
	{ 0x52842d82, "_dev_warn" },
	{ 0xe2ba9bdc, "i2c_add_adapter" },
	{ 0x760a0f4f, "yield" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6832E8A2ABAAE53858F0E30");
