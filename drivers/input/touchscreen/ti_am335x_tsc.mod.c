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
	{ 0xcb99963, "__platform_driver_register" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x385dad76, "am335x_tsc_se_set_cache" },
	{ 0x8374079f, "pm_relax" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x3bc709f, "pm_stay_awake" },
	{ 0xaacc9e27, "sort" },
	{ 0xfea15b62, "input_event" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x1e3555c7, "input_allocate_device" },
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x7c375e08, "device_set_wakeup_capable" },
	{ 0x137a017f, "device_wakeup_enable" },
	{ 0x4158b409, "dev_pm_set_wake_irq" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x65f6c7ea, "input_free_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x4add0103, "input_set_abs_params" },
	{ 0xf70284f2, "input_register_device" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xbea1de1d, "dev_pm_clear_wake_irq" },
	{ 0x723ae2b4, "device_wakeup_disable" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x52842d82, "_dev_warn" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x6f379d9, "am335x_tsc_se_clr" },
	{ 0x1ef5f828, "input_unregister_device" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "ti_am335x_tscadc");

MODULE_ALIAS("of:N*T*Cti,am3359-tsc");
MODULE_ALIAS("of:N*T*Cti,am3359-tscC*");

MODULE_INFO(srcversion, "631FCF83B4F2C4E20238EF6");
