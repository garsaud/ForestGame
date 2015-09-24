#include "forest.h"

#include <iostream>

using namespace std;

Forest::Forest() {
	// The forest is populated by a random set of organisms at construction.

    int rand_types;
    number_beings = rand() % 50 +50;
	
	printf("We start with %d organisms : ", number_beings);
    
    for (int i=0; i < number_beings; i++) {
		// fills each element of the array by a random new organism

        rand_types = rand() %  5;
        
        switch (rand_types) {
               case 0:
                    beings.push_back(new Plant);
					printf("P");
                    break;
               case 1:
                    beings.push_back(new Canary);
					printf("C");
                    break;
               case 2:
                    beings.push_back(new Lion);
					printf("L");
                    break;
               case 3:
                    beings.push_back(new Zebra);
					printf("Z");
                    break;
               case 4:
                    beings.push_back(new Eagle);
					printf("E");
                    break;
        }
    }
	cout << "\n";
}

Forest::~Forest () {
	// deletes all created variables
	beings.erase( beings.begin(), beings.end() );
}

bool Forest::update () {
    
	int num_alive = 0;
	int victim;

    for (int i = 0; i < number_beings ; i++) {
		// for every organism created...
			
		if (beings[i]->get_alive()) {
			// ...that is alive...

			int num_victim = 0;

			for (int k = 0; k < number_beings ; k++) {
				// determine the number of potential prey
				if (beings[k]->get_alive() && k != i ) {
					num_victim++;
				}
			}

			if (num_victim>0) {
				// if we found victims, choose one of them
				do { victim = rand() % number_beings; } while (!beings[victim]->get_alive() || victim == i);
					
				if (beings[i]->getName() != 'P') {
					// The alive animals eat
					beings[i]->eat(beings[victim]);
					printf("n %d is a %d days old %c, ate %d %c, %s\n", i, beings[i]->getAge(), beings[i]->getName(), victim, beings[victim]->getName(), (beings[i]->get_alive()) ? "scceeded, survived. victim dead" : "failed, died. victim still alive");
				} else
					// Plants don't
					printf("n %d is a plant and doesn't need to eat.\n", i);
			} else {
				// if there is no victim, then there is only one organism left
				printf("n %d is the only survivor. ", i);
				if (beings[i]->getName() == 'P')
					cout << "It is a plant so it doesn't need to eat.\n";
				else {
					cout << "It is an animal and has nothing to eat. Dies.\n";
					beings[i]->die();
				}
			}

			//  The alive organisms grow
			beings[i]->grow();

			if (beings[i]->get_alive())
				num_alive++;
		}
	}
        
	if (num_alive==0) {
		// Check how many organisms remain in the forest
		cout << "\nEveryone is dead !\n";
		return true;
	}
    
	// The return value is true if there is no more alive organism
	return false;
   
}

void Forest::print() {
	// prints the name of all alive organisms
	cout << "the following are alive organisms : ";
	for (int j = 0; j < number_beings ; j++) {
		if (beings[j]->get_alive())
			cout << beings[j]->getName();
	}
	cout << "\n";
}
