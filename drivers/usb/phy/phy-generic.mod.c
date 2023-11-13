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

SYMBOL_CRC(usb_gen_phy_init, 0x84662fbf, "_gpl");
SYMBOL_CRC(usb_gen_phy_shutdown, 0x77a082ca, "_gpl");
SYMBOL_CRC(usb_phy_gen_create_phy, 0x31912bf8, "_gpl");
SYMBOL_CRC(usb_phy_generic_register, 0x7a45ca08, "_gpl");
SYMBOL_CRC(usb_phy_generic_unregister, 0x688c0055, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x90d8af31, "platform_device_unregister" },
	{ 0x732e56d8, "gpiod_set_value_cansleep" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x9ed8ac9c, "regulator_disable" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0x8ebf658, "of_find_property" },
	{ 0xd236e21b, "devm_gpiod_get_optional" },
	{ 0x9f662a0a, "gpiod_direction_output" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x67b00a79, "devm_clk_get" },
	{ 0x1aba37c0, "devm_regulator_get" },
	{ 0xc89580d9, "devm_regulator_get_exclusive" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xf18bebde, "dev_err_probe" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xcb99963, "__platform_driver_register" },
	{ 0xe9b22a6a, "usb_remove_phy" },
	{ 0x3dabb96b, "gpiod_to_irq" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0x4a90394f, "gpiod_get_value" },
	{ 0x8a709bcc, "usb_add_phy_dev" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xfe0bbbd2, "atomic_notifier_call_chain" },
	{ 0x5f754e5a, "memset" },
	{ 0x869bf511, "platform_device_register_full" },
	{ 0x53d71abb, "regulator_enable" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x1d0a55f1, "regulator_set_current_limit" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cusb-nop-xceiv");
MODULE_ALIAS("of:N*T*Cusb-nop-xceivC*");

MODULE_INFO(srcversion, "7339AA7C52EF8696727DD10");
