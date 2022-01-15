/*
* Code to input values through command line
* Run command: gcc CommandLineInput.c && ./a.out testing test
* Output: argc=3
*         Zero input argv[0]=./a.out
*         First input argv[1]=testing
*         Second input argv[2]=test
*/

#include <stdio.h>

int main (int argc, char **argv) {
    printf("argc=%d\n",argc); //calculate amount of input starting from ./a.out
    printf("Zero input argv[0]=%s\n",argv[0]);
    printf("First input argv[1]=%s\n",argv[1]);
    printf("Second input argv[2]=%s\n",argv[2]);
    return(0);
}