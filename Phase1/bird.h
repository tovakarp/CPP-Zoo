#ifndef __BIRD_H__
#define __BIRD_H__

#include "animal.h"


class Bird : public Animal{
public:
    Bird(std::string);

	virtual unsigned short int getHeight() const = 0;
	virtual unsigned char getWingSpan() const = 0;

protected:
    /*virtual*/ void print(std::ostream&) const;
};

inline Bird :: Bird(std::string name): Animal(name){}


#endif
