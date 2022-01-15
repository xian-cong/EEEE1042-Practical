/*
* Code to find maximum value in an array
* Run command: gcc MaxFind.c && ./a.out
* Output: 13
*         4
*         4
*         12
*         5
*         7
*         15
*         13
*         7
*         10
*
*         Max: 15
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomNum() { 
    int random = 1 + (15.0*rand())/(RAND_MAX+1.0); 
    return random;
}

void printArray(int* arr, int i) { 
    printf("%d\n", arr[i]);
}

void printMax(int *arr) {
    int max = arr[0];
    for (int i=0 ;i<10 ;i++) {
        if(max < arr[i]) {
            max = arr[i];
        }
    }
    printf("\nMax: %d\n", max);
}

int main() {
    int arr[10];

    for(int i=0; i<10; i++) {
        int random=randomNum();
        srand(clock());
        arr[i]=random;
        printArray(arr, i);
    }
    printMax(arr);
} 