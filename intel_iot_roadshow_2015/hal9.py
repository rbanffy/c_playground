import pyupm_i2clcd
import colorsys
import time

lcd = pyupm_i2clcd.Jhd1313m1(0, 0x3e, 0x62)

while True:
    for h in [x/1000. for x in range(1000)]:
        r, g, b = [int(x * 255) for x in colorsys.hls_to_rgb(h, .5, 1)]
        lcd.setColor(r, g, b)
        lcd.setCursor(0, 0)
        lcd.write("%d, %d, %d    " % (r, g, b))
        time.sleep(.2)


