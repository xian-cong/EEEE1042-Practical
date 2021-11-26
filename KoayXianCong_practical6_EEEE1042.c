#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void populateArray(int *x, int N) {
    for (int i=0;i<N; i++) {
        x[i]=1+rand()%100; //Fill array x between 1 to 100
    }
}

void printArray(int *x, int N) {
    for (int i=0; i<N; i++) {
        printf("\t%d   -  %d\n", i, x[i]);
    }
}

void swap(int *x, int *y) {
    int t;
    t=*x;
    *x=*y;
    *y=t;
}

void bubbleSortArray(int *x, int N) {
    int unsorted;
    do {
        unsorted =0;
        for (int i=0; i<N-1; i++) {
            if (x[i]>x[i+1]) {
                swap(&x[i], &x[i+1]);
                unsorted =1;
            }
        }
    } while (unsorted==1);
}

int main() {
    int x[10];
    srand(clock());
    populateArray(x,10);
    printf("========before sort========\n");
    printArray(x, 10);
    bubbleSortArray(x, 10);
    printf("========after sort========\n");
    printArray(x, 10);

    return 0;
}