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
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x8f01afd6, "twl6030_interrupt_mask" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xa6b63ac, "regulator_put" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0xd6a91f54, "twl_i2c_read" },
	{ 0xc675b096, "sysfs_notify" },
	{ 0x53d71abb, "regulator_enable" },
	{ 0x9492220, "musb_mailbox" },
	{ 0x9ed8ac9c, "regulator_disable" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf9722676, "twl_i2c_write" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x48ab7808, "platform_get_irq" },
	{ 0xd48f33, "omap_usb2_set_comparator" },
	{ 0x9b8ebeb3, "regulator_get" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9ec0e639, "twl6030_interrupt_unmask" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "musb_hdrc,phy-omap-usb2");

MODULE_ALIAS("of:N*T*Cti,twl6030-usb");
MODULE_ALIAS("of:N*T*Cti,twl6030-usbC*");

MODULE_INFO(srcversion, "E55DEB1398AEE41F822E844");
