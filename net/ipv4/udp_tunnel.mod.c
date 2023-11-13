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

SYMBOL_CRC(udp_sock_create4, 0x27d58057, "");
SYMBOL_CRC(setup_udp_tunnel_sock, 0x12e3c7a5, "_gpl");
SYMBOL_CRC(udp_tun_rx_dst, 0x0285bd5d, "_gpl");
SYMBOL_CRC(udp_tunnel_drop_rx_port, 0x9d2bcfe7, "_gpl");
SYMBOL_CRC(udp_tunnel_notify_add_rx_port, 0x49049cd2, "_gpl");
SYMBOL_CRC(udp_tunnel_notify_del_rx_port, 0xfb98949b, "_gpl");
SYMBOL_CRC(udp_tunnel_push_rx_port, 0x71924917, "_gpl");
SYMBOL_CRC(udp_tunnel_sock_release, 0xa373f9fe, "_gpl");
SYMBOL_CRC(udp_tunnel_xmit_skb, 0xba3f5947, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x12f3164, "kernel_bind" },
	{ 0x70f8cf24, "udp_set_csum" },
	{ 0x37a0cba, "kfree" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x33eb902e, "netdev_warn" },
	{ 0x9aa80514, "udp_tunnel_nic_ops" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x29d1e767, "ipv6_stub" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x99517682, "udp_encap_enable" },
	{ 0xd27e0c1, "kernel_sock_shutdown" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xd5332df8, "iptunnel_xmit" },
	{ 0x714b06aa, "nla_put" },
	{ 0xdca6f069, "kernel_connect" },
	{ 0x5f754e5a, "memset" },
	{ 0xabc58048, "skb_trim" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x1822724b, "sock_create_kern" },
	{ 0x8e024dcf, "call_netdevice_notifiers" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x2645afde, "metadata_dst_alloc" },
	{ 0xf1cc1ee5, "sock_release" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xdb5664d4, "sock_bindtoindex" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0x349cba85, "strchr" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7701D8237014414E0F18168");
