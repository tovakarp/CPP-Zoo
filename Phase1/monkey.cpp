#include "monkey.h"


std::string Monkey :: getSpecies() const{
    return "Monkey";
}


unsigned char Monkey :: getLifeExpectancy() const{
    return 50;
}


std::string Monkey :: getContinents() const{
    return "Africa, America";
}


std::string Monkey :: getFood() const{
    return "%%%";
}


unsigned char Monkey :: getSpeed() const{
    return 29;
}

unsigned char Monkey :: getPregDuration() const{
    return 5;
}


unsigned char Monkey :: getNumBorn() const{
    return 7;
}

void Monkey :: print(std::ostream& os) const{
    Mammal :: print(os);
}
