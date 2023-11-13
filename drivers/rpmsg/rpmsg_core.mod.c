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

SYMBOL_CRC(__register_rpmsg_driver, 0xe760a489, "");
SYMBOL_CRC(rpmsg_class, 0x1a95fb36, "");
SYMBOL_CRC(rpmsg_create_channel, 0xff0b2ec2, "");
SYMBOL_CRC(rpmsg_create_ept, 0x22ad5fdb, "");
SYMBOL_CRC(rpmsg_destroy_ept, 0x43bf3005, "");
SYMBOL_CRC(rpmsg_find_device, 0xe02819f3, "");
SYMBOL_CRC(rpmsg_get_mtu, 0xe2053842, "");
SYMBOL_CRC(rpmsg_poll, 0x51a61a21, "");
SYMBOL_CRC(rpmsg_register_device, 0x4ee4596d, "");
SYMBOL_CRC(rpmsg_register_device_override, 0xa1cfdd9f, "");
SYMBOL_CRC(rpmsg_release_channel, 0xdc4f4f79, "");
SYMBOL_CRC(rpmsg_send, 0xad31d2c5, "");
SYMBOL_CRC(rpmsg_send_offchannel, 0x483e5b75, "");
SYMBOL_CRC(rpmsg_sendto, 0xd54d1543, "");
SYMBOL_CRC(rpmsg_trysend, 0x0cbc00a6, "");
SYMBOL_CRC(rpmsg_trysend_offchannel, 0xb5f8aeb8, "");
SYMBOL_CRC(rpmsg_trysendto, 0x581c1157, "");
SYMBOL_CRC(rpmsg_unregister_device, 0xe067f369, "");
SYMBOL_CRC(unregister_rpmsg_driver, 0x548cea0f, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x64b48ee7, "device_find_child" },
	{ 0xfc3f3589, "strscpy_pad" },
	{ 0xee54f561, "dev_set_name" },
	{ 0xb312e47e, "device_initialize" },
	{ 0x97255bdf, "strlen" },
	{ 0xb997a3f5, "driver_set_override" },
	{ 0xc33aa545, "device_add" },
	{ 0x37a0cba, "kfree" },
	{ 0x2c6007e1, "put_device" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x84b183ae, "strncmp" },
	{ 0x19d8a156, "of_match_device" },
	{ 0x49f26466, "kstrndup" },
	{ 0x6c1ce5ce, "strcspn" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xacaaba89, "device_unregister" },
	{ 0xddec41ac, "driver_register" },
	{ 0xbb4f160b, "driver_unregister" },
	{ 0x1697d536, "__class_create" },
	{ 0x92997ed8, "_printk" },
	{ 0xdc7ad0db, "bus_register" },
	{ 0xca3ce6df, "class_destroy" },
	{ 0xc17f0d47, "bus_unregister" },
	{ 0xa02e6181, "of_device_uevent_modalias" },
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0x2fc5c15b, "of_device_modalias" },
	{ 0xd12e4291, "dev_pm_domain_detach" },
	{ 0x5f754e5a, "memset" },
	{ 0x7a4d0dd1, "dev_pm_domain_attach" },
	{ 0x328a05f1, "strncpy" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8A648FA460C17E78424C559");
