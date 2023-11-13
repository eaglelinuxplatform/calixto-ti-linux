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

SYMBOL_CRC(bmp280_common_probe, 0xd7865cc2, "");
SYMBOL_CRC(bmp280_dev_pm_ops, 0x1e35615d, "");
SYMBOL_CRC(bmp180_regmap_config, 0x408510d5, "");
SYMBOL_CRC(bmp280_regmap_config, 0xaa03cdb7, "");
SYMBOL_CRC(bmp380_regmap_config, 0x45517b56, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x6ce4ec1b, "regmap_write" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0x1660b4d, "gpiod_set_value" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xc37335b0, "complete" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x3ff02157, "pm_runtime_set_autosuspend_delay" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xd236e21b, "devm_gpiod_get_optional" },
	{ 0xf866b105, "__pm_runtime_set_status" },
	{ 0x945eb81c, "add_device_randomness" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xe3ae1810, "pm_runtime_enable" },
	{ 0xaec8450f, "regulator_bulk_disable" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x4091ed3e, "devm_add_action" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x7b9a90c4, "irq_get_irq_data" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x376dd2cb, "__devm_iio_device_register" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xf2a95050, "devm_iio_device_alloc" },
	{ 0x52842d82, "_dev_warn" },
	{ 0xd1f2c2c7, "regulator_bulk_set_supply_names" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x1113200c, "regulator_bulk_enable" },
	{ 0xc4ccdd64, "devm_regulator_bulk_get" },
	{ 0x1eb64646, "div64_s64" },
	{ 0x4534861e, "regmap_read" },
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0x6a639cfa, "regmap_bulk_read" },
	{ 0x7ca92e2b, "regmap_update_bits_base" },
	{ 0xf18bebde, "dev_err_probe" },
	{ 0x9580c7ff, "__pm_runtime_suspend" },
	{ 0x2cb2870f, "__pm_runtime_use_autosuspend" },
	{ 0xc5745645, "__pm_runtime_disable" },
	{ 0xcd538084, "__pm_runtime_idle" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "4A82CD13BEA9DCF391C82B9");
