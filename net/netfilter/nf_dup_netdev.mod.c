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

SYMBOL_CRC(nf_dup_netdev_egress, 0xd329a8c7, "_gpl");
SYMBOL_CRC(nf_fwd_netdev_egress, 0xdd4b2942, "_gpl");
SYMBOL_CRC(nft_fwd_dup_netdev_offload, 0xdd69bc72, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x407d4405, "__dev_queue_xmit" },
	{ 0x8727083f, "pskb_expand_head" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0x8b1e3dd1, "skb_push" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xe18177bd, "dev_get_by_index_rcu" },
	{ 0x9cc51289, "skb_clone" },
	{ 0xb2942dad, "dev_get_by_index" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F59154AE8C5199DA992F066");
