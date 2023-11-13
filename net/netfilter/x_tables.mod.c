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

SYMBOL_CRC(xt_alloc_entry_offsets, 0x0d7f5fcd, "");
SYMBOL_CRC(xt_alloc_table_info, 0x977fd4bf, "");
SYMBOL_CRC(xt_check_entry_offsets, 0xd87ae60d, "");
SYMBOL_CRC(xt_check_proc_name, 0x48012e28, "");
SYMBOL_CRC(xt_check_table_hooks, 0x3bf9d084, "");
SYMBOL_CRC(xt_counters_alloc, 0xcb3e91cc, "");
SYMBOL_CRC(xt_find_jump_offset, 0xfef779fa, "");
SYMBOL_CRC(xt_find_match, 0x6ac766df, "");
SYMBOL_CRC(xt_find_table, 0x31e7cb3d, "");
SYMBOL_CRC(xt_free_table_info, 0xe204e042, "");
SYMBOL_CRC(xt_register_match, 0x781babab, "");
SYMBOL_CRC(xt_register_matches, 0xc7f9dc2e, "");
SYMBOL_CRC(xt_register_target, 0x0574d857, "");
SYMBOL_CRC(xt_register_targets, 0xeb00be0d, "");
SYMBOL_CRC(xt_unregister_match, 0x249b9a0d, "");
SYMBOL_CRC(xt_unregister_matches, 0xe8ebec4d, "");
SYMBOL_CRC(xt_unregister_target, 0xacf79f82, "");
SYMBOL_CRC(xt_unregister_targets, 0x3f949cdf, "");
SYMBOL_CRC(xt_check_match, 0xcaddf3f4, "_gpl");
SYMBOL_CRC(xt_check_target, 0xa2e27a22, "_gpl");
SYMBOL_CRC(xt_copy_counters, 0xf6abeb06, "_gpl");
SYMBOL_CRC(xt_data_to_user, 0x7bce4603, "_gpl");
SYMBOL_CRC(xt_find_revision, 0xddf68fc6, "_gpl");
SYMBOL_CRC(xt_find_table_lock, 0x15aa1151, "_gpl");
SYMBOL_CRC(xt_hook_ops_alloc, 0xd7ff56cc, "_gpl");
SYMBOL_CRC(xt_match_to_user, 0x12ae6c3e, "_gpl");
SYMBOL_CRC(xt_percpu_counter_alloc, 0x9c995c69, "_gpl");
SYMBOL_CRC(xt_percpu_counter_free, 0xbfacb837, "_gpl");
SYMBOL_CRC(xt_proto_fini, 0x002a14a6, "_gpl");
SYMBOL_CRC(xt_proto_init, 0x3a7f2f69, "_gpl");
SYMBOL_CRC(xt_recseq, 0x807d2b2c, "_gpl");
SYMBOL_CRC(xt_register_table, 0x15593a0d, "_gpl");
SYMBOL_CRC(xt_register_template, 0x2efc96ff, "_gpl");
SYMBOL_CRC(xt_replace_table, 0x1fe71c7c, "_gpl");
SYMBOL_CRC(xt_request_find_match, 0xa6928057, "_gpl");
SYMBOL_CRC(xt_request_find_table_lock, 0x25808421, "_gpl");
SYMBOL_CRC(xt_request_find_target, 0x5bf7e0fc, "_gpl");
SYMBOL_CRC(xt_table_unlock, 0xe0a6458b, "_gpl");
SYMBOL_CRC(xt_target_to_user, 0xa372ad82, "_gpl");
SYMBOL_CRC(xt_tee_enabled, 0x3f1ef70a, "_gpl");
SYMBOL_CRC(xt_unregister_table, 0x563251c8, "_gpl");
SYMBOL_CRC(xt_unregister_template, 0x360d3e24, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0x5a6d5863, "try_module_get" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x349cba85, "strchr" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0x5f754e5a, "memset" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xc8e173ed, "_find_next_bit_le" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0x1449535e, "module_put" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x9968aacb, "__audit_log_nfcfg" },
	{ 0xb44e18ea, "audit_enabled" },
	{ 0xeea0399, "strscpy" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xb4135311, "proc_create_net_data" },
	{ 0x8fe1d75c, "proc_set_user" },
	{ 0xf62cf01d, "proc_create_seq_private" },
	{ 0x16d5c4d0, "remove_proc_entry" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4418ca21, "seq_printf" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0xff1e9dd8, "seq_list_start" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x48da9274, "unregister_pernet_subsys" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xe61a6643, "__current" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x800473f, "__cond_resched" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x48c39a62, "register_pernet_subsys" },
	{ 0xf362dc7f, "arm_clear_user" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xb9acd3d9, "__put_user_2" },
	{ 0x97255bdf, "strlen" },
	{ 0xbb72d4fe, "__put_user_1" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x999e8297, "vfree" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x9d669763, "memcpy" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8C1E903E7AAF558F7B4C469");
