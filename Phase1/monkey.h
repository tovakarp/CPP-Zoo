#ifndef __MONKEY_H__
#define __MONKEY_H__

#include "mammal.h"

/*Monkey Class*/
class Monkey : public Mammal{
public:
    Monkey(std::string);

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

inline Monkey::Monkey(std::string name): Mammal(name) {}


#endif
