#include <stdio.h>
#define N 6

void inputData(float* farenheit, char *fc) {
    
    for (int i=0; i<N; i++)
    {
        printf("Please enter %s value %d\n", fc, i);
        scanf("%f", &farenheit[i]);
    }
}

void celciusCal(float *farenheit, float *celcius) {
    for (int i=0; i<N; i++) 
    {
        celcius[i] = 5.0/9.0*(farenheit[i]-32.0);
    }
}

void farenheitCal(float *farenheit, float *celcius) {
    for (int i=0; i<N; i++) 
    {
        farenheit[i] = 9.0/5.0*celcius[i]+32;
    }
}

void print(float *farenheit, float *celcius, char *firstCol, char *secondCol) {
    printf("%10s | %10s\n", firstCol, secondCol);
    for (int i=0; i<N; i++) 
    {
        printf("%10.2f | %10.2f\n", farenheit[i], celcius[i]);
    }
}

int main() {
    float farenheit[N];
    float celcius[N];

    inputData(farenheit, "farenheit");
    celciusCal(farenheit, celcius);
    print(farenheit, celcius, "Farenheit:", "Celcius:");

    inputData(celcius, "celcius");
    farenheitCal(farenheit, celcius);
    print(celcius, farenheit, "Celcius:", "Farenheit:");

    return 0;
}
