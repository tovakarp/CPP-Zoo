#include "shark.h"


std::string Shark :: getSpecies() const{
	return "Shark";
}


unsigned char Shark :: getLifeExpectancy() const{
	return 1;
}


std::string Shark :: getContinents() const{
	return "Atlantic, Pacific";
}


std::string Shark :: getFood() const{
	return "$$$";
}


unsigned char Shark :: getSpeed() const{
	return 21;
}

unsigned short int Shark :: getLowestDepth() const{
	return 125;
}

void Shark :: print(std::ostream& os) const{
    Fish :: print(os);
}

