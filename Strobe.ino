/*********************************************************************
This is an example sketch of how to use the Strobe-Library.
After placing the library in your Arduino libraries folder,
install the library.  Then include the <flash.h> files in your 
sketch as shown below.  Pin (9) in this example is where the 
mosfet gate is connected to (Remember, this library can control 
high powered led's, so a mosfet is a must).  If not using high
power led's connect as usual to any pin. The pin is already 
setup as an output in the library so just skip this step in void
setup().  Then just make a call to the flash.strobe(); function in
void loop() as shown below and add any delay you wish!
*********************************************************************/


#include <flash.h>

flash flash(9);


void setup()
{
}

void loop()
{
  flash.strobe();
  delay(1500);

}
