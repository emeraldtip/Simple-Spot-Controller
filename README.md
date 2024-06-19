# Simple Spot Controller
A small, very basic and simple to use Arduino-based DMX spot light controller.
Made to control 6 Cameo TS 60 W RGBW WH theatre spotlights at my school for ceremonial events.
Currently allows you to adjust brightess and temperature of RGBW spotlights with a master dimmer channel.

# Materials used
- 1x Cheap knockoff Arduino (USB type B 2.0 port, ATmega328P CH340 and some extra pin holes next to ICSP pins (GND and 5V for easier soldering))
- 2x square ACP 47K potentiometers with a rectangular hole stolen from old in-floor heating controller (resistance doesn't really matter much on arduino, you could use any resistance pot just smaller resistance pots use more power)
- 1x MAX485 chip (as one wasn't available near me and the size is too small to solder to easily without a breakout board I bought a cheap USB-RS485 Adapter and soldered wires to the MAX485 on there)
- Female end of an XLR cable
- Wires
- 3D printer plastic (multicolor if you want to be fancy)
- Some small screws (you can screw M3 screws into the posts on the lid or use wood screws or something)

# Code
The code uses the DmxSimple arduino library to write DMX values and just reads potentiometer values to control the global dimmer brightness and the RGB channel values, which shift the color temp of the lights.

