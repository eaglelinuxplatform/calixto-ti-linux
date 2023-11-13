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

SYMBOL_CRC(crypto_engine_alloc_init, 0x713e2042, "_gpl");
SYMBOL_CRC(crypto_engine_alloc_init_and_set, 0xe76d61a3, "_gpl");
SYMBOL_CRC(crypto_engine_exit, 0x5eaf5d6e, "_gpl");
SYMBOL_CRC(crypto_engine_start, 0xc2c38819, "_gpl");
SYMBOL_CRC(crypto_engine_stop, 0x9fe3d242, "_gpl");
SYMBOL_CRC(crypto_finalize_aead_request, 0xb6f2615c, "_gpl");
SYMBOL_CRC(crypto_finalize_akcipher_request, 0x650f4438, "_gpl");
SYMBOL_CRC(crypto_finalize_hash_request, 0xe1427b67, "_gpl");
SYMBOL_CRC(crypto_finalize_kpp_request, 0x68a8aaf7, "_gpl");
SYMBOL_CRC(crypto_finalize_skcipher_request, 0xf5d0e38a, "_gpl");
SYMBOL_CRC(crypto_transfer_aead_request_to_engine, 0x0a2582ed, "_gpl");
SYMBOL_CRC(crypto_transfer_akcipher_request_to_engine, 0x5f0dbf3d, "_gpl");
SYMBOL_CRC(crypto_transfer_hash_request_to_engine, 0x2e7dd068, "_gpl");
SYMBOL_CRC(crypto_transfer_kpp_request_to_engine, 0x3c734634, "_gpl");
SYMBOL_CRC(crypto_transfer_skcipher_request_to_engine, 0x3975e6aa, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xa1ac4c, "kthread_queue_work" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xf9a482f9, "msleep" },
	{ 0x52842d82, "_dev_warn" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x499043d3, "crypto_init_queue" },
	{ 0x7c4df4ed, "kthread_create_worker" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0xf416746, "sched_set_fifo" },
	{ 0x9dfc2e89, "kthread_destroy_worker" },
	{ 0x382cf040, "crypto_enqueue_request" },
	{ 0x35ac73e3, "crypto_dequeue_request" },
	{ 0x3ca0808, "crypto_enqueue_request_head" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "567D2D97CD2F8E3CF47E4C5");
