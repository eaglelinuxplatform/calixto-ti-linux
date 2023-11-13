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
	{ 0x7ca92e2b, "regmap_update_bits_base" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x6a87926e, "rproc_report_crash" },
	{ 0xdf2d8476, "rproc_del" },
	{ 0x65585868, "rproc_free" },
	{ 0xa02a3e38, "of_reserved_mem_device_release" },
	{ 0xc37335b0, "complete" },
	{ 0xf40922e8, "rproc_vq_interrupt" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x7b67970f, "devm_reset_control_array_get" },
	{ 0x2513ff15, "of_property_read_string" },
	{ 0xc6408e13, "dma_set_coherent_mask" },
	{ 0xbfbde3d5, "rproc_alloc" },
	{ 0x5ec1a11d, "of_device_get_match_data" },
	{ 0x661ffe2f, "of_property_count_elems_of_size" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xdb833bce, "platform_get_resource_byname" },
	{ 0x600e4576, "devm_ioremap_resource" },
	{ 0x8ebf658, "of_find_property" },
	{ 0x1981fc7d, "syscon_regmap_lookup_by_phandle" },
	{ 0x493867fd, "of_property_read_u32_index" },
	{ 0x34d2c3cf, "of_count_phandle_with_args" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0x3ff02157, "pm_runtime_set_autosuspend_delay" },
	{ 0x67b00a79, "devm_clk_get" },
	{ 0x2ecffaaa, "of_reserved_mem_device_init_by_idx" },
	{ 0x562c34a9, "rproc_add" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0xc2d5517a, "mbox_send_message" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x9580c7ff, "__pm_runtime_suspend" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x6b0d3011, "__of_parse_phandle_with_args" },
	{ 0x7535ef29, "of_find_device_by_node" },
	{ 0x2c6007e1, "put_device" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x45e8cf1a, "omap_iommu_domain_activate" },
	{ 0xad036591, "omap_iommu_domain_deactivate" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xc4937fde, "ti_clk_is_in_standby" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x18497c8d, "mbox_request_channel" },
	{ 0xf866b105, "__pm_runtime_set_status" },
	{ 0x2cb2870f, "__pm_runtime_use_autosuspend" },
	{ 0xe3ae1810, "pm_runtime_enable" },
	{ 0x68c5bd41, "mbox_free_channel" },
	{ 0xc5745645, "__pm_runtime_disable" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,omap4-dsp");
MODULE_ALIAS("of:N*T*Cti,omap4-dspC*");
MODULE_ALIAS("of:N*T*Cti,omap4-ipu");
MODULE_ALIAS("of:N*T*Cti,omap4-ipuC*");
MODULE_ALIAS("of:N*T*Cti,omap5-dsp");
MODULE_ALIAS("of:N*T*Cti,omap5-dspC*");
MODULE_ALIAS("of:N*T*Cti,omap5-ipu");
MODULE_ALIAS("of:N*T*Cti,omap5-ipuC*");
MODULE_ALIAS("of:N*T*Cti,dra7-dsp");
MODULE_ALIAS("of:N*T*Cti,dra7-dspC*");
MODULE_ALIAS("of:N*T*Cti,dra7-ipu");
MODULE_ALIAS("of:N*T*Cti,dra7-ipuC*");

MODULE_INFO(srcversion, "1FD9231AB62787F90C0E3C3");
