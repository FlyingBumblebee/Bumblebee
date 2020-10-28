#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define S 3
#define RAND srand(time(NULL))
#define SWITCH_ROW printf("\n")
#define RAND_FILLING matr[row][col] = rand()%10
#define PRINT_MATRIX_NUMBER printf("%d ", matr[row][col])
int main(){
	int matr[S][S];
	RAND;
	int row, col;
	for (row = 0;row < S; row++){
		for (col = 0; col < S; col++){
			RAND_FILLING;
			PRINT_MATRIX_NUMBER;
		}
		SWITCH_ROW;
	}
	return 0;
}

