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

SYMBOL_CRC(snd_hwdep_new, 0xb27142b1, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x5a6d5863, "try_module_get" },
	{ 0xb2a51d20, "snd_info_register" },
	{ 0x792afccf, "snd_info_create_module_entry" },
	{ 0xee54f561, "dev_set_name" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x7798415f, "snd_info_free_entry" },
	{ 0x37a0cba, "kfree" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xce825be, "snd_unregister_oss_device" },
	{ 0x637493f3, "__wake_up" },
	{ 0xcd9c295c, "snd_register_oss_device" },
	{ 0x1000e51, "schedule" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x2c6007e1, "put_device" },
	{ 0x39ad008, "snd_ctl_register_ioctl" },
	{ 0xf51964e5, "snd_card_file_add" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xe61a6643, "__current" },
	{ 0x1449535e, "module_put" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x8f595b11, "snd_major" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xe1681620, "snd_unregister_device" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xd466a3c7, "snd_device_new" },
	{ 0x5f754e5a, "memset" },
	{ 0x52842d82, "_dev_warn" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x176f192d, "snd_ctl_unregister_ioctl" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xeea0399, "strscpy" },
	{ 0x198788b4, "snd_lookup_oss_minor_data" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x4418ca21, "seq_printf" },
	{ 0xb2e5ae4a, "snd_lookup_minor_data" },
	{ 0xb7e7508, "snd_device_initialize" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x1b994a33, "snd_card_file_remove" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x49ddd3df, "snd_register_device" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "snd");


MODULE_INFO(srcversion, "2F1902DAB3C617A971424F9");
