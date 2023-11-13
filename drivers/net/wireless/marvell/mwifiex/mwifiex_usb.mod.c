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
	{ 0xd30a346c, "usb_alloc_urb" },
	{ 0xd7f575dd, "usb_free_urb" },
	{ 0x68d30008, "mwifiex_init_shutdown_fw" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xfa941bb7, "skb_put" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xd0caf9a9, "mwifiex_enable_hs" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x3695f7c6, "mwifiex_remove_card" },
	{ 0xd53450b1, "mwifiex_deauthenticate_all" },
	{ 0x735faf6b, "skb_dequeue" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x52c9ee7b, "usb_register_driver" },
	{ 0xb75f6e5d, "mwifiex_fw_dump_event" },
	{ 0x9d669763, "memcpy" },
	{ 0x8a2e39a1, "mwifiex_multi_chan_resync" },
	{ 0x37a0cba, "kfree" },
	{ 0x28bf890d, "mwifiex_process_hs_config" },
	{ 0x92997ed8, "_printk" },
	{ 0x3ed8948b, "usb_put_dev" },
	{ 0xa0208b0f, "usb_bulk_msg" },
	{ 0x1f4cdf7a, "usb_reset_device" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x84c17484, "usb_get_dev" },
	{ 0x993f0de1, "usb_submit_urb" },
	{ 0xb8e280d8, "skb_queue_tail" },
	{ 0xd4dad9f3, "mwifiex_alloc_dma_align_buf" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x8978ba7c, "skb_pull" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8b1e3dd1, "skb_push" },
	{ 0xa6fa3c0c, "usb_deregister" },
	{ 0xa37f3257, "mwifiex_add_card" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0x6df6697a, "_mwifiex_dbg" },
	{ 0xfe94257b, "__netdev_alloc_skb" },
	{ 0xabc58048, "skb_trim" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x1d7db27d, "mwifiex_queue_main_work" },
	{ 0xdc242f71, "mwifiex_process_sleep_confirm_resp" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x49806940, "mwifiex_write_data_complete" },
	{ 0xcfb8ae07, "__dev_kfree_skb_any" },
	{ 0x67a16781, "usb_kill_urb" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0xbec413db, "mwifiex_cancel_hs" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "usbcore,mwifiex");

MODULE_ALIAS("usb:v1286p2041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p2042d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1286p2043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p2044d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1286p2049d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p204Ad*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1286p2052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p204Ed*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "6E4979F046141CBF8DAC707");
