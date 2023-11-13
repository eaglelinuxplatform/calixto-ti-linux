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
	{ 0x48c39a62, "register_pernet_subsys" },
	{ 0x2bdeee43, "nf_log_register" },
	{ 0xc5d3a56f, "nf_log_unregister" },
	{ 0x92997ed8, "_printk" },
	{ 0x48da9274, "unregister_pernet_subsys" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xf017aea9, "nf_log_unset" },
	{ 0xb6f859f4, "_raw_read_lock_bh" },
	{ 0xcd6f2dc9, "nf_log_buf_add" },
	{ 0xfbea611e, "_raw_read_unlock_bh" },
	{ 0x8b618d08, "overflowuid" },
	{ 0x7171121c, "overflowgid" },
	{ 0x3ae5763a, "nf_log_set" },
	{ 0x62741661, "skb_copy_bits" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xd4961de, "nf_log_buf_open" },
	{ 0x80c68137, "nf_log_buf_close" },
	{ 0x45312867, "init_net" },
	{ 0x9aaeefce, "sysctl_nf_log_all_netns" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "EE7D0B344F607F323FBE3AB");
