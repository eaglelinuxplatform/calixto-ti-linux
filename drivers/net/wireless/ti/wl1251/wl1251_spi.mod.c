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
	{ 0x53d71abb, "regulator_enable" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0xdb49a554, "wl1251_alloc_hw" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x3c82f653, "ieee80211_free_hw" },
	{ 0x9a9c0207, "gpiod_set_raw_value" },
	{ 0x37a0cba, "kfree" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x4ff40825, "of_get_named_gpio_flags" },
	{ 0x5ad969ca, "wl1251_init_ieee80211" },
	{ 0x92997ed8, "_printk" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x1aba37c0, "devm_regulator_get" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0x582f4d93, "spi_sync" },
	{ 0xd6d20ab5, "devm_gpio_request_one" },
	{ 0xbb4f160b, "driver_unregister" },
	{ 0x8ebf658, "of_find_property" },
	{ 0x5f754e5a, "memset" },
	{ 0x80748366, "spi_setup" },
	{ 0xa2669883, "__spi_register_driver" },
	{ 0x700879d, "gpio_to_desc" },
	{ 0x292f34aa, "wl1251_free_hw" },
	{ 0xba95c5c0, "crc7_be" },
	{ 0x9ed8ac9c, "regulator_disable" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xef9df396, "ieee80211_queue_work" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "wl1251,mac80211");


MODULE_INFO(srcversion, "0312D06A491D5A5D815C1D3");
