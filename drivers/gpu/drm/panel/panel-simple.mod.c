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
	{ 0x9d669763, "memcpy" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xcb99963, "__platform_driver_register" },
	{ 0xaa328067, "mipi_dsi_driver_register_full" },
	{ 0x91187868, "platform_driver_unregister" },
	{ 0xa10b7627, "drm_panel_disable" },
	{ 0xa35355c0, "drm_panel_unprepare" },
	{ 0xb60f9287, "drm_panel_remove" },
	{ 0x2cb2870f, "__pm_runtime_use_autosuspend" },
	{ 0xc5745645, "__pm_runtime_disable" },
	{ 0x2c6007e1, "put_device" },
	{ 0xca82eed1, "mipi_dsi_detach" },
	{ 0xba3e8827, "_dev_err" },
	{ 0x27a0332f, "__pm_runtime_resume" },
	{ 0x61ddff67, "drm_add_edid_modes" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x9580c7ff, "__pm_runtime_suspend" },
	{ 0x200a776d, "drm_mode_duplicate" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0x2ae8b72c, "drm_mode_probed_add" },
	{ 0xc75dc0a8, "drm_connector_set_panel_orientation" },
	{ 0x5138844c, "drm_get_edid" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xbdac567a, "drm_display_info_set_bus_formats" },
	{ 0xa1d8004a, "videomode_from_timing" },
	{ 0x6754afda, "drm_mode_create" },
	{ 0x66cf2f64, "drm_display_mode_from_videomode" },
	{ 0xf1b5340a, "drm_mode_vrefresh" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x732e56d8, "gpiod_set_value_cansleep" },
	{ 0x9ed8ac9c, "regulator_disable" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x37a0cba, "kfree" },
	{ 0xf63a681d, "mipi_dsi_driver_unregister" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6b0d3011, "__of_parse_phandle_with_args" },
	{ 0x53d71abb, "regulator_enable" },
	{ 0xb24348d9, "devm_kmalloc" },
	{ 0x1aba37c0, "devm_regulator_get" },
	{ 0xd236e21b, "devm_gpiod_get_optional" },
	{ 0xc7b0dffa, "of_drm_get_panel_orientation" },
	{ 0xa51c67b9, "of_find_i2c_adapter_by_node" },
	{ 0x6d881014, "of_get_display_timing" },
	{ 0xe3ae1810, "pm_runtime_enable" },
	{ 0x3ff02157, "pm_runtime_set_autosuspend_delay" },
	{ 0x8dff396f, "drm_panel_init" },
	{ 0xbaf650fc, "drm_panel_of_backlight" },
	{ 0xf1cd82ff, "drm_panel_add" },
	{ 0xf18bebde, "dev_err_probe" },
	{ 0x5bd27430, "of_property_read_variable_u32_array" },
	{ 0xad885165, "drm_bus_flags_from_videomode" },
	{ 0x52842d82, "_dev_warn" },
	{ 0xe9f55364, "of_match_node" },
	{ 0x7cd22a42, "mipi_dsi_attach" },
	{ 0x869b215e, "pm_runtime_force_suspend" },
	{ 0xcc37b4f7, "pm_runtime_force_resume" },
	{ 0x8863ffb0, "module_layout" },
};

MODULE_INFO(depends, "drm");

MODULE_ALIAS("of:N*T*Cauo,b080uan01");
MODULE_ALIAS("of:N*T*Cauo,b080uan01C*");
MODULE_ALIAS("of:N*T*Cboe,tv080wum-nl0");
MODULE_ALIAS("of:N*T*Cboe,tv080wum-nl0C*");
MODULE_ALIAS("of:N*T*Clg,ld070wx3-sl01");
MODULE_ALIAS("of:N*T*Clg,ld070wx3-sl01C*");
MODULE_ALIAS("of:N*T*Clg,lh500wx1-sd03");
MODULE_ALIAS("of:N*T*Clg,lh500wx1-sd03C*");
MODULE_ALIAS("of:N*T*Cpanasonic,vvx10f004b00");
MODULE_ALIAS("of:N*T*Cpanasonic,vvx10f004b00C*");
MODULE_ALIAS("of:N*T*Clg,acx467akm-7");
MODULE_ALIAS("of:N*T*Clg,acx467akm-7C*");
MODULE_ALIAS("of:N*T*Cosddisplays,osd101t2045-53ts");
MODULE_ALIAS("of:N*T*Cosddisplays,osd101t2045-53tsC*");
MODULE_ALIAS("of:N*T*Campire,am-1280800n3tzqw-t00h");
MODULE_ALIAS("of:N*T*Campire,am-1280800n3tzqw-t00hC*");
MODULE_ALIAS("of:N*T*Campire,am-480272h3tmqw-t01h");
MODULE_ALIAS("of:N*T*Campire,am-480272h3tmqw-t01hC*");
MODULE_ALIAS("of:N*T*Campire,am800480r3tmqwa1h");
MODULE_ALIAS("of:N*T*Campire,am800480r3tmqwa1hC*");
MODULE_ALIAS("of:N*T*Campire,am800600p5tmqw-tb8h");
MODULE_ALIAS("of:N*T*Campire,am800600p5tmqw-tb8hC*");
MODULE_ALIAS("of:N*T*Carm,rtsm-display");
MODULE_ALIAS("of:N*T*Carm,rtsm-displayC*");
MODULE_ALIAS("of:N*T*Carmadeus,st0700-adapt");
MODULE_ALIAS("of:N*T*Carmadeus,st0700-adaptC*");
MODULE_ALIAS("of:N*T*Cauo,b101aw03");
MODULE_ALIAS("of:N*T*Cauo,b101aw03C*");
MODULE_ALIAS("of:N*T*Cauo,b101xtn01");
MODULE_ALIAS("of:N*T*Cauo,b101xtn01C*");
MODULE_ALIAS("of:N*T*Cauo,g070vvn01");
MODULE_ALIAS("of:N*T*Cauo,g070vvn01C*");
MODULE_ALIAS("of:N*T*Cauo,g101evn010");
MODULE_ALIAS("of:N*T*Cauo,g101evn010C*");
MODULE_ALIAS("of:N*T*Cauo,g104sn02");
MODULE_ALIAS("of:N*T*Cauo,g104sn02C*");
MODULE_ALIAS("of:N*T*Cauo,g121ean01");
MODULE_ALIAS("of:N*T*Cauo,g121ean01C*");
MODULE_ALIAS("of:N*T*Cauo,g133han01");
MODULE_ALIAS("of:N*T*Cauo,g133han01C*");
MODULE_ALIAS("of:N*T*Cauo,g156xtn01");
MODULE_ALIAS("of:N*T*Cauo,g156xtn01C*");
MODULE_ALIAS("of:N*T*Cauo,g185han01");
MODULE_ALIAS("of:N*T*Cauo,g185han01C*");
MODULE_ALIAS("of:N*T*Cauo,g190ean01");
MODULE_ALIAS("of:N*T*Cauo,g190ean01C*");
MODULE_ALIAS("of:N*T*Cauo,p320hvn03");
MODULE_ALIAS("of:N*T*Cauo,p320hvn03C*");
MODULE_ALIAS("of:N*T*Cauo,t215hvn01");
MODULE_ALIAS("of:N*T*Cauo,t215hvn01C*");
MODULE_ALIAS("of:N*T*Cavic,tm070ddh03");
MODULE_ALIAS("of:N*T*Cavic,tm070ddh03C*");
MODULE_ALIAS("of:N*T*Cbananapi,s070wv20-ct16");
MODULE_ALIAS("of:N*T*Cbananapi,s070wv20-ct16C*");
MODULE_ALIAS("of:N*T*Cboe,hv070wsa-100");
MODULE_ALIAS("of:N*T*Cboe,hv070wsa-100C*");
MODULE_ALIAS("of:N*T*Ccdtech,s043wq26h-ct7");
MODULE_ALIAS("of:N*T*Ccdtech,s043wq26h-ct7C*");
MODULE_ALIAS("of:N*T*Ccdtech,s070pws19hp-fc21");
MODULE_ALIAS("of:N*T*Ccdtech,s070pws19hp-fc21C*");
MODULE_ALIAS("of:N*T*Ccdtech,s070swv29hg-dc44");
MODULE_ALIAS("of:N*T*Ccdtech,s070swv29hg-dc44C*");
MODULE_ALIAS("of:N*T*Ccdtech,s070wv95-ct16");
MODULE_ALIAS("of:N*T*Ccdtech,s070wv95-ct16C*");
MODULE_ALIAS("of:N*T*Cchefree,ch101olhlwh-002");
MODULE_ALIAS("of:N*T*Cchefree,ch101olhlwh-002C*");
MODULE_ALIAS("of:N*T*Cchunghwa,claa070wp03xg");
MODULE_ALIAS("of:N*T*Cchunghwa,claa070wp03xgC*");
MODULE_ALIAS("of:N*T*Cchunghwa,claa101wa01a");
MODULE_ALIAS("of:N*T*Cchunghwa,claa101wa01aC*");
MODULE_ALIAS("of:N*T*Cchunghwa,claa101wb01");
MODULE_ALIAS("of:N*T*Cchunghwa,claa101wb01C*");
MODULE_ALIAS("of:N*T*Cdataimage,fg040346dsswbg04");
MODULE_ALIAS("of:N*T*Cdataimage,fg040346dsswbg04C*");
MODULE_ALIAS("of:N*T*Cdataimage,fg1001l0dsswmg01");
MODULE_ALIAS("of:N*T*Cdataimage,fg1001l0dsswmg01C*");
MODULE_ALIAS("of:N*T*Cdataimage,scf0700c48ggu18");
MODULE_ALIAS("of:N*T*Cdataimage,scf0700c48ggu18C*");
MODULE_ALIAS("of:N*T*Cdlc,dlc0700yzg-1");
MODULE_ALIAS("of:N*T*Cdlc,dlc0700yzg-1C*");
MODULE_ALIAS("of:N*T*Cdlc,dlc1010gig");
MODULE_ALIAS("of:N*T*Cdlc,dlc1010gigC*");
MODULE_ALIAS("of:N*T*Cedt,et035012dm6");
MODULE_ALIAS("of:N*T*Cedt,et035012dm6C*");
MODULE_ALIAS("of:N*T*Cedt,etm0350g0dh6");
MODULE_ALIAS("of:N*T*Cedt,etm0350g0dh6C*");
MODULE_ALIAS("of:N*T*Cedt,etm043080dh6gp");
MODULE_ALIAS("of:N*T*Cedt,etm043080dh6gpC*");
MODULE_ALIAS("of:N*T*Cedt,etm0430g0dh6");
MODULE_ALIAS("of:N*T*Cedt,etm0430g0dh6C*");
MODULE_ALIAS("of:N*T*Cedt,et057090dhu");
MODULE_ALIAS("of:N*T*Cedt,et057090dhuC*");
MODULE_ALIAS("of:N*T*Cedt,et070080dh6");
MODULE_ALIAS("of:N*T*Cedt,et070080dh6C*");
MODULE_ALIAS("of:N*T*Cedt,etm0700g0dh6");
MODULE_ALIAS("of:N*T*Cedt,etm0700g0dh6C*");
MODULE_ALIAS("of:N*T*Cedt,etm0700g0bdh6");
MODULE_ALIAS("of:N*T*Cedt,etm0700g0bdh6C*");
MODULE_ALIAS("of:N*T*Cedt,etm0700g0edh6");
MODULE_ALIAS("of:N*T*Cedt,etm0700g0edh6C*");
MODULE_ALIAS("of:N*T*Cedt,etml0700y5dha");
MODULE_ALIAS("of:N*T*Cedt,etml0700y5dhaC*");
MODULE_ALIAS("of:N*T*Cedt,etmv570g2dhu");
MODULE_ALIAS("of:N*T*Cedt,etmv570g2dhuC*");
MODULE_ALIAS("of:N*T*Ceink,vb3300-kca");
MODULE_ALIAS("of:N*T*Ceink,vb3300-kcaC*");
MODULE_ALIAS("of:N*T*Cevervision,vgg804821");
MODULE_ALIAS("of:N*T*Cevervision,vgg804821C*");
MODULE_ALIAS("of:N*T*Cfoxlink,fl500wvr00-a0t");
MODULE_ALIAS("of:N*T*Cfoxlink,fl500wvr00-a0tC*");
MODULE_ALIAS("of:N*T*Cfrida,frd350h54004");
MODULE_ALIAS("of:N*T*Cfrida,frd350h54004C*");
MODULE_ALIAS("of:N*T*Cfriendlyarm,hd702e");
MODULE_ALIAS("of:N*T*Cfriendlyarm,hd702eC*");
MODULE_ALIAS("of:N*T*Cgiantplus,gpg482739qs5");
MODULE_ALIAS("of:N*T*Cgiantplus,gpg482739qs5C*");
MODULE_ALIAS("of:N*T*Cgiantplus,gpm940b0");
MODULE_ALIAS("of:N*T*Cgiantplus,gpm940b0C*");
MODULE_ALIAS("of:N*T*Channstar,hsd070pww1");
MODULE_ALIAS("of:N*T*Channstar,hsd070pww1C*");
MODULE_ALIAS("of:N*T*Channstar,hsd100pxn1");
MODULE_ALIAS("of:N*T*Channstar,hsd100pxn1C*");
MODULE_ALIAS("of:N*T*Channstar,hsd101pww2");
MODULE_ALIAS("of:N*T*Channstar,hsd101pww2C*");
MODULE_ALIAS("of:N*T*Chit,tx23d38vm0caa");
MODULE_ALIAS("of:N*T*Chit,tx23d38vm0caaC*");
MODULE_ALIAS("of:N*T*Cinnolux,at043tn24");
MODULE_ALIAS("of:N*T*Cinnolux,at043tn24C*");
MODULE_ALIAS("of:N*T*Cinnolux,at070tn92");
MODULE_ALIAS("of:N*T*Cinnolux,at070tn92C*");
MODULE_ALIAS("of:N*T*Cinnolux,g070y2-l01");
MODULE_ALIAS("of:N*T*Cinnolux,g070y2-l01C*");
MODULE_ALIAS("of:N*T*Cinnolux,g070y2-t02");
MODULE_ALIAS("of:N*T*Cinnolux,g070y2-t02C*");
MODULE_ALIAS("of:N*T*Cinnolux,g101ice-l01");
MODULE_ALIAS("of:N*T*Cinnolux,g101ice-l01C*");
MODULE_ALIAS("of:N*T*Cinnolux,g121i1-l01");
MODULE_ALIAS("of:N*T*Cinnolux,g121i1-l01C*");
MODULE_ALIAS("of:N*T*Cinnolux,g121x1-l03");
MODULE_ALIAS("of:N*T*Cinnolux,g121x1-l03C*");
MODULE_ALIAS("of:N*T*Cinnolux,n156bge-l21");
MODULE_ALIAS("of:N*T*Cinnolux,n156bge-l21C*");
MODULE_ALIAS("of:N*T*Cinnolux,zj070na-01p");
MODULE_ALIAS("of:N*T*Cinnolux,zj070na-01pC*");
MODULE_ALIAS("of:N*T*Ckoe,tx14d24vm1bpa");
MODULE_ALIAS("of:N*T*Ckoe,tx14d24vm1bpaC*");
MODULE_ALIAS("of:N*T*Ckoe,tx26d202vm0bwa");
MODULE_ALIAS("of:N*T*Ckoe,tx26d202vm0bwaC*");
MODULE_ALIAS("of:N*T*Ckoe,tx31d200vm0baa");
MODULE_ALIAS("of:N*T*Ckoe,tx31d200vm0baaC*");
MODULE_ALIAS("of:N*T*Ckyo,tcg121xglp");
MODULE_ALIAS("of:N*T*Ckyo,tcg121xglpC*");
MODULE_ALIAS("of:N*T*Clemaker,bl035-rgb-002");
MODULE_ALIAS("of:N*T*Clemaker,bl035-rgb-002C*");
MODULE_ALIAS("of:N*T*Clg,lb070wv8");
MODULE_ALIAS("of:N*T*Clg,lb070wv8C*");
MODULE_ALIAS("of:N*T*Clincolntech,lcd185-101ct");
MODULE_ALIAS("of:N*T*Clincolntech,lcd185-101ctC*");
MODULE_ALIAS("of:N*T*Clogicpd,type28");
MODULE_ALIAS("of:N*T*Clogicpd,type28C*");
MODULE_ALIAS("of:N*T*Clogictechno,lt161010-2nhc");
MODULE_ALIAS("of:N*T*Clogictechno,lt161010-2nhcC*");
MODULE_ALIAS("of:N*T*Clogictechno,lt161010-2nhr");
MODULE_ALIAS("of:N*T*Clogictechno,lt161010-2nhrC*");
MODULE_ALIAS("of:N*T*Clogictechno,lt170410-2whc");
MODULE_ALIAS("of:N*T*Clogictechno,lt170410-2whcC*");
MODULE_ALIAS("of:N*T*Clogictechno,lttd800480070-l2rt");
MODULE_ALIAS("of:N*T*Clogictechno,lttd800480070-l2rtC*");
MODULE_ALIAS("of:N*T*Clogictechno,lttd800480070-l6wh-rt");
MODULE_ALIAS("of:N*T*Clogictechno,lttd800480070-l6wh-rtC*");
MODULE_ALIAS("of:N*T*Cmicrotips,mf-101hiebcaf0");
MODULE_ALIAS("of:N*T*Cmicrotips,mf-101hiebcaf0C*");
MODULE_ALIAS("of:N*T*Cmicrotips,mf-103hieb0ga0");
MODULE_ALIAS("of:N*T*Cmicrotips,mf-103hieb0ga0C*");
MODULE_ALIAS("of:N*T*Cmitsubishi,aa070mc01-ca1");
MODULE_ALIAS("of:N*T*Cmitsubishi,aa070mc01-ca1C*");
MODULE_ALIAS("of:N*T*Cmulti-inno,mi0700s4t-6");
MODULE_ALIAS("of:N*T*Cmulti-inno,mi0700s4t-6C*");
MODULE_ALIAS("of:N*T*Cmulti-inno,mi0800ft-9");
MODULE_ALIAS("of:N*T*Cmulti-inno,mi0800ft-9C*");
MODULE_ALIAS("of:N*T*Cmulti-inno,mi1010ait-1cp");
MODULE_ALIAS("of:N*T*Cmulti-inno,mi1010ait-1cpC*");
MODULE_ALIAS("of:N*T*Cnec,nl12880bc20-05");
MODULE_ALIAS("of:N*T*Cnec,nl12880bc20-05C*");
MODULE_ALIAS("of:N*T*Cnec,nl4827hc19-05b");
MODULE_ALIAS("of:N*T*Cnec,nl4827hc19-05bC*");
MODULE_ALIAS("of:N*T*Cnetron-dy,e231732");
MODULE_ALIAS("of:N*T*Cnetron-dy,e231732C*");
MODULE_ALIAS("of:N*T*Cnewhaven,nhd-4.3-480272ef-atxl");
MODULE_ALIAS("of:N*T*Cnewhaven,nhd-4.3-480272ef-atxlC*");
MODULE_ALIAS("of:N*T*Cnlt,nl192108ac18-02d");
MODULE_ALIAS("of:N*T*Cnlt,nl192108ac18-02dC*");
MODULE_ALIAS("of:N*T*Cnvd,9128");
MODULE_ALIAS("of:N*T*Cnvd,9128C*");
MODULE_ALIAS("of:N*T*Cokaya,rs800480t-7x0gp");
MODULE_ALIAS("of:N*T*Cokaya,rs800480t-7x0gpC*");
MODULE_ALIAS("of:N*T*Colimex,lcd-olinuxino-43-ts");
MODULE_ALIAS("of:N*T*Colimex,lcd-olinuxino-43-tsC*");
MODULE_ALIAS("of:N*T*Contat,yx700wv03");
MODULE_ALIAS("of:N*T*Contat,yx700wv03C*");
MODULE_ALIAS("of:N*T*Cortustech,com37h3m05dtc");
MODULE_ALIAS("of:N*T*Cortustech,com37h3m05dtcC*");
MODULE_ALIAS("of:N*T*Cortustech,com37h3m99dtc");
MODULE_ALIAS("of:N*T*Cortustech,com37h3m99dtcC*");
MODULE_ALIAS("of:N*T*Cortustech,com43h4m85ulc");
MODULE_ALIAS("of:N*T*Cortustech,com43h4m85ulcC*");
MODULE_ALIAS("of:N*T*Cosddisplays,osd070t1718-19ts");
MODULE_ALIAS("of:N*T*Cosddisplays,osd070t1718-19tsC*");
MODULE_ALIAS("of:N*T*Cpda,91-00156-a0");
MODULE_ALIAS("of:N*T*Cpda,91-00156-a0C*");
MODULE_ALIAS("of:N*T*Cpowertip,ph800480t013-idf02");
MODULE_ALIAS("of:N*T*Cpowertip,ph800480t013-idf02C*");
MODULE_ALIAS("of:N*T*Cqiaodian,qd43003c0-40");
MODULE_ALIAS("of:N*T*Cqiaodian,qd43003c0-40C*");
MODULE_ALIAS("of:N*T*Cqishenglong,gopher2b-lcd");
MODULE_ALIAS("of:N*T*Cqishenglong,gopher2b-lcdC*");
MODULE_ALIAS("of:N*T*Crocktech,rk070er9427");
MODULE_ALIAS("of:N*T*Crocktech,rk070er9427C*");
MODULE_ALIAS("of:N*T*Crocktech,rk101ii01d-ct");
MODULE_ALIAS("of:N*T*Crocktech,rk101ii01d-ctC*");
MODULE_ALIAS("of:N*T*Csamsung,ltl101al01");
MODULE_ALIAS("of:N*T*Csamsung,ltl101al01C*");
MODULE_ALIAS("of:N*T*Csamsung,ltn101nt05");
MODULE_ALIAS("of:N*T*Csamsung,ltn101nt05C*");
MODULE_ALIAS("of:N*T*Csatoz,sat050at40h12r2");
MODULE_ALIAS("of:N*T*Csatoz,sat050at40h12r2C*");
MODULE_ALIAS("of:N*T*Csharp,lq035q7db03");
MODULE_ALIAS("of:N*T*Csharp,lq035q7db03C*");
MODULE_ALIAS("of:N*T*Csharp,lq070y3dg3b");
MODULE_ALIAS("of:N*T*Csharp,lq070y3dg3bC*");
MODULE_ALIAS("of:N*T*Csharp,lq101k1ly04");
MODULE_ALIAS("of:N*T*Csharp,lq101k1ly04C*");
MODULE_ALIAS("of:N*T*Csharp,ls020b1dd01d");
MODULE_ALIAS("of:N*T*Csharp,ls020b1dd01dC*");
MODULE_ALIAS("of:N*T*Cshelly,sca07010-bfn-lnn");
MODULE_ALIAS("of:N*T*Cshelly,sca07010-bfn-lnnC*");
MODULE_ALIAS("of:N*T*Cstarry,kr070pe2t");
MODULE_ALIAS("of:N*T*Cstarry,kr070pe2tC*");
MODULE_ALIAS("of:N*T*Cstartek,kd070wvfpa");
MODULE_ALIAS("of:N*T*Cstartek,kd070wvfpaC*");
MODULE_ALIAS("of:N*T*Cteam-source-display,tst043015cmhx");
MODULE_ALIAS("of:N*T*Cteam-source-display,tst043015cmhxC*");
MODULE_ALIAS("of:N*T*Ctfc,s9700rtwv43tr-01b");
MODULE_ALIAS("of:N*T*Ctfc,s9700rtwv43tr-01bC*");
MODULE_ALIAS("of:N*T*Ctianma,tm070jdhg30");
MODULE_ALIAS("of:N*T*Ctianma,tm070jdhg30C*");
MODULE_ALIAS("of:N*T*Ctianma,tm070jvhg33");
MODULE_ALIAS("of:N*T*Ctianma,tm070jvhg33C*");
MODULE_ALIAS("of:N*T*Ctianma,tm070rvhg71");
MODULE_ALIAS("of:N*T*Ctianma,tm070rvhg71C*");
MODULE_ALIAS("of:N*T*Cti,nspire-cx-lcd-panel");
MODULE_ALIAS("of:N*T*Cti,nspire-cx-lcd-panelC*");
MODULE_ALIAS("of:N*T*Cti,nspire-classic-lcd-panel");
MODULE_ALIAS("of:N*T*Cti,nspire-classic-lcd-panelC*");
MODULE_ALIAS("of:N*T*Ctoshiba,lt089ac29000");
MODULE_ALIAS("of:N*T*Ctoshiba,lt089ac29000C*");
MODULE_ALIAS("of:N*T*Ctpk,f07a-0102");
MODULE_ALIAS("of:N*T*Ctpk,f07a-0102C*");
MODULE_ALIAS("of:N*T*Ctpk,f10a-0102");
MODULE_ALIAS("of:N*T*Ctpk,f10a-0102C*");
MODULE_ALIAS("of:N*T*Curt,umsh-8596md-t");
MODULE_ALIAS("of:N*T*Curt,umsh-8596md-tC*");
MODULE_ALIAS("of:N*T*Curt,umsh-8596md-1t");
MODULE_ALIAS("of:N*T*Curt,umsh-8596md-1tC*");
MODULE_ALIAS("of:N*T*Curt,umsh-8596md-7t");
MODULE_ALIAS("of:N*T*Curt,umsh-8596md-7tC*");
MODULE_ALIAS("of:N*T*Curt,umsh-8596md-11t");
MODULE_ALIAS("of:N*T*Curt,umsh-8596md-11tC*");
MODULE_ALIAS("of:N*T*Curt,umsh-8596md-19t");
MODULE_ALIAS("of:N*T*Curt,umsh-8596md-19tC*");
MODULE_ALIAS("of:N*T*Curt,umsh-8596md-20t");
MODULE_ALIAS("of:N*T*Curt,umsh-8596md-20tC*");
MODULE_ALIAS("of:N*T*Cvivax,tpc9150-panel");
MODULE_ALIAS("of:N*T*Cvivax,tpc9150-panelC*");
MODULE_ALIAS("of:N*T*Cvxt,vl050-8048nt-c01");
MODULE_ALIAS("of:N*T*Cvxt,vl050-8048nt-c01C*");
MODULE_ALIAS("of:N*T*Cwinstar,wf35ltiacd");
MODULE_ALIAS("of:N*T*Cwinstar,wf35ltiacdC*");
MODULE_ALIAS("of:N*T*Cyes-optoelectronics,ytc700tlag-05-201c");
MODULE_ALIAS("of:N*T*Cyes-optoelectronics,ytc700tlag-05-201cC*");
MODULE_ALIAS("of:N*T*Cpanel-dpi");
MODULE_ALIAS("of:N*T*Cpanel-dpiC*");

MODULE_INFO(srcversion, "00F7277089345B8CC3E0B58");
