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
	{ 0x1212c326, "i2c_register_driver" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xd3e0fb5b, "i2c_smbus_read_byte_data" },
	{ 0x593a1daa, "i2c_smbus_write_byte_data" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x732e56d8, "gpiod_set_value_cansleep" },
	{ 0x6196a6ec, "i2c_del_driver" },
	{ 0x5f754e5a, "memset" },
	{ 0x2f4a0dbf, "i2c_transfer_buffer_flags" },
	{ 0xcf9b558d, "touchscreen_set_mt_pos" },
	{ 0xfea15b62, "input_event" },
	{ 0x2dbb0fa9, "input_mt_report_slot_state" },
	{ 0x169414f4, "input_mt_get_slot_by_key" },
	{ 0x2e5c150d, "input_mt_sync_frame" },
	{ 0x92aa0907, "gpiod_get_value_cansleep" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5359ed80, "input_mt_assign_slots" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xdf36b4fe, "input_device_enabled" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xe5bf01a, "device_get_match_data" },
	{ 0xe08ffaa9, "devm_input_allocate_device" },
	{ 0x87249862, "input_set_capability" },
	{ 0x425e5fb7, "touchscreen_parse_properties" },
	{ 0x9839cd76, "input_mt_init_slots" },
	{ 0x301d3b5, "devm_gpiod_get" },
	{ 0xd236e21b, "devm_gpiod_get_optional" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0xf70284f2, "input_register_device" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cpixcir,pixcir_ts");
MODULE_ALIAS("of:N*T*Cpixcir,pixcir_tsC*");
MODULE_ALIAS("of:N*T*Cpixcir,pixcir_tangoc");
MODULE_ALIAS("of:N*T*Cpixcir,pixcir_tangocC*");
MODULE_ALIAS("i2c:pixcir_ts");
MODULE_ALIAS("i2c:pixcir_tangoc");

MODULE_INFO(srcversion, "7E282F0A09D52AD7793A6B7");
