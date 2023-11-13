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
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0x4424b3fb, "dma_free_attrs" },
	{ 0x1da3fa5a, "of_dma_controller_free" },
	{ 0x5771b887, "dma_async_device_unregister" },
	{ 0xbe014857, "devm_free_irq" },
	{ 0x2cb2870f, "__pm_runtime_use_autosuspend" },
	{ 0xcd538084, "__pm_runtime_idle" },
	{ 0xc5745645, "__pm_runtime_disable" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x6c3ec2c0, "__dma_request_channel" },
	{ 0xe9f55364, "of_match_node" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x581815d1, "of_property_match_string" },
	{ 0x826781f6, "platform_get_resource" },
	{ 0x600e4576, "devm_ioremap_resource" },
	{ 0xe3ae1810, "pm_runtime_enable" },
	{ 0x3ff02157, "pm_runtime_set_autosuspend_delay" },
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0xcf669e88, "dma_alloc_attrs" },
	{ 0xcd6cf361, "irq_of_parse_and_map" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0x3b3d874f, "dma_async_device_register" },
	{ 0x664be2d7, "of_dma_controller_register" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x9580c7ff, "__pm_runtime_suspend" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xe9a51606, "dma_async_tx_descriptor_init" },
	{ 0x92997ed8, "_printk" },
	{ 0xe06699b2, "sg_next" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,am3359-cppi41");
MODULE_ALIAS("of:N*T*Cti,am3359-cppi41C*");
MODULE_ALIAS("of:N*T*Cti,da830-cppi41");
MODULE_ALIAS("of:N*T*Cti,da830-cppi41C*");

MODULE_INFO(srcversion, "DF67EAA8F1789C35E17AA0F");
