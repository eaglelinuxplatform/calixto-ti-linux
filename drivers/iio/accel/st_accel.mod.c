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

SYMBOL_CRC(st_accel_common_probe, 0xe1f000f8, "");
SYMBOL_CRC(st_accel_get_settings, 0x5d4fbc45, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x7f80fb78, "st_sensors_read_info_raw" },
	{ 0xea1dda4e, "st_sensors_set_axis_enable" },
	{ 0x2e4d571c, "st_sensors_verify_id" },
	{ 0xebc5364d, "st_sensors_sysfs_scale_avail" },
	{ 0x8178fbbd, "devm_iio_triggered_buffer_setup_ext" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x3cd31cde, "st_sensors_set_odr" },
	{ 0xa1b1e59a, "st_sensors_get_settings_index" },
	{ 0x717b2b21, "st_sensors_debugfs_reg_access" },
	{ 0xabdc2376, "iio_show_mount_matrix" },
	{ 0x6de56ed4, "st_sensors_init_sensor" },
	{ 0x376dd2cb, "__devm_iio_device_register" },
	{ 0xe79f146b, "iio_read_mount_matrix" },
	{ 0x428977e4, "st_sensors_validate_device" },
	{ 0xd24c63f8, "st_sensors_set_fullscale_by_gain" },
	{ 0xdaef8463, "st_sensors_allocate_trigger" },
	{ 0xc9c278a7, "st_sensors_sysfs_sampling_frequency_avail" },
	{ 0x74d7047, "st_sensors_trigger_handler" },
	{ 0xf0481481, "st_sensors_set_enable" },
	{ 0xaeaf54c, "st_sensors_set_dataready_irq" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "st_sensors,industrialio-triggered-buffer,industrialio");


MODULE_INFO(srcversion, "D827983EE1D57AC48385776");
