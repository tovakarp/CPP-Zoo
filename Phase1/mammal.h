#ifndef __MAMMA_H__
#define __MAMMA_H__

#include "animal.h"

/*Mammal class*/
class Mammal : public Animal{
public:
    Mammal(std::string);
	virtual ~Mammal() {}

protected:
    virtual void print(std::ostream&) const = 0;

};

inline Mammal :: Mammal(std::string name): Animal(name){}





#endif
