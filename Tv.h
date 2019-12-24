#pragma once
#include "Appliance.h"
class Tv :
	public Appliance
{
public:

	
	const std::string m_room;
	

	Tv(unsigned int  tv_wattage, std::string room);
	
	


};

