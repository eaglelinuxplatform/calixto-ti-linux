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
	{ 0xb5ddb77b, "tcf_register_action" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xb4e3dcbe, "tcf_idrinfo_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x1b9b1d3c, "tcf_action_update_stats" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xb1d3d2c5, "tcf_unregister_action" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x581e2394, "__nla_parse" },
	{ 0x3ce4bcad, "tcf_idr_check_alloc" },
	{ 0xda99aeff, "tcf_action_check_ctrlact" },
	{ 0xc21fb4df, "gen_replace_estimator" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xb6e36ce2, "psched_ratecfg_precompute" },
	{ 0xa61ced89, "qdisc_put_rtab" },
	{ 0xa05b6be2, "psched_ppscfg_precompute" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x4221a18f, "tcf_action_set_ctrlact" },
	{ 0xbf35c21a, "tcf_chain_put_by_act" },
	{ 0x8fa977c3, "tcf_idr_release" },
	{ 0xd9a71267, "qdisc_get_rtab" },
	{ 0x74b5146, "tcf_idr_create" },
	{ 0xa28cfcc0, "gen_estimator_active" },
	{ 0x10d6e458, "tcf_idr_cleanup" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5f754e5a, "memset" },
	{ 0x714b06aa, "nla_put" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0xbfaa04fe, "nla_put_64bit" },
	{ 0xabc58048, "skb_trim" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x4df2ea84, "gen_estimator_read" },
	{ 0x89ea9889, "skb_gso_validate_mac_len" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "960E14B3F378FAF24AABFF4");
