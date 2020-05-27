#ifndef __DOG_H__
#define __DOG_H__

#include "mammal.h"

/*Dog Class*/
class Dog : public Mammal{
public:
    Dog(std::string);

    /*virtual*/ std::string getSpecies() const;
    /*virtual*/ unsigned char getLifeExpectancy() const;
    /*virtual*/ std::string getContinents() const;
    /*virtual*/ std::string getFood() const;
    /*virtual*/ unsigned char getSpeed() const;
    /*virtual*/ unsigned char getPregDuration() const;
    /*virtual*/ unsigned char getNumBorn() const;

protected:
    void print(std::ostream&) const;
};

inline Dog::Dog(std::string name): Mammal(name) {}


#endif
