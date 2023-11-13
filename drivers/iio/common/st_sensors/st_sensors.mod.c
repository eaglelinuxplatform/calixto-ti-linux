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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(st_sensors_debugfs_reg_access, 0x717b2b21, "");
SYMBOL_CRC(st_sensors_dev_name_probe, 0x8978a261, "");
SYMBOL_CRC(st_sensors_get_settings_index, 0xa1b1e59a, "");
SYMBOL_CRC(st_sensors_init_sensor, 0x6de56ed4, "");
SYMBOL_CRC(st_sensors_power_enable, 0xa1e4b3fc, "");
SYMBOL_CRC(st_sensors_read_info_raw, 0x7f80fb78, "");
SYMBOL_CRC(st_sensors_set_axis_enable, 0xea1dda4e, "");
SYMBOL_CRC(st_sensors_set_dataready_irq, 0x0aeaf54c, "");
SYMBOL_CRC(st_sensors_set_enable, 0xf0481481, "");
SYMBOL_CRC(st_sensors_set_fullscale_by_gain, 0xd24c63f8, "");
SYMBOL_CRC(st_sensors_set_odr, 0x3cd31cde, "");
SYMBOL_CRC(st_sensors_sysfs_sampling_frequency_avail, 0xc9c278a7, "");
SYMBOL_CRC(st_sensors_sysfs_scale_avail, 0xebc5364d, "");
SYMBOL_CRC(st_sensors_verify_id, 0x2e4d571c, "");
SYMBOL_CRC(st_sensors_trigger_handler, 0x074d7047, "");
SYMBOL_CRC(st_sensors_allocate_trigger, 0xdaef8463, "");
SYMBOL_CRC(st_sensors_validate_device, 0x428977e4, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x53d71abb, "regulator_enable" },
	{ 0xc8c63ab0, "device_property_present" },
	{ 0x6ce4ec1b, "regmap_write" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x518dcf66, "iio_push_to_buffers" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xa4d9aebd, "dev_fwnode" },
	{ 0x4fddcca4, "iio_device_release_direct_mode" },
	{ 0x37a0cba, "kfree" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x47c9369a, "__module_get" },
	{ 0x51943974, "get_device" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xcf1ab7a4, "device_property_read_u32_array" },
	{ 0x1aba37c0, "devm_regulator_get" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x4091ed3e, "devm_add_action" },
	{ 0xfdfafefe, "iio_device_claim_direct_mode" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x7b9a90c4, "irq_get_irq_data" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xae722ed9, "iio_trigger_using_own" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x52842d82, "_dev_warn" },
	{ 0xe5bf01a, "device_get_match_data" },
	{ 0x9a9a61bd, "devm_iio_trigger_register" },
	{ 0xe3777d46, "iio_trigger_poll_chained" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xce96afe6, "iio_get_time_ns" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xeea0399, "strscpy" },
	{ 0x4534861e, "regmap_read" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x6a639cfa, "regmap_bulk_read" },
	{ 0xc8e173ed, "_find_next_bit_le" },
	{ 0x7ca92e2b, "regmap_update_bits_base" },
	{ 0x9ed8ac9c, "regulator_disable" },
	{ 0xf18bebde, "dev_err_probe" },
	{ 0xf65ba1a5, "iio_trigger_notify_done" },
	{ 0x5e18f96b, "__devm_iio_trigger_alloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "47B0FD9F24BB63ACFAE9588");
