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
	{ 0x5a6d5863, "try_module_get" },
	{ 0x1924bf76, "snd_pcm_hw_param_first" },
	{ 0xb2a51d20, "snd_info_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xbb1f5a9a, "snd_pcm_kernel_ioctl" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xe0df8796, "param_array_ops" },
	{ 0x7798415f, "snd_info_free_entry" },
	{ 0xa61aa028, "snd_pcm_format_unsigned" },
	{ 0x9d669763, "memcpy" },
	{ 0x283dfe3, "_snd_pcm_hw_params_any" },
	{ 0x37a0cba, "kfree" },
	{ 0x9e6d79f8, "snd_info_get_str" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x736d8a2c, "__snd_pcm_lib_xfer" },
	{ 0x3796bdcc, "snd_pcm_format_little_endian" },
	{ 0xce825be, "snd_unregister_oss_device" },
	{ 0x637493f3, "__wake_up" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x650f8603, "snd_pcm_format_silence_64" },
	{ 0x91d0be0b, "snd_pcm_open_substream" },
	{ 0xcd9c295c, "snd_register_oss_device" },
	{ 0x92997ed8, "_printk" },
	{ 0xf359b46c, "snd_pcm_stream_unlock_irq" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xe1e941f4, "snd_pcm_stream_lock_irq" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x2c6007e1, "put_device" },
	{ 0xf51964e5, "snd_card_file_add" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xe61a6643, "__current" },
	{ 0x1449535e, "module_put" },
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0x2bd946da, "snd_mixer_oss_ioctl_card" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x6ef8fcd8, "snd_pcm_format_linear" },
	{ 0x8e87fa06, "snd_pcm_mmap_data" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x8df3789f, "snd_oss_info_register" },
	{ 0xca90e92a, "snd_pcm_hw_param_last" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xcedc99af, "mutex_lock_interruptible" },
	{ 0x5f754e5a, "memset" },
	{ 0x52e3e4a5, "snd_pcm_hw_param_value" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x1d027e4b, "snd_pcm_format_signed" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfd0f592, "mutex_trylock" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xf57fd9b2, "nonseekable_open" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x198788b4, "snd_lookup_oss_minor_data" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xe4ea4aab, "param_ops_bool" },
	{ 0x5f810777, "snd_pcm_hw_refine" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x4418ca21, "seq_printf" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xcaa38ea4, "snd_info_create_card_entry" },
	{ 0x4f816e9b, "snd_pcm_format_big_endian" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x100fd4b9, "snd_pcm_notify" },
	{ 0x78b18898, "snd_pcm_release_substream" },
	{ 0x1b994a33, "snd_card_file_remove" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x5e7f4920, "snd_pcm_format_set_silence" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "snd-pcm,snd,snd-mixer-oss");


MODULE_INFO(srcversion, "25E656245B1160CC070665B");
