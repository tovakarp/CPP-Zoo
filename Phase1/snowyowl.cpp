#include "snowyowl.h"


std::string SnowyOwl :: getSpecies() const{
    return "SnowyOwl";
}


unsigned char SnowyOwl :: getLifeExpectancy() const{
    return 20;
}


std::string SnowyOwl :: getContinents() const{
    return "Europe, America";
}


std::string SnowyOwl :: getFood() const{
    return "^^^";
}


unsigned char SnowyOwl :: getSpeed() const{
    return 1;
}

unsigned short int SnowyOwl :: getHeight() const{
    return 7;
}


unsigned char SnowyOwl :: getWingSpan() const{
    return 9;
}


void SnowyOwl :: print(std::ostream& os) const{
    Bird :: print(os);
}

