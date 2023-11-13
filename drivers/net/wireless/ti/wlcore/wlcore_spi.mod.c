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
	{ 0x1467da49, "platform_device_put" },
	{ 0x53d71abb, "regulator_enable" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x37a0cba, "kfree" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xd7b4d559, "platform_device_add_data" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x1aba37c0, "devm_regulator_get" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0xd6d58da3, "platform_device_add_resources" },
	{ 0x582f4d93, "spi_sync" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x90d8af31, "platform_device_unregister" },
	{ 0x7b9a90c4, "irq_get_irq_data" },
	{ 0xe69ce750, "platform_device_add" },
	{ 0xbb4f160b, "driver_unregister" },
	{ 0xba7d6f5e, "platform_device_alloc" },
	{ 0x8ebf658, "of_find_property" },
	{ 0xe9f55364, "of_match_node" },
	{ 0x5f754e5a, "memset" },
	{ 0x80748366, "spi_setup" },
	{ 0xa2669883, "__spi_register_driver" },
	{ 0xba95c5c0, "crc7_be" },
	{ 0x9ed8ac9c, "regulator_disable" },
	{ 0xf18bebde, "dev_err_probe" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,wl1271");
MODULE_ALIAS("of:N*T*Cti,wl1271C*");
MODULE_ALIAS("of:N*T*Cti,wl1273");
MODULE_ALIAS("of:N*T*Cti,wl1273C*");
MODULE_ALIAS("of:N*T*Cti,wl1281");
MODULE_ALIAS("of:N*T*Cti,wl1281C*");
MODULE_ALIAS("of:N*T*Cti,wl1283");
MODULE_ALIAS("of:N*T*Cti,wl1283C*");
MODULE_ALIAS("of:N*T*Cti,wl1285");
MODULE_ALIAS("of:N*T*Cti,wl1285C*");
MODULE_ALIAS("of:N*T*Cti,wl1801");
MODULE_ALIAS("of:N*T*Cti,wl1801C*");
MODULE_ALIAS("of:N*T*Cti,wl1805");
MODULE_ALIAS("of:N*T*Cti,wl1805C*");
MODULE_ALIAS("of:N*T*Cti,wl1807");
MODULE_ALIAS("of:N*T*Cti,wl1807C*");
MODULE_ALIAS("of:N*T*Cti,wl1831");
MODULE_ALIAS("of:N*T*Cti,wl1831C*");
MODULE_ALIAS("of:N*T*Cti,wl1835");
MODULE_ALIAS("of:N*T*Cti,wl1835C*");
MODULE_ALIAS("of:N*T*Cti,wl1837");
MODULE_ALIAS("of:N*T*Cti,wl1837C*");

MODULE_INFO(srcversion, "90CD759C26F9462EB8721D2");
