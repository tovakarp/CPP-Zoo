#ifndef __SNOWYOWL_H__
#define __SNOWYOWL_H__

#include "bird.h"


/*SnowyOwl class*/
class SnowyOwl : public Bird{
public:
    SnowyOwl(std::string);

    /*virtual*/ std::string getSpecies() const;
    /*virtual*/ unsigned char getLifeExpectancy() const;
    /*virtual*/ std::string getContinents() const;
    /*virtual*/ std::string getFood() const;
    /*virtual*/ unsigned char getSpeed() const;
    /*virtual*/ unsigned short int getHeight() const;
    /*virtual*/ unsigned char getWingSpan() const;

protected:
    void print(std::ostream&) const;
};

inline SnowyOwl :: SnowyOwl(std::string name):Bird(name){}

#endif

