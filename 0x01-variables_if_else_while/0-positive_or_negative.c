#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Program starts here
 * 
 * Return: prints string; 0 otherwise
 */

int main(void){
    int n;
    srand(time(0));   // Initialization, should only be called once.
    n = rand() - RAND_MAX / 2; 
    if (n > 0)
        printf("%d is positive\n", n);
    else if (n == 0)
        printf("%d is zero\n", n);
    else
        printf("%d is negative\n", n);

    return(0);

}
