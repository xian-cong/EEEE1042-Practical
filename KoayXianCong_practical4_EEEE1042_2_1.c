#include<stdio.h> 
#include<math.h>
#include<time.h>
#define N 500000

// return 1 if X is divisible by y
// return 0 otherwise
int isDivisible(int X, int y) {
  int z=X/y;   // This is the integer part of X/y
  if (z*y==X) return(1);
  else        return(0);
}
int main () {
  int unsigned x[N];
  int i;  // i is the outer loop variable that keeps track of how many prime numbers we have tried. Iteration stops when we reach N
  int j;  // j is the inner loop variable, that divides the number we are testing by all other prime numbers up to sqrt(k)
  int k;  // this is the number we are testing.
  clock_t startTime = clock();
  // Initialize the first prime number as 2:
  x[0]=2;
  for (i=1,k=3;i<N;k++) { // outer loop only stops after we've acquired N prime numbers.
    for (j=0;x[j]<=sqrt(k);j++) {   // iterate over inner loop to see if divisible by x[j] // FAST version
      if (isDivisible(k,x[j])) goto notPrime; // if it is divisible by one of the other primes, k is not prime.
    }
    // printf("%3d %6d\n",i,k);
    // If we exit the inner for loop, then no prime has divided k, we can add it to the list
    x[i]=k;
    i++;
  notPrime:
    i;
  }
  printf("Time to calculate %d primes: %f s\n",N,(float)(clock()-startTime)/CLOCKS_PER_SEC);
}