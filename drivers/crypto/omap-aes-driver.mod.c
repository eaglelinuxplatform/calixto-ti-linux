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
	{ 0x6433bc6, "crypto_skcipher_encrypt" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x48ab7808, "platform_get_irq" },
	{ 0x27af810d, "of_address_to_resource" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xd5328478, "omap_crypto_cleanup" },
	{ 0x3ff02157, "pm_runtime_set_autosuspend_delay" },
	{ 0x9d669763, "memcpy" },
	{ 0x977519f, "crypto_register_aead" },
	{ 0xdb9779d0, "crypto_unregister_aead" },
	{ 0xf5d0e38a, "crypto_finalize_skcipher_request" },
	{ 0x370e7e97, "dma_release_channel" },
	{ 0x5eaf5d6e, "crypto_engine_exit" },
	{ 0x8d78f6a0, "crypto_skcipher_setkey" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x558b281d, "aes_expandkey" },
	{ 0x1c12294e, "crypto_destroy_tfm" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x3c4dbe3d, "crypto_skcipher_decrypt" },
	{ 0xe3ae1810, "pm_runtime_enable" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xdd68e82, "crypto_register_skcipher" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x499043d3, "crypto_init_queue" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0x826781f6, "platform_get_resource" },
	{ 0x42685d7, "sg_nents_for_len" },
	{ 0xc2c38819, "crypto_engine_start" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xb4c7233f, "crypto_unregister_skcipher" },
	{ 0xaa19e4aa, "_kstrtol" },
	{ 0x1b579ffe, "sysfs_create_group" },
	{ 0x701db540, "omap_crypto_align_sg" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xbf83afbc, "dma_sync_sg_for_device" },
	{ 0x5f754e5a, "memset" },
	{ 0xa2582ed, "crypto_transfer_aead_request_to_engine" },
	{ 0xcb99963, "__platform_driver_register" },
	{ 0x9ec83d54, "dma_request_chan" },
	{ 0x4b711b3d, "sysfs_remove_group" },
	{ 0x42e7a297, "scatterwalk_map_and_copy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb6f2615c, "crypto_finalize_aead_request" },
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0x600e4576, "devm_ioremap_resource" },
	{ 0xe06699b2, "sg_next" },
	{ 0x713e2042, "crypto_engine_alloc_init" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x3975e6aa, "crypto_transfer_skcipher_request_to_engine" },
	{ 0x7d5fc59d, "dma_unmap_sg_attrs" },
	{ 0x9580c7ff, "__pm_runtime_suspend" },
	{ 0xea07d716, "page_address" },
	{ 0x2cb2870f, "__pm_runtime_use_autosuspend" },
	{ 0x5ec1a11d, "of_device_get_match_data" },
	{ 0xc5745645, "__pm_runtime_disable" },
	{ 0x6d8747a0, "scatterwalk_ffwd" },
	{ 0xcd538084, "__pm_runtime_idle" },
	{ 0x8451fdfe, "sg_init_table" },
	{ 0xa1fc4dc7, "dma_map_sg_attrs" },
	{ 0x77e9eb37, "aes_encrypt" },
	{ 0xf14c7d14, "crypto_alloc_skcipher" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "omap-crypto,crypto_engine,libaes");

MODULE_ALIAS("of:N*T*Cti,omap2-aes");
MODULE_ALIAS("of:N*T*Cti,omap2-aesC*");
MODULE_ALIAS("of:N*T*Cti,omap3-aes");
MODULE_ALIAS("of:N*T*Cti,omap3-aesC*");
MODULE_ALIAS("of:N*T*Cti,omap4-aes");
MODULE_ALIAS("of:N*T*Cti,omap4-aesC*");

MODULE_INFO(srcversion, "0623D7EE39E890E5BF32638");
