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

SYMBOL_CRC(cn_add_callback, 0xd2604ae2, "_gpl");
SYMBOL_CRC(cn_del_callback, 0x07483e13, "_gpl");
SYMBOL_CRC(cn_netlink_send, 0xe8bc40c5, "_gpl");
SYMBOL_CRC(cn_netlink_send_mult, 0x182e2f09, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xeeb484f5, "__nlmsg_put" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x1d6f2aaf, "__netlink_kernel_create" },
	{ 0x92997ed8, "_printk" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x4733c600, "netlink_broadcast" },
	{ 0x9aac8012, "__alloc_skb" },
	{ 0x45312867, "init_net" },
	{ 0x32714601, "netlink_unicast" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0xd962467d, "netlink_kernel_release" },
	{ 0x16d5c4d0, "remove_proc_entry" },
	{ 0x4418ca21, "seq_printf" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0xa16ea0f1, "proc_create_single_data" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x9dfda314, "netlink_has_listeners" },
	{ 0xf9a482f9, "msleep" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FFD618076D2330B13DEAAB0");
