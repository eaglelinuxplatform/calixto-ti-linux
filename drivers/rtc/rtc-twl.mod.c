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
	{ 0xf9722676, "twl_i2c_write" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xd6a91f54, "twl_i2c_read" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x183a46c2, "rtc_update_irq" },
	{ 0x8f01afd6, "twl6030_interrupt_mask" },
	{ 0x48ab7808, "platform_get_irq" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xc99e2a55, "twl_rev" },
	{ 0x9ec0e639, "twl6030_interrupt_unmask" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x7c375e08, "device_set_wakeup_capable" },
	{ 0x137a017f, "device_wakeup_enable" },
	{ 0x5e451552, "devm_rtc_device_register" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,twl4030-rtc");
MODULE_ALIAS("of:N*T*Cti,twl4030-rtcC*");

MODULE_INFO(srcversion, "DB3B6FD1B631E08AA9259AF");
