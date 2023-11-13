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
	{ 0x1eacf58c, "bpf_prog_destroy" },
	{ 0xd653b126, "sched_clock" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xf348ff41, "bpf_stats_enabled_key" },
	{ 0x49608959, "migrate_disable" },
	{ 0x4d7272e4, "migrate_enable" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe8ebec4d, "xt_unregister_matches" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0xebae6476, "bpf_prog_create" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "D3EE0220C3C869B56194D98");
