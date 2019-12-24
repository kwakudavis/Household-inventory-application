#include "Household.h"
#include <string>



Household::Household():m_sittingRoomTv("Sitting room"),m_livingRoomTv("Living Room")
{
};

bool Household::controlPanel() {

	
	int choice;
	std::cout << "Current consumption is " << getCurrentConsumption() << std::endl;
	std::cout << "1. "<< m_sittingRoomTv.getControlString() << std::endl;
	std::cout << "2. " << m_livingRoomTv.getControlString() << std::endl;
	std::cout << "3. " << m_Oven1.getControlString() << std::endl;
	std::cout << "4. " << m_Oven2.getControlString() << std::endl;
	std::cout << "5. " << m_fridge.getControlString() << std::endl;
	std::cout << "0. Exit"<< std::endl;
	std::cout << "Enter a choice" << std::endl;
	std::cin >>choice;

	switch (choice)
	{

	case 0:
		return false;
		break;
	case 1 :
		m_sittingRoomTv.toggle();
		return true;
		break;
	case 2:
		m_livingRoomTv.toggle();
		return true;
		break;
	case 3:
		m_Oven1.toggle();
		return true;
		break;
	case 4:
		m_Oven2.toggle();
		return true;
		break;
	case 5:
		m_fridge.toggle();
		return true;
		break;
	default:
		
		std::cout <<"Invalid choice selected" << std::endl;
		return true;
		break;
	}
	

	
}


unsigned int Household::getCurrentConsumption() const {

	return m_sittingRoomTv.getCurrentConsumption() + m_livingRoomTv.getCurrentConsumption() + m_Oven1.getCurrentConsumption() + m_Oven2.getCurrentConsumption() + m_fridge.getCurrentConsumption();
}

