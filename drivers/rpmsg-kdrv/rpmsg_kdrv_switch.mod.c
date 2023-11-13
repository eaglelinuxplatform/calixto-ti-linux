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
	{ 0x50069b8e, "rpmsg_kdrv_register_driver" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0xfad3d913, "rpmsg_kdrv_send_request_with_response" },
	{ 0x45962907, "devm_kfree" },
	{ 0x8ca81b38, "rpmsg_kdrv_send_message" },
	{ 0x9d669763, "memcpy" },
	{ 0x71c90087, "memcmp" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "rpmsg_kdrv");


MODULE_INFO(srcversion, "F425AF7CA6627976E0257E0");
