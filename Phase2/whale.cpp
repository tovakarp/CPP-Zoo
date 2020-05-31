#include "whale.h"


std::string Whale :: getSpecies() const{
    return "Whale";
}


unsigned char Whale :: getLifeExpectancy() const{
    return 95;
}


std::string Whale :: getContinents() const{
    return "Arcatic";
}


std::string Whale :: getFood() const{
    return "<><>";
}


unsigned char Whale :: getSpeed() const{
    return 30;
}

unsigned char Whale :: getPregDuration() const{
    return 12;
}


unsigned char Whale :: getNumBorn() const{
    return 1;
}

unsigned short int Whale :: getLowestDepth() const{
    return 30;
}


void Whale :: print(std::ostream& os) const{
    Mammal :: print(os);
    os << "Lowest Depth: " << getLowestDepth() << std::endl;
}
