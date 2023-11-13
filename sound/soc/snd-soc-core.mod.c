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

SYMBOL_CRC(null_dailink_component, 0x1327cda3, "_gpl");
SYMBOL_CRC(snd_soc_add_card_controls, 0xb432decd, "_gpl");
SYMBOL_CRC(snd_soc_add_component, 0xd99d0d2d, "_gpl");
SYMBOL_CRC(snd_soc_add_component_controls, 0xf753351c, "_gpl");
SYMBOL_CRC(snd_soc_add_dai_controls, 0xca6b8113, "_gpl");
SYMBOL_CRC(snd_soc_add_pcm_runtime, 0xf9446526, "_gpl");
SYMBOL_CRC(snd_soc_close_delayed_work, 0xe5f9f416, "_gpl");
SYMBOL_CRC(snd_soc_cnew, 0xc9f41360, "_gpl");
SYMBOL_CRC(snd_soc_component_initialize, 0xf07fef45, "_gpl");
SYMBOL_CRC(snd_soc_daifmt_clock_provider_flipped, 0xc317a15e, "_gpl");
SYMBOL_CRC(snd_soc_daifmt_clock_provider_from_bitmap, 0xf9622dd1, "_gpl");
SYMBOL_CRC(snd_soc_daifmt_parse_clock_provider_raw, 0xcb23ee12, "_gpl");
SYMBOL_CRC(snd_soc_daifmt_parse_format, 0xbed24d68, "_gpl");
SYMBOL_CRC(snd_soc_debugfs_root, 0xeab74109, "_gpl");
SYMBOL_CRC(snd_soc_find_dai, 0x72ea86c7, "_gpl");
SYMBOL_CRC(snd_soc_find_dai_with_mutex, 0xae909034, "_gpl");
SYMBOL_CRC(snd_soc_get_dai_id, 0xbe7633c2, "_gpl");
SYMBOL_CRC(snd_soc_get_dai_name, 0x02696714, "_gpl");
SYMBOL_CRC(snd_soc_get_pcm_runtime, 0xf43661c5, "_gpl");
SYMBOL_CRC(snd_soc_lookup_component, 0xcdf4d021, "_gpl");
SYMBOL_CRC(snd_soc_lookup_component_nolocked, 0x3c334e79, "_gpl");
SYMBOL_CRC(snd_soc_of_get_dai_link_codecs, 0xbcd01e62, "_gpl");
SYMBOL_CRC(snd_soc_of_get_dai_link_cpus, 0x40e98dea, "_gpl");
SYMBOL_CRC(snd_soc_of_get_dai_name, 0xec41adba, "_gpl");
SYMBOL_CRC(snd_soc_of_get_slot_mask, 0xe5f0c53d, "_gpl");
SYMBOL_CRC(snd_soc_of_parse_audio_routing, 0xad7c082b, "_gpl");
SYMBOL_CRC(snd_soc_of_parse_audio_simple_widgets, 0x352a4ace, "_gpl");
SYMBOL_CRC(snd_soc_of_parse_aux_devs, 0xe9c0a65f, "_gpl");
SYMBOL_CRC(snd_soc_of_parse_card_name, 0xf59764e0, "_gpl");
SYMBOL_CRC(snd_soc_of_parse_node_prefix, 0x820756be, "_gpl");
SYMBOL_CRC(snd_soc_of_parse_pin_switches, 0x44b19516, "_gpl");
SYMBOL_CRC(snd_soc_of_parse_tdm_slot, 0x2d540ffe, "_gpl");
SYMBOL_CRC(snd_soc_of_put_dai_link_codecs, 0xa305444f, "_gpl");
SYMBOL_CRC(snd_soc_of_put_dai_link_cpus, 0x08eb04b8, "_gpl");
SYMBOL_CRC(snd_soc_pm_ops, 0xfc82e956, "_gpl");
SYMBOL_CRC(snd_soc_poweroff, 0x44680836, "_gpl");
SYMBOL_CRC(snd_soc_register_card, 0x89eb4317, "_gpl");
SYMBOL_CRC(snd_soc_register_component, 0x61f1c239, "_gpl");
SYMBOL_CRC(snd_soc_register_dai, 0x874c9f80, "_gpl");
SYMBOL_CRC(snd_soc_remove_pcm_runtime, 0x18c076cd, "_gpl");
SYMBOL_CRC(snd_soc_resume, 0xc71e334a, "_gpl");
SYMBOL_CRC(snd_soc_rtdcom_lookup, 0x122520ce, "_gpl");
SYMBOL_CRC(snd_soc_runtime_set_dai_fmt, 0xa2c4d6eb, "_gpl");
SYMBOL_CRC(snd_soc_suspend, 0x0b9b6949, "_gpl");
SYMBOL_CRC(snd_soc_unregister_card, 0xd6059bdb, "_gpl");
SYMBOL_CRC(snd_soc_unregister_component, 0x307d408e, "_gpl");
SYMBOL_CRC(snd_soc_unregister_component_by_driver, 0x75ad0356, "_gpl");
SYMBOL_CRC(snd_soc_unregister_dai, 0xf3c62811, "_gpl");
SYMBOL_CRC(dapm_clock_event, 0x49a90e11, "_gpl");
SYMBOL_CRC(dapm_kcontrol_get_value, 0x5d4bd53c, "_gpl");
SYMBOL_CRC(dapm_mark_endpoints_dirty, 0x58688ee7, "_gpl");
SYMBOL_CRC(dapm_pinctrl_event, 0xef9ea7d8, "_gpl");
SYMBOL_CRC(dapm_regulator_event, 0x292a27c5, "_gpl");
SYMBOL_CRC(snd_soc_dapm_add_routes, 0xf98d7c11, "_gpl");
SYMBOL_CRC(snd_soc_dapm_dai_free_widgets, 0xd29fb135, "_gpl");
SYMBOL_CRC(snd_soc_dapm_dai_get_connected_widgets, 0x249d5118, "_gpl");
SYMBOL_CRC(snd_soc_dapm_del_routes, 0x86e32bb2, "_gpl");
SYMBOL_CRC(snd_soc_dapm_disable_pin, 0x84e3229a, "_gpl");
SYMBOL_CRC(snd_soc_dapm_disable_pin_unlocked, 0x06f3e1a4, "_gpl");
SYMBOL_CRC(snd_soc_dapm_enable_pin, 0xce86f5dd, "_gpl");
SYMBOL_CRC(snd_soc_dapm_enable_pin_unlocked, 0xc795ba27, "_gpl");
SYMBOL_CRC(snd_soc_dapm_force_bias_level, 0x46a4eb80, "_gpl");
SYMBOL_CRC(snd_soc_dapm_force_enable_pin, 0x50df7aa5, "_gpl");
SYMBOL_CRC(snd_soc_dapm_force_enable_pin_unlocked, 0x97d497cb, "_gpl");
SYMBOL_CRC(snd_soc_dapm_free, 0x2d020930, "_gpl");
SYMBOL_CRC(snd_soc_dapm_free_widget, 0xa28c4209, "_gpl");
SYMBOL_CRC(snd_soc_dapm_get_enum_double, 0x52953543, "_gpl");
SYMBOL_CRC(snd_soc_dapm_get_pin_status, 0x6401f28c, "_gpl");
SYMBOL_CRC(snd_soc_dapm_get_pin_switch, 0x169a63f7, "_gpl");
SYMBOL_CRC(snd_soc_dapm_get_volsw, 0xe9051f08, "_gpl");
SYMBOL_CRC(snd_soc_dapm_ignore_suspend, 0x7309aaa6, "_gpl");
SYMBOL_CRC(snd_soc_dapm_info_pin_switch, 0xa4adcf3c, "_gpl");
SYMBOL_CRC(snd_soc_dapm_init, 0x1f178981, "_gpl");
SYMBOL_CRC(snd_soc_dapm_kcontrol_dapm, 0x57c4a1fa, "_gpl");
SYMBOL_CRC(snd_soc_dapm_kcontrol_widget, 0x7e70c31f, "_gpl");
SYMBOL_CRC(snd_soc_dapm_mixer_update_power, 0x906f41c2, "_gpl");
SYMBOL_CRC(snd_soc_dapm_mux_update_power, 0x5305b842, "_gpl");
SYMBOL_CRC(snd_soc_dapm_nc_pin, 0x2b9b459b, "_gpl");
SYMBOL_CRC(snd_soc_dapm_nc_pin_unlocked, 0xfc6b6132, "_gpl");
SYMBOL_CRC(snd_soc_dapm_new_control, 0xa5eaede8, "_gpl");
SYMBOL_CRC(snd_soc_dapm_new_controls, 0xe0ae5658, "_gpl");
SYMBOL_CRC(snd_soc_dapm_new_dai_widgets, 0x74721575, "_gpl");
SYMBOL_CRC(snd_soc_dapm_new_widgets, 0xe6f1e99b, "_gpl");
SYMBOL_CRC(snd_soc_dapm_put_enum_double, 0x6394860d, "_gpl");
SYMBOL_CRC(snd_soc_dapm_put_pin_switch, 0x79a7c259, "_gpl");
SYMBOL_CRC(snd_soc_dapm_put_volsw, 0x37a1968e, "_gpl");
SYMBOL_CRC(snd_soc_dapm_stream_stop, 0x9ca9a713, "_gpl");
SYMBOL_CRC(snd_soc_dapm_sync, 0x4b533a26, "_gpl");
SYMBOL_CRC(snd_soc_dapm_sync_unlocked, 0xdde51f28, "_gpl");
SYMBOL_CRC(snd_soc_dapm_update_dai, 0x2e846f76, "_gpl");
SYMBOL_CRC(snd_soc_dapm_weak_routes, 0xd8c2a224, "_gpl");
SYMBOL_CRC(snd_soc_jack_add_gpiods, 0x3fb161b1, "_gpl");
SYMBOL_CRC(snd_soc_jack_add_gpios, 0xade2837a, "_gpl");
SYMBOL_CRC(snd_soc_jack_add_pins, 0x08efe4ed, "_gpl");
SYMBOL_CRC(snd_soc_jack_add_zones, 0xf9fe49ba, "_gpl");
SYMBOL_CRC(snd_soc_jack_free_gpios, 0xd43a0a2d, "_gpl");
SYMBOL_CRC(snd_soc_jack_get_type, 0x8fb31af8, "_gpl");
SYMBOL_CRC(snd_soc_jack_notifier_register, 0x133bdc4b, "_gpl");
SYMBOL_CRC(snd_soc_jack_notifier_unregister, 0x728761b1, "_gpl");
SYMBOL_CRC(snd_soc_jack_report, 0x8a9165d1, "_gpl");
SYMBOL_CRC(snd_soc_calc_bclk, 0x7e606130, "_gpl");
SYMBOL_CRC(snd_soc_calc_frame_size, 0x2541a979, "_gpl");
SYMBOL_CRC(snd_soc_params_to_bclk, 0xeb711ae7, "_gpl");
SYMBOL_CRC(snd_soc_params_to_frame_size, 0xc8269f94, "_gpl");
SYMBOL_CRC(snd_soc_tdm_params_to_bclk, 0x4fa1782d, "_gpl");
SYMBOL_CRC(snd_soc_dai_action, 0xdca05ee8, "_gpl");
SYMBOL_CRC(snd_soc_dai_active, 0x5f34df51, "_gpl");
SYMBOL_CRC(snd_soc_dai_compr_ack, 0x7571eb65, "_gpl");
SYMBOL_CRC(snd_soc_dai_compr_get_metadata, 0x4fe6f1bf, "_gpl");
SYMBOL_CRC(snd_soc_dai_compr_get_params, 0xfc75c625, "_gpl");
SYMBOL_CRC(snd_soc_dai_compr_pointer, 0x6451dac7, "_gpl");
SYMBOL_CRC(snd_soc_dai_compr_set_metadata, 0x93c6654a, "_gpl");
SYMBOL_CRC(snd_soc_dai_compr_set_params, 0x6d231f4e, "_gpl");
SYMBOL_CRC(snd_soc_dai_compr_shutdown, 0x31ee5b60, "_gpl");
SYMBOL_CRC(snd_soc_dai_compr_startup, 0x7432cd11, "_gpl");
SYMBOL_CRC(snd_soc_dai_compr_trigger, 0xf9624698, "_gpl");
SYMBOL_CRC(snd_soc_dai_digital_mute, 0x99b76084, "_gpl");
SYMBOL_CRC(snd_soc_dai_get_channel_map, 0x3fe349fc, "_gpl");
SYMBOL_CRC(snd_soc_dai_link_set_capabilities, 0xf0edc7e3, "_gpl");
SYMBOL_CRC(snd_soc_dai_set_bclk_ratio, 0x5dcb77ce, "_gpl");
SYMBOL_CRC(snd_soc_dai_set_channel_map, 0x5c0f5693, "_gpl");
SYMBOL_CRC(snd_soc_dai_set_clkdiv, 0x246b817d, "_gpl");
SYMBOL_CRC(snd_soc_dai_set_fmt, 0x2e26876d, "_gpl");
SYMBOL_CRC(snd_soc_dai_set_pll, 0xd01bc0c6, "_gpl");
SYMBOL_CRC(snd_soc_dai_set_sysclk, 0xe1925931, "_gpl");
SYMBOL_CRC(snd_soc_dai_set_tdm_slot, 0xece5a0e8, "_gpl");
SYMBOL_CRC(snd_soc_dai_set_tristate, 0x0b68d507, "_gpl");
SYMBOL_CRC(snd_soc_component_async_complete, 0x4e916ea4, "_gpl");
SYMBOL_CRC(snd_soc_component_compr_ack, 0x8efbab1a, "_gpl");
SYMBOL_CRC(snd_soc_component_compr_copy, 0xdf8bbd4d, "_gpl");
SYMBOL_CRC(snd_soc_component_compr_free, 0x53cd0542, "_gpl");
SYMBOL_CRC(snd_soc_component_compr_get_caps, 0x349192fc, "_gpl");
SYMBOL_CRC(snd_soc_component_compr_get_codec_caps, 0x531f2ce2, "_gpl");
SYMBOL_CRC(snd_soc_component_compr_get_metadata, 0x15d1c2cb, "_gpl");
SYMBOL_CRC(snd_soc_component_compr_get_params, 0xa3e58172, "_gpl");
SYMBOL_CRC(snd_soc_component_compr_open, 0x1759d25b, "_gpl");
SYMBOL_CRC(snd_soc_component_compr_pointer, 0x06db1d44, "_gpl");
SYMBOL_CRC(snd_soc_component_compr_set_metadata, 0xb652a367, "_gpl");
SYMBOL_CRC(snd_soc_component_compr_set_params, 0xc8899998, "_gpl");
SYMBOL_CRC(snd_soc_component_compr_trigger, 0x77abd081, "_gpl");
SYMBOL_CRC(snd_soc_component_disable_pin, 0x6be55771, "_gpl");
SYMBOL_CRC(snd_soc_component_disable_pin_unlocked, 0xc3dd1ab1, "_gpl");
SYMBOL_CRC(snd_soc_component_enable_pin, 0x8a962156, "_gpl");
SYMBOL_CRC(snd_soc_component_enable_pin_unlocked, 0x4fea6f5d, "_gpl");
SYMBOL_CRC(snd_soc_component_exit_regmap, 0x1b8666fd, "_gpl");
SYMBOL_CRC(snd_soc_component_force_enable_pin, 0xac9e1363, "_gpl");
SYMBOL_CRC(snd_soc_component_force_enable_pin_unlocked, 0x0ebe168c, "_gpl");
SYMBOL_CRC(snd_soc_component_get_pin_status, 0x5d0a0822, "_gpl");
SYMBOL_CRC(snd_soc_component_init_regmap, 0xa3167f8a, "_gpl");
SYMBOL_CRC(snd_soc_component_nc_pin, 0x05cb3efa, "_gpl");
SYMBOL_CRC(snd_soc_component_nc_pin_unlocked, 0x45051358, "_gpl");
SYMBOL_CRC(snd_soc_component_read, 0xb403e3c4, "_gpl");
SYMBOL_CRC(snd_soc_component_read_field, 0xfd245e16, "_gpl");
SYMBOL_CRC(snd_soc_component_set_jack, 0x99c3690a, "_gpl");
SYMBOL_CRC(snd_soc_component_set_pll, 0xe115200c, "_gpl");
SYMBOL_CRC(snd_soc_component_set_sysclk, 0x380ed870, "_gpl");
SYMBOL_CRC(snd_soc_component_test_bits, 0x0bf59e62, "_gpl");
SYMBOL_CRC(snd_soc_component_update_bits, 0xf5cf3016, "_gpl");
SYMBOL_CRC(snd_soc_component_update_bits_async, 0xedcfe7e9, "_gpl");
SYMBOL_CRC(snd_soc_component_write, 0x079618cb, "_gpl");
SYMBOL_CRC(snd_soc_component_write_field, 0xaf22add1, "_gpl");
SYMBOL_CRC(dpcm_be_dai_trigger, 0x2e9b62dc, "_gpl");
SYMBOL_CRC(dpcm_end_walk_at_be, 0xcdb4e86e, "_gpl");
SYMBOL_CRC(snd_soc_dpcm_be_can_update, 0x5ece7f35, "_gpl");
SYMBOL_CRC(snd_soc_dpcm_can_be_free_stop, 0x9e6da3ea, "_gpl");
SYMBOL_CRC(snd_soc_dpcm_can_be_params, 0xf5deb093, "_gpl");
SYMBOL_CRC(snd_soc_dpcm_can_be_prepared, 0xca297f4b, "_gpl");
SYMBOL_CRC(snd_soc_dpcm_fe_can_update, 0xc7207e0e, "_gpl");
SYMBOL_CRC(snd_soc_dpcm_get_substream, 0x477cf318, "_gpl");
SYMBOL_CRC(snd_soc_dpcm_runtime_update, 0xa41108ac, "_gpl");
SYMBOL_CRC(snd_soc_runtime_action, 0xd1d669f3, "_gpl");
SYMBOL_CRC(snd_soc_runtime_calc_hw, 0x5dfbb21f, "_gpl");
SYMBOL_CRC(snd_soc_set_runtime_hwparams, 0x5b65521a, "_gpl");
SYMBOL_CRC(devm_snd_dmaengine_pcm_register, 0xf2ee573f, "_gpl");
SYMBOL_CRC(devm_snd_soc_register_card, 0xe7479581, "_gpl");
SYMBOL_CRC(devm_snd_soc_register_component, 0xbe77d1e0, "_gpl");
SYMBOL_CRC(devm_snd_soc_register_dai, 0xe094e638, "_gpl");
SYMBOL_CRC(snd_soc_bytes_get, 0xb5cd5402, "_gpl");
SYMBOL_CRC(snd_soc_bytes_info, 0xf0675233, "_gpl");
SYMBOL_CRC(snd_soc_bytes_info_ext, 0x2566b602, "_gpl");
SYMBOL_CRC(snd_soc_bytes_put, 0x3ab72e38, "_gpl");
SYMBOL_CRC(snd_soc_bytes_tlv_callback, 0xb006b2d7, "_gpl");
SYMBOL_CRC(snd_soc_get_enum_double, 0x255b0633, "_gpl");
SYMBOL_CRC(snd_soc_get_strobe, 0xdd82511f, "_gpl");
SYMBOL_CRC(snd_soc_get_volsw, 0x0ea28558, "_gpl");
SYMBOL_CRC(snd_soc_get_volsw_range, 0xd849b12a, "_gpl");
SYMBOL_CRC(snd_soc_get_volsw_sx, 0x4393d3d7, "_gpl");
SYMBOL_CRC(snd_soc_get_xr_sx, 0x0b223dd6, "_gpl");
SYMBOL_CRC(snd_soc_info_enum_double, 0xf465839c, "_gpl");
SYMBOL_CRC(snd_soc_info_volsw, 0xa5ba243c, "_gpl");
SYMBOL_CRC(snd_soc_info_volsw_range, 0x842be086, "_gpl");
SYMBOL_CRC(snd_soc_info_volsw_sx, 0x4a6d5ab9, "_gpl");
SYMBOL_CRC(snd_soc_info_xr_sx, 0x2555b9fb, "_gpl");
SYMBOL_CRC(snd_soc_limit_volume, 0x263bee63, "_gpl");
SYMBOL_CRC(snd_soc_put_enum_double, 0x9f4f08ee, "_gpl");
SYMBOL_CRC(snd_soc_put_strobe, 0x7d70dba7, "_gpl");
SYMBOL_CRC(snd_soc_put_volsw, 0xf6ca45b8, "_gpl");
SYMBOL_CRC(snd_soc_put_volsw_range, 0x625dbff7, "_gpl");
SYMBOL_CRC(snd_soc_put_volsw_sx, 0x62e23dab, "_gpl");
SYMBOL_CRC(snd_soc_put_xr_sx, 0xf34afd36, "_gpl");
SYMBOL_CRC(snd_soc_link_compr_set_params, 0xedc1247e, "_gpl");
SYMBOL_CRC(snd_soc_link_compr_shutdown, 0x2b449f23, "_gpl");
SYMBOL_CRC(snd_soc_link_compr_startup, 0xa492083b, "_gpl");
SYMBOL_CRC(snd_soc_card_add_dai_link, 0x723e4a13, "_gpl");
SYMBOL_CRC(snd_soc_card_get_kcontrol, 0x6ecd1d4b, "_gpl");
SYMBOL_CRC(snd_soc_card_jack_new, 0xb28b04c3, "_gpl");
SYMBOL_CRC(snd_soc_card_jack_new_pins, 0xd732d57f, "_gpl");
SYMBOL_CRC(snd_soc_card_remove_dai_link, 0xd19db7e8, "_gpl");
SYMBOL_CRC(snd_dmaengine_pcm_prepare_slave_config, 0x36eadb9e, "_gpl");
SYMBOL_CRC(snd_dmaengine_pcm_register, 0x41d68855, "_gpl");
SYMBOL_CRC(snd_dmaengine_pcm_unregister, 0xb63b342e, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x92aa0907, "gpiod_get_value_cansleep" },
	{ 0xe914e41e, "strcpy" },
	{ 0x53d71abb, "regulator_enable" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x421d4dcf, "krealloc" },
	{ 0x5a6d5863, "try_module_get" },
	{ 0x6f013ecd, "__init_rwsem" },
	{ 0xab8bc1a2, "snd_pcm_rate_mask_intersect" },
	{ 0xb1b0e08, "gpiod_put" },
	{ 0x6ce4ec1b, "regmap_write" },
	{ 0x9098ac8b, "param_ops_uint" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0xb71d986d, "snd_pcm_hw_limit_rates" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xee54f561, "dev_set_name" },
	{ 0x1421bca8, "regmap_get_val_bytes" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x964a87e5, "snd_ctl_add" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x56a2ba82, "snd_pcm_new" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x4c84b9ee, "snd_jack_report" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x4676d27, "trace_raw_output_prep" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb21c1a46, "regmap_raw_read" },
	{ 0xbf7563c7, "snd_card_register" },
	{ 0xacaaba89, "device_unregister" },
	{ 0xc1e80553, "snd_card_free" },
	{ 0x8dd4f313, "__trace_trigger_soft_disabled" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xc4ea270a, "trace_event_printf" },
	{ 0x9c207908, "devres_destroy" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x1d89fa24, "gpiod_get_index" },
	{ 0x35062524, "snd_dmaengine_pcm_trigger" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0xea5245c8, "snd_pcm_hw_constraint_minmax" },
	{ 0x74e895b3, "trace_event_raw_init" },
	{ 0x3dabb96b, "gpiod_to_irq" },
	{ 0x7d554c8f, "gpiod_export" },
	{ 0x9d669763, "memcpy" },
	{ 0x6ca4bf88, "async_synchronize_full_domain" },
	{ 0x37a0cba, "kfree" },
	{ 0x370e7e97, "dma_release_channel" },
	{ 0x74d4d69, "seq_lseek" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa63e30b, "regcache_mark_dirty" },
	{ 0xfe990052, "gpio_free" },
	{ 0x637493f3, "__wake_up" },
	{ 0xdaf65445, "vsnprintf" },
	{ 0x8265b9f, "regulator_disable_deferred" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xfde79451, "snd_ctl_free_one" },
	{ 0x67b00a79, "devm_clk_get" },
	{ 0x1f051c7b, "devres_add" },
	{ 0xc78f8c79, "snd_pcm_new_internal" },
	{ 0x1a6f0b65, "of_get_property" },
	{ 0xd5ac24e5, "blocking_notifier_chain_register" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x56048493, "snd_dmaengine_pcm_refine_runtime_hwparams" },
	{ 0xea39786c, "snd_dmaengine_pcm_get_chan" },
	{ 0xb98aac63, "pinctrl_pm_select_default_state" },
	{ 0x3323213, "trace_event_buffer_commit" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xd46b54dd, "flush_delayed_work" },
	{ 0x6c3a4c26, "snd_ctl_new1" },
	{ 0x92997ed8, "_printk" },
	{ 0xf359b46c, "snd_pcm_stream_unlock_irq" },
	{ 0xb391754c, "pm_wakeup_dev_event" },
	{ 0x8805a073, "blocking_notifier_call_chain" },
	{ 0xc080505, "devm_kstrdup" },
	{ 0xe1e941f4, "snd_pcm_stream_lock_irq" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2c6007e1, "put_device" },
	{ 0x9dd3d342, "gpiod_unexport" },
	{ 0x6b6d0c57, "snd_component_add" },
	{ 0x1aba37c0, "devm_regulator_get" },
	{ 0x4208b080, "snd_dmaengine_pcm_close" },
	{ 0xd55e2db3, "dma_get_slave_caps" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0xe61a6643, "__current" },
	{ 0x1449535e, "module_put" },
	{ 0x365e7911, "kstrdup_const" },
	{ 0xcc6a729f, "snd_ctl_enum_info" },
	{ 0x3030b7a5, "snd_card_new" },
	{ 0xa948c050, "snd_card_disconnect_sync" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x39552dff, "devm_kmemdup" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0x805692c0, "snd_dmaengine_pcm_request_channel" },
	{ 0xd7d82541, "perf_trace_run_bpf_submit" },
	{ 0x45962907, "devm_kfree" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xc2ad49c3, "pinctrl_pm_select_sleep_state" },
	{ 0xe450090f, "simple_open" },
	{ 0x6b0d3011, "__of_parse_phandle_with_args" },
	{ 0x7e5f41d2, "snd_pcm_lib_ioctl" },
	{ 0x90d8af31, "platform_device_unregister" },
	{ 0xdbdb0e8b, "request_any_context_irq" },
	{ 0x8d4a1cdc, "snd_jack_new" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x208e803a, "snd_pcm_stream_unlock_irqrestore" },
	{ 0x4c31f633, "snd_jack_add_new_kctl" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x347fb59d, "dev_get_regmap" },
	{ 0xfc3f3589, "strscpy_pad" },
	{ 0x8e9e820e, "debugfs_remove" },
	{ 0x84b183ae, "strncmp" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0xc9357994, "__devres_alloc_node" },
	{ 0x9e1b61bc, "trace_event_reg" },
	{ 0x2513ff15, "of_property_read_string" },
	{ 0x69191c40, "regulator_allow_bypass" },
	{ 0x8ebf658, "of_find_property" },
	{ 0xe26e0f7e, "snd_pcm_set_ops" },
	{ 0xaa19e4aa, "_kstrtol" },
	{ 0x6f25187c, "regmap_async_complete" },
	{ 0x3d9f21fe, "__cpu_online_mask" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xf0b0924b, "snd_pcm_set_managed_buffer" },
	{ 0xc577c797, "_snd_pcm_stream_lock_irqsave_nested" },
	{ 0x11089ac7, "_ctype" },
	{ 0xc8d1d2, "device_register" },
	{ 0xc037a42c, "default_llseek" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0x5f754e5a, "memset" },
	{ 0x52842d82, "_dev_warn" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5db0895c, "debugfs_create_u32" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x35a4637e, "snd_dmaengine_pcm_open" },
	{ 0x5790509, "regmap_parse_val" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xa6c141ba, "snd_pcm_suspend_all" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf474fdcb, "kfree_const" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xb5f95c5b, "snd_dmaengine_pcm_pointer" },
	{ 0xefd7b487, "of_graph_get_port_parent" },
	{ 0xcb99963, "__platform_driver_register" },
	{ 0x9ec83d54, "dma_request_chan" },
	{ 0xcf8f30f4, "devm_kasprintf" },
	{ 0x81da5304, "pinctrl_lookup_state" },
	{ 0xb825d8f6, "seq_read" },
	{ 0xa81f2ce4, "debugfs_create_file" },
	{ 0xfb24d4ab, "blocking_notifier_chain_unregister" },
	{ 0x506c7dc3, "snd_hwparams_to_dma_slave_config" },
	{ 0x869bf511, "platform_device_register_full" },
	{ 0x4534861e, "regmap_read" },
	{ 0xac1c7622, "trace_event_buffer_reserve" },
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x4418ca21, "seq_printf" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x700879d, "gpio_to_desc" },
	{ 0x12eef294, "devm_pinctrl_get" },
	{ 0xd21b61bd, "async_schedule_node_domain" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x84851077, "pinctrl_select_state" },
	{ 0x899dbe14, "snd_power_wait" },
	{ 0x76ab07e3, "snd_pcm_hw_constraint_msbits" },
	{ 0x34937f96, "single_release" },
	{ 0x34d2c3cf, "of_count_phandle_with_args" },
	{ 0x7ca92e2b, "regmap_update_bits_base" },
	{ 0xf18bebde, "dev_err_probe" },
	{ 0xde525544, "snd_dmaengine_pcm_set_config_from_dai_data" },
	{ 0xf6a2cf24, "device_add_groups" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x9580c7ff, "__pm_runtime_suspend" },
	{ 0xca218e36, "regmap_exit" },
	{ 0xd35f75a1, "match_string" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xb1cb8571, "regmap_raw_write" },
	{ 0x97255bdf, "strlen" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0xf01014b6, "single_open" },
	{ 0xa286a234, "snd_pcm_format_name" },
	{ 0xeca42068, "debugfs_create_dir" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x815588a6, "clk_enable" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x4ae4635, "trace_handle_return" },
	{ 0x99f2d00a, "sysfs_emit_at" },
	{ 0x78502cb1, "of_property_read_string_helper" },
	{ 0xcd538084, "__pm_runtime_idle" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xe07c56f8, "snd_dmaengine_pcm_pointer_no_residue" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "snd-pcm,snd,snd-pcm-dmaengine");


MODULE_INFO(srcversion, "8DBD09EB7C51201223A9F00");
