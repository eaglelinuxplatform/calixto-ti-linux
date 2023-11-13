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
	{ 0x91187868, "platform_driver_unregister" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x19d8a156, "of_match_device" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x347fb59d, "dev_get_regmap" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x1aba37c0, "devm_regulator_get" },
	{ 0x53d71abb, "regulator_enable" },
	{ 0x1255d9d2, "devm_phy_create" },
	{ 0x67da50dc, "__devm_of_phy_provider_register" },
	{ 0x12eef294, "devm_pinctrl_get" },
	{ 0x81da5304, "pinctrl_lookup_state" },
	{ 0xde775963, "devm_gpiod_get_index" },
	{ 0x80a9c02, "devm_iio_channel_get" },
	{ 0xefb5e364, "iio_get_channel_type" },
	{ 0xd294a231, "platform_get_irq_byname" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0x8a709bcc, "usb_add_phy_dev" },
	{ 0x84851077, "pinctrl_select_state" },
	{ 0x9ed8ac9c, "regulator_disable" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x4214047c, "of_phy_simple_xlate" },
	{ 0x1660b4d, "gpiod_set_value" },
	{ 0x7ca92e2b, "regmap_update_bits_base" },
	{ 0x9492220, "musb_mailbox" },
	{ 0xe9b22a6a, "usb_remove_phy" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x4534861e, "regmap_read" },
	{ 0xffc71f60, "iio_read_channel_processed" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "industrialio,musb_hdrc");

MODULE_ALIAS("of:N*T*Cmotorola,cpcap-usb-phy");
MODULE_ALIAS("of:N*T*Cmotorola,cpcap-usb-phyC*");
MODULE_ALIAS("of:N*T*Cmotorola,mapphone-cpcap-usb-phy");
MODULE_ALIAS("of:N*T*Cmotorola,mapphone-cpcap-usb-phyC*");

MODULE_INFO(srcversion, "A352B33E23A5C590EAFDA89");
