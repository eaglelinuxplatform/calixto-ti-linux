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

SYMBOL_CRC(asoc_graph_card_probe, 0x4e3cf4b1, "_gpl");
SYMBOL_CRC(asoc_graph_is_ports0, 0x16f9ffa1, "_gpl");
SYMBOL_CRC(asoc_simple_be_hw_params_fixup, 0x518211e5, "_gpl");
SYMBOL_CRC(asoc_simple_canonicalize_cpu, 0xa71ee9fa, "_gpl");
SYMBOL_CRC(asoc_simple_canonicalize_platform, 0x17fbfcac, "_gpl");
SYMBOL_CRC(asoc_simple_clean_reference, 0x8f5504dc, "_gpl");
SYMBOL_CRC(asoc_simple_convert_fixup, 0xeea20112, "_gpl");
SYMBOL_CRC(asoc_simple_dai_init, 0xa0fdf8c3, "_gpl");
SYMBOL_CRC(asoc_simple_hw_params, 0x94dcbfac, "_gpl");
SYMBOL_CRC(asoc_simple_init_jack, 0x42dd2c20, "_gpl");
SYMBOL_CRC(asoc_simple_init_priv, 0x894ab87f, "_gpl");
SYMBOL_CRC(asoc_simple_is_convert_required, 0x00e1d1ff, "_gpl");
SYMBOL_CRC(asoc_simple_parse_card_name, 0x5e8942bd, "_gpl");
SYMBOL_CRC(asoc_simple_parse_clk, 0xaae02b62, "_gpl");
SYMBOL_CRC(asoc_simple_parse_convert, 0xa3211f6c, "_gpl");
SYMBOL_CRC(asoc_simple_parse_daifmt, 0xeecd6c0d, "_gpl");
SYMBOL_CRC(asoc_simple_parse_pin_switches, 0x241183ce, "_gpl");
SYMBOL_CRC(asoc_simple_parse_routing, 0x03dfcfcb, "_gpl");
SYMBOL_CRC(asoc_simple_parse_tdm_width_map, 0x80ea2ffe, "_gpl");
SYMBOL_CRC(asoc_simple_parse_widgets, 0x539c07fa, "_gpl");
SYMBOL_CRC(asoc_simple_remove, 0x61e850a5, "_gpl");
SYMBOL_CRC(asoc_simple_set_dailink_name, 0x7f0147ec, "_gpl");
SYMBOL_CRC(asoc_simple_shutdown, 0xb146b235, "_gpl");
SYMBOL_CRC(asoc_simple_startup, 0x913586ac, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xece5a0e8, "snd_soc_dai_set_tdm_slot" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xade2837a, "snd_soc_jack_add_gpios" },
	{ 0xea5245c8, "snd_pcm_hw_constraint_minmax" },
	{ 0x37a0cba, "kfree" },
	{ 0xa30b509b, "of_get_parent" },
	{ 0xf9622dd1, "snd_soc_daifmt_clock_provider_from_bitmap" },
	{ 0x380ed870, "snd_soc_component_set_sysclk" },
	{ 0xad7c082b, "snd_soc_of_parse_audio_routing" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x8837ed42, "devm_kvasprintf" },
	{ 0xe1925931, "snd_soc_dai_set_sysclk" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xcb23ee12, "snd_soc_daifmt_parse_clock_provider_raw" },
	{ 0x9cae81f1, "of_get_child_by_name" },
	{ 0x755df81d, "devm_get_clk_from_child" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x661ffe2f, "of_property_count_elems_of_size" },
	{ 0x2513ff15, "of_property_read_string" },
	{ 0x8ebf658, "of_find_property" },
	{ 0x5f754e5a, "memset" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xbed24d68, "snd_soc_daifmt_parse_format" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xd732d57f, "snd_soc_card_jack_new_pins" },
	{ 0x5dfbb21f, "snd_soc_runtime_calc_hw" },
	{ 0x44b19516, "snd_soc_of_parse_pin_switches" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb13ae765, "gpiod_get_optional" },
	{ 0x493c52dc, "of_node_name_eq" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x352a4ace, "snd_soc_of_parse_audio_simple_widgets" },
	{ 0xb5dd1bec, "gpiod_set_consumer_name" },
	{ 0x5f34df51, "snd_soc_dai_active" },
	{ 0xf59764e0, "snd_soc_of_parse_card_name" },
	{ 0x815588a6, "clk_enable" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");


MODULE_INFO(srcversion, "50ABF9501BA1F8AD32ECE18");
