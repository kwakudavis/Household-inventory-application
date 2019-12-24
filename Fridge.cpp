#include "Fridge.h"


const std::string Fridge::fridge = "Fridge";//static initialization is only used for int and enum





Fridge::Fridge():Appliance(Fridge::fridge, Fridge::FRIDGE_WATTAGE){

	Appliance::start();

}