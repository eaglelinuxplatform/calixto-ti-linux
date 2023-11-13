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

SYMBOL_CRC(nf_reject_ip6_tcphdr_get, 0x5bf81e20, "_gpl");
SYMBOL_CRC(nf_reject_ip6_tcphdr_put, 0xa95414f7, "_gpl");
SYMBOL_CRC(nf_reject_ip6hdr_put, 0xa623fc43, "_gpl");
SYMBOL_CRC(nf_reject_skb_v6_tcp_reset, 0x55895bb5, "_gpl");
SYMBOL_CRC(nf_reject_skb_v6_unreach, 0xa8288e3c, "_gpl");
SYMBOL_CRC(nf_send_reset6, 0x845c3191, "_gpl");
SYMBOL_CRC(nf_send_unreach6, 0xa4660c27, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xfa941bb7, "skb_put" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xe558ba1f, "ipv6_skip_exthdr" },
	{ 0xa627be55, "nf_ip6_checksum" },
	{ 0x62741661, "skb_copy_bits" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x44da5d0f, "__csum_ipv6_magic" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x5f754e5a, "memset" },
	{ 0x50c81f5a, "ip6_route_output_flags" },
	{ 0x4712670c, "xfrm_lookup" },
	{ 0x9aac8012, "__alloc_skb" },
	{ 0x8064629f, "ip6_dst_hoplimit" },
	{ 0xe26c314c, "nf_ct_attach" },
	{ 0x79b21b27, "ip6_local_out" },
	{ 0x53036ac9, "dst_release" },
	{ 0xa317ff37, "__nf_ip6_route" },
	{ 0x9f24529f, "__pskb_pull_tail" },
	{ 0x9d669763, "memcpy" },
	{ 0x2837f725, "pskb_trim_rcsum_slow" },
	{ 0x89241110, "icmp6_send" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "ADAAB47DF1FFC2B710F664D");
