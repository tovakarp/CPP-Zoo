#include "goose.h"


std::string Goose :: getSpecies() const{
	return "Goose";
}


unsigned char Goose :: getLifeExpectancy() const{
	return 3;
}


std::string Goose :: getContinents() const{
	return "Europe, America";
}


std::string Goose :: getFood() const{
	return "@@@";
}


unsigned char Goose :: getSpeed() const{
	return 3;
}

unsigned short int Goose :: getHeight() const{
	return 2;
}


unsigned char Goose :: getWingSpan() const{
	return 12;
}


void Goose :: print(std::ostream& os) const{
    Bird :: print(os);
}

