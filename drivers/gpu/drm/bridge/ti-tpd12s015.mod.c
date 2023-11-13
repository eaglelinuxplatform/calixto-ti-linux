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
	{ 0x92aa0907, "gpiod_get_value_cansleep" },
	{ 0xfa8c8566, "drm_bridge_hpd_notify" },
	{ 0x732e56d8, "gpiod_set_value_cansleep" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xa1aeb3, "of_graph_get_remote_node" },
	{ 0xc6363143, "of_drm_find_bridge" },
	{ 0x221575a, "devm_gpiod_get_index_optional" },
	{ 0xde775963, "devm_gpiod_get_index" },
	{ 0x3dabb96b, "gpiod_to_irq" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0xf5f27adc, "drm_bridge_add" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x3419bb4b, "drm_bridge_attach" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "drm");

MODULE_ALIAS("of:N*T*Cti,tpd12s015");
MODULE_ALIAS("of:N*T*Cti,tpd12s015C*");

MODULE_INFO(srcversion, "4246A077DE5C501E0586CD6");
