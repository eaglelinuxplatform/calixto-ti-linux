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
	{ 0xc1514a3b, "free_irq" },
	{ 0x3715e090, "flush_dcache_page" },
	{ 0x6ce4ec1b, "regmap_write" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x6531ce6f, "pci_enable_device" },
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0x3f2b3508, "usb_hcd_unlink_urb_from_ep" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x48ab7808, "platform_get_irq" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb21c1a46, "regmap_raw_read" },
	{ 0x732e56d8, "gpiod_set_value_cansleep" },
	{ 0xa7b069a4, "__pci_register_driver" },
	{ 0xedc03953, "iounmap" },
	{ 0x37a0cba, "kfree" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xd236e21b, "devm_gpiod_get_optional" },
	{ 0x80d515ff, "regmap_field_update_bits_base" },
	{ 0xaf1274ad, "kmem_cache_create" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x6751583b, "pci_unregister_driver" },
	{ 0x4384eb42, "__release_region" },
	{ 0x552626c4, "usb_get_dr_mode" },
	{ 0x77b46ffb, "usb_ep_set_maxpacket_limit" },
	{ 0x92997ed8, "_printk" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xc5ad24c7, "usb_add_gadget_udc" },
	{ 0xdb9178ea, "kmem_cache_alloc" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x5a21041e, "regmap_field_read" },
	{ 0x60a29e2c, "devm_regmap_field_alloc" },
	{ 0x9f194991, "usb_hcd_check_unlink_urb" },
	{ 0x4253aa7e, "down_write" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x137a017f, "device_wakeup_enable" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x24d273d1, "add_timer" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x7b9a90c4, "irq_get_irq_data" },
	{ 0x826781f6, "platform_get_resource" },
	{ 0xe42d74c0, "kmem_cache_free" },
	{ 0x59a1fab8, "ehci_cf_port_reset_rwsem" },
	{ 0x8ebf658, "of_find_property" },
	{ 0xe97c4103, "ioremap" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xa86c0c8f, "usb_gadget_udc_reset" },
	{ 0xd547228, "usb_hcd_link_urb_to_ep" },
	{ 0x5f754e5a, "memset" },
	{ 0xd5288ef2, "__devm_regmap_init_mmio_clk" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xb340014f, "pci_set_master" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x6ba7a5f7, "usb_put_hcd" },
	{ 0x59b57e01, "usb_gadget_set_state" },
	{ 0xf0b3e7a3, "usb_hub_clear_tt_buffer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xcb99963, "__platform_driver_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4534861e, "regmap_read" },
	{ 0xa93e1320, "of_device_is_compatible" },
	{ 0xda4d9ee0, "usb_hcd_giveback_urb" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x600e4576, "devm_ioremap_resource" },
	{ 0xfe720f50, "pci_write_config_byte" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xa020b68f, "usb_del_gadget_udc" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x46399ea2, "pci_disable_device" },
	{ 0xd0cdcd50, "usb_create_hcd" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x29bd848b, "pci_read_config_byte" },
	{ 0xb1cb8571, "regmap_raw_write" },
	{ 0xefb60ad6, "usb_remove_hcd" },
	{ 0xc94d8e3b, "iomem_resource" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x9fafa4fb, "mem_map" },
	{ 0xb895aa29, "usb_add_hcd" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xae9849dd, "__request_region" },
	{ 0x662362a8, "kmem_cache_destroy" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "usbcore,usb-common,udc-core");

MODULE_ALIAS("pci:v000010B5d00005406sv000010B5sd00009054bc06sc80i00*");
MODULE_ALIAS("of:N*T*Cnxp,usb-isp1760");
MODULE_ALIAS("of:N*T*Cnxp,usb-isp1760C*");
MODULE_ALIAS("of:N*T*Cnxp,usb-isp1761");
MODULE_ALIAS("of:N*T*Cnxp,usb-isp1761C*");
MODULE_ALIAS("of:N*T*Cnxp,usb-isp1763");
MODULE_ALIAS("of:N*T*Cnxp,usb-isp1763C*");

MODULE_INFO(srcversion, "39C47A40807ACBA57D43A1E");
