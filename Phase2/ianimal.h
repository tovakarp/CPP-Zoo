#ifndef __IANIMAL_H__
#define __IANIMAL_H__

#include <iostream>

class Ianimal{
public:
    virtual const std::string& getName() const = 0;
    virtual std::string getSpecies() const = 0;
    virtual unsigned char getLifeExpectancy() const = 0;
    virtual std::string getContinents() const = 0;
    virtual std::string getFood() const = 0;
    virtual unsigned char getSpeed() const = 0;

    virtual void print(std::ostream&) const = 0;
};

#endif