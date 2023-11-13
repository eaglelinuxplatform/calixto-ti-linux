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

SYMBOL_CRC(vb2_querybuf, 0xbdab2b39, "");
SYMBOL_CRC(_vb2_fop_release, 0x03c2d6e5, "_gpl");
SYMBOL_CRC(vb2_create_bufs, 0x6b81a2cb, "_gpl");
SYMBOL_CRC(vb2_dqbuf, 0xed20a825, "_gpl");
SYMBOL_CRC(vb2_expbuf, 0x69dab221, "_gpl");
SYMBOL_CRC(vb2_find_buffer, 0x18f8cf8e, "_gpl");
SYMBOL_CRC(vb2_fop_mmap, 0xb60be119, "_gpl");
SYMBOL_CRC(vb2_fop_poll, 0x900f443d, "_gpl");
SYMBOL_CRC(vb2_fop_read, 0x261ba2ec, "_gpl");
SYMBOL_CRC(vb2_fop_release, 0x72407b9d, "_gpl");
SYMBOL_CRC(vb2_fop_write, 0x906f43c2, "_gpl");
SYMBOL_CRC(vb2_ioctl_create_bufs, 0x76599386, "_gpl");
SYMBOL_CRC(vb2_ioctl_dqbuf, 0x6e2e3bad, "_gpl");
SYMBOL_CRC(vb2_ioctl_expbuf, 0x8d3d707e, "_gpl");
SYMBOL_CRC(vb2_ioctl_prepare_buf, 0x4e441e60, "_gpl");
SYMBOL_CRC(vb2_ioctl_qbuf, 0x261efa3f, "_gpl");
SYMBOL_CRC(vb2_ioctl_querybuf, 0xc8022ed9, "_gpl");
SYMBOL_CRC(vb2_ioctl_reqbufs, 0xc9b53156, "_gpl");
SYMBOL_CRC(vb2_ioctl_streamoff, 0x914bf1ef, "_gpl");
SYMBOL_CRC(vb2_ioctl_streamon, 0xdbba957e, "_gpl");
SYMBOL_CRC(vb2_ops_wait_finish, 0x31e269f0, "_gpl");
SYMBOL_CRC(vb2_ops_wait_prepare, 0x3bc810d3, "_gpl");
SYMBOL_CRC(vb2_poll, 0x6981fd98, "_gpl");
SYMBOL_CRC(vb2_prepare_buf, 0xd5c2fa17, "_gpl");
SYMBOL_CRC(vb2_qbuf, 0xe4306316, "_gpl");
SYMBOL_CRC(vb2_queue_change_type, 0xe173da1a, "_gpl");
SYMBOL_CRC(vb2_queue_init, 0x5f570e2f, "_gpl");
SYMBOL_CRC(vb2_queue_init_name, 0xf13130a6, "_gpl");
SYMBOL_CRC(vb2_queue_release, 0x7e738837, "_gpl");
SYMBOL_CRC(vb2_reqbufs, 0x9b874ae8, "_gpl");
SYMBOL_CRC(vb2_request_queue, 0x8f0eb926, "_gpl");
SYMBOL_CRC(vb2_request_validate, 0xaf658474, "_gpl");
SYMBOL_CRC(vb2_streamoff, 0xb409dfc2, "_gpl");
SYMBOL_CRC(vb2_streamon, 0xdad73fa8, "_gpl");
SYMBOL_CRC(vb2_video_unregister_device, 0x485a8eb4, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xfb29c11d, "vb2_verify_memory_type" },
	{ 0x10c784c, "vb2_core_reqbufs" },
	{ 0x90a565c5, "vb2_core_create_bufs" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xa27c4d49, "vb2_core_dqbuf" },
	{ 0x92997ed8, "_printk" },
	{ 0x29960984, "vb2_core_expbuf" },
	{ 0xeea0399, "strscpy" },
	{ 0xbb25808, "vb2_core_queue_init" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x318a1469, "vb2_core_queue_release" },
	{ 0x822781d5, "video_devdata" },
	{ 0xd7ab64ca, "vb2_core_poll" },
	{ 0xa7ded6d6, "v4l2_event_pending" },
	{ 0xcd1c99c5, "vb2_mmap" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x48f4bfed, "v4l2_fh_release" },
	{ 0xcedc99af, "mutex_lock_interruptible" },
	{ 0x68bc358b, "vb2_write" },
	{ 0x7997a18c, "vb2_read" },
	{ 0xfb713999, "vb2_request_buffer_cnt" },
	{ 0x5f754e5a, "memset" },
	{ 0x3919fcc1, "media_request_get_by_fd" },
	{ 0xa8ce1090, "media_request_put" },
	{ 0x7920c16c, "vb2_core_prepare_buf" },
	{ 0x969ec8b, "vb2_core_qbuf" },
	{ 0x93f5c6c1, "vb2_core_streamon" },
	{ 0xbca524c7, "vb2_core_streamoff" },
	{ 0x51943974, "get_device" },
	{ 0x6bf6c9b8, "video_unregister_device" },
	{ 0x2c6007e1, "put_device" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0xf8b9f559, "vb2_buffer_in_use" },
	{ 0x2eed3cef, "vb2_core_querybuf" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "videobuf2-common,videodev,mc");


MODULE_INFO(srcversion, "586431A6A51886EF20A7583");
