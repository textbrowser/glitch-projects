// Generated by Glitch!
// Wed Oct 4 14:54:17 2023

#include <DHT.h>

#include <U8g2lib.h>

#include <Wire.h>

DHT dht(DHT20);

U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, SCL, SDA, U8X8_PIN_NONE);

const static auto delay_millis  = 2500ul;

static auto previous_millis  = millis();

void loop(void)
{
 auto current_millis  = millis();
 if(current_millis - previous_millis <= delay_millis)
 {
  return;
 }
 previous_millis = current_millis;
 auto hf  = dht.readHumidity();
 auto tf  = dht.readTemperature(true);
 if(isnan(hf))
 {
  hf = -99.0;
 }
 if(isnan(tf))
 {
  tf = -99.0;
 }
 int h  = int(hf);
 int t  = int(tf);
 u8g2.clearBuffer();
 u8g2.setFont(u8g2_font_inb16_mr);
 u8g2.drawStr(10, 20, "H:");
 u8g2.setCursor(35, 20);
 u8g2.print(h);
 u8g2.drawStr(90, 20, "%");
 u8g2.drawStr(10, 40, "T:");
 u8g2.setCursor(35, 40);
 u8g2.print(t);
 u8g2.drawStr(90, 40, "F");
 u8g2.sendBuffer();
}

void setup(void)
{
 Wire.begin();
 dht.begin();
 u8g2.begin();
}
