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
	{ 0xeb00be0d, "xt_register_targets" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x3f949cdf, "xt_unregister_targets" },
	{ 0x48da9274, "unregister_pernet_subsys" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x828ce6bb, "mutex_lock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0x881ae9f9, "nf_dup_ipv6" },
	{ 0x9d9f08a2, "nf_dup_ipv4" },
	{ 0xde4bf88b, "__mutex_init" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x37a0cba, "kfree" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xbea5ff1e, "static_key_initialized" },
	{ 0x3f1ef70a, "xt_tee_enabled" },
	{ 0x71c90087, "memcmp" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x1e415ad2, "dev_get_by_name" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "x_tables,nf_dup_ipv6,nf_dup_ipv4");


MODULE_INFO(srcversion, "26459F75F8CD9F5E61EB421");
