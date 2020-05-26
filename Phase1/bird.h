#ifndef __BIRD_H__
#define __BIRD_H__

#include "animal.h"

/*Bird Class*/
class Bird : public Animal{
public:
    Bird(std::string);
    virtual ~Bird() {}

protected:
    virtual void print(std::ostream&) const = 0;
};

inline Bird :: Bird(std::string name): Animal(name){}



#endif
