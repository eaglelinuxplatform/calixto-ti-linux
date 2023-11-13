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

SYMBOL_CRC(__dp_aux_dp_driver_register, 0x8296d1aa, "_gpl");
SYMBOL_CRC(devm_of_dp_aux_populate_bus, 0x26bc3baa, "_gpl");
SYMBOL_CRC(dp_aux_dp_driver_unregister, 0xbd62d4fc, "_gpl");
SYMBOL_CRC(of_dp_aux_depopulate_bus, 0xe5531484, "_gpl");
SYMBOL_CRC(of_dp_aux_populate_bus, 0x085ccf19, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xcfa34bab, "device_for_each_child_reverse" },
	{ 0xd12e4291, "dev_pm_domain_detach" },
	{ 0x7a4d0dd1, "dev_pm_domain_attach" },
	{ 0xf18bebde, "dev_err_probe" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x19d8a156, "of_match_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x2fc5c15b, "of_device_modalias" },
	{ 0xddec41ac, "driver_register" },
	{ 0xbb4f160b, "driver_unregister" },
	{ 0xdc7ad0db, "bus_register" },
	{ 0xc17f0d47, "bus_unregister" },
	{ 0x9cae81f1, "of_get_child_by_name" },
	{ 0xef6d0a5, "of_get_next_available_child" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xee54f561, "dev_set_name" },
	{ 0xc8d1d2, "device_register" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x2c6007e1, "put_device" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xacaaba89, "device_unregister" },
	{ 0x4091ed3e, "devm_add_action" },
	{ 0xa02e6181, "of_device_uevent_modalias" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "CE9C8CD5D57FBA337679014");
