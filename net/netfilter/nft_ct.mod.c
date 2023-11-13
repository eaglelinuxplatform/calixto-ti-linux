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
	{ 0xe89e829d, "nft_register_expr" },
	{ 0xf232a435, "nft_register_obj" },
	{ 0x29c0617c, "nft_unregister_obj" },
	{ 0x7e28b9d7, "nft_unregister_expr" },
	{ 0x714b06aa, "nla_put" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xbfb6975, "nf_ct_netns_put" },
	{ 0xda95a486, "nf_ct_untimeout" },
	{ 0x37a0cba, "kfree" },
	{ 0x7115c55, "nf_ct_netns_get" },
	{ 0x843eeaf0, "nf_conntrack_helper_put" },
	{ 0x45bd19de, "nla_strscpy" },
	{ 0x5ba156cd, "nf_conntrack_helper_try_module_get" },
	{ 0x3247a5d2, "__nft_reg_track_cancel" },
	{ 0xfc80c5a3, "nft_dump_register" },
	{ 0x283e727a, "nft_reg_track_update" },
	{ 0x6076d899, "nft_expr_reduce_bitwise" },
	{ 0x692bdd0a, "nft_parse_register_store" },
	{ 0xcbead8c5, "generic_atomic64_read" },
	{ 0x97255bdf, "strlen" },
	{ 0xb7f876f3, "nf_ct_l4proto_find" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x581e2394, "__nla_parse" },
	{ 0xc8e173ed, "_find_next_bit_le" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xcbdfe454, "nf_ct_tmpl_alloc" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x3697551f, "nf_connlabels_put" },
	{ 0xe2b8cc13, "nft_parse_register_load" },
	{ 0xd61aa53b, "nf_connlabels_get" },
	{ 0x45312867, "init_net" },
	{ 0x808e5358, "nf_ct_helper_ext_add" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x653127e3, "nf_ct_expect_alloc" },
	{ 0x84ac4eb0, "nf_ct_expect_init" },
	{ 0x41befd5d, "nf_ct_expect_related_report" },
	{ 0x4df34c83, "__nf_ct_ext_find" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x8b8c18a0, "__nf_ct_refresh_acct" },
	{ 0xea04305f, "nf_ct_ext_add" },
	{ 0x36362e8d, "nf_connlabels_replace" },
	{ 0xc8f97856, "nf_ct_ecache_ext_add" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x60bffe6d, "div64_u64" },
	{ 0x328a05f1, "strncpy" },
	{ 0xd71dab28, "nf_ct_get_id" },
	{ 0x9d669763, "memcpy" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "nf_tables,nf_conntrack");


MODULE_INFO(srcversion, "11C7A0CF6FC3466B467834A");
