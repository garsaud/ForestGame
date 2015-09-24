#ifndef ORGANISM_H
#define ORGANISM_H

#include <string>

class Organism {
      int age;
      
    public:
      bool alive;
            int lifetime;
           Organism();
           int getAge();
           void die();
           virtual void eat(Organism* organism) {
			   // Eagles eat canaries, canaries and zebra eat plants, and lions eat zebra
		   }
           bool get_alive();
           void grow();
           virtual char getName()  const { return 'A'; }
};

#endif
