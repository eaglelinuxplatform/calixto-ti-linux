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

SYMBOL_CRC(dib9000_attach, 0x49217cab, "");
SYMBOL_CRC(dib9000_firmware_post_pll_init, 0x30ebe00b, "");
SYMBOL_CRC(dib9000_fw_pid_filter, 0xd6895995, "");
SYMBOL_CRC(dib9000_fw_pid_filter_ctrl, 0x98c3a27b, "");
SYMBOL_CRC(dib9000_fw_set_component_bus_speed, 0xf2fb5e6a, "");
SYMBOL_CRC(dib9000_get_component_bus_interface, 0xe1572683, "");
SYMBOL_CRC(dib9000_get_i2c_master, 0x8f36828b, "");
SYMBOL_CRC(dib9000_get_slave_frontend, 0x7d50b582, "");
SYMBOL_CRC(dib9000_get_tuner_interface, 0xfd87bef3, "");
SYMBOL_CRC(dib9000_i2c_enumeration, 0x68e5f3d5, "");
SYMBOL_CRC(dib9000_set_gpio, 0x4d62b361, "");
SYMBOL_CRC(dib9000_set_i2c_adapter, 0x901545b5, "");
SYMBOL_CRC(dib9000_set_slave_frontend, 0xf235985b, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x86af5c2f, "dibx000_get_i2c_adapter" },
	{ 0xf58bc2a5, "i2c_transfer" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x831d77ca, "dvb_frontend_detach" },
	{ 0x2fb5059f, "dibx000_exit_i2c_master" },
	{ 0xefbe44be, "i2c_del_adapter" },
	{ 0x37a0cba, "kfree" },
	{ 0xcedc99af, "mutex_lock_interruptible" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x9d669763, "memcpy" },
	{ 0xf9a482f9, "msleep" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x8733236, "intlog10" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x8e5d709d, "dibx000_init_i2c_master" },
	{ 0xeea0399, "strscpy" },
	{ 0xe2ba9bdc, "i2c_add_adapter" },
	{ 0xe3f1c39c, "dibx000_reset_i2c_master" },
	{ 0x5f754e5a, "memset" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "dibx000_common,dvb-core");


MODULE_INFO(srcversion, "A813E709146BE9AC3A71607");
