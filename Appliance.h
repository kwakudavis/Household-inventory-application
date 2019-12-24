#pragma once

#include <iostream>

class Appliance
{
	
	private:

		const std::string m_name;
		const unsigned int m_wattage;
		bool m_active;
	
	protected:
		Appliance(std::string name, unsigned int wattage, bool active = false);

	public:
		
		std::string getName() const { return  m_name;}
		unsigned int getWattage() const { return m_wattage; }
		bool isActive() const { return m_active; }

		void start(void);

		void stop(void);
		std::string getControlString();

		bool toggle();

		unsigned int getCurrentConsumption() const;

};





