#ifndef __SHARK_H__
#define __SHARK_H__

#include "fish.h"

class Shark : public Fish{
public:
    Shark(std::string);

protected:
	void print(std::ostream&) const;

private:
    static std::string m_species;
    static unsigned char m_life_expectancy;
    static std::string m_continents;
    static std::string m_food;
    static unsigned char m_speed;
    static unsigned short int m_lowest_depth;
};

inline Shark :: Shark(std::string name):Fish(name){}


#endif
