// Generated by Glitch!
// Sun Oct 1 10:02:14 2023

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
 u8g2.setFont(u8g2_font_inb16_mr);
 u8g2.drawStr(10, 20, "H:");
 u8g2.setCursor(35, 20);
 u8g2.print(h);
 u8g2.drawStr(80, 20, "%");
 u8g2.drawStr(10, 40, "T:");
 u8g2.setCursor(35, 40);
 u8g2.print(t);
 u8g2.drawStr(80, 40, "F");
 u8g2.sendBuffer();
 delay(2500);
}

void setup(void)
{
 Wire.begin();
 dht.begin();
 u8g2.begin();
}