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
	{ 0x7115c55, "nf_ct_netns_get" },
	{ 0x241a85a1, "nf_nat_redirect_ipv4" },
	{ 0xbfb6975, "nf_ct_netns_put" },
	{ 0x29d04f72, "nf_nat_redirect_ipv6" },
	{ 0x3f949cdf, "xt_unregister_targets" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "x_tables,nf_conntrack,nf_nat");


MODULE_INFO(srcversion, "B6B069F4F0E1CE07496143C");
