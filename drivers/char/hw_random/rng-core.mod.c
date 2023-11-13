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

SYMBOL_CRC(devm_hwrng_register, 0x1aa9df9a, "_gpl");
SYMBOL_CRC(devm_hwrng_unregister, 0x1229f686, "_gpl");
SYMBOL_CRC(hwrng_msleep, 0xf6a6fb76, "_gpl");
SYMBOL_CRC(hwrng_register, 0xe2d52f30, "_gpl");
SYMBOL_CRC(hwrng_unregister, 0x0713645c, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe96ccc17, "misc_deregister" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf3de4e03, "param_ops_ushort" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xc37335b0, "complete" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x37a0cba, "kfree" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x1f051c7b, "devres_add" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xe4296f92, "wake_up_process" },
	{ 0x9135dba6, "wait_for_completion_interruptible_timeout" },
	{ 0x945eb81c, "add_device_randomness" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x92997ed8, "_printk" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xa54cea3b, "devres_release" },
	{ 0xe61a6643, "__current" },
	{ 0xec40dc18, "noop_llseek" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xc9357994, "__devres_alloc_node" },
	{ 0xb5fdc18f, "mutex_is_locked" },
	{ 0xa0edc8bc, "kthread_stop" },
	{ 0xcedc99af, "mutex_lock_interruptible" },
	{ 0x5253049c, "misc_register" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0xcb510bc2, "complete_all" },
	{ 0xe9547016, "add_hwgenerator_randomness" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xf1908dde, "kthread_create_on_node" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x97255bdf, "strlen" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "37892308A652A5C3C7285BA");
