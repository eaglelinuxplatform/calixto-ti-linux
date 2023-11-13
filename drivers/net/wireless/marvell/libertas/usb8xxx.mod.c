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
	{ 0x1d389555, "lbs_notify_command_response" },
	{ 0xd30a346c, "usb_alloc_urb" },
	{ 0xd7f575dd, "usb_free_urb" },
	{ 0xfa941bb7, "skb_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x49970de8, "finish_wait" },
	{ 0x52c9ee7b, "usb_register_driver" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x637493f3, "__wake_up" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xf0977fe8, "lbs_add_card" },
	{ 0x92997ed8, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0x3ed8948b, "usb_put_dev" },
	{ 0x1f122c4a, "lbs_host_to_card_done" },
	{ 0x1f4cdf7a, "usb_reset_device" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x84c17484, "usb_get_dev" },
	{ 0x993f0de1, "usb_submit_urb" },
	{ 0x6e078bdb, "lbs_process_rxed_packet" },
	{ 0xb2663d31, "lbs_remove_card" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf64277de, "lbs_debug" },
	{ 0x8978ba7c, "skb_pull" },
	{ 0x5258915f, "lbs_suspend" },
	{ 0x94c16bed, "lbs_cmd_copyback" },
	{ 0xa588019c, "lbs_get_firmware_async" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x409cf0a0, "__dev_kfree_skb_irq" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0x7590bf47, "lbs_send_tx_feedback" },
	{ 0xd079f675, "lbs_queue_event" },
	{ 0xa6fa3c0c, "usb_deregister" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xe8f36367, "lbs_start_card" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xfe94257b, "__netdev_alloc_skb" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x82d635df, "__lbs_cmd" },
	{ 0xfa85bf4c, "lbs_stop_card" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x67a16781, "usb_kill_urb" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x64ff2c1, "lbs_resume" },
	{ 0x8d64b1a2, "lbs_host_sleep_cfg" },
	{ 0xf9a482f9, "msleep" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x9f705c1a, "netdev_info" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "libertas,usbcore");

MODULE_ALIAS("usb:v1286p2001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A3p8388d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "722ECF2BB13ECC3E7F1FA72");
