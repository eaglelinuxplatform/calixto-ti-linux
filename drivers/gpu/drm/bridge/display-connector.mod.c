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
	{ 0x1660b4d, "gpiod_set_value" },
	{ 0x9ed8ac9c, "regulator_disable" },
	{ 0xe6f74e3, "drm_bridge_remove" },
	{ 0x1364ef34, "i2c_put_adapter" },
	{ 0x5138844c, "drm_get_edid" },
	{ 0xd9ea3464, "drm_atomic_get_new_bridge_state" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x92aa0907, "gpiod_get_value_cansleep" },
	{ 0x58a8fafa, "drm_probe_ddc" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x5ec1a11d, "of_device_get_match_data" },
	{ 0x2513ff15, "of_property_read_string" },
	{ 0xd236e21b, "devm_gpiod_get_optional" },
	{ 0x3dabb96b, "gpiod_to_irq" },
	{ 0xf5f27adc, "drm_bridge_add" },
	{ 0x6b0d3011, "__of_parse_phandle_with_args" },
	{ 0x356192a7, "of_get_i2c_adapter_by_node" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x8ebf658, "of_find_property" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xdd246970, "devm_regulator_get_optional" },
	{ 0x53d71abb, "regulator_enable" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xfa8c8566, "drm_bridge_hpd_notify" },
	{ 0xbb67e0cf, "drm_atomic_helper_bridge_duplicate_state" },
	{ 0x9080af33, "drm_atomic_helper_bridge_destroy_state" },
	{ 0x81aa072, "drm_atomic_helper_bridge_reset" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "drm,drm_kms_helper");

MODULE_ALIAS("of:N*T*Ccomposite-video-connector");
MODULE_ALIAS("of:N*T*Ccomposite-video-connectorC*");
MODULE_ALIAS("of:N*T*Cdvi-connector");
MODULE_ALIAS("of:N*T*Cdvi-connectorC*");
MODULE_ALIAS("of:N*T*Chdmi-connector");
MODULE_ALIAS("of:N*T*Chdmi-connectorC*");
MODULE_ALIAS("of:N*T*Csvideo-connector");
MODULE_ALIAS("of:N*T*Csvideo-connectorC*");
MODULE_ALIAS("of:N*T*Cvga-connector");
MODULE_ALIAS("of:N*T*Cvga-connectorC*");
MODULE_ALIAS("of:N*T*Cdp-connector");
MODULE_ALIAS("of:N*T*Cdp-connectorC*");

MODULE_INFO(srcversion, "2EFCBFF1AC39F68439E79F9");
