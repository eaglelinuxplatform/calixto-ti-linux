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

SYMBOL_CRC(nf_defrag_ipv6_disable, 0x086f9b8a, "_gpl");
SYMBOL_CRC(nf_defrag_ipv6_enable, 0xefe7da83, "_gpl");
SYMBOL_CRC(nf_ct_frag6_gather, 0x3ca96554, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x89241110, "icmp6_send" },
	{ 0x62741661, "skb_copy_bits" },
	{ 0x61c76b3a, "proc_dointvec_jiffies" },
	{ 0x5e068c61, "register_net_sysctl" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x99bb8806, "memmove" },
	{ 0xe38967ff, "inet_frag_queue_insert" },
	{ 0x9a8dcfa6, "inet_frags_init" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x6886917f, "inet_frag_pull_head" },
	{ 0x37a0cba, "kfree" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x48c39a62, "register_pernet_subsys" },
	{ 0x92997ed8, "_printk" },
	{ 0xc7229ba2, "inet_frag_destroy" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xe558ba1f, "ipv6_skip_exthdr" },
	{ 0xe005e38e, "inet_frag_reasm_finish" },
	{ 0xbd35b754, "nf_register_net_hooks" },
	{ 0xe61a6643, "__current" },
	{ 0xe9b57309, "fqdir_init" },
	{ 0x45312867, "init_net" },
	{ 0xe18177bd, "dev_get_by_index_rcu" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x4384b767, "inet_frags_fini" },
	{ 0x2f50cbf5, "proc_doulongvec_minmax" },
	{ 0x452ba683, "ipv6_ext_hdr" },
	{ 0x12f85125, "nf_unregister_net_hooks" },
	{ 0x71c90087, "memcmp" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x48da9274, "unregister_pernet_subsys" },
	{ 0x9f24529f, "__pskb_pull_tail" },
	{ 0xe0ee12b2, "inet_frag_reasm_prepare" },
	{ 0x2998336a, "inet_frag_find" },
	{ 0x50f6c04, "fqdir_exit" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x53036ac9, "dst_release" },
	{ 0xa8f6c843, "ip_frag_ecn_table" },
	{ 0x91637e86, "unregister_net_sysctl_table" },
	{ 0x2837f725, "pskb_trim_rcsum_slow" },
	{ 0x22c28c6d, "inet_frag_kill" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2789A9089E5AA9488398EA4");
