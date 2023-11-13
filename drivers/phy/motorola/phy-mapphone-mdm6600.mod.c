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
	{ 0xcb99963, "__platform_driver_register" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x732e56d8, "gpiod_set_value_cansleep" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xc2ad49c3, "pinctrl_pm_select_sleep_state" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x86b292ca, "phy_pm_runtime_get" },
	{ 0xb98aac63, "pinctrl_pm_select_default_state" },
	{ 0xce81539a, "phy_pm_runtime_put" },
	{ 0x803f76b3, "gpiod_get_array_value_cansleep" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0xc37335b0, "complete" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0xaa6831a, "gpiod_set_array_value_cansleep" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0x27a8b3d2, "gpiod_direction_input" },
	{ 0x3dabb96b, "gpiod_to_irq" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x2cb2870f, "__pm_runtime_use_autosuspend" },
	{ 0xcd538084, "__pm_runtime_idle" },
	{ 0xc5745645, "__pm_runtime_disable" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x301d3b5, "devm_gpiod_get" },
	{ 0x7b7eff61, "devm_gpiod_get_array" },
	{ 0x3ff02157, "pm_runtime_set_autosuspend_delay" },
	{ 0xe3ae1810, "pm_runtime_enable" },
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0x1255d9d2, "devm_phy_create" },
	{ 0x67da50dc, "__devm_of_phy_provider_register" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x9580c7ff, "__pm_runtime_suspend" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x4214047c, "of_phy_simple_xlate" },
	{ 0x4a90394f, "gpiod_get_value" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmotorola,mapphone-mdm6600");
MODULE_ALIAS("of:N*T*Cmotorola,mapphone-mdm6600C*");

MODULE_INFO(srcversion, "72869C4E6F96239DB5C82D3");
