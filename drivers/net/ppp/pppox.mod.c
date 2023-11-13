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

SYMBOL_CRC(pppox_ioctl, 0x2ee83caf, "");
SYMBOL_CRC(pppox_unbind_sock, 0x288b5e41, "");
SYMBOL_CRC(register_pppox_proto, 0xc7819581, "");
SYMBOL_CRC(unregister_pppox_proto, 0xe0ff7a18, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xe8f53019, "ppp_unregister_channel" },
	{ 0xb020a468, "lock_sock_nested" },
	{ 0x7b629328, "release_sock" },
	{ 0x56d9e1ce, "ppp_channel_index" },
	{ 0xe61a6643, "__current" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x6769b918, "sock_register" },
	{ 0x5a6d5863, "try_module_get" },
	{ 0x1449535e, "module_put" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "ppp_generic");


MODULE_INFO(srcversion, "01B6ECBE6751CB63A1D543B");
