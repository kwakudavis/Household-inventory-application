#pragma once
#include "Tv.h"
class PlasmaTv :public Tv
{
private:
	static const unsigned int m_TV_WATTTAGE = 340;

public:
	
	PlasmaTv(std::string room);

};




