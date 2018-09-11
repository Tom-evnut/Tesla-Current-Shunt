/*
 * Logger.h
 *
 Copyright (c) 2018 Tom deBree

 Permission is hereby granted, free of charge, to any person obtaining
 a copy of this software and associated documentation files (the
 "Software"), to deal in the Software without restriction, including
 without limitation the rights to use, copy, modify, merge, publish,
 distribute, sublicense, and/or sell copies of the Software, and to
 permit persons to whom the Software is furnished to do so, subject to
 the following conditions:

 The above copyright notice and this permission notice shall be included
 in all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

 */

#include <SPI.h>

const int chipSelectPin = 10;
int buff[18];
int x = 0;
int32_t current = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  // start the SPI library:
  SPI.begin();

  pinMode(chipSelectPin, OUTPUT);
}

void loop() {
  Serial.println();

  if ( x == 0 )
  {
    for (int I = 1; I < 19; I++)
    {
      buff[I] = 0;
    }
    SPI.beginTransaction(SPISettings(500000, MSBFIRST, SPI_MODE0));
    // take the chip select low to select the device:
    digitalWrite(chipSelectPin, LOW);
    // send the device the register you want to read:
    buff[0] = SPI.transfer(0x7f);
    buff[1] = SPI.transfer(0x7f);
    buff[2] = SPI.transfer(0x21);
    buff[3] = SPI.transfer(0xde);
    buff[4] = SPI.transfer(0x00);
    buff[5] = SPI.transfer(0x00);
    buff[6] = SPI.transfer(0x00);
    buff[7] = SPI.transfer(0x80);
    buff[8] = SPI.transfer(0x00);
    buff[7] = SPI.transfer(0x80);
    buff[7] = SPI.transfer(0x00);
    // take the chip select high to de-select:
    digitalWrite(chipSelectPin, HIGH);
    // release control of the SPI port
    SPI.endTransaction();

    for (int I = 0; I < 10; I++)
    {
      Serial.print(buff[I], HEX);
      Serial.print(" ");
    }
    Serial.println();
    for (int I = 1; I < 19; I++)
    {
      buff[I] = 0;
    }


    SPI.beginTransaction(SPISettings(500000, MSBFIRST, SPI_MODE0));
    // take the chip select low to select the device:
    digitalWrite(chipSelectPin, LOW);
    // send the device the register you want to read:
    buff[0] = SPI.transfer(0x4f);
    buff[1] = SPI.transfer(0x00);
    buff[2] = SPI.transfer(0x00);
    buff[3] = SPI.transfer(0x00);
    buff[4] = SPI.transfer(0x00);
    buff[5] = SPI.transfer(0x00);
    buff[6] = SPI.transfer(0x00);
    buff[7] = SPI.transfer(0xBC);
    // take the chip select high to de-select:
    digitalWrite(chipSelectPin, HIGH);
    // release control of the SPI port
    SPI.endTransaction();
    for (int I = 0; I < 8; I++)
    {
      Serial.print(buff[I], HEX);
      Serial.print(" ");
    }
    for (int I = 1; I < 19; I++)
    {
      buff[I] = 0;
    }
    Serial.println();

    SPI.beginTransaction(SPISettings(500000, MSBFIRST, SPI_MODE0));
    // take the chip select low to select the device:
    digitalWrite(chipSelectPin, LOW);
    // send the device the register you want to read:
    buff[0] = SPI.transfer(0x4E);
    buff[1] = SPI.transfer(0x00);
    buff[2] = SPI.transfer(0x00);
    buff[3] = SPI.transfer(0x00);
    buff[4] = SPI.transfer(0x00);
    buff[5] = SPI.transfer(0x00);
    buff[6] = SPI.transfer(0x00);
    buff[7] = SPI.transfer(0x63);
    // take the chip select high to de-select:
    digitalWrite(chipSelectPin, HIGH);
    // release control of the SPI port
    SPI.endTransaction();
    for (int I = 0; I < 8; I++)
    {
      Serial.print(buff[I], HEX);
      Serial.print(" ");
    }
    for (int I = 1; I < 19; I++)
    {
      buff[I] = 0;
    }

    Serial.println();

    SPI.beginTransaction(SPISettings(500000, MSBFIRST, SPI_MODE0));
    // take the chip select low to select the device:
    digitalWrite(chipSelectPin, LOW);
    // send the device the register you want to read:
    buff[0] = SPI.transfer(0x4E);
    buff[1] = SPI.transfer(0x00);
    buff[2] = SPI.transfer(0x00);
    buff[3] = SPI.transfer(0x00);
    buff[4] = SPI.transfer(0x00);
    buff[5] = SPI.transfer(0x00);
    buff[6] = SPI.transfer(0x00);
    buff[7] = SPI.transfer(0x63);
    // take the chip select high to de-select:
    digitalWrite(chipSelectPin, HIGH);
    // release control of the SPI port
    SPI.endTransaction();
    for (int I = 0; I < 8; I++)
    {
      Serial.print(buff[I], HEX);
      Serial.print(" ");
    }
    for (int I = 1; I < 19; I++)
    {
      buff[I] = 0;
    }

    Serial.println();

    SPI.beginTransaction(SPISettings(500000, MSBFIRST, SPI_MODE0));
    // take the chip select low to select the device:
    digitalWrite(chipSelectPin, LOW);
    // send the device the register you want to read:
    buff[0] = SPI.transfer(0x16);
    buff[1] = SPI.transfer(0x00);
    buff[2] = SPI.transfer(0x00);
    buff[3] = SPI.transfer(0x02);
    buff[4] = SPI.transfer(0x00);
    buff[5] = SPI.transfer(0x00);
    buff[6] = SPI.transfer(0x00);
    buff[7] = SPI.transfer(0x33);
    // take the chip select high to de-select:
    digitalWrite(chipSelectPin, HIGH);
    // release control of the SPI port
    SPI.endTransaction();
    for (int I = 0; I < 8; I++)
    {
      Serial.print(buff[I], HEX);
      Serial.print(" ");
    }
    for (int I = 1; I < 19; I++)
    {
      buff[I] = 0;
    }
    Serial.println();

    SPI.beginTransaction(SPISettings(500000, MSBFIRST, SPI_MODE0));
    // take the chip select low to select the device:
    digitalWrite(chipSelectPin, LOW);
    // send the device the register you want to read:
    buff[0] = SPI.transfer(0x14);
    buff[1] = SPI.transfer(0x00);
    buff[2] = SPI.transfer(0x00);
    buff[3] = SPI.transfer(0xDC);
    buff[4] = SPI.transfer(0x05);
    buff[5] = SPI.transfer(0xC2);
    buff[6] = SPI.transfer(0x01);
    buff[7] = SPI.transfer(0x83);
    // take the chip select high to de-select:
    digitalWrite(chipSelectPin, HIGH);
    // release control of the SPI port
    SPI.endTransaction();
    for (int I = 0; I < 8; I++)
    {
      Serial.print(buff[I], HEX);
      Serial.print(" ");
    }
    for (int I = 1; I < 19; I++)
    {
      buff[I] = 0;
    }
    Serial.println();

    SPI.beginTransaction(SPISettings(500000, MSBFIRST, SPI_MODE0));
    // take the chip select low to select the device:
    digitalWrite(chipSelectPin, LOW);
    // send the device the register you want to read:
    buff[0] = SPI.transfer(0x13);
    buff[1] = SPI.transfer(0x00);
    buff[2] = SPI.transfer(0x00);
    buff[3] = SPI.transfer(0x04);
    buff[4] = SPI.transfer(0x01);
    buff[5] = SPI.transfer(0x02);
    buff[6] = SPI.transfer(0x08);
    buff[7] = SPI.transfer(0x94);
    // take the chip select high to de-select:
    digitalWrite(chipSelectPin, HIGH);
    // release control of the SPI port
    SPI.endTransaction();
    for (int I = 0; I < 8; I++)
    {
      Serial.print(buff[I], HEX);
      Serial.print(" ");
    }
    for (int I = 1; I < 19; I++)
    {
      buff[I] = 0;
    }
    Serial.println();

    SPI.beginTransaction(SPISettings(500000, MSBFIRST, SPI_MODE0));
    // take the chip select low to select the device:
    digitalWrite(chipSelectPin, LOW);
    // send the device the register you want to read:
    buff[0] = SPI.transfer(0x17);
    buff[1] = SPI.transfer(0x00);
    buff[2] = SPI.transfer(0x00);
    buff[3] = SPI.transfer(0x00);
    buff[4] = SPI.transfer(0x00);
    buff[5] = SPI.transfer(0x00);
    buff[6] = SPI.transfer(0x00);
    buff[7] = SPI.transfer(0xC0);
    // take the chip select high to de-select:
    digitalWrite(chipSelectPin, HIGH);
    // release control of the SPI port
    SPI.endTransaction();
    for (int I = 0; I < 8; I++)
    {
      Serial.print(buff[I], HEX);
      Serial.print(" ");
    }
    for (int I = 1; I < 19; I++)
    {
      buff[I] = 0;
    }
    x = 1;
  }

  SPI.beginTransaction(SPISettings(500000, MSBFIRST, SPI_MODE0));
  // take the chip select low to select the device:
  digitalWrite(chipSelectPin, LOW);
  // send the device the register you want to read:
  buff[0] = SPI.transfer(0x41);
  for (int I = 1; I < 7; I++)
  {
    buff[I] = SPI.transfer(0x00);
  }
  buff[8] = SPI.transfer(0x9A);
  // take the chip select high to de-select:
  /*for (int I = 8; I < 13; I++)
  {
    buff[I] = SPI.transfer(0x00);
  }*/
  digitalWrite(chipSelectPin, HIGH);
  // release control of the SPI port
  SPI.endTransaction();
  /*
  for (int I = 0; I <9; I++)
  {
    Serial.print(buff[I], HEX);
    Serial.print(" ");
  }*/
  current = ((int32_t(buff[6]*256+buff[5])*256+buff[4])*256+buff[3]) ;

  Serial.println(" ");
  Serial.print(current);
  /*Serial.print(" | ");
  Serial.print(current, HEX);
  Serial.print(" | ");
  
  for (int I = 3; I < 7; I++)
  {
    Serial.print(buff[I], HEX);
    Serial.print(" ");
  }*/
 
  delay(300);
}

