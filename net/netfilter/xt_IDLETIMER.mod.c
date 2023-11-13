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
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xcdee1bd3, "sysfs_remove_file_ns" },
	{ 0x37a0cba, "kfree" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xebeb24a2, "alarm_cancel" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x86e7a634, "alarm_start_relative" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc675b096, "sysfs_notify" },
	{ 0x1697d536, "__class_create" },
	{ 0xf66696c7, "device_create" },
	{ 0xeb00be0d, "xt_register_targets" },
	{ 0x4d7965c8, "device_destroy" },
	{ 0xca3ce6df, "class_destroy" },
	{ 0x3f949cdf, "xt_unregister_targets" },
	{ 0x48012e28, "xt_check_proc_name" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0xe23cd479, "alarm_expires_remaining" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xc3f488e5, "sysfs_create_file_ns" },
	{ 0x1504b38c, "kobject_uevent" },
	{ 0x85647219, "alarm_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "0AF014AF65D5634652F6BE6");
