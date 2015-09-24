#ifndef FOREST_H
#define FOREST_H

#include "organism.h"
#include "animal.h"
#include "canary.h"
#include "eagle.h"
#include "forest.h"
#include "lion.h"
#include "zebra.h"
#include "plant.h"
#include <stdio.h>
#include <vector>

class Forest {
	// Forest class contains a dynamic array of organism pointers

	vector<Organism*> beings;
	  
	public :
		int number_beings;
		Forest();
		~Forest();
		
		bool update();
		void print();
};

#endif

