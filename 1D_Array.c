/*
* Code to generate 1D Array
* Run command: gcc 1D_Array.c && ./a.out
* Output: 0
*         1
*         2
*         3
*         4
*         5
*         6
*         7
*         8
*         9
*/

#include <stdio.h>

void printArray(int* arr, int i) { 
    printf("%d\n", arr[i]);
}

int main() {
    int arr[10];
    for(int i=0; i<10; i++) {
        arr[i]=i;
        printArray(arr, i);
    } 
}