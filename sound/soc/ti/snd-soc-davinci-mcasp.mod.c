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
	{ 0xca6b8113, "snd_soc_add_dai_controls" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xea5245c8, "snd_pcm_hw_constraint_minmax" },
	{ 0x6954edb1, "devm_gpiochip_add_data_with_key" },
	{ 0x370e7e97, "dma_release_channel" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xdb833bce, "platform_get_resource_byname" },
	{ 0x5b81f1cc, "clk_get" },
	{ 0xc16c713a, "sdma_pcm_platform_register" },
	{ 0x1a6f0b65, "of_get_property" },
	{ 0xbe77d1e0, "devm_snd_soc_register_component" },
	{ 0x92997ed8, "_printk" },
	{ 0x2396c7f0, "clk_set_parent" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xe3ae1810, "pm_runtime_enable" },
	{ 0x2753da, "platform_get_irq_byname_optional" },
	{ 0xfc1f5ab4, "snd_pcm_hw_rule_add" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0xef07e169, "gpiochip_get_data" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x19d8a156, "of_match_device" },
	{ 0x39552dff, "devm_kmemdup" },
	{ 0xd8288ed, "edma_pcm_platform_register" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x826781f6, "platform_get_resource" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x84b183ae, "strncmp" },
	{ 0x2513ff15, "of_property_read_string" },
	{ 0x8ebf658, "of_find_property" },
	{ 0x71c90087, "memcmp" },
	{ 0xe472e708, "snd_pcm_hw_constraint_list" },
	{ 0x5f754e5a, "memset" },
	{ 0x52842d82, "_dev_warn" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xcb99963, "__platform_driver_register" },
	{ 0x9ec83d54, "dma_request_chan" },
	{ 0xcf8f30f4, "devm_kasprintf" },
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0x600e4576, "devm_ioremap_resource" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xcde642d9, "snd_pcm_stop_xrun" },
	{ 0xc8e173ed, "_find_next_bit_le" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x3e11c284, "udma_pcm_platform_register" },
	{ 0xf18bebde, "dev_err_probe" },
	{ 0x5f34df51, "snd_soc_dai_active" },
	{ 0xc5745645, "__pm_runtime_disable" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xcd538084, "__pm_runtime_idle" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm,snd-soc-ti-sdma,snd-soc-ti-edma,snd-soc-ti-udma");

MODULE_ALIAS("of:N*T*Cti,dm646x-mcasp-audio");
MODULE_ALIAS("of:N*T*Cti,dm646x-mcasp-audioC*");
MODULE_ALIAS("of:N*T*Cti,da830-mcasp-audio");
MODULE_ALIAS("of:N*T*Cti,da830-mcasp-audioC*");
MODULE_ALIAS("of:N*T*Cti,am33xx-mcasp-audio");
MODULE_ALIAS("of:N*T*Cti,am33xx-mcasp-audioC*");
MODULE_ALIAS("of:N*T*Cti,dra7-mcasp-audio");
MODULE_ALIAS("of:N*T*Cti,dra7-mcasp-audioC*");
MODULE_ALIAS("of:N*T*Cti,omap4-mcasp-audio");
MODULE_ALIAS("of:N*T*Cti,omap4-mcasp-audioC*");

MODULE_INFO(srcversion, "226FBA2ADAA8C061E8D055B");
