#include "lion.h"
#include "monkey.h"
#include "dog.h"
#include "goose.h"
#include "snowyowl.h"
#include "shark.h"
#include "clownfish.h"
#include "whale.h"
#include <vector>


int main(){
	std::vector<Animal*> animals;

	std::string n[9] = {"Simba","Mufasa", "Rafiki", "Akka", "Morten", "Hedwig", "Toto", "Jews", "Nemo"};

	animals.push_back(new Lion(n[0]));
    animals.push_back(new Lion(n[1]));
	animals.push_back(new Monkey(n[2]));
    animals.push_back(new Goose(n[3]));
    animals.push_back(new Goose(n[4]));
    animals.push_back(new SnowyOwl(n[5]));
    animals.push_back(new Dog(n[6]));
    animals.push_back(new Shark(n[7]));
    animals.push_back(new Clownfish(n[8]));
    animals.push_back(new Whale(n[1]));



    for(std::vector<Animal*>::iterator it = animals.begin(); it != animals.end(); ++it){
		std::cout << **it << std::endl;
		delete *it;
	}

    return 0;
}
