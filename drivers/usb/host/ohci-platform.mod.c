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
	{ 0x19a304ba, "usb_disabled" },
	{ 0x869a57ee, "ohci_init_driver" },
	{ 0xcb99963, "__platform_driver_register" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb35e91f9, "ohci_resume" },
	{ 0xc5745645, "__pm_runtime_disable" },
	{ 0xf866b105, "__pm_runtime_set_status" },
	{ 0xe3ae1810, "pm_runtime_enable" },
	{ 0x2d3459d9, "ohci_suspend" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0xefb60ad6, "usb_remove_hcd" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x6ba7a5f7, "usb_put_hcd" },
	{ 0xcd538084, "__pm_runtime_idle" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0xdc2cbe84, "dma_set_mask" },
	{ 0xc6408e13, "dma_set_coherent_mask" },
	{ 0x48ab7808, "platform_get_irq" },
	{ 0xd0cdcd50, "usb_create_hcd" },
	{ 0x826781f6, "platform_get_resource" },
	{ 0x600e4576, "devm_ioremap_resource" },
	{ 0xd43b197c, "of_usb_host_tpl_support" },
	{ 0xb895aa29, "usb_add_hcd" },
	{ 0x137a017f, "device_wakeup_enable" },
	{ 0x8ebf658, "of_find_property" },
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0x95b4df72, "of_clk_get" },
	{ 0x7b67970f, "devm_reset_control_array_get" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x6a629c28, "usb_hcd_platform_shutdown" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "usbcore,ohci-hcd,usb-common");

MODULE_ALIAS("platform:ohci-platform");
MODULE_ALIAS("of:N*T*Cgeneric-ohci");
MODULE_ALIAS("of:N*T*Cgeneric-ohciC*");
MODULE_ALIAS("of:N*T*Ccavium,octeon-6335-ohci");
MODULE_ALIAS("of:N*T*Ccavium,octeon-6335-ohciC*");
MODULE_ALIAS("of:N*T*Cti,ohci-omap3");
MODULE_ALIAS("of:N*T*Cti,ohci-omap3C*");

MODULE_INFO(srcversion, "894332FC7EB31F0081BF8A0");
