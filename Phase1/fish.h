#ifndef __FISH_H__
#define __FISH_H__

#include "animal.h"

/*Fish class*/
class Fish : public Animal{
public:
    Fish(std::string);
	virtual ~Fish() {}

protected:
	virtual void print(std::ostream&) const = 0;
};

inline Fish :: Fish(std::string name): Animal(name){}


#endif
