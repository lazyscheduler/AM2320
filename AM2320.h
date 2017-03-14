#ifndef AM2320_H
#define AM2320_H

#include <Arduino.h>

#define AM2320_address 0x5C

class AM2320
{
	public:
		AM2320(uint8_t SDApin, uint8_t SCLpin);
		float t;
		float h;
		int Read(); 
	private:
		uint8_t _sda, _scl;

};

#endif
