#pragma once
#include "Appliance.h"
class Oven :
	public Appliance
{

private:

	static const unsigned int OVEN_WATTAGE = 3000;
	static  unsigned int ovens;

	static int incrementsOvens() {

	ovens += 1;
		return ovens;
	}

public:
	Oven();
};


