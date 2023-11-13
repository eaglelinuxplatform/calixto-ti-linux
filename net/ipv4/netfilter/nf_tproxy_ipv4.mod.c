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

SYMBOL_CRC(nf_tproxy_get_sock_v4, 0x7dc4e0bd, "_gpl");
SYMBOL_CRC(nf_tproxy_handle_time_wait4, 0x669a7a53, "_gpl");
SYMBOL_CRC(nf_tproxy_laddr4, 0x6b5a1209, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x6cf094c8, "__inet_lookup_established" },
	{ 0xd55e1e5, "udp4_lib_lookup" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc4a87035, "__inet_lookup_listener" },
	{ 0x5625faaa, "sk_free" },
	{ 0x62741661, "skb_copy_bits" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe61a6643, "__current" },
	{ 0x76daf4b8, "inet_twsk_deschedule_put" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x47059f23, "inet_twsk_put" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5E66A76241BAC598D0FF1F6");
