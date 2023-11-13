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

SYMBOL_CRC(btintel_bootup, 0x884d26b8, "_gpl");
SYMBOL_CRC(btintel_check_bdaddr, 0x78adc35b, "_gpl");
SYMBOL_CRC(btintel_configure_setup, 0xfe9bdc69, "_gpl");
SYMBOL_CRC(btintel_download_firmware, 0x818f8d23, "_gpl");
SYMBOL_CRC(btintel_enter_mfg, 0xbac4f9e8, "_gpl");
SYMBOL_CRC(btintel_exit_mfg, 0x59e3636a, "_gpl");
SYMBOL_CRC(btintel_load_ddc_config, 0x9f0ed14d, "_gpl");
SYMBOL_CRC(btintel_read_boot_params, 0x1d46d396, "_gpl");
SYMBOL_CRC(btintel_read_version, 0xca0bc20b, "_gpl");
SYMBOL_CRC(btintel_regmap_init, 0x540a6fbf, "_gpl");
SYMBOL_CRC(btintel_secure_send_result, 0x70398f31, "_gpl");
SYMBOL_CRC(btintel_send_intel_reset, 0xf02010a7, "_gpl");
SYMBOL_CRC(btintel_set_bdaddr, 0xf2c9573b, "_gpl");
SYMBOL_CRC(btintel_set_diag, 0xd31c6992, "_gpl");
SYMBOL_CRC(btintel_set_event_mask_mfg, 0xa22f53ea, "_gpl");
SYMBOL_CRC(btintel_set_quality_report, 0xd74f386c, "_gpl");
SYMBOL_CRC(btintel_version_info, 0xd4dcefc2, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xc48a8a57, "__hci_cmd_sync" },
	{ 0x71c90087, "memcmp" },
	{ 0xb1d386b4, "kfree_skb_reason" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x718b8b7, "bt_info" },
	{ 0xa9857928, "request_firmware_direct" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xc7915338, "hci_cmd_sync" },
	{ 0xaa42a42f, "kmalloc_trace" },
	{ 0xcd9bd274, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x7aad008b, "bt_to_errno" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x8978ba7c, "skb_pull" },
	{ 0x72c39b65, "__regmap_init" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x4071b517, "out_of_line_wait_on_bit_timeout" },
	{ 0x44bae227, "bit_wait_timeout" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x428dbbe3, "firmware_request_nowarn" },
	{ 0xfe5eb6e6, "request_firmware" },
	{ 0x729d78a9, "__hci_cmd_sync_ev" },
	{ 0x5f754e5a, "memset" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "28058858CBC79161EF62BD9");
