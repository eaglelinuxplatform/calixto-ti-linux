cmd_arch/arm/boot/dts/dm8168-evm.dtb := gcc -E -Wp,-MMD,arch/arm/boot/dts/.dm8168-evm.dtb.d.pre.tmp -nostdinc -I./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.dm8168-evm.dtb.dts.tmp arch/arm/boot/dts/dm8168-evm.dts ; ./scripts/dtc/dtc -o arch/arm/boot/dts/dm8168-evm.dtb -b 0 -iarch/arm/boot/dts/ -i./scripts/dtc/include-prefixes -Wno-interrupt_provider -Wno-unit_address_vs_reg -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-simple_bus_reg -Wno-unique_unit_address   -d arch/arm/boot/dts/.dm8168-evm.dtb.d.dtc.tmp arch/arm/boot/dts/.dm8168-evm.dtb.dts.tmp ; cat arch/arm/boot/dts/.dm8168-evm.dtb.d.pre.tmp arch/arm/boot/dts/.dm8168-evm.dtb.d.dtc.tmp > arch/arm/boot/dts/.dm8168-evm.dtb.d

source_arch/arm/boot/dts/dm8168-evm.dtb := arch/arm/boot/dts/dm8168-evm.dts

deps_arch/arm/boot/dts/dm8168-evm.dtb := \
  arch/arm/boot/dts/dm816x.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/bus/ti-sysc.h \
  scripts/dtc/include-prefixes/dt-bindings/clock/dm816.h \
  scripts/dtc/include-prefixes/dt-bindings/gpio/gpio.h \
  scripts/dtc/include-prefixes/dt-bindings/pinctrl/omap.h \
  arch/arm/boot/dts/dm816x-clocks.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/irq.h \

arch/arm/boot/dts/dm8168-evm.dtb: $(deps_arch/arm/boot/dts/dm8168-evm.dtb)

$(deps_arch/arm/boot/dts/dm8168-evm.dtb):
