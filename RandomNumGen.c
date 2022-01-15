/*
* Code to generate random number using MSB formula.
* Run command: gcc RandomNumGen.c && ./a.out
* Output: 10
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomNum() { 
    int random = 1 + (15.0*rand())/(RAND_MAX+1.0); 
    return random;
}

int main() {
    srand(clock());
    int random=randomNum();
    printf("%d\n", random);
}