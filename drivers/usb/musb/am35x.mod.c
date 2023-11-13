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
	{ 0x815588a6, "clk_enable" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x90d8af31, "platform_device_unregister" },
	{ 0x688c0055, "usb_phy_generic_unregister" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf0f95e51, "musb_readl" },
	{ 0x9d669763, "memcpy" },
	{ 0xeb03b389, "__raw_readsl" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x6af8c6dc, "musb_writel" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x2734197f, "musb_readb" },
	{ 0xb4a8834, "musb_writeb" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x83baf334, "usb_put_phy" },
	{ 0x34145292, "usb_get_phy" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf9a482f9, "msleep" },
	{ 0xcaf22e05, "musb_interrupt" },
	{ 0x92997ed8, "_printk" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x5b81f1cc, "clk_get" },
	{ 0x7a45ca08, "usb_phy_generic_register" },
	{ 0x5f754e5a, "memset" },
	{ 0x869bf511, "platform_device_register_full" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xdc974313, "musbhs_dma_controller_create" },
	{ 0x9c4f249d, "musbhs_dma_controller_destroy" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "phy-generic,musb_hdrc");


MODULE_INFO(srcversion, "CA67B47630719758448914C");
