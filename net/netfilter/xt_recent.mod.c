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
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xc2b8d7b2, "__seq_open_private" },
	{ 0x4418ca21, "seq_printf" },
	{ 0x70059627, "seq_putc" },
	{ 0x16d5c4d0, "remove_proc_entry" },
	{ 0xed1fe1a1, "proc_mkdir" },
	{ 0x48c39a62, "register_pernet_subsys" },
	{ 0xc7f9dc2e, "xt_register_matches" },
	{ 0x48da9274, "unregister_pernet_subsys" },
	{ 0xe8ebec4d, "xt_unregister_matches" },
	{ 0x37a0cba, "kfree" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x48012e28, "xt_check_proc_name" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0xe914e41e, "strcpy" },
	{ 0x59451080, "proc_create_data" },
	{ 0x8fe1d75c, "proc_set_user" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x4e70f340, "__do_once_done" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9d669763, "memcpy" },
	{ 0x71c90087, "memcmp" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe61a6643, "__current" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xa3131f6, "strnchr" },
	{ 0x609bcd98, "in6_pton" },
	{ 0xac5fcec0, "in4_pton" },
	{ 0xb825d8f6, "seq_read" },
	{ 0x74d4d69, "seq_lseek" },
	{ 0xbc4c1d78, "seq_release_private" },
	{ 0x9098ac8b, "param_ops_uint" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "7B5E4592A1EACD55A00FB6C");
