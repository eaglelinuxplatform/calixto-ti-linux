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

SYMBOL_CRC(cryptd_aead_child, 0xb7f31647, "_gpl");
SYMBOL_CRC(cryptd_aead_queued, 0xd6a11f28, "_gpl");
SYMBOL_CRC(cryptd_ahash_child, 0xf7d29425, "_gpl");
SYMBOL_CRC(cryptd_ahash_queued, 0xf35741cf, "_gpl");
SYMBOL_CRC(cryptd_alloc_aead, 0x7ef41433, "_gpl");
SYMBOL_CRC(cryptd_alloc_ahash, 0x15f42fbf, "_gpl");
SYMBOL_CRC(cryptd_alloc_skcipher, 0xc0da9b27, "_gpl");
SYMBOL_CRC(cryptd_free_aead, 0x0dacc542, "_gpl");
SYMBOL_CRC(cryptd_free_ahash, 0x0893a859, "_gpl");
SYMBOL_CRC(cryptd_free_skcipher, 0xac4c9b01, "_gpl");
SYMBOL_CRC(cryptd_shash_desc, 0x65ee490e, "_gpl");
SYMBOL_CRC(cryptd_skcipher_child, 0xe3805ff2, "_gpl");
SYMBOL_CRC(cryptd_skcipher_queued, 0x6ecb19ed, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xf14c7d14, "crypto_alloc_skcipher" },
	{ 0x1c12294e, "crypto_destroy_tfm" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x661af43d, "crypto_alloc_ahash" },
	{ 0xfcb254cb, "crypto_alloc_aead" },
	{ 0x8d78f6a0, "crypto_skcipher_setkey" },
	{ 0x6158d03d, "crypto_spawn_tfm2" },
	{ 0x8d82c6b5, "crypto_drop_spawn" },
	{ 0x37a0cba, "kfree" },
	{ 0x7b41a657, "crypto_shash_setkey" },
	{ 0xb53f432b, "crypto_aead_setauthsize" },
	{ 0x77b66c43, "crypto_aead_setkey" },
	{ 0xc8e173ed, "_find_next_bit_le" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9008d60e, "crypto_unregister_template" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0x499043d3, "crypto_init_queue" },
	{ 0x92997ed8, "_printk" },
	{ 0x791d2fd0, "crypto_register_template" },
	{ 0xe61a6643, "__current" },
	{ 0x382cf040, "crypto_enqueue_request" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x35ac73e3, "crypto_dequeue_request" },
	{ 0x51e9df0c, "shash_ahash_digest" },
	{ 0xcc40b5f4, "shash_ahash_finup" },
	{ 0x79712782, "crypto_shash_final" },
	{ 0xbb04f55d, "shash_ahash_update" },
	{ 0x3c4dbe3d, "crypto_skcipher_decrypt" },
	{ 0x5f754e5a, "memset" },
	{ 0x6433bc6, "crypto_skcipher_encrypt" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x42dbda2a, "crypto_grab_skcipher" },
	{ 0xbc6dff3b, "crypto_grab_aead" },
	{ 0x9d669763, "memcpy" },
	{ 0x61c65612, "aead_register_instance" },
	{ 0x7750fd7a, "crypto_grab_shash" },
	{ 0x78423384, "crypto_shash_alg_has_setkey" },
	{ 0xb3f338d0, "ahash_register_instance" },
	{ 0x8f7ed8a1, "skcipher_register_instance" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x9098ac8b, "param_ops_uint" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BC77B79DA871D0D3F8BA23D");
