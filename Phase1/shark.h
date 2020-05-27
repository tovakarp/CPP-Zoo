#ifndef __SHARK_H__
#define __SHARK_H__

#include "fish.h"

class Shark : public Fish{
public:
    Shark(std::string);

	/*virtual*/ std::string getSpecies() const;
	/*virtual*/ unsigned char getLifeExpectancy() const;
	/*virtual*/ std::string getContinents() const;
	/*virtual*/ std::string getFood() const;
	/*virtual*/ unsigned char getSpeed() const;
	/*virtual*/ unsigned short int getLowestDepth() const;

protected:
	void print(std::ostream&) const;
};

inline Shark :: Shark(std::string name):Fish(name){}


#endif
