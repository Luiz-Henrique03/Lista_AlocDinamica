#include <iostream>
#include "Ex13.h"
#include <stdlib.h>

using namespace std;

int estaContido(int elemento, int **matriz, int numLin, int numCol) {
	int i, j;
	
	for(i=0; i<numLin; i++) {
		for(j=0; j<numCol; j++) 
			if (matriz[i][j] == elemento)
				return 1;
	}
	
	return 0;

	delete  matriz;
}

