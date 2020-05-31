#include "dog.h"


std::string Dog :: getSpecies() const{
    return "Dog";
}


unsigned char Dog :: getLifeExpectancy() const{
    return 15;
}


std::string Dog :: getContinents() const{
    return "Africa, Asia, Europe, America, Australia";
}


std::string Dog :: getFood() const{
    return "!!!";
}


unsigned char Dog :: getSpeed() const{
    return 56;
}

unsigned char Dog :: getPregDuration() const{
    return 7;
}


unsigned char Dog :: getNumBorn() const{
    return 5;
}

void Dog :: print(std::ostream& os) const{
    Mammal :: print(os);
}
