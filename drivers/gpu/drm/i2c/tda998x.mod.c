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
	{ 0xb9c4492c, "___drm_dbg" },
	{ 0x267291be, "gpiod_get" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb1b0e08, "gpiod_put" },
	{ 0xf5f27adc, "drm_bridge_add" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x1660b4d, "gpiod_set_value" },
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x49970de8, "finish_wait" },
	{ 0x9d669763, "memcpy" },
	{ 0xbacafb2f, "component_del" },
	{ 0x931651bd, "drm_hdmi_avi_infoframe_from_display_mode" },
	{ 0x37a0cba, "kfree" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x46ff28c4, "drm_of_find_possible_crtcs" },
	{ 0x2f4a0dbf, "i2c_transfer_buffer_flags" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x4bf5f3ca, "drm_encoder_cleanup" },
	{ 0x637493f3, "__wake_up" },
	{ 0x1a6f0b65, "of_get_property" },
	{ 0xe6f74e3, "drm_bridge_remove" },
	{ 0x2d561977, "drm_connector_attach_encoder" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x3d2e723e, "drm_atomic_helper_connector_destroy_state" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x1212c326, "i2c_register_driver" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8f03acad, "drm_connector_init" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x62c6484b, "i2c_unregister_device" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x90d8af31, "platform_device_unregister" },
	{ 0x61ddff67, "drm_add_edid_modes" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x7b9a90c4, "irq_get_irq_data" },
	{ 0x27a8b3d2, "gpiod_direction_input" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xa319e2db, "i2c_new_client_device" },
	{ 0x5f754e5a, "memset" },
	{ 0x52842d82, "_dev_warn" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3faaf2f7, "drm_connector_update_edid_property" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x48792f48, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xd695e008, "drm_do_get_edid" },
	{ 0xb4430229, "drm_connector_cleanup" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xa248afde, "drm_detect_monitor_audio" },
	{ 0x869bf511, "platform_device_register_full" },
	{ 0xf9a773d4, "drm_simple_encoder_init" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xa28dda74, "drm_kms_helper_hotplug_event" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x72005410, "hdmi_infoframe_pack" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x682ca1d2, "drm_helper_probe_single_connector_modes" },
	{ 0x65702bd6, "drm_default_rgb_quant_range" },
	{ 0x2f254fc5, "drm_hdmi_avi_infoframe_quant_range" },
	{ 0xf58bc2a5, "i2c_transfer" },
	{ 0x3419bb4b, "drm_bridge_attach" },
	{ 0x1e795898, "drm_atomic_helper_connector_reset" },
	{ 0xdedb388d, "component_add" },
	{ 0x6196a6ec, "i2c_del_driver" },
	{ 0xc14ef4ef, "drm_hdmi_vendor_infoframe_from_display_mode" },
	{ 0x9f662a0a, "gpiod_direction_output" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "drm,drm_kms_helper");

MODULE_ALIAS("of:N*T*Cnxp,tda998x");
MODULE_ALIAS("of:N*T*Cnxp,tda998xC*");
MODULE_ALIAS("i2c:tda998x");

MODULE_INFO(srcversion, "6F6412CBB18BD5635DABCBD");
