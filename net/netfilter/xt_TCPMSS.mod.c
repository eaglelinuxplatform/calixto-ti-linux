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


static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xeb00be0d, "xt_register_targets" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xe5d81b84, "skb_ensure_writable" },
	{ 0x6d0b40c7, "inet_proto_csum_replace4" },
	{ 0x8727083f, "pskb_expand_head" },
	{ 0xfa941bb7, "skb_put" },
	{ 0x99bb8806, "memmove" },
	{ 0x5f754e5a, "memset" },
	{ 0x4bb20611, "nf_route" },
	{ 0x53036ac9, "dst_release" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe558ba1f, "ipv6_skip_exthdr" },
	{ 0x3f949cdf, "xt_unregister_targets" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "50681C6649058C7B3410F5A");
