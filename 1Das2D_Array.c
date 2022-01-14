/*
* Code to generate 1D Array as 2D
*/

#include <stdio.h>

void printArray(int* arr, int i, int j) { 
    printf("%d\n", arr[i*5+j]);
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    for(int i=0; i<2; i++) {
        for (int j=0; j<5; j++) {
            printArray(arr, i, j);
        }
    } 
}