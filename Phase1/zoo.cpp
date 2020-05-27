#include "lion.h"
#include "goose.h"
#include "shark.h"
#include <vector>


int main(){
	std::vector<Animal*> animals;

	std::string n[9] = {"Simba","Mufasa", "Rafiki", "Akka", "Morten", "Hedwig", "Toto", "Jews", "Nemo"}; 

	animals.push_back(new Lion(n[0]));
	animals.push_back(new Goose(n[1]));
	animals.push_back(new Shark(n[2]));


	for(std::vector<Animal*>::iterator it = animals.begin(); it != animals.end(); ++it){
		std::cout << **it << std::endl;
		delete *it;
	}

    return 0;
}
