#ifndef LION_H
#define LION_H
#include <iostream>
#include "animal.h"

class Lion : public Animal {
      
    public:
           Lion();

           void eat(Organism* organism){
				if (organism->getName() == 'Z')
				   organism->die();
				else
					this->die();
			}

           char getName() const { return 'L'; }
};


#endif
