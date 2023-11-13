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
	{ 0x9d669763, "memcpy" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x7ce333ed, "crypto_shash_update" },
	{ 0xee83c754, "crypto_shash_finup" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x37a0cba, "kfree" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x9580c7ff, "__pm_runtime_suspend" },
	{ 0xe1427b67, "crypto_finalize_hash_request" },
	{ 0x2e7dd068, "crypto_transfer_hash_request_to_engine" },
	{ 0xea07d716, "page_address" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xfe175386, "crypto_alloc_shash" },
	{ 0x92997ed8, "_printk" },
	{ 0x1c12294e, "crypto_destroy_tfm" },
	{ 0x7b41a657, "crypto_shash_setkey" },
	{ 0x5f754e5a, "memset" },
	{ 0xb5cfa080, "crypto_shash_tfm_digest" },
	{ 0xcb99963, "__platform_driver_register" },
	{ 0xaa19e4aa, "_kstrtol" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xbe0de956, "crypto_unregister_ahash" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x2cb2870f, "__pm_runtime_use_autosuspend" },
	{ 0xc5745645, "__pm_runtime_disable" },
	{ 0x4b711b3d, "sysfs_remove_group" },
	{ 0x370e7e97, "dma_release_channel" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x7d5fc59d, "dma_unmap_sg_attrs" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x42e7a297, "scatterwalk_map_and_copy" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0x499043d3, "crypto_init_queue" },
	{ 0x5ec1a11d, "of_device_get_match_data" },
	{ 0x27af810d, "of_address_to_resource" },
	{ 0xcd6cf361, "irq_of_parse_and_map" },
	{ 0x600e4576, "devm_ioremap_resource" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0x9ec83d54, "dma_request_chan" },
	{ 0x3ff02157, "pm_runtime_set_autosuspend_delay" },
	{ 0xe3ae1810, "pm_runtime_enable" },
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0xcd538084, "__pm_runtime_idle" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x713e2042, "crypto_engine_alloc_init" },
	{ 0xc2c38819, "crypto_engine_start" },
	{ 0xa9554cd8, "crypto_register_ahash" },
	{ 0x1b579ffe, "sysfs_create_group" },
	{ 0x826781f6, "platform_get_resource" },
	{ 0x48ab7808, "platform_get_irq" },
	{ 0x5eaf5d6e, "crypto_engine_exit" },
	{ 0x8c07c83e, "sg_miter_start" },
	{ 0xc322d103, "sg_miter_next" },
	{ 0xa0607daf, "sg_miter_stop" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x8451fdfe, "sg_init_table" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xe06699b2, "sg_next" },
	{ 0xbb6df778, "sg_nents" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x9fafa4fb, "mem_map" },
	{ 0xa1fc4dc7, "dma_map_sg_attrs" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "crypto_engine");

MODULE_ALIAS("of:N*T*Cti,omap2-sham");
MODULE_ALIAS("of:N*T*Cti,omap2-shamC*");
MODULE_ALIAS("of:N*T*Cti,omap3-sham");
MODULE_ALIAS("of:N*T*Cti,omap3-shamC*");
MODULE_ALIAS("of:N*T*Cti,omap4-sham");
MODULE_ALIAS("of:N*T*Cti,omap4-shamC*");
MODULE_ALIAS("of:N*T*Cti,omap5-sham");
MODULE_ALIAS("of:N*T*Cti,omap5-shamC*");

MODULE_INFO(srcversion, "A14134169E5DA6C2AE65217");
