/*
* Code to generate 2D Array
* Run command: gcc 2D_Array.c && ./a.out
* Output: 1
*         2
*         3
*         4
*         5
*         6
*         7
*         8
*         9
*         10
*/

#include <stdio.h>

void printArray(int arr[2][5], int i, int j) { 
    printf("%d\n", arr[i][j]);
}

int main() {
    int arr[2][5] = {{1,2,3,4,5},{6,7,8,9,10}};
    for(int i=0; i<2; i++) {
        for (int j=0; j<5; j++) {
            printArray(arr, i, j);
        }
    } 
}