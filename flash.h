/* 
Strobe light library
*/

# ifndef flash_h
# define flash_h

# include "Arduino.h"

class flash
	{
		public:
			flash(int pin);
			void strobe();
		private:
			int _pin;
	};

#endif