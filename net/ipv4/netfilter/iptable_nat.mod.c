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
	{ 0x1759115d, "ipt_unregister_table_exit" },
	{ 0xcf3fa90b, "nf_nat_ipv4_unregister_fn" },
	{ 0x37a0cba, "kfree" },
	{ 0x4c607bf1, "ipt_alloc_initial_table" },
	{ 0x383e7c0c, "ipt_register_table" },
	{ 0x31e7cb3d, "xt_find_table" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x468cc5bc, "nf_nat_ipv4_register_fn" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x48da9274, "unregister_pernet_subsys" },
	{ 0x3193d7fc, "ipt_do_table" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "x_tables,ip_tables,nf_nat");


MODULE_INFO(srcversion, "A96B007447F3E782024E28F");
