#include "mammal.h"


void Mammal :: print(std::ostream &os) const{
	Animal :: print(os);
	os << "Pregnancy Duration: " << (int)getPregDuration() << std::endl
		<< "Number of young Born: " << (int)getNumBorn() << std::endl;
}
