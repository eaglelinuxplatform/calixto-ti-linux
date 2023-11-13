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
	{ 0xe914e41e, "strcpy" },
	{ 0xa8a2251f, "clear_nlink" },
	{ 0xe96ccc17, "misc_deregister" },
	{ 0xc49220dc, "clear_inode" },
	{ 0x4e4319a0, "follow_down_one" },
	{ 0xf166fe08, "new_inode" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8bae9c5a, "unregister_filesystem" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x8b618d08, "overflowuid" },
	{ 0x49970de8, "finish_wait" },
	{ 0xf50b3064, "simple_statfs" },
	{ 0x7f639c7f, "__kernel_write" },
	{ 0xfb90feeb, "d_make_root" },
	{ 0x54cd9e03, "fget" },
	{ 0x37d2adfd, "fd_install" },
	{ 0xde22425, "current_time" },
	{ 0x9d669763, "memcpy" },
	{ 0x3acd09a2, "follow_up" },
	{ 0xbd2f0ee9, "generic_permission" },
	{ 0x37a0cba, "kfree" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x16242477, "dcache_dir_close" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0xbd19a8a0, "dcache_dir_open" },
	{ 0x4247978, "find_get_pid" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xe7b03693, "d_lookup" },
	{ 0x637493f3, "__wake_up" },
	{ 0x91f80cd, "register_filesystem" },
	{ 0x44ed9a58, "dcache_readdir" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xd131a0a9, "path_put" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0xd77a0cee, "may_umount_tree" },
	{ 0x2d834497, "d_drop" },
	{ 0x92997ed8, "_printk" },
	{ 0xfb6af58d, "recalc_sigpending" },
	{ 0x1000e51, "schedule" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x7171121c, "overflowgid" },
	{ 0xe61a6643, "__current" },
	{ 0xc6cbbc89, "capable" },
	{ 0xc0693e96, "path_has_submounts" },
	{ 0xdc2afdda, "__task_pid_nr_ns" },
	{ 0xb6fde909, "close_fd" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8b1e52b6, "fput" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x4e3567f7, "match_int" },
	{ 0xdd27fa87, "memchr" },
	{ 0x7185414b, "dentry_path_raw" },
	{ 0xec40dc18, "noop_llseek" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x2925b37c, "set_nlink" },
	{ 0x71c90087, "memcmp" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xcedc99af, "mutex_lock_interruptible" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x9f667ed, "kill_litter_super" },
	{ 0x5f754e5a, "memset" },
	{ 0x2cda7ff2, "kern_path" },
	{ 0x5253049c, "misc_register" },
	{ 0x17eebcc7, "dcache_dir_lseek" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xcb510bc2, "complete_all" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc603393e, "may_umount" },
	{ 0x3d10118f, "path_get" },
	{ 0x6656c2fb, "mount_nodev" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x3e4f4d4, "generic_read_dir" },
	{ 0x17e86783, "d_add" },
	{ 0x85df9b6c, "strsep" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0x7288b0e5, "dentry_open" },
	{ 0xa5d185da, "inc_nlink" },
	{ 0x44e9a829, "match_token" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x4418ca21, "seq_printf" },
	{ 0xde796cd0, "dput" },
	{ 0xd32d6c08, "lockref_get" },
	{ 0x46372883, "seq_puts" },
	{ 0x95a8ce2d, "pid_vnr" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x50ffccc, "path_is_mountpoint" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x97255bdf, "strlen" },
	{ 0x11ea9fd3, "get_task_pid" },
	{ 0x349cba85, "strchr" },
	{ 0x6390d26a, "put_pid" },
	{ 0x2b2c3f32, "drop_nlink" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3FE4275A208670734FFEBF0");
