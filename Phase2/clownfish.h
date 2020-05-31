#ifndef __Clownfish_H__
#define __Clownfish_H__

#include "fish.h"

class Clownfish : public Fish{
public:
    Clownfish(std::string);

    /*virtual*/ std::string getSpecies() const;
    /*virtual*/ unsigned char getLifeExpectancy() const;
    /*virtual*/ std::string getContinents() const;
    /*virtual*/ std::string getFood() const;
    /*virtual*/ unsigned char getSpeed() const;
    /*virtual*/ unsigned short int getLowestDepth() const;

protected:
    void print(std::ostream&) const;
};

inline Clownfish :: Clownfish(std::string name): Fish(name){}


#endif
