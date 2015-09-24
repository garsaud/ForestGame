#ifndef CANARY_H
#define CANARY_H
#include <iostream>
#include "organism.h"
#include "animal.h"

class Canary : public Animal {
      
    public:
           Canary();

           void eat(Organism* organism) {
				if (organism->getName() == 'P')
				   organism->die();
				else
					this->die();
			}        

           char getName() const { return 'C'; }
};


#endif
