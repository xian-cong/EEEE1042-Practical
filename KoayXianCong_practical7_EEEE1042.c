#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomNum() { 
    int random = 1 + (15.0*rand())/(RAND_MAX+1.0); 
    return random;
}

void printArray1(int *x, int index, int i) {
    printf("%d %d\n", index, x[i]);
}

void printArray2(int y[3][5], int M, int N) {
    printf("%d\n", y[M][N]);
}

void printArray3(int *z, int O, int P, int j, int k) {
    printf("%d\n", z[j*P+k]);
}

void printArray4(int **c, int M, int N) {
    int i,j;
    for (i=0;i<M;i++) {
        for (j=0;j<N;j++) 
        printf("%3d",c[i][j]);
        printf("\n");
    }
}

int main() {
    /**********************1.1****************************/
    int x[10];
    int index;
    printf("1D Array:\n");    
    for (int i=0;i<10;i++) {
        x[i]=68;
        index=i;
        printArray1(x, index, i);
    }

    /**********************1.2****************************/
    int y[3][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
    printf("\n2D Array:\n");
    for (int M=0; M<3; M++) {
        printf("No. %d Array\n", M);
        for (int N=0; N<5; N++) {
            printArray2(y, M, N);
        }
    }

    /**********************1.3****************************/
    int z[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    printf("\n1D Array interpret as 2D:\n");
    for (int j=0; j<3; j++) {
        for (int k=0; k<5; k++) {
            printArray3(z, 3, 5, j, k);
        }
    }


    /**********************2.1****************************/
    int *a;
    printf("\nAllocating and printing 1D array of ints:\n");
    a=(int*)malloc(15*sizeof(int));
    for (int l=0; l<15; l++) {
        a[l]=234;
        index=l;
        printArray1(a, index, l);
    }
    free(a);

    /**********************2.2****************************/
    int *b;
    printf("\nAllocating 1D and printing as 2D array of ints:\n");
    b=(int*)malloc(15*sizeof(int));
    for (int m=0; m<15; m++) {
        int random=randomNum();
        srand(clock());
        b[m]=random;
        index=m;
        printArray1(b, index, m);
    }

    printf("\nRealloc:\n");
    b=(int*)realloc(b,20*sizeof(int));
    for (int m=0; m<20; m++) {
        int random=randomNum();
        srand(clock());
        b[m]=random;
        index=m;
        printArray1(b, index, m);
    }
    free(b);

    /**********************2.3****************************/
    printf("\nAllocating and printing 2D array of ints:\n");
    int **c;
    c = (int**) calloc(3, sizeof(int*));
    for (int I=0; I<3; I++) c[I] = (int*)calloc(5,sizeof(int));
    for (int J=0;J<3;J++) for (int K=0;K<5;K++) c[J][K]=30.0*rand()/RAND_MAX;
    printArray4(c,3,5);
    for (int L=0;L<3;L++) free(c[L]);
    free(c);
}