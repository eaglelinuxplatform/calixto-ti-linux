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
	{ 0x2efc96ff, "xt_register_template" },
	{ 0x48c39a62, "register_pernet_subsys" },
	{ 0x360d3e24, "xt_unregister_template" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xafc03235, "ip6t_unregister_table_exit" },
	{ 0x3617d405, "nf_nat_ipv6_unregister_fn" },
	{ 0x37a0cba, "kfree" },
	{ 0x89a21084, "ip6t_alloc_initial_table" },
	{ 0xfd8b967c, "ip6t_register_table" },
	{ 0x31e7cb3d, "xt_find_table" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x8081cef2, "nf_nat_ipv6_register_fn" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x48da9274, "unregister_pernet_subsys" },
	{ 0x2e5ab50e, "ip6t_do_table" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "x_tables,ip6_tables,nf_nat");


MODULE_INFO(srcversion, "CB3A6F4FFFB8C8633CFDEC9");
