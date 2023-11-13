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
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xe5bf01a, "device_get_match_data" },
	{ 0x347fb59d, "dev_get_regmap" },
	{ 0x1aba37c0, "devm_regulator_get" },
	{ 0xf969a542, "device_property_read_string" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xca68f39b, "devm_led_classdev_register_ext" },
	{ 0x7ca92e2b, "regmap_update_bits_base" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9ed8ac9c, "regulator_disable" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x53d71abb, "regulator_enable" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "led-class");

MODULE_ALIAS("of:N*T*Cmotorola,cpcap-led-red");
MODULE_ALIAS("of:N*T*Cmotorola,cpcap-led-redC*");
MODULE_ALIAS("of:N*T*Cmotorola,cpcap-led-green");
MODULE_ALIAS("of:N*T*Cmotorola,cpcap-led-greenC*");
MODULE_ALIAS("of:N*T*Cmotorola,cpcap-led-blue");
MODULE_ALIAS("of:N*T*Cmotorola,cpcap-led-blueC*");
MODULE_ALIAS("of:N*T*Cmotorola,cpcap-led-adl");
MODULE_ALIAS("of:N*T*Cmotorola,cpcap-led-adlC*");
MODULE_ALIAS("of:N*T*Cmotorola,cpcap-led-cp");
MODULE_ALIAS("of:N*T*Cmotorola,cpcap-led-cpC*");

MODULE_INFO(srcversion, "9BF0873D6BB1D28B0B60D2A");
