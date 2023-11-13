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

SYMBOL_CRC(rpmsg_kdrv_register_driver, 0x50069b8e, "");
SYMBOL_CRC(rpmsg_kdrv_send_message, 0x8ca81b38, "");
SYMBOL_CRC(rpmsg_kdrv_send_request_with_callback, 0x1368b899, "");
SYMBOL_CRC(rpmsg_kdrv_send_request_with_response, 0xfad3d913, "");
SYMBOL_CRC(rpmsg_remotedev_get_named_device, 0xbbb81198, "");
SYMBOL_CRC(rpmsg_remotedev_put_device, 0xcfd82f3a, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x45962907, "devm_kfree" },
	{ 0xdc7ad0db, "bus_register" },
	{ 0x92997ed8, "_printk" },
	{ 0xe760a489, "__register_rpmsg_driver" },
	{ 0xc17f0d47, "bus_unregister" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x9d669763, "memcpy" },
	{ 0xc080505, "devm_kstrdup" },
	{ 0xee54f561, "dev_set_name" },
	{ 0xc8d1d2, "device_register" },
	{ 0x2c6007e1, "put_device" },
	{ 0x548cea0f, "unregister_rpmsg_driver" },
	{ 0xddec41ac, "driver_register" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x692a4f08, "idr_alloc" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xad31d2c5, "rpmsg_send" },
	{ 0xa346975c, "idr_remove" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xaf159bd8, "bus_find_device" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1000e51, "schedule" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x49970de8, "finish_wait" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x47925794, "idr_find" },
	{ 0x637493f3, "__wake_up" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "rpmsg_core");


MODULE_INFO(srcversion, "98B48087A21B1DEFCAE5B4E");
