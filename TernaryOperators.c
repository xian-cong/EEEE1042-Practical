/*
* Code to perform ternary operation
* Run command: gcc TernaryOperators.c && ./a.out
* Output: (x>y?y:x)=4
*/

#include<stdio.h>

int main() {
    int x=3,y=4;
    printf("(x>y?y:x)=%d\n",(x>y?x:y)); //if x>y, print x else y
    return(0);
}