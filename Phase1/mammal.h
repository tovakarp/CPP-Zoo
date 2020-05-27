#ifndef __MAMMA_H__
#define __MAMMA_H__

#include "animal.h"


class Mammal : public Animal{
public:
    Mammal(std::string);

	virtual unsigned char getPregDuration() const = 0;
	virtual unsigned char getNumBorn() const = 0;


protected:
    /*virtual*/ void print(std::ostream&) const;

};

inline Mammal :: Mammal(std::string name): Animal(name){}


#endif
