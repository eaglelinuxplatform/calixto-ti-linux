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
	{ 0xc8c63ab0, "device_property_present" },
	{ 0x6a629c28, "usb_hcd_platform_shutdown" },
	{ 0xeb03b707, "of_fwnode_ops" },
	{ 0x7c375e08, "device_set_wakeup_capable" },
	{ 0xe277163, "xhci_suspend" },
	{ 0xd2db3ca2, "devm_platform_get_and_ioremap_resource" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x48ab7808, "platform_get_irq" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x75ee04be, "xhci_gen_setup" },
	{ 0xd43b197c, "of_usb_host_tpl_support" },
	{ 0x2a6ef5b0, "devm_usb_get_phy_by_phandle" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0xf866b105, "__pm_runtime_set_status" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xe3ae1810, "pm_runtime_enable" },
	{ 0xcf1ab7a4, "device_property_read_u32_array" },
	{ 0xe44cbb4f, "xhci_resume" },
	{ 0xff657a3f, "xhci_run" },
	{ 0x8b5091e3, "usb_hcd_is_primary_hcd" },
	{ 0x427d4e4d, "xhci_init_driver" },
	{ 0x6ba7a5f7, "usb_put_hcd" },
	{ 0xcb99963, "__platform_driver_register" },
	{ 0xc6408e13, "dma_set_coherent_mask" },
	{ 0x63ed6273, "devm_clk_get_optional" },
	{ 0x7c74c7da, "pm_runtime_forbid" },
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xa1376585, "__usb_create_hcd" },
	{ 0xdc2cbe84, "dma_set_mask" },
	{ 0xefb60ad6, "usb_remove_hcd" },
	{ 0x5ec1a11d, "of_device_get_match_data" },
	{ 0xc5745645, "__pm_runtime_disable" },
	{ 0xb895aa29, "usb_add_hcd" },
	{ 0x815588a6, "clk_enable" },
	{ 0xbafd25be, "pci_bus_type" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "usbcore,xhci-hcd,usb-common");

MODULE_ALIAS("of:N*T*Cgeneric-xhci");
MODULE_ALIAS("of:N*T*Cgeneric-xhciC*");
MODULE_ALIAS("of:N*T*Cxhci-platform");
MODULE_ALIAS("of:N*T*Cxhci-platformC*");
MODULE_ALIAS("of:N*T*Cmarvell,armada-375-xhci");
MODULE_ALIAS("of:N*T*Cmarvell,armada-375-xhciC*");
MODULE_ALIAS("of:N*T*Cmarvell,armada-380-xhci");
MODULE_ALIAS("of:N*T*Cmarvell,armada-380-xhciC*");
MODULE_ALIAS("of:N*T*Cmarvell,armada3700-xhci");
MODULE_ALIAS("of:N*T*Cmarvell,armada3700-xhciC*");
MODULE_ALIAS("of:N*T*Crenesas,xhci-r8a7790");
MODULE_ALIAS("of:N*T*Crenesas,xhci-r8a7790C*");
MODULE_ALIAS("of:N*T*Crenesas,xhci-r8a7791");
MODULE_ALIAS("of:N*T*Crenesas,xhci-r8a7791C*");
MODULE_ALIAS("of:N*T*Crenesas,xhci-r8a7793");
MODULE_ALIAS("of:N*T*Crenesas,xhci-r8a7793C*");
MODULE_ALIAS("of:N*T*Crenesas,xhci-r8a7795");
MODULE_ALIAS("of:N*T*Crenesas,xhci-r8a7795C*");
MODULE_ALIAS("of:N*T*Crenesas,xhci-r8a7796");
MODULE_ALIAS("of:N*T*Crenesas,xhci-r8a7796C*");
MODULE_ALIAS("of:N*T*Crenesas,rcar-gen2-xhci");
MODULE_ALIAS("of:N*T*Crenesas,rcar-gen2-xhciC*");
MODULE_ALIAS("of:N*T*Crenesas,rcar-gen3-xhci");
MODULE_ALIAS("of:N*T*Crenesas,rcar-gen3-xhciC*");
MODULE_ALIAS("of:N*T*Cbrcm,xhci-brcm-v2");
MODULE_ALIAS("of:N*T*Cbrcm,xhci-brcm-v2C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm7445-xhci");
MODULE_ALIAS("of:N*T*Cbrcm,bcm7445-xhciC*");

MODULE_INFO(srcversion, "368BB81035F468B7C77DBF1");
