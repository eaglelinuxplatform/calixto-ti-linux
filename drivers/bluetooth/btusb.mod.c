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
	{ 0x52c9ee7b, "usb_register_driver" },
	{ 0xd30a346c, "usb_alloc_urb" },
	{ 0x7439b55a, "usb_anchor_urb" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x993f0de1, "usb_submit_urb" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x1414da88, "usb_unanchor_urb" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xd7f575dd, "usb_free_urb" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xf54e820f, "hci_cmd_sync_cancel" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x37a0cba, "kfree" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0xd45ddb66, "kstrtobool_from_user" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xc48a8a57, "__hci_cmd_sync" },
	{ 0x718b8b7, "bt_info" },
	{ 0x214e4265, "bt_warn" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x45159cd8, "pm_runtime_allow" },
	{ 0x9580c7ff, "__pm_runtime_suspend" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7c74c7da, "pm_runtime_forbid" },
	{ 0x7c375e08, "device_set_wakeup_capable" },
	{ 0x7884076d, "usb_enable_autosuspend" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x732e56d8, "gpiod_set_value_cansleep" },
	{ 0x729d78a9, "__hci_cmd_sync_ev" },
	{ 0xa05df63f, "usb_autopm_get_interface" },
	{ 0xaa6357eb, "usb_queue_reset_device" },
	{ 0x9d669763, "memcpy" },
	{ 0xf4da8394, "usb_control_msg" },
	{ 0xa0208b0f, "usb_bulk_msg" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x48dff8dd, "usb_autopm_put_interface" },
	{ 0xeb02ea03, "hci_recv_frame" },
	{ 0x70398f31, "btintel_secure_send_result" },
	{ 0x884d26b8, "btintel_bootup" },
	{ 0x735faf6b, "skb_dequeue" },
	{ 0xa6fa3c0c, "usb_deregister" },
	{ 0xb391754c, "pm_wakeup_dev_event" },
	{ 0x8c0215f2, "pm_system_wakeup" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xfe5eb6e6, "request_firmware" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0x3b439a1c, "hci_unregister_dev" },
	{ 0xb1b0e08, "gpiod_put" },
	{ 0x8730615d, "hci_free_dev" },
	{ 0x723ae2b4, "device_wakeup_disable" },
	{ 0x2ab8fd87, "usb_driver_release_interface" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0x2919dce9, "skb_queue_purge" },
	{ 0x409cf0a0, "__dev_kfree_skb_irq" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xfaba248a, "usb_scuttle_anchored_urbs" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xec62b0cc, "usb_get_from_anchor" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfa941bb7, "skb_put" },
	{ 0x9aac8012, "__alloc_skb" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xb8e280d8, "skb_queue_tail" },
	{ 0x10c384db, "hci_recv_diag" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5f754e5a, "memset" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xb64afbf2, "hci_alloc_dev_priv" },
	{ 0xb13ae765, "gpiod_get_optional" },
	{ 0x19d8a156, "of_match_device" },
	{ 0x2bf043bf, "of_irq_get_byname" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0x137a017f, "device_wakeup_enable" },
	{ 0xf368ce6b, "usb_driver_claim_interface" },
	{ 0x86816953, "hci_register_dev" },
	{ 0xa81f2ce4, "debugfs_create_file" },
	{ 0x4691141e, "usb_match_id" },
	{ 0xeed58c47, "usb_ifnum_to_if" },
	{ 0xfe9bdc69, "btintel_configure_setup" },
	{ 0x7a185693, "of_property_read_variable_u16_array" },
	{ 0x357e9105, "usb_set_interface" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x5e953a, "btbcm_setup_apple" },
	{ 0x61e7a786, "btbcm_setup_patchram" },
	{ 0xdfd28095, "btbcm_set_bdaddr" },
	{ 0x4485cffe, "btrtl_setup_realtek" },
	{ 0x8a258b6d, "btrtl_shutdown_realtek" },
	{ 0xc037a42c, "default_llseek" },
	{ 0xe450090f, "simple_open" },
	{ 0xe4ea4aab, "param_ops_bool" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "usbcore,bluetooth,btintel,btbcm,btrtl");

MODULE_ALIAS("of:N*T*Cusb1286,204e");
MODULE_ALIAS("of:N*T*Cusb1286,204eC*");
MODULE_ALIAS("of:N*T*Cusbcf3,e300");
MODULE_ALIAS("of:N*T*Cusbcf3,e300C*");
MODULE_ALIAS("of:N*T*Cusb4ca,301a");
MODULE_ALIAS("of:N*T*Cusb4ca,301aC*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp01ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp04ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip01in*");
MODULE_ALIAS("usb:v05ACp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0E8Dp763Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp21E1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8215d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8218d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp3800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BFp030Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDBp1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C10p0000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19FFp0239d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v105Bp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0BB4p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0489p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v04CAp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0A5Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0B05p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v050Dp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v13D3p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v8087p0A5Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "C7B6A0C47D47F3AA9071297");
