#include "animal.h"

const std::string& Animal :: getName() const{
	return m_name;
}

void Animal :: print(std :: ostream& os) const{
    os << "Name: " << getName() << std::endl
		<< "Species: " << getSpecies() << std::endl
		<< "Life expectancy: " << (int)getLifeExpectancy() << std::endl
		<< "Continents: " << getContinents() << std::endl 
		<< "Food: " << getFood() << std::endl
		<< "Speed: " << (int)getSpeed() << std::endl;
}
