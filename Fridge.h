#pragma once
#include "Appliance.h"
class Fridge :
	public Appliance
{

private:
	static const  unsigned int FRIDGE_WATTAGE = 130;
	static const  std::string fridge;


public:
	Fridge();
};

