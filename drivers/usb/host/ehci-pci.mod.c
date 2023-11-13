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
	{ 0xa7b069a4, "__pci_register_driver" },
	{ 0x4fb235ae, "ehci_suspend" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xaed2ce9a, "pci_clear_mwi" },
	{ 0x252ffdb5, "usb_hcd_pci_remove" },
	{ 0x2f04da70, "pci_match_id" },
	{ 0xe5dc4115, "usb_hcd_pci_probe" },
	{ 0x6751583b, "pci_unregister_driver" },
	{ 0x3bad8f24, "ehci_resume" },
	{ 0x8d7c0228, "pci_set_mwi" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x24e8f9cf, "pci_find_capability" },
	{ 0xb3385547, "ehci_setup" },
	{ 0xaf4014ff, "usb_amd_quirk_pll_check" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x7697a0ae, "pci_read_config_word" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x29bd848b, "pci_read_config_byte" },
	{ 0xcf54de2d, "pci_read_config_dword" },
	{ 0xc6408e13, "dma_set_coherent_mask" },
	{ 0x33832c7, "usb_amd_hang_symptom_quirk" },
	{ 0xfe720f50, "pci_write_config_byte" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x7c375e08, "device_set_wakeup_capable" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xbbca6470, "usb_hcd_pci_shutdown" },
	{ 0xbdf8eec0, "usb_hcd_pci_pm_ops" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "usbcore,ehci-hcd");

MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc03i20*");
MODULE_ALIAS("pci:v0000104Ad0000CC00sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2FA2E02DCF34BB6CAF9C4C1");
