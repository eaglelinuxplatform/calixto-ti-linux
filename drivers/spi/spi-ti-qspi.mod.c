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
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0xc37335b0, "complete" },
	{ 0xbf4e283d, "__spi_alloc_controller" },
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0xdb833bce, "platform_get_resource_byname" },
	{ 0x48ab7808, "platform_get_irq" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x600e4576, "devm_ioremap_resource" },
	{ 0x8ebf658, "of_find_property" },
	{ 0x1981fc7d, "syscon_regmap_lookup_by_phandle" },
	{ 0x493867fd, "of_property_read_u32_index" },
	{ 0x67b00a79, "devm_clk_get" },
	{ 0x2cb2870f, "__pm_runtime_use_autosuspend" },
	{ 0x3ff02157, "pm_runtime_set_autosuspend_delay" },
	{ 0xe3ae1810, "pm_runtime_enable" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xdf398ffc, "dma_request_chan_by_mask" },
	{ 0xcf669e88, "dma_alloc_attrs" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x4f02d137, "devm_spi_register_controller" },
	{ 0x4424b3fb, "dma_free_attrs" },
	{ 0x370e7e97, "dma_release_channel" },
	{ 0xc5745645, "__pm_runtime_disable" },
	{ 0x2c6007e1, "put_device" },
	{ 0x826781f6, "platform_get_resource" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x9580c7ff, "__pm_runtime_suspend" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x7ca92e2b, "regmap_update_bits_base" },
	{ 0x9d669763, "memcpy" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x51e77c97, "pfn_valid" },
	{ 0x216d759a, "mmiocpy" },
	{ 0xd22b65bd, "spi_controller_dma_map_mem_op_data" },
	{ 0xe06699b2, "sg_next" },
	{ 0xb7cfa59c, "spi_controller_dma_unmap_mem_op_data" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0x85095db9, "spi_controller_suspend" },
	{ 0xcd538084, "__pm_runtime_idle" },
	{ 0x2a64d30, "spi_finalize_current_message" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,dra7xxx-qspi");
MODULE_ALIAS("of:N*T*Cti,dra7xxx-qspiC*");
MODULE_ALIAS("of:N*T*Cti,am4372-qspi");
MODULE_ALIAS("of:N*T*Cti,am4372-qspiC*");

MODULE_INFO(srcversion, "487620C7A1B1FA7807B1E1C");
