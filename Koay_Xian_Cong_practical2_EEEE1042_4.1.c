#include <stdio.h>

int mymax(int x, int y);//This is a function declaration

//4.1
int main(int argc, char **argv) {
  int x, y, z;
  z = mymax(x,y);
  printf("\nx=%d", x);
  printf("\ny=%d", y);
  printf("\nz=%d\n", z);
//Q14: Can you compile and execute? Explain what you observe.
// Answer to Q14
  printf("\n**************\nAnswer to Q14\n***************\n");
  printf("Compile and execute but with error saying implicit declaration of a function 'mymax'.\n");
//Q15: Can you compile and execute now? Explain what has happened.
// Answer to Q15
  printf("\n**************\nAnswer to Q15\n***************\n");
  printf("Yes, able to compile and execute without error. This is because the program read from top to bottom and mymax is defined on top.\n");
//Q16: Now are you able to compile and execute? Explain why you are able to compile and execute in one scenario, but not in the other.
// Answer to Q16
  printf("\n**************\nAnswer to Q16\n***************\n");
  printf("Yes, able to compile and execute without error. This is becasue the mymax function is being declared and compiler knows what mymax function is which takes two ints as inputs and return int as output\n");

  return(0);

}

int mymax(int x, int y) {
  int z;
  if (x>y) z=x;
  else z=y;
  return(z);
}

