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
	{ 0xc5745645, "__pm_runtime_disable" },
	{ 0xf866b105, "__pm_runtime_set_status" },
	{ 0x11016feb, "regmap_get_device" },
	{ 0x6ce4ec1b, "regmap_write" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x7ca92e2b, "regmap_update_bits_base" },
	{ 0x4534861e, "regmap_read" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x6196a6ec, "i2c_del_driver" },
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x9580c7ff, "__pm_runtime_suspend" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf2a95050, "devm_iio_device_alloc" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xf4ec3d1b, "__devm_regmap_init_i2c" },
	{ 0xe3ae1810, "pm_runtime_enable" },
	{ 0x3ff02157, "pm_runtime_set_autosuspend_delay" },
	{ 0x2cb2870f, "__pm_runtime_use_autosuspend" },
	{ 0x6d38e373, "__iio_device_register" },
	{ 0x869b215e, "pm_runtime_force_suspend" },
	{ 0xcc37b4f7, "pm_runtime_force_resume" },
	{ 0x7d9e3f0c, "iio_read_const_attr" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Cisl,isl29028");
MODULE_ALIAS("of:N*T*Cisl,isl29028C*");
MODULE_ALIAS("of:N*T*Cisil,isl29028");
MODULE_ALIAS("of:N*T*Cisil,isl29028C*");
MODULE_ALIAS("of:N*T*Cisil,isl29030");
MODULE_ALIAS("of:N*T*Cisil,isl29030C*");
MODULE_ALIAS("i2c:isl29028");
MODULE_ALIAS("i2c:isl29030");

MODULE_INFO(srcversion, "7B134E2F033E8AD04B46F7C");
