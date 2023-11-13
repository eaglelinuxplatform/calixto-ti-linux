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
	{ 0xa8fb743d, "des_expand_key" },
	{ 0x5f754e5a, "memset" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9d669763, "memcpy" },
	{ 0xcb99963, "__platform_driver_register" },
	{ 0xcd538084, "__pm_runtime_idle" },
	{ 0xea07d716, "page_address" },
	{ 0xe06699b2, "sg_next" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0xd5328478, "omap_crypto_cleanup" },
	{ 0xf5d0e38a, "crypto_finalize_skcipher_request" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x9580c7ff, "__pm_runtime_suspend" },
	{ 0xbf83afbc, "dma_sync_sg_for_device" },
	{ 0x7d5fc59d, "dma_unmap_sg_attrs" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xb4c7233f, "crypto_unregister_skcipher" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x370e7e97, "dma_release_channel" },
	{ 0xc5745645, "__pm_runtime_disable" },
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x701db540, "omap_crypto_align_sg" },
	{ 0x42685d7, "sg_nents_for_len" },
	{ 0x3975e6aa, "crypto_transfer_skcipher_request_to_engine" },
	{ 0xa1fc4dc7, "dma_map_sg_attrs" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x826781f6, "platform_get_resource" },
	{ 0x5ec1a11d, "of_device_get_match_data" },
	{ 0x600e4576, "devm_ioremap_resource" },
	{ 0x2cb2870f, "__pm_runtime_use_autosuspend" },
	{ 0x3ff02157, "pm_runtime_set_autosuspend_delay" },
	{ 0xe3ae1810, "pm_runtime_enable" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0x9ec83d54, "dma_request_chan" },
	{ 0x713e2042, "crypto_engine_alloc_init" },
	{ 0xc2c38819, "crypto_engine_start" },
	{ 0xdd68e82, "crypto_register_skcipher" },
	{ 0x5eaf5d6e, "crypto_engine_exit" },
	{ 0x48ab7808, "platform_get_irq" },
	{ 0xfd56f120, "devm_request_threaded_irq" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "libdes,omap-crypto,crypto_engine");

MODULE_ALIAS("of:N*T*Cti,omap4-des");
MODULE_ALIAS("of:N*T*Cti,omap4-desC*");

MODULE_INFO(srcversion, "E3EDA1BDE5D51119D41EBF7");
