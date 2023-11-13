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

SYMBOL_CRC(ohci_hub_control, 0xdfbce5d2, "_gpl");
SYMBOL_CRC(ohci_hub_status_data, 0x38ed5198, "_gpl");
SYMBOL_CRC(ohci_init_driver, 0x869a57ee, "_gpl");
SYMBOL_CRC(ohci_restart, 0xd92d6749, "_gpl");
SYMBOL_CRC(ohci_resume, 0xb35e91f9, "_gpl");
SYMBOL_CRC(ohci_setup, 0xd801c929, "_gpl");
SYMBOL_CRC(ohci_suspend, 0x2d3459d9, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x5f754e5a, "memset" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xf705fa49, "gen_pool_free_owner" },
	{ 0x93bdaa1f, "dma_pool_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x8e9e820e, "debugfs_remove" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xc17515d7, "usb_hcds_loaded" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0xd361cba4, "gen_pool_dma_zalloc_align" },
	{ 0x7d09596b, "dma_pool_alloc" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xeca42068, "debugfs_create_dir" },
	{ 0x940112ad, "usb_debug_root" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe06699b2, "sg_next" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x7e64181d, "usb_calc_bus_time" },
	{ 0xd547228, "usb_hcd_link_urb_to_ep" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x3f2b3508, "usb_hcd_unlink_urb_from_ep" },
	{ 0xdc825d6c, "usb_amd_quirk_pll_disable" },
	{ 0x962401ea, "sb800_prefetch" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xda4d9ee0, "usb_hcd_giveback_urb" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x10ecc52c, "usb_amd_quirk_pll_enable" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x9f194991, "usb_hcd_check_unlink_urb" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x14d1c51e, "usb_hc_died" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x4424b3fb, "dma_free_attrs" },
	{ 0xb9b9df41, "usb_amd_dev_put" },
	{ 0x92b57248, "flush_work" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xdc430db2, "gen_pool_dma_alloc_align" },
	{ 0xa81f2ce4, "debugfs_create_file" },
	{ 0xcf669e88, "dma_alloc_attrs" },
	{ 0x477347d3, "dma_pool_create" },
	{ 0x7c375e08, "device_set_wakeup_capable" },
	{ 0xc453ac99, "usb_root_hub_lost_power" },
	{ 0x15ce5904, "usb_hcd_resume_root_hub" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x195835b2, "usb_hcd_poll_rh_status" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc037a42c, "default_llseek" },
	{ 0xe4ea4aab, "param_ops_bool" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "usbcore,usb-common");


MODULE_INFO(srcversion, "44CB640DCA1E4129C08D626");
