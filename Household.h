#pragma once
#include "PlasmaTv.h"
#include "LcdTv.h"
#include "Oven.h"
#include "Fridge.h"


class Household
{

	PlasmaTv m_sittingRoomTv;
	LcdTv	 m_livingRoomTv;
	Oven	m_Oven1;
	Oven	m_Oven2;
	Fridge  m_fridge;

public:
	Household();

	bool controlPanel();
	//std::string getControlString();

	unsigned int getCurrentConsumption() const;
};

