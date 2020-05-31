#ifndef __FISH_H__
#define __FISH_H__

#include "animal.h"
#include "ifish.h"


class Fish : public Animal, public Ifish{
public:
    Fish(std::string);

protected:
	virtual void print(std::ostream&) const = 0;
};

inline Fish :: Fish(std::string name): Animal(name){}



#endif
