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

SYMBOL_CRC(nf_osf_find, 0xbac2448a, "_gpl");
SYMBOL_CRC(nf_osf_fingers, 0x35eff5e0, "_gpl");
SYMBOL_CRC(nf_osf_match, 0x367f277e, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xe2445ec5, "nfnetlink_subsys_register" },
	{ 0x92997ed8, "_printk" },
	{ 0xc6cbbc89, "capable" },
	{ 0x71c90087, "memcmp" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xecefd17c, "nfnetlink_subsys_unregister" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x62741661, "skb_copy_bits" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe561c238, "nf_log_packet" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "3E11652BB9B320CCD01FB12");
