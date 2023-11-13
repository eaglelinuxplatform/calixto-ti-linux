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

SYMBOL_CRC(devm_hwmon_device_register_with_groups, 0x12f222b7, "_gpl");
SYMBOL_CRC(devm_hwmon_device_register_with_info, 0x10448f79, "_gpl");
SYMBOL_CRC(devm_hwmon_device_unregister, 0x3e5840b6, "_gpl");
SYMBOL_CRC(devm_hwmon_sanitize_name, 0x8d348eef, "_gpl");
SYMBOL_CRC(hwmon_device_register, 0xb4ee6798, "_gpl");
SYMBOL_CRC(hwmon_device_register_for_thermal, 0x91afde2c, "_gpl");
SYMBOL_CRC(hwmon_device_register_with_groups, 0xa9b3a47b, "_gpl");
SYMBOL_CRC(hwmon_device_register_with_info, 0x56ee9f65, "_gpl");
SYMBOL_CRC(hwmon_device_unregister, 0x083d96a2, "_gpl");
SYMBOL_CRC(hwmon_notify_event, 0x4656014a, "_gpl");
SYMBOL_CRC(hwmon_sanitize_name, 0xa95b5c77, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x97255bdf, "strlen" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0xe914e41e, "strcpy" },
	{ 0xd7d82541, "perf_trace_run_bpf_submit" },
	{ 0xac1c7622, "trace_event_buffer_reserve" },
	{ 0x3323213, "trace_event_buffer_commit" },
	{ 0x8dd4f313, "__trace_trigger_soft_disabled" },
	{ 0x4676d27, "trace_raw_output_prep" },
	{ 0xc4ea270a, "trace_event_printf" },
	{ 0x4ae4635, "trace_handle_return" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xc675b096, "sysfs_notify" },
	{ 0x4e7cbc7e, "kobject_uevent_env" },
	{ 0xa92900fc, "thermal_zone_device_update" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xacaaba89, "device_unregister" },
	{ 0xa24491bf, "ida_free" },
	{ 0xc080505, "devm_kstrdup" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x9574b7b2, "__class_register" },
	{ 0x92997ed8, "_printk" },
	{ 0xc787f3c5, "class_unregister" },
	{ 0xa54cea3b, "devres_release" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9a1dfd65, "strpbrk" },
	{ 0xa5684076, "ida_alloc_range" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xc8c63ab0, "device_property_present" },
	{ 0xee54f561, "dev_set_name" },
	{ 0xc8d1d2, "device_register" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x91d0d723, "devm_thermal_of_zone_register" },
	{ 0x4091ed3e, "devm_add_action" },
	{ 0xf969a542, "device_property_read_string" },
	{ 0x2c6007e1, "put_device" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x45962907, "devm_kfree" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xc9357994, "__devres_alloc_node" },
	{ 0x1f051c7b, "devres_add" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xe61a6643, "__current" },
	{ 0x3d9f21fe, "__cpu_online_mask" },
	{ 0xaa19e4aa, "_kstrtol" },
	{ 0x9e1b61bc, "trace_event_reg" },
	{ 0x74e895b3, "trace_event_raw_init" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "51E336FFEDBAE56FCD14281");
