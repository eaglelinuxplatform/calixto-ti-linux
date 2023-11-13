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
	{ 0xf8121315, "ehci_init_driver" },
	{ 0xcb99963, "__platform_driver_register" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0xefb60ad6, "usb_remove_hcd" },
	{ 0x6ba7a5f7, "usb_put_hcd" },
	{ 0xcd538084, "__pm_runtime_idle" },
	{ 0xc5745645, "__pm_runtime_disable" },
	{ 0x48ab7808, "platform_get_irq" },
	{ 0x826781f6, "platform_get_resource" },
	{ 0x600e4576, "devm_ioremap_resource" },
	{ 0xdc2cbe84, "dma_set_mask" },
	{ 0xc6408e13, "dma_set_coherent_mask" },
	{ 0xd0cdcd50, "usb_create_hcd" },
	{ 0x2a6ef5b0, "devm_usb_get_phy_by_phandle" },
	{ 0xe3ae1810, "pm_runtime_enable" },
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0xb895aa29, "usb_add_hcd" },
	{ 0x137a017f, "device_wakeup_enable" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x6a629c28, "usb_hcd_platform_shutdown" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "usbcore,ehci-hcd");

MODULE_ALIAS("of:N*T*Cti,ehci-omap");
MODULE_ALIAS("of:N*T*Cti,ehci-omapC*");

MODULE_INFO(srcversion, "BB8E51B71FFD40A650F7C1A");
