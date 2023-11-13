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

SYMBOL_CRC(nf_defrag_ipv4_disable, 0x36cbf366, "_gpl");
SYMBOL_CRC(nf_defrag_ipv4_enable, 0xb2692191, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x828ce6bb, "mutex_lock" },
	{ 0x9618ede0, "mutex_unlock" },
	{ 0xbd35b754, "nf_register_net_hooks" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xe61a6643, "__current" },
	{ 0xa211428b, "ip_defrag" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x12f85125, "nf_unregister_net_hooks" },
	{ 0x48c39a62, "register_pernet_subsys" },
	{ 0x48da9274, "unregister_pernet_subsys" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "52E1D82824810B71BC94219");
