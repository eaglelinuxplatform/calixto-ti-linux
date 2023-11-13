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

SYMBOL_CRC(nf_reject_ip_tcphdr_get, 0x0c84de1a, "_gpl");
SYMBOL_CRC(nf_reject_ip_tcphdr_put, 0x22401f4f, "_gpl");
SYMBOL_CRC(nf_reject_iphdr_put, 0xe1a28f51, "_gpl");
SYMBOL_CRC(nf_reject_skb_v4_tcp_reset, 0x62018bb3, "_gpl");
SYMBOL_CRC(nf_reject_skb_v4_unreach, 0xcefe3cb4, "_gpl");
SYMBOL_CRC(nf_send_reset, 0xd90cd2c8, "_gpl");
SYMBOL_CRC(nf_send_unreach, 0xc1cbf146, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xfa941bb7, "skb_put" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x5f754e5a, "memset" },
	{ 0xc17c16b6, "nf_ip_route" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9f24529f, "__pskb_pull_tail" },
	{ 0x2488d0e0, "nf_ip_checksum" },
	{ 0x62741661, "skb_copy_bits" },
	{ 0x9aac8012, "__alloc_skb" },
	{ 0xf14d0631, "ip_route_me_harder" },
	{ 0xe26c314c, "nf_ct_attach" },
	{ 0xcc5290ad, "ip_local_out" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0x5089f45f, "ip_send_check" },
	{ 0x9d669763, "memcpy" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x2837f725, "pskb_trim_rcsum_slow" },
	{ 0xe4138d66, "__icmp_send" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1F5C43C164D56D502C9BFB0");
