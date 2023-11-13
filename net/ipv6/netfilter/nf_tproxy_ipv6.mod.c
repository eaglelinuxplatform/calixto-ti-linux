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

SYMBOL_CRC(nf_tproxy_get_sock_v6, 0xe6efd823, "_gpl");
SYMBOL_CRC(nf_tproxy_handle_time_wait6, 0x4f7d5ab5, "_gpl");
SYMBOL_CRC(nf_tproxy_laddr6, 0x137239ab, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb6f859f4, "_raw_read_lock_bh" },
	{ 0xfbea611e, "_raw_read_unlock_bh" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x7a31d935, "__inet6_lookup_established" },
	{ 0x8542b70f, "udp6_lib_lookup" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xab6923f, "inet6_lookup_listener" },
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


MODULE_INFO(srcversion, "EFBE83AB24F234B2D85BF98");
