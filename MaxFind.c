/*
* Code to find maximum value in an array
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
    printf("\nMax: %d", max);
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