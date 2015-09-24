#ifndef EAGLE_H
#define EAGLE_H
#include <iostream>
#include "animal.h"
using namespace std;
class Eagle : public Animal {
      
    public:
           Eagle();

           void eat(Organism* organism){
				if (organism->getName() == 'C')
				   organism->die();
				else
					this->die();
			}

           char getName() const { return 'E'; }
};


#endif
