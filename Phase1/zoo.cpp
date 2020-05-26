#include "lion.h"
#include "goose.h"
#include "shark.h"
#include <vector>


int main(){
	std::vector<Animal*> animals;

	animals.push_back(new Lion("Simba"));
	animals.push_back(new Goose("Akka"));
	animals.push_back(new Goose("Jaws"));

	delete animals[0];
	delete animals[1];
	delete animals[2];

    return 0;
}
