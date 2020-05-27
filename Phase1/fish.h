#ifndef __FISH_H__
#define __FISH_H__

#include "animal.h"


class Fish : public Animal{
public:
    Fish(std::string);

	virtual unsigned short int getLowestDepth() const = 0;

protected:
	/*virtual*/ void print(std::ostream&) const;
};

inline Fish :: Fish(std::string name): Animal(name){}



#endif
