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
	{ 0x1759115d, "ipt_unregister_table_exit" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x901a3c84, "ipt_unregister_table_pre_exit" },
	{ 0x4c607bf1, "ipt_alloc_initial_table" },
	{ 0x383e7c0c, "ipt_register_table" },
	{ 0x37a0cba, "kfree" },
	{ 0x2efc96ff, "xt_register_template" },
	{ 0xd7ff56cc, "xt_hook_ops_alloc" },
	{ 0x360d3e24, "xt_unregister_template" },
	{ 0x48c39a62, "register_pernet_subsys" },
	{ 0x3193d7fc, "ipt_do_table" },
	{ 0x48da9274, "unregister_pernet_subsys" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "ip_tables,x_tables");


MODULE_INFO(srcversion, "5139E44BB3411A7B2242A21");
