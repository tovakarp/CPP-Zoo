#ifndef __BIRD_H__
#define __BIRD_H__

#include "animal.h"

#include "ibird.h"

class Bird : public Animal, public Ibird{
public:
    Bird(std::string);

protected:
    virtual void print(std::ostream&) const = 0;
};

inline Bird :: Bird(std::string name): Animal(name){}


#endif
