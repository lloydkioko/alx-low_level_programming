#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

void print_times_table(int n){
	int x, y, array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

	for(x=1; x<=12; x=x+1){
		for(y=0; y<=11; y=y+1){
			printf("%d", array[y]*x);
		}
		printf("\n");
	}
}

int main(void){
print_times_table();
return 0;
}
