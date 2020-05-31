#ifndef __LION_H__
#define __LION_H__

#include "mammal.h"

/*Lion Class*/
class Lion : public Mammal{
public:
    Lion(std::string);

	/*virtual*/ std::string getSpecies() const;
	/*virtual*/ unsigned char getLifeExpectancy() const;
	/*virtual*/ std::string getContinents() const;
	/*virtual*/ std::string getFood() const;
	/*virtual*/ unsigned char getSpeed() const;
	/*virtual*/ unsigned char getPregDuration() const;
	/*virtual*/ unsigned char getNumBorn() const;

protected:
    void print(std::ostream&) const;
};

inline Lion::Lion(std::string name): Mammal(name){}


#endif
