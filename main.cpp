#include "forest.h"

#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <vector>
#include <time.h>

// definitions ---------------
Forest* forest;
int day;


void start() {
	// method that simulates the forest life in an infinite loop

	bool finished = false;

	while (!finished) {
		day++;

		// the loop continues as long as there are living organisms
		finished = forest->update();

		forest->print();

		printf("*** End of day %d ***\n", day);
		system("PAUSE");
	}

}

void main() {
	// Forest project's main function

	srand ( (int)time(NULL) );

	forest = new Forest();
	day = 0;


	start();

	forest->~Forest();
    
	printf("Finished at the end of day %d.\n", day);
	system("PAUSE");

}
