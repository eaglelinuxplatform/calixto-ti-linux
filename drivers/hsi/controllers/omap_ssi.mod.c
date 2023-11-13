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

SYMBOL_CRC(ssi_waketest, 0x3f5618c7, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xa5684076, "ida_alloc_range" },
	{ 0x5bfd598c, "simple_attr_open" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0x34b6ba8d, "of_platform_device_create" },
	{ 0x532eda00, "debugfs_attr_write" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xee54f561, "dev_set_name" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x48ab7808, "platform_get_irq" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x6ae07fc5, "hsi_register_controller" },
	{ 0x3ff02157, "pm_runtime_set_autosuspend_delay" },
	{ 0x60091316, "clk_notifier_register" },
	{ 0xb020ff70, "devm_ioremap" },
	{ 0x3dabb96b, "gpiod_to_irq" },
	{ 0x719e17ff, "clk_notifier_unregister" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x74d4d69, "seq_lseek" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0xb46e68b0, "device_for_each_child" },
	{ 0x4a90394f, "gpiod_get_value" },
	{ 0xdb833bce, "platform_get_resource_byname" },
	{ 0xef6d0a5, "of_get_next_available_child" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x67b00a79, "devm_clk_get" },
	{ 0xb98aac63, "pinctrl_pm_select_default_state" },
	{ 0xecf4e01, "__devm_request_region" },
	{ 0x9c208a78, "hsi_put_controller" },
	{ 0xd294a231, "platform_get_irq_byname" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xe3ae1810, "pm_runtime_enable" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x3a6ed60f, "hsi_add_clients_from_dt" },
	{ 0x2b8a191, "hsi_event" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x5f1940b4, "debugfs_attr_read" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x13cd4495, "debugfs_create_file_unsafe" },
	{ 0xd4f1e047, "hsi_port_unregister_clients" },
	{ 0x7a339792, "simple_attr_release" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0x8e9e820e, "debugfs_remove" },
	{ 0xa24491bf, "ida_free" },
	{ 0xb8f570d4, "pinctrl_pm_select_idle_state" },
	{ 0x52842d82, "_dev_warn" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xcb99963, "__platform_driver_register" },
	{ 0xb825d8f6, "seq_read" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xc126bc43, "hsi_unregister_controller" },
	{ 0xa81f2ce4, "debugfs_create_file" },
	{ 0xa93e1320, "of_device_is_compatible" },
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0xb756aeb3, "of_device_unregister" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x600e4576, "devm_ioremap_resource" },
	{ 0x301d3b5, "devm_gpiod_get" },
	{ 0x4418ca21, "seq_printf" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x3e3bad0a, "__tasklet_hi_schedule" },
	{ 0x46372883, "seq_puts" },
	{ 0x34937f96, "single_release" },
	{ 0x8abd1d6b, "hsi_alloc_controller" },
	{ 0x7d5fc59d, "dma_unmap_sg_attrs" },
	{ 0x9580c7ff, "__pm_runtime_suspend" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xea07d716, "page_address" },
	{ 0x2cb2870f, "__pm_runtime_use_autosuspend" },
	{ 0xc94d8e3b, "iomem_resource" },
	{ 0xf01014b6, "single_open" },
	{ 0xc5745645, "__pm_runtime_disable" },
	{ 0xeca42068, "debugfs_create_dir" },
	{ 0xcd538084, "__pm_runtime_idle" },
	{ 0x45885c49, "hsi_free_msg" },
	{ 0xa1fc4dc7, "dma_map_sg_attrs" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "hsi");

MODULE_ALIAS("of:N*T*Cti,omap3-ssi-port");
MODULE_ALIAS("of:N*T*Cti,omap3-ssi-portC*");
MODULE_ALIAS("of:N*T*Cti,omap3-ssi");
MODULE_ALIAS("of:N*T*Cti,omap3-ssiC*");

MODULE_INFO(srcversion, "894BA279FD2B94B97D946C3");
