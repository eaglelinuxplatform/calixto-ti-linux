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

SYMBOL_CRC(iio_kfifo_allocate, 0xeb467983, "");
SYMBOL_CRC(iio_kfifo_free, 0x95d2d73c, "");
SYMBOL_CRC(devm_iio_kfifo_buffer_setup_ext, 0xa43b942c, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xd39fa6ab, "__kfifo_alloc" },
	{ 0x30a80826, "__kfifo_from_user" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x637493f3, "__wake_up" },
	{ 0xcedc99af, "mutex_lock_interruptible" },
	{ 0x4578f528, "__kfifo_to_user" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x25c9932f, "iio_buffer_put" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xb36c57cb, "iio_buffer_init" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xc9357994, "__devres_alloc_node" },
	{ 0x1f051c7b, "devres_add" },
	{ 0x62dc79db, "iio_device_attach_buffer" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "789B2AF23BCA847A023B506");
