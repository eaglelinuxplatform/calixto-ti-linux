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
	{ 0x55303e3f, "input_register_handler" },
	{ 0x5259364d, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x4bafa951, "input_close_device" },
	{ 0x1823c093, "input_unregister_handle" },
	{ 0x7f88f275, "input_inject_event" },
	{ 0x88ab6b13, "input_unregister_handler" },
	{ 0xc8e173ed, "_find_next_bit_le" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x565b9c8f, "input_register_handle" },
	{ 0xc15396ab, "input_open_device" },
	{ 0x2b8c3f0c, "led_classdev_register_ext" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "led-class");

MODULE_ALIAS("input:b*v*p*e*-e*11,*k*r*a*m*l*s*f*w*");

MODULE_INFO(srcversion, "88B38FB779492C9AEC9736A");
