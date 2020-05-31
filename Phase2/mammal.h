#ifndef __MAMMAL_H__
#define __MAMMAL_H__

#include "animal.h"
#include "imammal.h"


class Mammal :public Animal, public Imammal{
public:
    Mammal(std::string);

protected:
    virtual void print(std::ostream&) const = 0;

};

inline Mammal :: Mammal(std::string name): Animal(name){}


#endif
