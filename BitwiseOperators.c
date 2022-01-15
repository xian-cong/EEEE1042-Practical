/*
* Code to perform bitwise operation
* Run command: gcc BitwiseOperators.c && ./a.out
* Output: (x<<2)=8, (x>>1)=1
*/

#include<stdio.h>

int main() {
    int x=2,y=0;
    printf("(x<<2)=%d, (x>>1)=%d\n",(x<<2),(x>>1)); //x shift 2 bits from 10 to 1000 hence output 8
    return 0;
}