cmd_arch/arm/boot/dts/omap4-sdp.dtb := gcc -E -Wp,-MMD,arch/arm/boot/dts/.omap4-sdp.dtb.d.pre.tmp -nostdinc -I./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.omap4-sdp.dtb.dts.tmp arch/arm/boot/dts/omap4-sdp.dts ; ./scripts/dtc/dtc -o arch/arm/boot/dts/omap4-sdp.dtb -b 0 -iarch/arm/boot/dts/ -i./scripts/dtc/include-prefixes -Wno-interrupt_provider -Wno-unit_address_vs_reg -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-simple_bus_reg -Wno-unique_unit_address   -d arch/arm/boot/dts/.omap4-sdp.dtb.d.dtc.tmp arch/arm/boot/dts/.omap4-sdp.dtb.dts.tmp ; cat arch/arm/boot/dts/.omap4-sdp.dtb.d.pre.tmp arch/arm/boot/dts/.omap4-sdp.dtb.d.dtc.tmp > arch/arm/boot/dts/.omap4-sdp.dtb.d

source_arch/arm/boot/dts/omap4-sdp.dtb := arch/arm/boot/dts/omap4-sdp.dts

deps_arch/arm/boot/dts/omap4-sdp.dtb := \
  arch/arm/boot/dts/omap443x.dtsi \
  arch/arm/boot/dts/omap4.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/bus/ti-sysc.h \
  scripts/dtc/include-prefixes/dt-bindings/clock/omap4.h \
  scripts/dtc/include-prefixes/dt-bindings/gpio/gpio.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/arm-gic.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/irq.h \
  scripts/dtc/include-prefixes/dt-bindings/pinctrl/omap.h \
  arch/arm/boot/dts/omap4-l4.dtsi \
  arch/arm/boot/dts/omap4-l4-abe.dtsi \
  arch/arm/boot/dts/omap44xx-clocks.dtsi \
  arch/arm/boot/dts/omap4-cpu-thermal.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/thermal/thermal.h \
  arch/arm/boot/dts/elpida_ecb240abacn.dtsi \
  arch/arm/boot/dts/omap4-mcpdm.dtsi \
  arch/arm/boot/dts/twl6030.dtsi \
  arch/arm/boot/dts/twl6030_omap4.dtsi \
  arch/arm/boot/dts/omap443x-clocks.dtsi \

arch/arm/boot/dts/omap4-sdp.dtb: $(deps_arch/arm/boot/dts/omap4-sdp.dtb)

$(deps_arch/arm/boot/dts/omap4-sdp.dtb):
