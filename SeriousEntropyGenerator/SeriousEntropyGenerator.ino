// Generated by Glitch!
// Tue Nov 7 14:39:08 2023

#include <Ethernet.h>

IPAddress ip(192, 168, 178, 85);

EthernetServer server(5000);

/* The MAC address must be unique. Arduino's Ethernet Shield does not have a MAC address. */

byte mac[]  = {0xaa, 0xbb, 0xcc, 0xdd, 0xee, 0xff};

void loop(void)
{
 while(true)
 {
  /* Read values from pins A8 through A15. The pins must be disconnected! */
  String buffer  = "";
  int pins[8]  = {A8, A9, A10, A11, A12, A13, A14, A15};
  for(int i = 0; i < 7; i++)
  {
   auto value  = analogRead(pins[i]);
   buffer  += (value);
   delayMicroseconds(value);
  }
  EthernetClient client = server.available();
  if(client)
  {
   if(client.connected())
   {
    client.read();
    client.println(buffer);
   }
   else
   {
    client.stop();
   }
  }
  else
  {
   break;
  }
  delay(10);
 }
 delay(10);
}

void setup(void)
{
 Ethernet.begin(mac, ip);
 server.begin();
}
