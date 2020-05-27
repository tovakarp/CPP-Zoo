#include "bird.h"

void Bird :: print(std::ostream &os) const{
	Animal :: print(os);
	os << "Height: " << getHeight() << std::endl
		<< "Wing span: " << (int)getWingSpan() << std::endl;
}
