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
	{ 0xa16e44e3, "sdio_release_host" },
	{ 0xebbea969, "sdio_disable_func" },
	{ 0x89f87a2f, "sdio_set_block_size" },
	{ 0x68d30008, "mwifiex_init_shutdown_fw" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xfa941bb7, "skb_put" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xc21ed4d1, "mwifiex_drv_info_dump" },
	{ 0x7df9bde3, "sdio_claim_host" },
	{ 0xd3e75977, "sdio_register_driver" },
	{ 0x99bb8806, "memmove" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x5af10faf, "mwifiex_upload_device_dump" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xd0caf9a9, "mwifiex_enable_hs" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x3695f7c6, "mwifiex_remove_card" },
	{ 0xd53450b1, "mwifiex_deauthenticate_all" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x24c35651, "mwifiex_handle_rx_packet" },
	{ 0xc1aef674, "mwifiex_reinit_sw" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xf22b5c04, "sdio_f0_readb" },
	{ 0x92997ed8, "_printk" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x9c87ac31, "sdio_release_irq" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb8e280d8, "skb_queue_tail" },
	{ 0x28851490, "mwifiex_dnld_fw" },
	{ 0xaffc73ce, "sdio_set_host_pm_flags" },
	{ 0xf90ae563, "sdio_unregister_driver" },
	{ 0x79bce59c, "sdio_readsb" },
	{ 0xd4dad9f3, "mwifiex_alloc_dma_align_buf" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x8978ba7c, "skb_pull" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x74ed8283, "mwifiex_shutdown_sw" },
	{ 0xe9f55364, "of_match_node" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xa37f3257, "mwifiex_add_card" },
	{ 0x5f754e5a, "memset" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0x6df6697a, "_mwifiex_dbg" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xcb510bc2, "complete_all" },
	{ 0xabc58048, "skb_trim" },
	{ 0xe3bb56d6, "sdio_get_host_pm_caps" },
	{ 0xe4fd7f08, "mwifiex_prepare_fw_dump_info" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x34d24d69, "mwifiex_main_process" },
	{ 0x999e8297, "vfree" },
	{ 0xdc242f71, "mwifiex_process_sleep_confirm_resp" },
	{ 0xcfb8ae07, "__dev_kfree_skb_any" },
	{ 0x183885a0, "mwifiex_disable_auto_ds" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x2e77f238, "mmc_hw_reset" },
	{ 0xe387b168, "sdio_claim_irq" },
	{ 0x943df7e9, "sdio_enable_func" },
	{ 0x966e341c, "sdio_writesb" },
	{ 0xbec413db, "mwifiex_cancel_hs" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x923835bf, "sdio_readb" },
	{ 0x2ca0e8b0, "sdio_writeb" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "mwifiex");

MODULE_ALIAS("sdio:c*v02DFd9116*");
MODULE_ALIAS("sdio:c*v02DFd9119*");
MODULE_ALIAS("sdio:c*v02DFd9129*");
MODULE_ALIAS("sdio:c*v02DFd912D*");
MODULE_ALIAS("sdio:c*v02DFd9135*");
MODULE_ALIAS("sdio:c*v02DFd9139*");
MODULE_ALIAS("sdio:c*v02DFd9145*");
MODULE_ALIAS("sdio:c*v02DFd9149*");
MODULE_ALIAS("sdio:c*v02DFd9141*");

MODULE_INFO(srcversion, "C61CBD7F47BE35D3DD0BD16");
