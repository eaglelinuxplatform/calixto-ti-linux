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

SYMBOL_CRC(udp_sock_create6, 0xd2b32a14, "_gpl");
SYMBOL_CRC(udp_tunnel6_xmit_skb, 0xfb58be7b, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x1822724b, "sock_create_kern" },
	{ 0xdb5664d4, "sock_bindtoindex" },
	{ 0x12f3164, "kernel_bind" },
	{ 0xdca6f069, "kernel_connect" },
	{ 0xd27e0c1, "kernel_sock_shutdown" },
	{ 0xf1cc1ee5, "sock_release" },
	{ 0xb020a468, "lock_sock_nested" },
	{ 0x7b629328, "release_sock" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x25aa968f, "udp6_set_csum" },
	{ 0x79b21b27, "ip6_local_out" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9F50A9632EDFF8B1C88BAE3");
