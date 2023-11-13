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

SYMBOL_CRC(input_ff_create_memless, 0x502d2707, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x37a0cba, "kfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xade6aeef, "input_ff_create" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0x92997ed8, "_printk" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1680C80C370E4C965F66B3E");
