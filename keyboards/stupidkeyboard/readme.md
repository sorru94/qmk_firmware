# stupidkeyboard

This readme explains a litte of how to build the Skeletyl keyboard from Bastardkb using an 
RP2040 based board.

Speaking of hardware. 
We are going to use the following PCBs:
- [Main body](https://github.com/Bastardkb/Skeletyl-PCB-plate/releases/tag/2.3)
- [Thumb extension](https://github.com/Bastardkb/TBK-Mini-PCB-thumb-cluster/releases/tag/2.1)
- [Elite C holder](https://github.com/Bastardkb/Elite-C-holder/releases/tag/2.1b)

The holder is intended to be used with an Elite C board. However, we will use a slightly different
one.
The board can be found on [keebio as RP2040 Pro Micro](https://keeb.io/products/rp2040-pro-micro-usb-c-controller?srsltid=AfmBOor44YXPfsoJW9PEkVBPJPLnjE3j_EZkfx-uiLa_Y9ZWCyafbIBQ) for a pretty high price.
Some clones can also be found on [Aliexpress](https://it.aliexpress.com/item/1005007436882172.html?spm=a2g0o.order_list.order_list_main.35.3a0d3696t1fnEe&gatewayAdapt=glo2ita) for cheap.

Here a picture of the pinout.

![RP2040](RP2040_Pro_Micro_Pinout.png.x)

**Note**: Unfortunately there is an issue with this cheap clone. The following pins a faulty and should not be used: `GPIO29`, `GPIO28`, `GPIO27`, `GPIO26`.

**Note**: We will only configure the basic keyboard stuff. No LEDs or extra fancy things.

# Hardware setup

Use the [official guide](https://docs.bastardkb.com/bg_skeletyl/01index.html) to solder the diodes, connect the boards with the ribbon cables and then follow the steps below to solder the micro.

Here a picture of the pinout.

![RP2040](stupidkeyboard.png.x)

The USB port is at the top and the board is seen with the microcontroller in front.
THe following legend might be useful:
- The green line is the jumper that should connect from GPIO2 and GPIO3 to the holder PCB. This is to replace the dead pins.
- The blue dotted squares are the pins that should be connected from microcontroller board to the holder PCB. Do not connect any other pin.

The following is a picture of the finished assembled PCB.

![micro_assembled_top](micro_assembled_top.jpg.x)
![micro_assembled_side](micro_assembled_side.jpg.x)
![micro_assembled_back](micro_assembled_back.jpg.x)

# Building and flashing

Build the keyboard with:
```
qmk compile -kb stupidkeyboard -km default
```

Entering the bootloader is slightly complicated. The board should be plugged to the host while jumping one ground pin with the boot pin. 
The boot pin is near the USB connector marked in the back of the RP2040 board.

Flash the keyboard with:
```
qmk flash -kb stupidkeyboard -km default
```

Then check that the keyboard is connected:
```
qmk console
```
