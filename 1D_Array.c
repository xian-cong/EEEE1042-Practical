/*
* Code to generate 1D Array
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