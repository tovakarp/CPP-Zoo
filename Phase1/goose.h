#ifndef __GOOSE_H__
#define __GOOSE_H__

#include "bird.h"


/*Goose class*/
class Goose : public Bird{
public:
    Goose(std::string);

	/*virtual*/ std::string getSpecies() const;
	/*virtual*/ unsigned char getLifeExpectancy() const;
	/*virtual*/ std::string getContinents() const;
	/*virtual*/ std::string getFood() const;
	/*virtual*/ unsigned char getSpeed() const;
	/*virtual*/ unsigned short int getHeight() const;
	/*virtual*/ unsigned char getWingSpan() const;

protected:
	void print(std::ostream&) const;
};

inline Goose :: Goose(std::string name):Bird(name){}

#endif

