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
	{ 0x1212c326, "i2c_register_driver" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x37a0cba, "kfree" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x2f4a0dbf, "i2c_transfer_buffer_flags" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xba3e8827, "_dev_err" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x428dbbe3, "firmware_request_nowarn" },
	{ 0x3b5cf393, "_dev_info" },
	{ 0x9d669763, "memcpy" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6196a6ec, "i2c_del_driver" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x888ff671, "media_entity_pads_init" },
	{ 0x92c28b71, "media_device_register_entity" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xeb70fb9d, "param_ops_int" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "mc");

MODULE_ALIAS("i2c:si2157");
MODULE_ALIAS("i2c:si2146");
MODULE_ALIAS("i2c:si2141");
MODULE_ALIAS("i2c:si2177");

MODULE_INFO(srcversion, "06A76F5C6E7FE9832D03C81");
