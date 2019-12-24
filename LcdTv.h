#pragma once
#include "Tv.h"
class LcdTv :
	public Tv
{
private:
	static const unsigned int m_TV_WATTTAGE = 220;

public:
	
	LcdTv(std::string room);

};

