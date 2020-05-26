#ifndef __LION_H__
#define __LION_H__

#include "mammal.h"

/*Lion Class*/
class Lion : public Mammal{
public:
    Lion(std::string);

protected:
    void print(std::ostream&) const;

private:

    static std::string m_species;
    static unsigned char m_life_expectancy;
    static std::string m_continents;
    static std::string m_food;
    static unsigned char m_speed;
    static unsigned char m_preg_duration;
    static unsigned char m_born_num;
};

inline Lion::Lion(std::string name): Mammal(name) {}

#endif
