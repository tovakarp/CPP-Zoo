#ifndef __GOOSE_H__
#define __GOOSE_H__

#include "bird.h"


/*Goose class*/
class Goose : public Bird{
public:
    Goose(std::string);

protected:
	void print(std::ostream&) const;

private:
    static std::string m_species;
    static unsigned char m_life_expectancy;
    static std::string m_continents;
    static std::string m_food;
    static unsigned char m_speed;
    static unsigned short int m_height;
    static unsigned char m_wing_span ;
};

inline Goose :: Goose(std::string name):Bird(name){}

#endif

