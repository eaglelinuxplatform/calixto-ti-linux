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

SYMBOL_CRC(nf_dup_ipv4, 0x9d9f08a2, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xdaa3bc85, "__pskb_copy_fclone" },
	{ 0x5f754e5a, "memset" },
	{ 0xa0dfa64f, "ip_route_output_flow" },
	{ 0xcc5290ad, "ip_local_out" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0x53036ac9, "dst_release" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x70c52dc5, "nf_skb_duplicated" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D349050B58ADAABC15B08A7");
