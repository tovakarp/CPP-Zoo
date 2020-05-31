#include "lion.h"


std::string Lion :: getSpecies() const{
	return "Lion";
}


unsigned char Lion :: getLifeExpectancy() const{
	return 50;
}


std::string Lion :: getContinents() const{
	return "Africa, Asia";
}


std::string Lion :: getFood() const{
	return "***";
}


unsigned char Lion :: getSpeed() const{
	return 32;
}

unsigned char Lion :: getPregDuration() const{
	return 10;
}


unsigned char Lion :: getNumBorn() const{
	return 2;
}

void Lion :: print(std::ostream& os) const{
    Mammal :: print(os);
}
