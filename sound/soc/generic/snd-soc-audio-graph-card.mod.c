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

SYMBOL_CRC(audio_graph_parse_of, 0x3513d318, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xa3211f6c, "asoc_simple_parse_convert" },
	{ 0x5a1c407f, "of_graph_get_remote_endpoint" },
	{ 0x2d540ffe, "snd_soc_of_parse_tdm_slot" },
	{ 0xaae02b62, "asoc_simple_parse_clk" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0x94dcbfac, "asoc_simple_hw_params" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x7f0147ec, "asoc_simple_set_dailink_name" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f5504dc, "asoc_simple_clean_reference" },
	{ 0x732e56d8, "gpiod_set_value_cansleep" },
	{ 0xb146b235, "asoc_simple_shutdown" },
	{ 0x2696714, "snd_soc_get_dai_name" },
	{ 0xe7aafa7c, "of_graph_parse_endpoint" },
	{ 0xa30b509b, "of_get_parent" },
	{ 0xf2699c04, "of_phandle_iterator_next" },
	{ 0xbe7633c2, "snd_soc_get_dai_id" },
	{ 0xd236e21b, "devm_gpiod_get_optional" },
	{ 0xa0fdf8c3, "asoc_simple_dai_init" },
	{ 0x820756be, "snd_soc_of_parse_node_prefix" },
	{ 0x1a6f0b65, "of_get_property" },
	{ 0x308629fc, "of_get_next_child" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xf0edc7e3, "snd_soc_dai_link_set_capabilities" },
	{ 0x5e8942bd, "asoc_simple_parse_card_name" },
	{ 0xcf822e6f, "of_graph_get_endpoint_count" },
	{ 0x45962907, "devm_kfree" },
	{ 0x17fbfcac, "asoc_simple_canonicalize_platform" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x3dfcfcb, "asoc_simple_parse_routing" },
	{ 0xe1d1ff, "asoc_simple_is_convert_required" },
	{ 0xeecd6c0d, "asoc_simple_parse_daifmt" },
	{ 0x8bc8d3e5, "of_graph_get_next_endpoint" },
	{ 0x518211e5, "asoc_simple_be_hw_params_fixup" },
	{ 0x894ab87f, "asoc_simple_init_priv" },
	{ 0xae909034, "snd_soc_find_dai_with_mutex" },
	{ 0x5f754e5a, "memset" },
	{ 0xa71ee9fa, "asoc_simple_canonicalize_cpu" },
	{ 0xefd7b487, "of_graph_get_port_parent" },
	{ 0xcb99963, "__platform_driver_register" },
	{ 0x913586ac, "asoc_simple_startup" },
	{ 0x539c07fa, "asoc_simple_parse_widgets" },
	{ 0xfc82e956, "snd_soc_pm_ops" },
	{ 0x493c52dc, "of_node_name_eq" },
	{ 0x61e850a5, "asoc_simple_remove" },
	{ 0xf18bebde, "dev_err_probe" },
	{ 0x4e3cf4b1, "asoc_graph_card_probe" },
	{ 0xf40f640d, "of_phandle_iterator_init" },
	{ 0x5ec1a11d, "of_device_get_match_data" },
	{ 0xe7479581, "devm_snd_soc_register_card" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "snd-soc-simple-card-utils,snd-soc-core");

MODULE_ALIAS("of:N*T*Caudio-graph-card");
MODULE_ALIAS("of:N*T*Caudio-graph-cardC*");
MODULE_ALIAS("of:N*T*Caudio-graph-scu-card");
MODULE_ALIAS("of:N*T*Caudio-graph-scu-cardC*");

MODULE_INFO(srcversion, "DF53ED60A7C54BC9DB94B55");
