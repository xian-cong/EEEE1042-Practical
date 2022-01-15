/*
* Code to combine different keywords in a string.
* Run command: gcc Sprintf.c && ./a.out
* Output: Hello Player 67
*/

#include <stdio.h>

int main() {
    char input[100];
    char a[] = "Hello";
    int b = 67;
    sprintf(input, "%s Player %d", a, b);
    printf("%s\n", input);
}