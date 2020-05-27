#include "fish.h"


void Fish :: print(std::ostream &os) const{
	Animal :: print(os);
	os << "Lowest Depth: " << (int)getLowestDepth() << std::endl;
}
