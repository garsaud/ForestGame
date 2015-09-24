#ifndef ZEBRA_H
#define ZEBRA_H
#include <iostream>
#include "animal.h"
using namespace std;

class Zebra : public Animal {
      
    public:
           Zebra();

           void eat(Organism* organism) {
			   if (organism->getName() == 'P')
				   organism->die();
			   else
				   this->die();
			}

           char getName() const { return 'Z'; }
};


#endif
