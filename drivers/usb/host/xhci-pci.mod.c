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
	{ 0x427d4e4d, "xhci_init_driver" },
	{ 0xa7b069a4, "__pci_register_driver" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8b5091e3, "usb_hcd_is_primary_hcd" },
	{ 0xefb60ad6, "usb_remove_hcd" },
	{ 0x6ba7a5f7, "usb_put_hcd" },
	{ 0x252ffdb5, "usb_hcd_pci_remove" },
	{ 0x7c74c7da, "pm_runtime_forbid" },
	{ 0x3016d183, "pci_set_power_state" },
	{ 0x2b79e393, "xhci_shutdown" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0xe277163, "xhci_suspend" },
	{ 0x9e6e0841, "pci_d3cold_disable" },
	{ 0x377bbcbc, "pm_suspend_target_state" },
	{ 0x3c14f047, "xhci_update_hub_device" },
	{ 0x2f04da70, "pci_match_id" },
	{ 0x7c444201, "xhci_dbg_trace" },
	{ 0xaf4014ff, "usb_amd_quirk_pll_check" },
	{ 0x75ee04be, "xhci_gen_setup" },
	{ 0x8d7c0228, "pci_set_mwi" },
	{ 0x29bd848b, "pci_read_config_byte" },
	{ 0x6751583b, "pci_unregister_driver" },
	{ 0xe61a6643, "__current" },
	{ 0x4c549b36, "__traceiter_xhci_dbg_quirks" },
	{ 0xaa996bf7, "__tracepoint_xhci_dbg_quirks" },
	{ 0x3d9f21fe, "__cpu_online_mask" },
	{ 0x99f09f40, "__devm_reset_control_get" },
	{ 0x24f39c39, "reset_control_reset" },
	{ 0xe5dc4115, "usb_hcd_pci_probe" },
	{ 0xa7f7e9f3, "usb_create_shared_hcd" },
	{ 0xbe02b8b3, "xhci_ext_cap_init" },
	{ 0xb895aa29, "usb_add_hcd" },
	{ 0x45159cd8, "pm_runtime_allow" },
	{ 0xe44cbb4f, "xhci_resume" },
	{ 0xbed075b7, "usb_enable_intel_xhci_ports" },
	{ 0xbbca6470, "usb_hcd_pci_shutdown" },
	{ 0xbdf8eec0, "usb_hcd_pci_pm_ops" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "xhci-hcd,usbcore");

MODULE_ALIAS("pci:v00001912d00000014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001912d00000015sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc03i30*");

MODULE_INFO(srcversion, "706AB1A02D0F837B98272A6");
