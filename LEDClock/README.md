Required Components
<ol>
<li>Arduino Uno R4 Wireless</li>
<li>I2C Shield</li>
<li>Multiplexer</li>
<li>Three I2C Cables</li>
<li>Tray</li>
<li>Two AS1115 Three-Digit LED Units</li>
<li>Uno R4 USB Cable</li>
</ol>

Arduino IDE
<ol>
<li>Download and install the Arduino IDE.</li>
<li>Launch the IDE.</li>
<li>Install the AS1115 library.</li>
<li>Install the Arduino UNO R4 Boards package.</li>
<li>Install the NTPClient library.</li>
<li>Restart the IDE.</li>
<li>Paste the contents of the source generated by Glitch into a
  new sketch.</li>
<li>Modify the NTP server information.</li>
<li>Modify the SSID information.</li>
<li>Load the software onto the board.</li>
</ol>

Networking
<ol>
<li>NTP is required for correct time.</li>
</ol>

Tray Preparation
<ol>
<li>Please wear safety glasses and gloves.</li>
<li>Attach the I2C shield to the UNO.</li>
<li>Connect the USB cable to a power source.</li>
<li>Connect the Uno to the USB cable.</li>
<li>Connect the multiplexer to the I2C shield via an I2C cable.</li>
<li>Connect the two AS1115 units to ports 0 and 1 of the multiplexer
  via I2C cables.</li>
<li>Please refer to the included images for guidance.</li>
</ol>

Future Possibilities
<ul>
<li>Arduino Due.</li>
<li>Daylight savings.</li>
</ul>
