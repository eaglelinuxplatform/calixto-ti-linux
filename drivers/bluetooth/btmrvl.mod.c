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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(btmrvl_add_card, 0xda11bbd9, "_gpl");
SYMBOL_CRC(btmrvl_check_evtpkt, 0x18b53616, "_gpl");
SYMBOL_CRC(btmrvl_enable_hs, 0x0ba27e62, "_gpl");
SYMBOL_CRC(btmrvl_enable_ps, 0xec0b78c1, "_gpl");
SYMBOL_CRC(btmrvl_interrupt, 0xefc133db, "_gpl");
SYMBOL_CRC(btmrvl_process_event, 0x3c355199, "_gpl");
SYMBOL_CRC(btmrvl_pscan_window_reporting, 0x4a62e7e0, "_gpl");
SYMBOL_CRC(btmrvl_register_hdev, 0x1f0eb1b5, "_gpl");
SYMBOL_CRC(btmrvl_remove_card, 0x1a235813, "_gpl");
SYMBOL_CRC(btmrvl_send_hscfg_cmd, 0xa0f377ca, "_gpl");
SYMBOL_CRC(btmrvl_send_module_cfg_cmd, 0x9491f095, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xfa941bb7, "skb_put" },
	{ 0x8730615d, "hci_free_dev" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x735faf6b, "skb_dequeue" },
	{ 0x49970de8, "finish_wait" },
	{ 0x9d669763, "memcpy" },
	{ 0xb64afbf2, "hci_alloc_dev_priv" },
	{ 0x37a0cba, "kfree" },
	{ 0x7a185693, "of_property_read_variable_u16_array" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x637493f3, "__wake_up" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xe4296f92, "wake_up_process" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x9aac8012, "__alloc_skb" },
	{ 0xe61a6643, "__current" },
	{ 0xb8e280d8, "skb_queue_tail" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe450090f, "simple_open" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0x8b1e3dd1, "skb_push" },
	{ 0x8e9e820e, "debugfs_remove" },
	{ 0xa0edc8bc, "kthread_stop" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xc037a42c, "default_llseek" },
	{ 0x2919dce9, "skb_queue_purge" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xf9f0c951, "kstrtol_from_user" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x163ce293, "of_property_read_variable_u8_array" },
	{ 0xdba49fef, "debugfs_create_x16" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xf1908dde, "kthread_create_on_node" },
	{ 0x3b439a1c, "hci_unregister_dev" },
	{ 0xa81f2ce4, "debugfs_create_file" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x86816953, "hci_register_dev" },
	{ 0xc48a8a57, "__hci_cmd_sync" },
	{ 0x2af4ecf, "debugfs_create_u8" },
	{ 0xeca42068, "debugfs_create_dir" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xf70e9132, "skb_queue_head" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "1F76DFB6F84EE546EA26F89");
