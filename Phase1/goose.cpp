#include "goose.h"

/*Goose*/
std::string Goose:: m_species = "Goose";
unsigned char Goose :: m_life_expectancy = 1;
std::string Goose :: m_continents = "Atlantic";
std::string Goose :: m_food = "...";
unsigned char Goose :: m_speed = 32;
unsigned short int Goose :: m_height = 52;
unsigned char Goose :: m_wing_span = 26;


void Goose :: print(std::ostream& os) const{
    Animal :: print(os);
    os << "Species: " << m_species << std::endl
       << "Life expectancy: " << (int)m_life_expectancy << std::endl
       << "Continents: " << m_continents << std::endl
       << "Food: " << m_food << std::endl
       <<"Speed: " << (int)m_speed << std::endl
		<< "Height: " << m_height << std::endl
       << "Lowest depth: " << (int)m_wing_span << std :: endl;

}

