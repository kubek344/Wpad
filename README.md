# WPad 
Simple macropad with rotary encoder
![Wpad](https://i.imgur.com/puPaOMA.jpg)
### functionality
WPad offers 7 keys and rotary encoder, default keymap works mainly as a spotify and sound control device.
It is made with 3D printing and pro micro in mind, you might use supports on the bottom side because of the screws I used (M5 Cap head screws). You might wanna print this [EC11 to mx adapter](https://www.thingiverse.com/thing:3770166).

## BOM

- 7x Diodes
- 6x Cherry mx style switches 
- 1x EC11 rotary encoder
- 1x Pro micro 
- 4x M5 8mm Cap head screws
- 6x Cherry mx compatible
- some wires, hot glue and of course 3D printer with your favourite filament

## Pin assigment 

| Row | Pin | Col | Pin | Encoder | Pin |
|-----|-----|-----|-----|---------|-----|
| 0   | B6  | 0   | E6  | A       | B4  |
| 1   | B2  | 1   | D7  | B       | B5  |
| 2   | B3  | 2   | C6  |         |     |

## QMK flashing and editing keymap
If you don't know how to start I recommend you [QMK newbs Guide](https://docs.qmk.fm/#/newbs)
