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
	{ 0xe914e41e, "strcpy" },
	{ 0x19ede06b, "snd_rawmidi_receive" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x5a8c6d5c, "snd_rawmidi_transmit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xbf7563c7, "snd_card_register" },
	{ 0xc1e80553, "snd_card_free" },
	{ 0x73901f82, "usb_interface_id" },
	{ 0xeaafe28d, "snd_rawmidi_drop_output" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e09263f, "usb_copy_descriptors" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x94565d24, "usb_ep_free_request" },
	{ 0x1a63f58d, "config_ep_by_speed" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x910e55f7, "alloc_ep_req" },
	{ 0x6b6d0c57, "snd_component_add" },
	{ 0x3030b7a5, "snd_card_new" },
	{ 0x49f26466, "kstrndup" },
	{ 0x4398cb52, "usb_function_register" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x9449eb2a, "config_group_init_type_name" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xac5974c2, "snd_card_free_when_closed" },
	{ 0xb76cb41a, "usb_ep_autoconfig" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xf248f58c, "usb_put_function_instance" },
	{ 0xd466a3c7, "snd_device_new" },
	{ 0x6587ec7f, "snd_rawmidi_new" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xb9b5f687, "usb_function_unregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6d6ce041, "snd_rawmidi_set_ops" },
	{ 0xd8dca8c1, "usb_ep_set_halt" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xc848d8dc, "usb_ep_queue" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xd39fa6ab, "__kfifo_alloc" },
	{ 0x9a13d16, "usb_ep_enable" },
	{ 0xbace3461, "usb_ep_disable" },
	{ 0xd37e9c2, "_dev_printk" },
	{ 0xf149391d, "usb_free_all_descriptors" },
	{ 0xe6b0291, "usb_gstrings_attach" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "snd-rawmidi,snd,libcomposite,udc-core");


MODULE_INFO(srcversion, "E945AEF9ED97634B3352B66");
