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
	{ 0xc7f9dc2e, "xt_register_matches" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x1f8529bb, "nf_sk_lookup_slow_v6" },
	{ 0xd6c27114, "sock_gen_put" },
	{ 0x86f9b8a, "nf_defrag_ipv6_disable" },
	{ 0x36cbf366, "nf_defrag_ipv4_disable" },
	{ 0x98e288d2, "nf_sk_lookup_slow_v4" },
	{ 0xe8ebec4d, "xt_unregister_matches" },
	{ 0xb2692191, "nf_defrag_ipv4_enable" },
	{ 0xefe7da83, "nf_defrag_ipv6_enable" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "x_tables,nf_socket_ipv6,nf_defrag_ipv6,nf_defrag_ipv4,nf_socket_ipv4");


MODULE_INFO(srcversion, "8ECA7B6806D25C33F35B781");
