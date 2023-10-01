// Generated by Glitch!
// Sat Sep 30 23:50:04 2023

#include <DHT.h>

#include <U8g2lib.h>

#include <Wire.h>

DHT dht(DHT20);

U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, SCL, SDA, U8X8_PIN_NONE);

void loop(void)
{
 int h  = dht.readHumidity();
 int t  = dht.convertCtoF(dht.readTemperature());
 u8g2.clearBuffer();
 u8g2.setFont(u8g2_font_ncenB14_tr);
 u8g2.drawStr(10, 15, "H =");
 u8g2.setCursor(50, 15);
 u8g2.print(h);
 u8g2.drawStr(10, 35, "T =");
 u8g2.setCursor(50, 35);
 u8g2.print(t);
 u8g2.sendBuffer();
 delay(1500);
}

void setup(void)
{
 Wire.begin();
 dht.begin();
 u8g2.begin();
}
