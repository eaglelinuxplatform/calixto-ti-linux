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
	{ 0x53d71abb, "regulator_enable" },
	{ 0x732e56d8, "gpiod_set_value_cansleep" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x9ed8ac9c, "regulator_disable" },
	{ 0x593a1daa, "i2c_smbus_write_byte_data" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4a90394f, "gpiod_get_value" },
	{ 0xd3e0fb5b, "i2c_smbus_read_byte_data" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x49970de8, "finish_wait" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x3267ee91, "i2c_smbus_read_i2c_block_data_or_emulated" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xce96afe6, "iio_get_time_ns" },
	{ 0x518dcf66, "iio_push_to_buffers" },
	{ 0xf65ba1a5, "iio_trigger_notify_done" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x637493f3, "__wake_up" },
	{ 0x6196a6ec, "i2c_del_driver" },
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x9580c7ff, "__pm_runtime_suspend" },
	{ 0xd236e21b, "devm_gpiod_get_optional" },
	{ 0xb5dd1bec, "gpiod_set_consumer_name" },
	{ 0xf2a95050, "devm_iio_device_alloc" },
	{ 0xe79f146b, "iio_read_mount_matrix" },
	{ 0xe5bf01a, "device_get_match_data" },
	{ 0x1aba37c0, "devm_regulator_get" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x820ea0de, "iio_triggered_buffer_setup_ext" },
	{ 0x6d38e373, "__iio_device_register" },
	{ 0xf866b105, "__pm_runtime_set_status" },
	{ 0xe3ae1810, "pm_runtime_enable" },
	{ 0x3ff02157, "pm_runtime_set_autosuspend_delay" },
	{ 0x2cb2870f, "__pm_runtime_use_autosuspend" },
	{ 0xcd538084, "__pm_runtime_idle" },
	{ 0x3dabb96b, "gpiod_to_irq" },
	{ 0x91636500, "iio_triggered_buffer_cleanup" },
	{ 0xc5745645, "__pm_runtime_disable" },
	{ 0x1826c1bb, "iio_device_unregister" },
	{ 0x869b215e, "pm_runtime_force_suspend" },
	{ 0xcc37b4f7, "pm_runtime_force_resume" },
	{ 0xabdc2376, "iio_show_mount_matrix" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("of:N*T*Casahi-kasei,ak8975");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak8975C*");
MODULE_ALIAS("of:N*T*Cak8975");
MODULE_ALIAS("of:N*T*Cak8975C*");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak8963");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak8963C*");
MODULE_ALIAS("of:N*T*Cak8963");
MODULE_ALIAS("of:N*T*Cak8963C*");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak09911");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak09911C*");
MODULE_ALIAS("of:N*T*Cak09911");
MODULE_ALIAS("of:N*T*Cak09911C*");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak09912");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak09912C*");
MODULE_ALIAS("of:N*T*Cak09912");
MODULE_ALIAS("of:N*T*Cak09912C*");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak09916");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak09916C*");
MODULE_ALIAS("of:N*T*Cak09916");
MODULE_ALIAS("of:N*T*Cak09916C*");
MODULE_ALIAS("i2c:ak8975");
MODULE_ALIAS("i2c:ak8963");
MODULE_ALIAS("i2c:AK8963");
MODULE_ALIAS("i2c:ak09911");
MODULE_ALIAS("i2c:ak09912");
MODULE_ALIAS("i2c:ak09916");
MODULE_ALIAS("acpi*:AK8975:*");
MODULE_ALIAS("acpi*:AK8963:*");
MODULE_ALIAS("acpi*:INVN6500:*");
MODULE_ALIAS("acpi*:AK009911:*");
MODULE_ALIAS("acpi*:AK09911:*");
MODULE_ALIAS("acpi*:AKM9911:*");
MODULE_ALIAS("acpi*:AK09912:*");

MODULE_INFO(srcversion, "A68F8BEA41D953A092D77E1");
