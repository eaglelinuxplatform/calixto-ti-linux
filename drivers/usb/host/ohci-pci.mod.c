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
	{ 0x19a304ba, "usb_disabled" },
	{ 0x869a57ee, "ohci_init_driver" },
	{ 0xa7b069a4, "__pci_register_driver" },
	{ 0x2d3459d9, "ohci_suspend" },
	{ 0xb35e91f9, "ohci_resume" },
	{ 0xe5dc4115, "usb_hcd_pci_probe" },
	{ 0x2f04da70, "pci_match_id" },
	{ 0xd801c929, "ohci_setup" },
	{ 0xaf4014ff, "usb_amd_quirk_pll_check" },
	{ 0xd87fc0a0, "usb_amd_prefetch_quirk" },
	{ 0xd92d6749, "ohci_restart" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x5bd788ef, "pci_get_slot" },
	{ 0x5af484b9, "pci_dev_put" },
	{ 0x6751583b, "pci_unregister_driver" },
	{ 0x723ae2b4, "device_wakeup_disable" },
	{ 0x7c375e08, "device_set_wakeup_capable" },
	{ 0x252ffdb5, "usb_hcd_pci_remove" },
	{ 0xbbca6470, "usb_hcd_pci_shutdown" },
	{ 0xbdf8eec0, "usb_hcd_pci_pm_ops" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "usbcore,ohci-hcd");

MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc03i10*");
MODULE_ALIAS("pci:v0000104Ad0000CC01sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "9B5C6AB9A4747802E6081EC");
