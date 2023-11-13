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
	{ 0xcb99963, "__platform_driver_register" },
	{ 0xe9b22a6a, "usb_remove_phy" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x294a8cfb, "am335x_get_phy_control" },
	{ 0x6ce6e8d6, "of_alias_get_id" },
	{ 0x1243dd83, "of_usb_get_dr_mode_by_phy" },
	{ 0x31912bf8, "usb_phy_gen_create_phy" },
	{ 0x7c375e08, "device_set_wakeup_capable" },
	{ 0x137a017f, "device_wakeup_enable" },
	{ 0x6e0be10e, "device_set_wakeup_enable" },
	{ 0x8a709bcc, "usb_add_phy_dev" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "phy-am335x-control,usb-common,phy-generic");

MODULE_ALIAS("of:N*T*Cti,am335x-usb-phy");
MODULE_ALIAS("of:N*T*Cti,am335x-usb-phyC*");

MODULE_INFO(srcversion, "057A9203A7A0967D68E85E5");
