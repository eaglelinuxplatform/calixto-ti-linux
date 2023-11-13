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
	{ 0x1212c326, "i2c_register_driver" },
	{ 0xd3e0fb5b, "i2c_smbus_read_byte_data" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x593a1daa, "i2c_smbus_write_byte_data" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x1826c1bb, "iio_device_unregister" },
	{ 0xc5745645, "__pm_runtime_disable" },
	{ 0xf866b105, "__pm_runtime_set_status" },
	{ 0x91636500, "iio_triggered_buffer_cleanup" },
	{ 0x4fabd742, "iio_trigger_unregister" },
	{ 0x3267ee91, "i2c_smbus_read_i2c_block_data_or_emulated" },
	{ 0x518dcf66, "iio_push_to_buffers" },
	{ 0xf65ba1a5, "iio_trigger_notify_done" },
	{ 0x87e32bcc, "iio_push_event" },
	{ 0xce96afe6, "iio_get_time_ns" },
	{ 0xbb03195a, "iio_trigger_poll" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xaec8450f, "regulator_bulk_disable" },
	{ 0x6196a6ec, "i2c_del_driver" },
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x9580c7ff, "__pm_runtime_suspend" },
	{ 0xf2a95050, "devm_iio_device_alloc" },
	{ 0xc4ccdd64, "devm_regulator_bulk_get" },
	{ 0x1113200c, "regulator_bulk_enable" },
	{ 0x4091ed3e, "devm_add_action" },
	{ 0xf9a482f9, "msleep" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0xbc56964a, "iio_device_id" },
	{ 0x5e18f96b, "__devm_iio_trigger_alloc" },
	{ 0xe842b26, "iio_trigger_register" },
	{ 0x51943974, "get_device" },
	{ 0x47c9369a, "__module_get" },
	{ 0x820ea0de, "iio_triggered_buffer_setup_ext" },
	{ 0xe3ae1810, "pm_runtime_enable" },
	{ 0x3ff02157, "pm_runtime_set_autosuspend_delay" },
	{ 0x2cb2870f, "__pm_runtime_use_autosuspend" },
	{ 0x6d38e373, "__iio_device_register" },
	{ 0xf18bebde, "dev_err_probe" },
	{ 0xe79f146b, "iio_read_mount_matrix" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x2e354057, "iio_buffer_enabled" },
	{ 0xd00270c6, "i2c_smbus_read_word_data" },
	{ 0xabdc2376, "iio_show_mount_matrix" },
	{ 0x7d9e3f0c, "iio_read_const_attr" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("of:N*T*Ckionix,kxcjk1013");
MODULE_ALIAS("of:N*T*Ckionix,kxcjk1013C*");
MODULE_ALIAS("of:N*T*Ckionix,kxcj91008");
MODULE_ALIAS("of:N*T*Ckionix,kxcj91008C*");
MODULE_ALIAS("of:N*T*Ckionix,kxtj21009");
MODULE_ALIAS("of:N*T*Ckionix,kxtj21009C*");
MODULE_ALIAS("of:N*T*Ckionix,kxtf9");
MODULE_ALIAS("of:N*T*Ckionix,kxtf9C*");
MODULE_ALIAS("of:N*T*Ckionix,kx023-1025");
MODULE_ALIAS("of:N*T*Ckionix,kx023-1025C*");
MODULE_ALIAS("i2c:kxcjk1013");
MODULE_ALIAS("i2c:kxcj91008");
MODULE_ALIAS("i2c:kxtj21009");
MODULE_ALIAS("i2c:kxtf9");
MODULE_ALIAS("i2c:kx023-1025");
MODULE_ALIAS("i2c:SMO8500");
MODULE_ALIAS("acpi*:KXCJ1013:*");
MODULE_ALIAS("acpi*:KXCJ1008:*");
MODULE_ALIAS("acpi*:KXCJ9000:*");
MODULE_ALIAS("acpi*:KIOX0008:*");
MODULE_ALIAS("acpi*:KIOX0009:*");
MODULE_ALIAS("acpi*:KIOX000A:*");
MODULE_ALIAS("acpi*:KIOX010A:*");
MODULE_ALIAS("acpi*:KIOX020A:*");
MODULE_ALIAS("acpi*:KXTJ1009:*");
MODULE_ALIAS("acpi*:KXJ2109:*");
MODULE_ALIAS("acpi*:SMO8500:*");

MODULE_INFO(srcversion, "7756D4F4F46291BC2DB968B");
