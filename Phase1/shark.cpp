#include "shark.h"

std::string Shark:: m_species = "Shark";
unsigned char Shark :: m_life_expectancy = 1;
std::string Shark :: m_continents = "Atlantic";
std::string Shark :: m_food = "...";
unsigned char Shark :: m_speed = 32;
unsigned short int Shark :: m_lowest_depth = 125;


void Shark :: print(std::ostream& os) const{
    Animal :: print(os);
    os << "Species: " << m_species << std::endl
       << "Life expectancy: " << (int)m_life_expectancy << std::endl
       << "Continents: " << m_continents << std::endl
       << "Food: " << m_food << std::endl
       <<"Speed: " << (int)m_speed << std::endl
		 << "Lowest depth: " << m_lowest_depth << std :: endl;
}

