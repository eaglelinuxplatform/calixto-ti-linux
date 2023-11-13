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
	{ 0xafc03235, "ip6t_unregister_table_exit" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x1b91dae, "ip6t_unregister_table_pre_exit" },
	{ 0x89a21084, "ip6t_alloc_initial_table" },
	{ 0xfd8b967c, "ip6t_register_table" },
	{ 0x37a0cba, "kfree" },
	{ 0x2efc96ff, "xt_register_template" },
	{ 0xd7ff56cc, "xt_hook_ops_alloc" },
	{ 0x360d3e24, "xt_unregister_template" },
	{ 0x48c39a62, "register_pernet_subsys" },
	{ 0x48da9274, "unregister_pernet_subsys" },
	{ 0x2e5ab50e, "ip6t_do_table" },
	{ 0xf5cd2774, "ip6_route_me_harder" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "ip6_tables,x_tables");


MODULE_INFO(srcversion, "4A79DCF6A622901A961CA83");
