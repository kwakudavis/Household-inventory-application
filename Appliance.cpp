#include "Appliance.h"
using namespace std;




//construnctor for appliance

Appliance::Appliance(std::string name, unsigned int wattage, bool active):m_name(name),m_wattage(wattage),m_active(active){
}


void  Appliance::start() {

	m_active = true;
	std::cout << m_name << "...consuming" << m_wattage << "watts" << std::endl;
}

void Appliance::stop() {

	m_active = false;
		std::cout << m_name << " stopped" << std::endl;

}


std::string Appliance:: getControlString() {
	std::string response;
	if (m_active == false) {
		response = "Turn " + getName() + " ON";
	    
	}
	else {

		response = "Turn " + getName() + " OFF";
	}
	return response;
}


bool Appliance::toggle() {
	if (m_active == false) {
		
		m_active = true;


	}
	else {

		m_active = true;
	}

	return m_active;
}




unsigned int Appliance::getCurrentConsumption() const {

	if (m_active == true) {

		return m_wattage;


	}
	else {

		return 0;
	}

}