#include <stdio.h>
#define N 100

int main() {

  int prime[N];
  
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

  return 0;
}