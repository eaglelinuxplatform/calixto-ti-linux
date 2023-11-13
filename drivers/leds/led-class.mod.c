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

SYMBOL_CRC(devm_led_classdev_register_ext, 0xca68f39b, "_gpl");
SYMBOL_CRC(devm_led_classdev_unregister, 0x957ba3f1, "_gpl");
SYMBOL_CRC(devm_of_led_get, 0x7b4acbd0, "_gpl");
SYMBOL_CRC(led_classdev_register_ext, 0x2b8c3f0c, "_gpl");
SYMBOL_CRC(led_classdev_resume, 0xc58b50bd, "_gpl");
SYMBOL_CRC(led_classdev_suspend, 0x04b05f9e, "_gpl");
SYMBOL_CRC(led_classdev_unregister, 0x5259364d, "_gpl");
SYMBOL_CRC(led_put, 0xdb1455f1, "_gpl");
SYMBOL_CRC(of_led_get, 0x0660a6ae, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xdf08d4f4, "led_set_brightness_nopm" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x92b57248, "flush_work" },
	{ 0x1449535e, "module_put" },
	{ 0x2c6007e1, "put_device" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x1697d536, "__class_create" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x585b8c1f, "led_update_brightness" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x668b595, "_kstrtoul" },
	{ 0x83dd6206, "led_set_brightness" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xf5eb479b, "led_trigger_remove" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xca3ce6df, "class_destroy" },
	{ 0x4253aa7e, "down_write" },
	{ 0x1a402343, "led_trigger_set" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x89d1c5dc, "led_stop_software_blink" },
	{ 0xacaaba89, "device_unregister" },
	{ 0xabcda29e, "leds_list_lock" },
	{ 0xa54cea3b, "devres_release" },
	{ 0x4a239e8c, "led_compose_name" },
	{ 0x50c363fb, "fwnode_property_read_string" },
	{ 0xfd14fcdc, "fwnode_property_present" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xc68ad178, "class_find_device" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x72c2514d, "device_create_with_groups" },
	{ 0x94ae233f, "device_set_node" },
	{ 0x6f013ecd, "__init_rwsem" },
	{ 0x5fd8b89e, "led_init_core" },
	{ 0xeaa8de8e, "led_trigger_set_default" },
	{ 0x52842d82, "_dev_warn" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x446270c4, "device_match_name" },
	{ 0x24eb7e32, "leds_list" },
	{ 0xc9357994, "__devres_alloc_node" },
	{ 0x1f051c7b, "devres_add" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x6b0d3011, "__of_parse_phandle_with_args" },
	{ 0x5a6d5863, "try_module_get" },
	{ 0x2e0f1fe0, "device_match_of_node" },
	{ 0xba16d521, "led_trigger_read" },
	{ 0x5caaa461, "led_trigger_write" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8B06B50BEC627AAE65242A7");
