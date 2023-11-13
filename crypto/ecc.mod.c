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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(crypto_ecdh_shared_secret, 0xa76b31a2, "");
SYMBOL_CRC(ecc_alloc_point, 0x8e688192, "");
SYMBOL_CRC(ecc_free_point, 0x90cdc197, "");
SYMBOL_CRC(ecc_gen_privkey, 0xd6315f31, "");
SYMBOL_CRC(ecc_get_curve, 0xb10fc19e, "");
SYMBOL_CRC(ecc_get_curve25519, 0x8261eccb, "");
SYMBOL_CRC(ecc_is_key_valid, 0x671f7aa5, "");
SYMBOL_CRC(ecc_is_pubkey_valid_full, 0x188a1647, "");
SYMBOL_CRC(ecc_is_pubkey_valid_partial, 0xde867c29, "");
SYMBOL_CRC(ecc_make_pub_key, 0xed4ae15e, "");
SYMBOL_CRC(ecc_point_is_zero, 0xd94c8eb5, "");
SYMBOL_CRC(ecc_point_mult_shamir, 0x9263b417, "");
SYMBOL_CRC(vli_cmp, 0x92668805, "");
SYMBOL_CRC(vli_from_be64, 0x16e410ff, "");
SYMBOL_CRC(vli_from_le64, 0xeac9b99a, "");
SYMBOL_CRC(vli_is_zero, 0x4c281912, "");
SYMBOL_CRC(vli_mod_inv, 0x1a5faa3a, "");
SYMBOL_CRC(vli_mod_mult_slow, 0x7c0fbb00, "");
SYMBOL_CRC(vli_num_bits, 0x932b6ff7, "");
SYMBOL_CRC(vli_sub, 0x9f6efabd, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x5f754e5a, "memset" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x37a0cba, "kfree" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x9d669763, "memcpy" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x6ff607b6, "crypto_get_default_rng" },
	{ 0x668402aa, "crypto_put_default_rng" },
	{ 0x30b034bd, "crypto_default_rng" },
	{ 0x84b183ae, "strncmp" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x99bb8806, "memmove" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8B1B7FD50A5DB6A81E997B4");
