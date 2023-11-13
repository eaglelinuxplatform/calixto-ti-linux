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
	{ 0xd3e75977, "sdio_register_driver" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x7df9bde3, "sdio_claim_host" },
	{ 0x2ca0e8b0, "sdio_writeb" },
	{ 0xa16e44e3, "sdio_release_host" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5f754e5a, "memset" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf22b5c04, "sdio_f0_readb" },
	{ 0x923835bf, "sdio_readb" },
	{ 0x718b8b7, "bt_info" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x999e8297, "vfree" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x97255bdf, "strlen" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x9d669763, "memcpy" },
	{ 0x56072e69, "dev_coredumpv" },
	{ 0xe3bb56d6, "sdio_get_host_pm_caps" },
	{ 0x8caf1c77, "hci_resume_dev" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xf8c85ed5, "hci_suspend_dev" },
	{ 0xaffc73ce, "sdio_set_host_pm_flags" },
	{ 0xba27e62, "btmrvl_enable_hs" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xb391754c, "pm_wakeup_dev_event" },
	{ 0x8c0215f2, "pm_system_wakeup" },
	{ 0xf90ae563, "sdio_unregister_driver" },
	{ 0x79bce59c, "sdio_readsb" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xefc133db, "btmrvl_interrupt" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x9aac8012, "__alloc_skb" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0xfa941bb7, "skb_put" },
	{ 0x8978ba7c, "skb_pull" },
	{ 0x3c355199, "btmrvl_process_event" },
	{ 0x18b53616, "btmrvl_check_evtpkt" },
	{ 0xeb02ea03, "hci_recv_frame" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x966e341c, "sdio_writesb" },
	{ 0x37a0cba, "kfree" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x943df7e9, "sdio_enable_func" },
	{ 0xe387b168, "sdio_claim_irq" },
	{ 0x89f87a2f, "sdio_set_block_size" },
	{ 0xfe5eb6e6, "request_firmware" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0xe9f55364, "of_match_node" },
	{ 0xcd6cf361, "irq_of_parse_and_map" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0x7c375e08, "device_set_wakeup_capable" },
	{ 0x137a017f, "device_wakeup_enable" },
	{ 0xda11bbd9, "btmrvl_add_card" },
	{ 0x1f0eb1b5, "btmrvl_register_hdev" },
	{ 0x9c87ac31, "sdio_release_irq" },
	{ 0xebbea969, "sdio_disable_func" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x1a235813, "btmrvl_remove_card" },
	{ 0x9491f095, "btmrvl_send_module_cfg_cmd" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "bluetooth,btmrvl");

MODULE_ALIAS("sdio:c*v02DFd9105*");
MODULE_ALIAS("sdio:c*v02DFd911A*");
MODULE_ALIAS("sdio:c*v02DFd911B*");
MODULE_ALIAS("sdio:c*v02DFd912A*");
MODULE_ALIAS("sdio:c*v02DFd9136*");
MODULE_ALIAS("sdio:c*v02DFd912E*");
MODULE_ALIAS("sdio:c*v02DFd9146*");
MODULE_ALIAS("sdio:c*v02DFd914A*");
MODULE_ALIAS("sdio:c*v02DFd9142*");

MODULE_INFO(srcversion, "868AE815AFF2948B912965F");
