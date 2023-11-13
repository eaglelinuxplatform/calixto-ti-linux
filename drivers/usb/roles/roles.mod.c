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

SYMBOL_CRC(fwnode_usb_role_switch_get, 0x77153eec, "_gpl");
SYMBOL_CRC(usb_role_string, 0x39aa4888, "_gpl");
SYMBOL_CRC(usb_role_switch_find_by_fwnode, 0x37378509, "_gpl");
SYMBOL_CRC(usb_role_switch_get, 0xda833473, "_gpl");
SYMBOL_CRC(usb_role_switch_get_drvdata, 0x1690b503, "_gpl");
SYMBOL_CRC(usb_role_switch_get_role, 0xff42c374, "_gpl");
SYMBOL_CRC(usb_role_switch_put, 0xc9fd634a, "_gpl");
SYMBOL_CRC(usb_role_switch_register, 0x73817202, "_gpl");
SYMBOL_CRC(usb_role_switch_set_drvdata, 0x51a348cc, "_gpl");
SYMBOL_CRC(usb_role_switch_set_role, 0xd5474690, "_gpl");
SYMBOL_CRC(usb_role_switch_unregister, 0x2882d40e, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0x5a6d5863, "try_module_get" },
	{ 0x1697d536, "__class_create" },
	{ 0xee54f561, "dev_set_name" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xacaaba89, "device_unregister" },
	{ 0xca3ce6df, "class_destroy" },
	{ 0xa4d9aebd, "dev_fwnode" },
	{ 0x37a0cba, "kfree" },
	{ 0x5454e19a, "fwnode_connection_find_match" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x790e85a3, "fwnode_get_parent" },
	{ 0x19fb9b5f, "device_match_fwnode" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x2c6007e1, "put_device" },
	{ 0x1449535e, "module_put" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xc8d1d2, "device_register" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x40b51c05, "__sysfs_match_string" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xfd14fcdc, "fwnode_property_present" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x1504b38c, "kobject_uevent" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x7efebfd8, "fwnode_handle_put" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xc68ad178, "class_find_device" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7F2E2B287CC190D2D26A478");
