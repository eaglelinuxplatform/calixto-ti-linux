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
	{ 0x8465fb8f, "nft_register_chain_type" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xd4120a83, "nf_nat_inet_unregister_fn" },
	{ 0x99e11b02, "nf_nat_inet_register_fn" },
	{ 0xa935396c, "ipv6_find_hdr" },
	{ 0x81a4f180, "nft_do_chain" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x63093599, "nft_unregister_chain_type" },
	{ 0x8081cef2, "nf_nat_ipv6_register_fn" },
	{ 0x3617d405, "nf_nat_ipv6_unregister_fn" },
	{ 0x468cc5bc, "nf_nat_ipv4_register_fn" },
	{ 0xcf3fa90b, "nf_nat_ipv4_unregister_fn" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,nf_nat");


MODULE_INFO(srcversion, "355DF73E2976056E9EE21A7");
