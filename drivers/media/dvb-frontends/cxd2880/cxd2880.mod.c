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

SYMBOL_CRC(cxd2880_attach, 0x09214521, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8733236, "intlog10" },
	{ 0x9d669763, "memcpy" },
	{ 0x8e153130, "spi_write_then_read" },
	{ 0x37a0cba, "kfree" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x92997ed8, "_printk" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x582f4d93, "spi_sync" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x5f754e5a, "memset" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f2b1d95, "intlog2" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x80748366, "spi_setup" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "dvb-core");


MODULE_INFO(srcversion, "36BE17DE5D2CEE943C51241");
