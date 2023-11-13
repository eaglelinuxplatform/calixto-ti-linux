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
	{ 0xe6f74e3, "drm_bridge_remove" },
	{ 0x53d71abb, "regulator_enable" },
	{ 0x732e56d8, "gpiod_set_value_cansleep" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0x9ed8ac9c, "regulator_disable" },
	{ 0x5cce1aa6, "drm_bridge_detect" },
	{ 0xd12f1d4b, "drm_bridge_get_edid" },
	{ 0x3faaf2f7, "drm_connector_update_edid_property" },
	{ 0x61ddff67, "drm_add_edid_modes" },
	{ 0x37a0cba, "kfree" },
	{ 0x92997ed8, "_printk" },
	{ 0x9e632a07, "drm_add_modes_noedid" },
	{ 0x29db79bc, "drm_set_preferred_mode" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x5ec1a11d, "of_device_get_match_data" },
	{ 0xa1aeb3, "of_graph_get_remote_node" },
	{ 0xc6363143, "of_drm_find_bridge" },
	{ 0xdd246970, "devm_regulator_get_optional" },
	{ 0xd236e21b, "devm_gpiod_get_optional" },
	{ 0xf5f27adc, "drm_bridge_add" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x3419bb4b, "drm_bridge_attach" },
	{ 0xf4b14942, "drm_connector_init_with_ddc" },
	{ 0x2d561977, "drm_connector_attach_encoder" },
	{ 0x1e795898, "drm_atomic_helper_connector_reset" },
	{ 0x682ca1d2, "drm_helper_probe_single_connector_modes" },
	{ 0xb4430229, "drm_connector_cleanup" },
	{ 0x48792f48, "drm_atomic_helper_connector_duplicate_state" },
	{ 0x3d2e723e, "drm_atomic_helper_connector_destroy_state" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "drm,drm_kms_helper");

MODULE_ALIAS("of:N*T*Cdumb-vga-dac");
MODULE_ALIAS("of:N*T*Cdumb-vga-dacC*");
MODULE_ALIAS("of:N*T*Cadi,adv7123");
MODULE_ALIAS("of:N*T*Cadi,adv7123C*");
MODULE_ALIAS("of:N*T*Cti,opa362");
MODULE_ALIAS("of:N*T*Cti,opa362C*");
MODULE_ALIAS("of:N*T*Cti,ths8135");
MODULE_ALIAS("of:N*T*Cti,ths8135C*");
MODULE_ALIAS("of:N*T*Cti,ths8134");
MODULE_ALIAS("of:N*T*Cti,ths8134C*");

MODULE_INFO(srcversion, "39F49C6E6AA6528B44A7386");
