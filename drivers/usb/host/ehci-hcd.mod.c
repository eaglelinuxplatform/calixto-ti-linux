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

SYMBOL_CRC(ehci_adjust_port_wakeup_flags, 0x683bb989, "_gpl");
SYMBOL_CRC(ehci_handshake, 0x4c0a6276, "_gpl");
SYMBOL_CRC(ehci_hub_control, 0xc89d3e7a, "_gpl");
SYMBOL_CRC(ehci_init_driver, 0xf8121315, "_gpl");
SYMBOL_CRC(ehci_reset, 0xb24b26bc, "_gpl");
SYMBOL_CRC(ehci_resume, 0x3bad8f24, "_gpl");
SYMBOL_CRC(ehci_setup, 0xb3385547, "_gpl");
SYMBOL_CRC(ehci_suspend, 0x4fb235ae, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5f754e5a, "memset" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x3f2b3508, "usb_hcd_unlink_urb_from_ep" },
	{ 0xda4d9ee0, "usb_hcd_giveback_urb" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x93bdaa1f, "dma_pool_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x4424b3fb, "dma_free_attrs" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x92997ed8, "_printk" },
	{ 0x8f5f2d5a, "__platform_register_drivers" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xc17515d7, "usb_hcds_loaded" },
	{ 0x41013880, "platform_unregister_drivers" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xec523f88, "hrtimer_start_range_ns" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x7e64181d, "usb_calc_bus_time" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xf0b3e7a3, "usb_hub_clear_tt_buffer" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x9f194991, "usb_hcd_check_unlink_urb" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x7d09596b, "dma_pool_alloc" },
	{ 0x9d669763, "memcpy" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xa362bf8f, "hrtimer_init" },
	{ 0x477347d3, "dma_pool_create" },
	{ 0xcf669e88, "dma_alloc_attrs" },
	{ 0x695bf5e9, "hrtimer_cancel" },
	{ 0x214a0676, "device_remove_file" },
	{ 0xb9b9df41, "usb_amd_dev_put" },
	{ 0x4253aa7e, "down_write" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xa64a9908, "device_create_file" },
	{ 0x59a1fab8, "ehci_cf_port_reset_rwsem" },
	{ 0xc8e173ed, "_find_next_bit_le" },
	{ 0x15ce5904, "usb_hcd_resume_root_hub" },
	{ 0xc453ac99, "usb_root_hub_lost_power" },
	{ 0xe06699b2, "sg_next" },
	{ 0x10ecc52c, "usb_amd_quirk_pll_enable" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x14d1c51e, "usb_hc_died" },
	{ 0x195835b2, "usb_hcd_poll_rh_status" },
	{ 0xbe704cae, "usb_hcd_start_port_resume" },
	{ 0x1db078a8, "usb_hcd_end_port_resume" },
	{ 0x4ad0bb45, "usb_for_each_dev" },
	{ 0xd547228, "usb_hcd_link_urb_to_ep" },
	{ 0xdc825d6c, "usb_amd_quirk_pll_disable" },
	{ 0xe4ea4aab, "param_ops_bool" },
	{ 0x9098ac8b, "param_ops_uint" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "usbcore");


MODULE_INFO(srcversion, "F327F99E36E36B3EA1755CC");
