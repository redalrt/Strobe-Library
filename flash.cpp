/*
flash source file
*/

# include "Arduino.h"
# include "flash.h"

flash :: flash(int pin)
	{
		pinMode (pin, OUTPUT);
		_pin = pin;
	}

void flash :: strobe()
	{
	for(int i=0; i<3; i++){
    		digitalWrite(_pin, HIGH);
    		delay(50);
    		digitalWrite(_pin, LOW);
    		delay(50);
		}
	}
