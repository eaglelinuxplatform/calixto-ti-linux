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
	{ 0xcb99963, "__platform_driver_register" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x6122337, "atomic_notifier_chain_unregister" },
	{ 0xc3595f10, "power_supply_unregister" },
	{ 0x1660b4d, "gpiod_set_value" },
	{ 0xb5431a6, "power_supply_get_drvdata" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x301d3b5, "devm_gpiod_get" },
	{ 0x2a6ef5b0, "devm_usb_get_phy_by_phandle" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5cecd801, "power_supply_register" },
	{ 0x33e9e0a2, "atomic_notifier_chain_register" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x4a3bf7c2, "devm_usb_get_phy" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0xa900449, "usb_gadget_disconnect" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x95bd69d7, "power_supply_changed" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x32218c3d, "usb_gadget_connect" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "udc-core");

MODULE_ALIAS("of:N*T*Cnxp,isp1704");
MODULE_ALIAS("of:N*T*Cnxp,isp1704C*");
MODULE_ALIAS("of:N*T*Cnxp,isp1707");
MODULE_ALIAS("of:N*T*Cnxp,isp1707C*");

MODULE_INFO(srcversion, "5261CFC53E10245CB17DE0C");
