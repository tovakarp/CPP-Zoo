#ifndef __WHALE_H__
#define __WHALE_H__

#include "mammal.h"
#include "fish.h"

class Whale : public Mammal, public Ifish {
public:
    Whale(std::string&);

    /*virtual*/ std::string getSpecies() const;
    /*virtual*/ unsigned char getLifeExpectancy() const;
    /*virtual*/ std::string getContinents() const;
    /*virtual*/ std::string getFood() const;
    /*virtual*/ unsigned char getSpeed() const;
    /*virtual*/ unsigned char getPregDuration() const;
    /*virtual*/ unsigned char getNumBorn() const;
    /*virtual*/ unsigned short int getLowestDepth() const;

protected:
    void print(std::ostream&) const;
};

inline Whale::Whale(std::string &name): Mammal(name){}

#endif