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
	{ 0xffc71f60, "iio_read_channel_processed" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x19d8a156, "of_match_device" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x347fb59d, "dev_get_regmap" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x80a9c02, "devm_iio_channel_get" },
	{ 0xc17d0db0, "devm_power_supply_register" },
	{ 0xd294a231, "platform_get_irq_byname" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0xd48f33, "omap_usb2_set_comparator" },
	{ 0xde775963, "devm_gpiod_get_index" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x6de7b70a, "power_supply_get_by_name" },
	{ 0x5aaa7b3f, "power_supply_get_property" },
	{ 0x15b6f0ae, "power_supply_put" },
	{ 0x7ca92e2b, "regmap_update_bits_base" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x95bd69d7, "power_supply_changed" },
	{ 0x1660b4d, "gpiod_set_value" },
	{ 0x4534861e, "regmap_read" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "industrialio,phy-omap-usb2");

MODULE_ALIAS("of:N*T*Cmotorola,mapphone-cpcap-charger");
MODULE_ALIAS("of:N*T*Cmotorola,mapphone-cpcap-chargerC*");

MODULE_INFO(srcversion, "E126BF6AB9BE4724D37E1E5");
