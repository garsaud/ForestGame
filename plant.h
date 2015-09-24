#ifndef PLANT_H
#define PLANT_H
#include <iostream>
#include "organism.h"

class Plant : public Organism
{

    public:
           Plant() : Organism() {this->lifetime = 10;}
           
           char getName() const { return 'P'; }
};


#endif
