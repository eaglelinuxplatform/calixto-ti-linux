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
	{ 0x7ca92e2b, "regmap_update_bits_base" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x5aaa7b3f, "power_supply_get_property" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8c903796, "nvmem_device_find" },
	{ 0xc96fb674, "nvmem_device_read" },
	{ 0x5f754e5a, "memset" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x52842d82, "_dev_warn" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd294a231, "platform_get_irq_byname" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x84b183ae, "strncmp" },
	{ 0x347fb59d, "dev_get_regmap" },
	{ 0x4534861e, "regmap_read" },
	{ 0x80a9c02, "devm_iio_channel_get" },
	{ 0xc17d0db0, "devm_power_supply_register" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf18bebde, "dev_err_probe" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x95bd69d7, "power_supply_changed" },
	{ 0x1a733649, "_dev_emerg" },
	{ 0x56256e8a, "orderly_poweroff" },
	{ 0xb5431a6, "power_supply_get_drvdata" },
	{ 0x6de7b70a, "power_supply_get_by_name" },
	{ 0x15b6f0ae, "power_supply_put" },
	{ 0xbd3e180e, "power_supply_set_property" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xffc71f60, "iio_read_channel_processed" },
	{ 0x6a639cfa, "regmap_bulk_read" },
	{ 0x1eb64646, "div64_s64" },
	{ 0xe4ea4aab, "param_ops_bool" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Cmotorola,cpcap-battery");
MODULE_ALIAS("of:N*T*Cmotorola,cpcap-batteryC*");

MODULE_INFO(srcversion, "DB42A7673DE2C2172F95316");
