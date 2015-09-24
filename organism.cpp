#include "organism.h"
#include <iostream>

using namespace std;

Organism::Organism() {
    this->age = 0;
    this->alive = true;
}

int Organism::getAge() {
    return this->age;
}

void Organism::die() {
     this->alive = false;
}

void Organism::grow() {
	// increases the age of the organism and verify if the lifetime is reached,
	// in which case the organism dies.

     if (this->alive && this->age >= this->lifetime) {
        this->die();
		printf("This %c died naturally at the age of %d and a lifetime of %d\n", this->getName(), this->age, this->lifetime);
	 } else
		 this->age++;
}

bool Organism::get_alive() {
     return this->alive;
}
