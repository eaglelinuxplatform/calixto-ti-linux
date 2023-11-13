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

SYMBOL_CRC(omap_mcbsp_st_add_controls, 0x8cde26ce, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x7a48d06c, "cpu_latency_qos_remove_request" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xca6b8113, "snd_soc_add_dai_controls" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x48ab7808, "platform_get_irq" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb020ff70, "devm_ioremap" },
	{ 0xe9c616de, "cpu_latency_qos_add_request" },
	{ 0x37a0cba, "kfree" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0x1f5fc4a5, "cpu_latency_qos_request_active" },
	{ 0xb614efcc, "devm_device_add_group" },
	{ 0xdb833bce, "platform_get_resource_byname" },
	{ 0x5b81f1cc, "clk_get" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x67b00a79, "devm_clk_get" },
	{ 0xc16c713a, "sdma_pcm_platform_register" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xbe77d1e0, "devm_snd_soc_register_component" },
	{ 0x668b595, "_kstrtoul" },
	{ 0x92997ed8, "_printk" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x2396c7f0, "clk_set_parent" },
	{ 0xd294a231, "platform_get_irq_byname" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xe3ae1810, "pm_runtime_enable" },
	{ 0xfc1f5ab4, "snd_pcm_hw_rule_add" },
	{ 0xa5ba243c, "snd_soc_info_volsw" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x19d8a156, "of_match_device" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x826781f6, "platform_get_resource" },
	{ 0x33cd2cd6, "cpu_latency_qos_update_request" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x40b51c05, "__sysfs_match_string" },
	{ 0x5f754e5a, "memset" },
	{ 0x52842d82, "_dev_warn" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xcb99963, "__platform_driver_register" },
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0x600e4576, "devm_ioremap_resource" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x335390e9, "snd_pcm_hw_constraint_step" },
	{ 0x5f34df51, "snd_soc_dai_active" },
	{ 0xc5745645, "__pm_runtime_disable" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x99f2d00a, "sysfs_emit_at" },
	{ 0xcd538084, "__pm_runtime_idle" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm,snd-soc-ti-sdma");

MODULE_ALIAS("of:N*T*Cti,omap2420-mcbsp");
MODULE_ALIAS("of:N*T*Cti,omap2420-mcbspC*");
MODULE_ALIAS("of:N*T*Cti,omap2430-mcbsp");
MODULE_ALIAS("of:N*T*Cti,omap2430-mcbspC*");
MODULE_ALIAS("of:N*T*Cti,omap3-mcbsp");
MODULE_ALIAS("of:N*T*Cti,omap3-mcbspC*");
MODULE_ALIAS("of:N*T*Cti,omap4-mcbsp");
MODULE_ALIAS("of:N*T*Cti,omap4-mcbspC*");

MODULE_INFO(srcversion, "757302806C8340A3AFD9FDB");
