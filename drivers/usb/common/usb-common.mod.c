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

SYMBOL_CRC(of_usb_get_dr_mode_by_phy, 0x1243dd83, "_gpl");
SYMBOL_CRC(of_usb_host_tpl_support, 0xd43b197c, "_gpl");
SYMBOL_CRC(of_usb_update_otg_caps, 0x76ba06d6, "_gpl");
SYMBOL_CRC(usb_debug_root, 0x940112ad, "_gpl");
SYMBOL_CRC(usb_decode_interval, 0x00d4c500, "_gpl");
SYMBOL_CRC(usb_ep_type_string, 0x1a146ec3, "_gpl");
SYMBOL_CRC(usb_get_dr_mode, 0x552626c4, "_gpl");
SYMBOL_CRC(usb_get_maximum_speed, 0x5dbb64d6, "_gpl");
SYMBOL_CRC(usb_get_maximum_ssp_rate, 0x50cab72c, "_gpl");
SYMBOL_CRC(usb_get_role_switch_default_mode, 0x337a028d, "_gpl");
SYMBOL_CRC(usb_of_get_companion_dev, 0xb2521fe8, "_gpl");
SYMBOL_CRC(usb_otg_state_string, 0x2f0d9053, "_gpl");
SYMBOL_CRC(usb_speed_string, 0x77ae495d, "_gpl");
SYMBOL_CRC(usb_state_string, 0x4de17ab3, "_gpl");
SYMBOL_CRC(usb_decode_ctrl, 0x57a231cc, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0x7535ef29, "of_find_device_by_node" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x92997ed8, "_printk" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x6b0d3011, "__of_parse_phandle_with_args" },
	{ 0xf969a542, "device_property_read_string" },
	{ 0x8e9e820e, "debugfs_remove" },
	{ 0x2513ff15, "of_property_read_string" },
	{ 0x8ebf658, "of_find_property" },
	{ 0x514209cc, "of_device_is_available" },
	{ 0xc648190a, "of_find_node_with_property" },
	{ 0xd35f75a1, "match_string" },
	{ 0xeca42068, "debugfs_create_dir" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0AAD966F3B30067D0515FD9");
