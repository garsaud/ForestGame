#include "eagle.h"

#include <iostream>

using namespace std;

Eagle::Eagle() : Animal() {
   this->lifetime = 6;
}
             
/*void Eagle::eat(Organism* organism) {
    if (organism->getName() == 'C')
       organism->die();
    else
        this->die();
}
*/
