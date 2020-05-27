#include "clownfish.h"


std::string Clownfish :: getSpecies() const{
    return "Clownfish";
}


unsigned char Clownfish :: getLifeExpectancy() const{
    return 1;
}


std::string Clownfish :: getContinents() const{
    return "Atlantic, Indian";
}


std::string Clownfish :: getFood() const{
    return "&&&";
}


unsigned char Clownfish :: getSpeed() const{
    return 21;
}

unsigned short int Clownfish :: getLowestDepth() const{
    return 87;
}

void Clownfish :: print(std::ostream& os) const{
    Fish :: print(os);
}

