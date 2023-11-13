cmd_scripts/module.lds := arm-oe-linux-gnueabi-gcc -E -Wp,-MMD,scripts/.module.lds.d -nostdinc -I./arch/arm/include -I./arch/arm/include/generated  -I./include -I./arch/arm/include/uapi -I./arch/arm/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/compiler-version.h -include ./include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -fmacro-prefix-map=./=   -P -Uarm -D__ASSEMBLY__ -DLINKER_SCRIPT -o scripts/module.lds scripts/module.lds.S

source_scripts/module.lds := scripts/module.lds.S

deps_scripts/module.lds := \
    $(wildcard include/config/ARCH_USES_CFI_TRAPS) \
    $(wildcard include/config/LTO_CLANG) \
  include/linux/compiler-version.h \
    $(wildcard include/config/CC_VERSION_TEXT) \
  include/linux/kconfig.h \
    $(wildcard include/config/CPU_BIG_ENDIAN) \
    $(wildcard include/config/BOOGER) \
    $(wildcard include/config/FOO) \
  arch/arm/include/asm/module.lds.h \
    $(wildcard include/config/ARM_MODULE_PLTS) \

scripts/module.lds: $(deps_scripts/module.lds)

$(deps_scripts/module.lds):
