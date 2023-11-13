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

SYMBOL_CRC(ipt_do_table, 0x3193d7fc, "");
SYMBOL_CRC(ipt_register_table, 0x383e7c0c, "");
SYMBOL_CRC(ipt_unregister_table_exit, 0x1759115d, "");
SYMBOL_CRC(ipt_unregister_table_pre_exit, 0x901a3c84, "");
SYMBOL_CRC(ipt_alloc_initial_table, 0x4c607bf1, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x31e7cb3d, "xt_find_table" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x12f85125, "nf_unregister_net_hooks" },
	{ 0x48c39a62, "register_pernet_subsys" },
	{ 0xeb00be0d, "xt_register_targets" },
	{ 0xc7f9dc2e, "xt_register_matches" },
	{ 0x258f5a9c, "nf_register_sockopt" },
	{ 0xe8ebec4d, "xt_unregister_matches" },
	{ 0x3f949cdf, "xt_unregister_targets" },
	{ 0x48da9274, "unregister_pernet_subsys" },
	{ 0x2a14a6, "xt_proto_fini" },
	{ 0x3a7f2f69, "xt_proto_init" },
	{ 0x7ec7fdc6, "nf_unregister_sockopt" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0x62741661, "skb_copy_bits" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x328a05f1, "strncpy" },
	{ 0x5f754e5a, "memset" },
	{ 0x1449535e, "module_put" },
	{ 0xbfacb837, "xt_percpu_counter_free" },
	{ 0x563251c8, "xt_unregister_table" },
	{ 0xe204e042, "xt_free_table_info" },
	{ 0xd7f5fcd, "xt_alloc_entry_offsets" },
	{ 0xd87ae60d, "xt_check_entry_offsets" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x71c90087, "memcmp" },
	{ 0x3bf9d084, "xt_check_table_hooks" },
	{ 0x9c995c69, "xt_percpu_counter_alloc" },
	{ 0xa6928057, "xt_request_find_match" },
	{ 0xcaddf3f4, "xt_check_match" },
	{ 0x5bf7e0fc, "xt_request_find_target" },
	{ 0xa2e27a22, "xt_check_target" },
	{ 0xfef779fa, "xt_find_jump_offset" },
	{ 0x977fd4bf, "xt_alloc_table_info" },
	{ 0x9d669763, "memcpy" },
	{ 0x15593a0d, "xt_register_table" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xbd35b754, "nf_register_net_hooks" },
	{ 0xe61a6643, "__current" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x25808421, "xt_request_find_table_lock" },
	{ 0xe914e41e, "strcpy" },
	{ 0xe0a6458b, "xt_table_unlock" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0xd932a814, "ns_capable" },
	{ 0x15aa1151, "xt_find_table_lock" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xc8e173ed, "_find_next_bit_le" },
	{ 0x800473f, "__cond_resched" },
	{ 0xddf68fc6, "xt_find_revision" },
	{ 0x12ae6c3e, "xt_match_to_user" },
	{ 0x999e8297, "vfree" },
	{ 0xa372ad82, "xt_target_to_user" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x807d2b2c, "xt_recseq" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xcb3e91cc, "xt_counters_alloc" },
	{ 0x1fe71c7c, "xt_replace_table" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xf6abeb06, "xt_copy_counters" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x22d82fcd, "nf_log_trace" },
	{ 0x3f1ef70a, "xt_tee_enabled" },
	{ 0x70c52dc5, "nf_skb_duplicated" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "D19D680E3FD3C6675649349");
