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
	{ 0xa16e44e3, "sdio_release_host" },
	{ 0xebbea969, "sdio_disable_func" },
	{ 0x89f87a2f, "sdio_set_block_size" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xfa941bb7, "skb_put" },
	{ 0x7df9bde3, "sdio_claim_host" },
	{ 0xd3e75977, "sdio_register_driver" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x49970de8, "finish_wait" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xc92d9f41, "mmc_remove_host" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x637493f3, "__wake_up" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xd1bf472a, "netdev_err" },
	{ 0xf279659e, "mmc_add_host" },
	{ 0xf22b5c04, "sdio_f0_readb" },
	{ 0xf0977fe8, "lbs_add_card" },
	{ 0x3bb500af, "sdio_align_size" },
	{ 0x92997ed8, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0x1f122c4a, "lbs_host_to_card_done" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x9c87ac31, "sdio_release_irq" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x6e078bdb, "lbs_process_rxed_packet" },
	{ 0xaffc73ce, "sdio_set_host_pm_flags" },
	{ 0xc6096559, "sdio_f0_writeb" },
	{ 0xb2663d31, "lbs_remove_card" },
	{ 0xf90ae563, "sdio_unregister_driver" },
	{ 0x79bce59c, "sdio_readsb" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf64277de, "lbs_debug" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x5258915f, "lbs_suspend" },
	{ 0x94c16bed, "lbs_cmd_copyback" },
	{ 0xa588019c, "lbs_get_firmware_async" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xd079f675, "lbs_queue_event" },
	{ 0x96603250, "kmalloc_large" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0xe8f36367, "lbs_start_card" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xfe94257b, "__netdev_alloc_skb" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe3bb56d6, "sdio_get_host_pm_caps" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x82d635df, "__lbs_cmd" },
	{ 0x89be8566, "netdev_alert" },
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0xfa85bf4c, "lbs_stop_card" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xe387b168, "sdio_claim_irq" },
	{ 0x943df7e9, "sdio_enable_func" },
	{ 0x966e341c, "sdio_writesb" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x64ff2c1, "lbs_resume" },
	{ 0xcd538084, "__pm_runtime_idle" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x923835bf, "sdio_readb" },
	{ 0x2ca0e8b0, "sdio_writeb" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "libertas");

MODULE_ALIAS("sdio:c*v02DFd9103*");
MODULE_ALIAS("sdio:c*v02DFd9104*");

MODULE_INFO(srcversion, "12BEFE9A4E42403FC050CA3");
