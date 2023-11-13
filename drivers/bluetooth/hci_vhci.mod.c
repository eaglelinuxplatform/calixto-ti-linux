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
	{ 0x5253049c, "misc_register" },
	{ 0x2919dce9, "skb_queue_purge" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x92b57248, "flush_work" },
	{ 0x3b439a1c, "hci_unregister_dev" },
	{ 0x8730615d, "hci_free_dev" },
	{ 0x37a0cba, "kfree" },
	{ 0xf8c85ed5, "hci_suspend_dev" },
	{ 0x8caf1c77, "hci_resume_dev" },
	{ 0xd45ddb66, "kstrtobool_from_user" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8b1e3dd1, "skb_push" },
	{ 0xb8e280d8, "skb_queue_tail" },
	{ 0x637493f3, "__wake_up" },
	{ 0xe96ccc17, "misc_deregister" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf57fd9b2, "nonseekable_open" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x735faf6b, "skb_dequeue" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0xe61a6643, "__current" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1000e51, "schedule" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x49970de8, "finish_wait" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xf70e9132, "skb_queue_head" },
	{ 0x9aac8012, "__alloc_skb" },
	{ 0xb64afbf2, "hci_alloc_dev_priv" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x86816953, "hci_register_dev" },
	{ 0xa81f2ce4, "debugfs_create_file" },
	{ 0xfa941bb7, "skb_put" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x45d7161e, "_copy_from_iter" },
	{ 0x8978ba7c, "skb_pull" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xeb02ea03, "hci_recv_frame" },
	{ 0x6bf1815c, "iov_iter_revert" },
	{ 0xc037a42c, "default_llseek" },
	{ 0xe450090f, "simple_open" },
	{ 0xe4ea4aab, "param_ops_bool" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "2AB1A1D2E8CBAC917271B35");
