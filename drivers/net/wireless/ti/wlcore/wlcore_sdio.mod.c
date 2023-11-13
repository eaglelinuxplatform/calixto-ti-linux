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
	{ 0xa16e44e3, "sdio_release_host" },
	{ 0xebbea969, "sdio_disable_func" },
	{ 0x89f87a2f, "sdio_set_block_size" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0x7df9bde3, "sdio_claim_host" },
	{ 0x1bf74ef9, "sdio_memcpy_fromio" },
	{ 0xd3e75977, "sdio_register_driver" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x8c26aea0, "sdio_memcpy_toio" },
	{ 0xd7b4d559, "platform_device_add_data" },
	{ 0xf22b5c04, "sdio_f0_readb" },
	{ 0x92997ed8, "_printk" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0xaffc73ce, "sdio_set_host_pm_flags" },
	{ 0xc6096559, "sdio_f0_writeb" },
	{ 0xd6d58da3, "platform_device_add_resources" },
	{ 0xf90ae563, "sdio_unregister_driver" },
	{ 0x79bce59c, "sdio_readsb" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x90d8af31, "platform_device_unregister" },
	{ 0x7b9a90c4, "irq_get_irq_data" },
	{ 0xe69ce750, "platform_device_add" },
	{ 0xba7d6f5e, "platform_device_alloc" },
	{ 0xe9f55364, "of_match_node" },
	{ 0x5f754e5a, "memset" },
	{ 0xe3bb56d6, "sdio_get_host_pm_caps" },
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0xe4ea4aab, "param_ops_bool" },
	{ 0x2e77f238, "mmc_hw_reset" },
	{ 0x943df7e9, "sdio_enable_func" },
	{ 0x966e341c, "sdio_writesb" },
	{ 0xcd6cf361, "irq_of_parse_and_map" },
	{ 0xcd538084, "__pm_runtime_idle" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("sdio:c*v0097d4076*");

MODULE_INFO(srcversion, "6D44582DD3A93B720F9C522");
