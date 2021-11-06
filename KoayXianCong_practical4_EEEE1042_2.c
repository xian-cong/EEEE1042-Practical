#include <stdio.h>
#include <time.h>
#define N 500000

int main() {

  clock_t startTime = clock();

  for (int testNum = 2; testNum<N; testNum++) //initialize first prime is 2
    {
      int isPrime = 1;

      for (int x = 2; x<testNum; x++) //initialize a variable to be divided in which the variable must be smaller than testNum 
      {
        if (testNum % x == 0) //if remainder is 0, then it's not prime number hence break the loop
        {
          isPrime = 0;
          break;
        }
      }
      
      if (isPrime == 1) //if remainder isn't 0, then it's prime number hence print the testNum
      {
        printf("%d\n", testNum);
      }

    }

  printf("Time to calculate %d primes: %f s\n", N, (float)(clock()-startTime)/CLOCKS_PER_SEC);
  return 0;
}