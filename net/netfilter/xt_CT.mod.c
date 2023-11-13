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
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x574d857, "xt_register_target" },
	{ 0xeb00be0d, "xt_register_targets" },
	{ 0xacf79f82, "xt_unregister_target" },
	{ 0x3f949cdf, "xt_unregister_targets" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x843eeaf0, "nf_conntrack_helper_put" },
	{ 0xbfb6975, "nf_ct_netns_put" },
	{ 0xd505d075, "nf_ct_destroy_timeout" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0x4df34c83, "__nf_ct_ext_find" },
	{ 0x5f754e5a, "memset" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7115c55, "nf_ct_netns_get" },
	{ 0xcbdfe454, "nf_ct_tmpl_alloc" },
	{ 0xc8f97856, "nf_ct_ecache_ext_add" },
	{ 0xe929b214, "nf_ct_tmpl_free" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x5ba156cd, "nf_conntrack_helper_try_module_get" },
	{ 0x808e5358, "nf_ct_helper_ext_add" },
	{ 0xb7f876f3, "nf_ct_l4proto_find" },
	{ 0x5a74d631, "nf_ct_set_timeout" },
	{ 0x92997ed8, "_printk" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "x_tables,nf_conntrack");


MODULE_INFO(srcversion, "829DC803D886ED7D88D5F35");
