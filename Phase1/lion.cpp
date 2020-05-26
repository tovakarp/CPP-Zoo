#include "lion.h"

/*Lion*/
std::string Lion:: m_species = "Lion";
unsigned char Lion :: m_life_expectancy = 50;
std::string Lion :: m_continents = "Africa, Asia";
std::string Lion :: m_food = "meat";
unsigned char Lion :: m_speed = 32;
unsigned char Lion :: m_preg_duration = 10;
unsigned char Lion :: m_born_num = 2;


void Lion :: print(std::ostream& os) const{
    Animal :: print(os);
    os << "Species: " << m_species << std::endl
       << "Life expectancy: " << (int)m_life_expectancy << std::endl
       << "Continents: " << m_continents << std::endl
       << "Food: " << m_food << std::endl
       <<"Speed: " << (int)m_speed << std::endl
       << "Pregnancy Duration: " << (int)m_preg_duration << std::endl
       << "Number of young Born: " << (int)m_born_num << std::endl;

}
