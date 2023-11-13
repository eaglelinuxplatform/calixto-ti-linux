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
	{ 0x1826c1bb, "iio_device_unregister" },
	{ 0x7ca92e2b, "regmap_update_bits_base" },
	{ 0x52842d82, "_dev_warn" },
	{ 0xa0edc8bc, "kthread_stop" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x4534861e, "regmap_read" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0xce96afe6, "iio_get_time_ns" },
	{ 0xc8e173ed, "_find_next_bit_le" },
	{ 0x518dcf66, "iio_push_to_buffers" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x6ce4ec1b, "regmap_write" },
	{ 0x26f6b499, "iio_str_to_fixpoint" },
	{ 0x20ce344a, "iio_format_value" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xbc56964a, "iio_device_id" },
	{ 0xf1908dde, "kthread_create_on_node" },
	{ 0xe4296f92, "wake_up_process" },
	{ 0x6196a6ec, "i2c_del_driver" },
	{ 0x2e354057, "iio_buffer_enabled" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xf2a95050, "devm_iio_device_alloc" },
	{ 0xf4ec3d1b, "__devm_regmap_init_i2c" },
	{ 0x5ec1a11d, "of_device_get_match_data" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xa43b942c, "devm_iio_kfifo_buffer_setup_ext" },
	{ 0x6d38e373, "__iio_device_register" },
	{ 0x7d9e3f0c, "iio_read_const_attr" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "industrialio,kfifo_buf");

MODULE_ALIAS("of:N*T*Cti,ina219");
MODULE_ALIAS("of:N*T*Cti,ina219C*");
MODULE_ALIAS("of:N*T*Cti,ina220");
MODULE_ALIAS("of:N*T*Cti,ina220C*");
MODULE_ALIAS("of:N*T*Cti,ina226");
MODULE_ALIAS("of:N*T*Cti,ina226C*");
MODULE_ALIAS("of:N*T*Cti,ina230");
MODULE_ALIAS("of:N*T*Cti,ina230C*");
MODULE_ALIAS("of:N*T*Cti,ina231");
MODULE_ALIAS("of:N*T*Cti,ina231C*");
MODULE_ALIAS("i2c:ina219");
MODULE_ALIAS("i2c:ina220");
MODULE_ALIAS("i2c:ina226");
MODULE_ALIAS("i2c:ina230");
MODULE_ALIAS("i2c:ina231");

MODULE_INFO(srcversion, "24C8E30049AD66253B17172");
