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

SYMBOL_CRC(snd_mixer_oss_ioctl_card, 0x2bd946da, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe914e41e, "strcpy" },
	{ 0x5a6d5863, "try_module_get" },
	{ 0xb2a51d20, "snd_info_register" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x7798415f, "snd_info_free_entry" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x9e6d79f8, "snd_info_get_str" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xce825be, "snd_unregister_oss_device" },
	{ 0xe3297fc1, "snd_ctl_find_id" },
	{ 0xcd9c295c, "snd_register_oss_device" },
	{ 0x92997ed8, "_printk" },
	{ 0xf18b8037, "snd_card_ref" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x2c6007e1, "put_device" },
	{ 0xf51964e5, "snd_card_file_add" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x4d80d214, "snd_mixer_oss_notify_callback" },
	{ 0xe61a6643, "__current" },
	{ 0x1449535e, "module_put" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xb35a3639, "snd_ctl_notify" },
	{ 0x8df3789f, "snd_oss_info_register" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x5f754e5a, "memset" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb1d7438, "down_read" },
	{ 0xf474fdcb, "kfree_const" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xf57fd9b2, "nonseekable_open" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xeea0399, "strscpy" },
	{ 0x198788b4, "snd_lookup_oss_minor_data" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x4418ca21, "seq_printf" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xcaa38ea4, "snd_info_create_card_entry" },
	{ 0x1b994a33, "snd_card_file_remove" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xdfb9fb24, "snd_ctl_find_numid" },
	{ 0xa7b3181c, "up_read" },
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "snd");


MODULE_INFO(srcversion, "5080EA7332631C4554571AC");
