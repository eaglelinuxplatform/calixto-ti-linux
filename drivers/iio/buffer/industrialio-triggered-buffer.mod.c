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

SYMBOL_CRC(iio_triggered_buffer_cleanup, 0x91636500, "");
SYMBOL_CRC(iio_triggered_buffer_setup_ext, 0x820ea0de, "");
SYMBOL_CRC(devm_iio_triggered_buffer_setup_ext, 0x8178fbbd, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xeb467983, "iio_kfifo_allocate" },
	{ 0xbc56964a, "iio_device_id" },
	{ 0xdb4301c8, "iio_alloc_pollfunc" },
	{ 0x62dc79db, "iio_device_attach_buffer" },
	{ 0x95d2d73c, "iio_kfifo_free" },
	{ 0x6d3c147b, "iio_dealloc_pollfunc" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x4091ed3e, "devm_add_action" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "kfifo_buf,industrialio");


MODULE_INFO(srcversion, "A4A2CA091518043A2E933A0");
