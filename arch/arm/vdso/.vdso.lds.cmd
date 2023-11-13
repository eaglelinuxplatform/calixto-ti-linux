cmd_arch/arm/vdso/vdso.lds := arm-oe-linux-gnueabi-gcc -E -Wp,-MMD,arch/arm/vdso/.vdso.lds.d -nostdinc -I./arch/arm/include -I./arch/arm/include/generated  -I./include -I./arch/arm/include/uapi -I./arch/arm/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/compiler-version.h -include ./include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -fmacro-prefix-map=./=  -P -C -Uarm -P -Uarm -D__ASSEMBLY__ -DLINKER_SCRIPT -o arch/arm/vdso/vdso.lds arch/arm/vdso/vdso.lds.S

source_arch/arm/vdso/vdso.lds := arch/arm/vdso/vdso.lds.S

deps_arch/arm/vdso/vdso.lds := \
  include/linux/compiler-version.h \
    $(wildcard include/config/CC_VERSION_TEXT) \
  include/linux/kconfig.h \
    $(wildcard include/config/CPU_BIG_ENDIAN) \
    $(wildcard include/config/BOOGER) \
    $(wildcard include/config/FOO) \
  include/linux/const.h \
  include/vdso/const.h \
  include/uapi/linux/const.h \
  arch/arm/include/asm/page.h \
    $(wildcard include/config/MMU) \
    $(wildcard include/config/CPU_COPY_V4WT) \
    $(wildcard include/config/CPU_COPY_V4WB) \
    $(wildcard include/config/CPU_COPY_FEROCEON) \
    $(wildcard include/config/CPU_COPY_FA) \
    $(wildcard include/config/CPU_SA1100) \
    $(wildcard include/config/CPU_XSCALE) \
    $(wildcard include/config/CPU_XSC3) \
    $(wildcard include/config/CPU_COPY_V6) \
    $(wildcard include/config/KUSER_HELPERS) \
    $(wildcard include/config/ARM_LPAE) \
    $(wildcard include/config/VMAP_STACK) \
    $(wildcard include/config/HAVE_ARCH_PFN_VALID) \
  include/asm-generic/getorder.h \
  arch/arm/include/asm/vdso.h \
    $(wildcard include/config/VDSO) \

arch/arm/vdso/vdso.lds: $(deps_arch/arm/vdso/vdso.lds)

$(deps_arch/arm/vdso/vdso.lds):
