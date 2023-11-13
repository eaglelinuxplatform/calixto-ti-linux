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

SYMBOL_CRC(usb_gadget_get_string, 0x4beb505d, "_gpl");
SYMBOL_CRC(usb_validate_langid, 0x0c589aba, "_gpl");
SYMBOL_CRC(usb_assign_descriptors, 0x58abdfaf, "_gpl");
SYMBOL_CRC(usb_copy_descriptors, 0x2e09263f, "_gpl");
SYMBOL_CRC(usb_descriptor_fillbuf, 0xd2ea2134, "_gpl");
SYMBOL_CRC(usb_free_all_descriptors, 0xf149391d, "_gpl");
SYMBOL_CRC(usb_gadget_config_buf, 0xf474a207, "_gpl");
SYMBOL_CRC(usb_otg_descriptor_alloc, 0x2d56b5cb, "_gpl");
SYMBOL_CRC(usb_otg_descriptor_init, 0xa6130f7d, "_gpl");
SYMBOL_CRC(usb_ep_autoconfig, 0xb76cb41a, "_gpl");
SYMBOL_CRC(usb_ep_autoconfig_release, 0x914d5fba, "_gpl");
SYMBOL_CRC(usb_ep_autoconfig_reset, 0x19ba66a6, "_gpl");
SYMBOL_CRC(usb_ep_autoconfig_ss, 0x24d47b63, "_gpl");
SYMBOL_CRC(config_ep_by_speed, 0x1a63f58d, "_gpl");
SYMBOL_CRC(config_ep_by_speed_and_alt, 0x4099dbce, "_gpl");
SYMBOL_CRC(usb_add_config, 0x9b49a692, "_gpl");
SYMBOL_CRC(usb_add_config_only, 0xc50ca9b1, "_gpl");
SYMBOL_CRC(usb_add_function, 0x9f59a5e1, "_gpl");
SYMBOL_CRC(usb_composite_overwrite_options, 0x13f41526, "_gpl");
SYMBOL_CRC(usb_composite_probe, 0x7304a3c4, "_gpl");
SYMBOL_CRC(usb_composite_setup_continue, 0xae422ab1, "_gpl");
SYMBOL_CRC(usb_composite_unregister, 0x5207f397, "_gpl");
SYMBOL_CRC(usb_function_activate, 0x1be1ebad, "_gpl");
SYMBOL_CRC(usb_function_deactivate, 0xe4ca932f, "_gpl");
SYMBOL_CRC(usb_gstrings_attach, 0x0e6b0291, "_gpl");
SYMBOL_CRC(usb_interface_id, 0x73901f82, "_gpl");
SYMBOL_CRC(usb_remove_function, 0x3dbb3d3e, "_gpl");
SYMBOL_CRC(usb_string_id, 0x63f04b6a, "_gpl");
SYMBOL_CRC(usb_string_ids_n, 0x18a3c90f, "_gpl");
SYMBOL_CRC(usb_string_ids_tab, 0xd0fb2b7d, "_gpl");
SYMBOL_CRC(usb_function_register, 0x4398cb52, "_gpl");
SYMBOL_CRC(usb_function_unregister, 0xb9b5f687, "_gpl");
SYMBOL_CRC(usb_get_function, 0x87f8dfa2, "_gpl");
SYMBOL_CRC(usb_get_function_instance, 0x769ec230, "_gpl");
SYMBOL_CRC(usb_put_function, 0xca08dc5b, "_gpl");
SYMBOL_CRC(usb_put_function_instance, 0xf248f58c, "_gpl");
SYMBOL_CRC(usb_os_desc_prepare_interf_dir, 0x6f7cfc84, "");
SYMBOL_CRC(unregister_gadget_item, 0x82c664ac, "_gpl");
SYMBOL_CRC(alloc_ep_req, 0x910e55f7, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe914e41e, "strcpy" },
	{ 0x5a6d5863, "try_module_get" },
	{ 0xb789fb11, "config_group_init" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8087713e, "usb_gadget_check_config" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xb527aa34, "usb_gadget_ep_match_desc" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x94565d24, "usb_ep_free_request" },
	{ 0x662a132d, "configfs_unregister_subsystem" },
	{ 0xf58ae785, "usb_gadget_set_selfpowered" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x92997ed8, "_printk" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x56d5cfba, "usb_gadget_vbus_draw" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0xf1ac9a3e, "config_item_set_name" },
	{ 0x1449535e, "module_put" },
	{ 0x9df10ab5, "usb_ep_dequeue" },
	{ 0xa64a9908, "device_create_file" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xaae0686e, "configfs_register_subsystem" },
	{ 0x4d0e8846, "init_uts_ns" },
	{ 0x9449eb2a, "config_group_init_type_name" },
	{ 0x2d094274, "usb_gadget_activate" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x84b183ae, "strncmp" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x11348529, "usb_gadget_clear_selfpowered" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0x5f754e5a, "memset" },
	{ 0x52842d82, "_dev_warn" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x59b57e01, "usb_gadget_set_state" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe9140521, "usb_ep_alloc_request" },
	{ 0xd1f308c9, "usb_gadget_unregister_driver" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xda1497ce, "config_item_init_type_name" },
	{ 0xbfe13d19, "config_item_put" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0x7ee4256e, "usb_gadget_register_driver_owner" },
	{ 0xc848d8dc, "usb_ep_queue" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x97255bdf, "strlen" },
	{ 0x4d1dc63, "usb_gadget_deactivate" },
	{ 0xd37e9c2, "_dev_printk" },
	{ 0x349cba85, "strchr" },
	{ 0x97adb487, "utf8s_to_utf16s" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x214a0676, "device_remove_file" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "udc-core,usb-common");


MODULE_INFO(srcversion, "265A57F75A8EE4F2735EED6");
