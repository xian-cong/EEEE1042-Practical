/*
* Code to perform recursive function. **factorial in this case**
* Run command: gcc RecursiveFunction.c && ./a.out
* Output: 0! = 1
*         1! = 1
*         2! = 2
*         3! = 6
*         4! = 24
*/

#include <stdio.h>

int factorial(int i) {
    if (i==0) return 1;
    else return (i*factorial(i-1)); //! formula to perform factorial
}

int main() {
    for (int i=0; i<5; i++) {
        printf("%d! = %d\n", i, factorial(i));
    }
}