#include "Oven.h"
#include <string>

unsigned int Oven::ovens = 0;


Oven::Oven():Appliance("Oven"+std::to_string(Oven::incrementsOvens()),Oven::OVEN_WATTAGE){
}

