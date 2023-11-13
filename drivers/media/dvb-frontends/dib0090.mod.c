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

SYMBOL_CRC(dib0090_dcc_freq, 0xa1498106, "");
SYMBOL_CRC(dib0090_fw_register, 0x983a8109, "");
SYMBOL_CRC(dib0090_gain_control, 0x70e83891, "");
SYMBOL_CRC(dib0090_get_current_gain, 0xf10287f3, "");
SYMBOL_CRC(dib0090_get_tune_state, 0x6d3bc9d4, "");
SYMBOL_CRC(dib0090_get_wbd_offset, 0x1e50e916, "");
SYMBOL_CRC(dib0090_get_wbd_target, 0x6d1e7c37, "");
SYMBOL_CRC(dib0090_pwm_gain_reset, 0x6116b072, "");
SYMBOL_CRC(dib0090_register, 0xe7642a5d, "");
SYMBOL_CRC(dib0090_set_dc_servo, 0x79950027, "");
SYMBOL_CRC(dib0090_set_switch, 0x92aa2a24, "");
SYMBOL_CRC(dib0090_set_tune_state, 0x2fadca34, "");
SYMBOL_CRC(dib0090_set_vga, 0x26b53298, "");
SYMBOL_CRC(dib0090_update_rframp_7090, 0x21319081, "");
SYMBOL_CRC(dib0090_update_tuning_table_7090, 0x783bf60e, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xcedc99af, "mutex_lock_interruptible" },
	{ 0xf58bc2a5, "i2c_transfer" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x92997ed8, "_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9d669763, "memcpy" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "73F872EDF4C0D55B551DD03");
