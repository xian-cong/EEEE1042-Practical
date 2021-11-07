#include<stdio.h>
#include<string.h>

int main(int argc, char **argv) {
//1.1
  char alphabet[]="abcdefghijklmnopqrstuvwxyz";
  
//1.2
  char *s;
  
//1.3
//Q1: What does s contain at this point (without any assignment?) Should you print out the string pointed to by s? Why or why not?
//Answer to Q1
  printf("\n**************\nAnswer to Q1\n***************\n");
  printf("s is a pointer to a char. It's declared but not initialized, hence it's pointing randomly. Thus, it should not be printed out. \n"); 

//1.4
  printf("\n%ld\n", strlen(alphabet));

//1.5
  s=alphabet;
  printf("\n%ld\n", strlen(s));
  printf("\n%c\n", *s);
//Q2: What do you get and why?
//Answer to Q2
  printf("\n**************\nAnswer to Q2\n***************\n");
  printf("Get 26 because s is pointing to the first element of the alphabet\n"); 

//1.6
  ++s;
  printf("\n%ld\n", strlen(s));
  printf("\n%c5\n", *s);
  printf("\n%s\n", s);
//Q3: Explain why you get the observed result.
//Answer to Q3
  printf("\n**************\nAnswer to Q3\n***************\n");
  printf("When one is added to s, b is printed out because s is now pointing to the second character in the alphabet string. When s is printed out as a string using %%s, compilation gave an error stating segmentation fault. For %%s, it gives you segmentation fault because of the parameter, when you put *s it means s[0] at the first. Pointer is 'pointing', try to change it to %%c to see what I mean, and if you want to print it as string, use s instead of *s.\n"); 

//1.7
  s=&alphabet[10];
  printf("\n%c\n", *s);
  printf("%s\n", s);
  printf("%ld\n", strlen(s));
//Q4:Explain again why you are getting what you observe.
//Answer to Q4
  printf("\n**************\nAnswer to Q4\n***************\n");
  printf("S is now pointing to the 10th element in the alphabet string array, in which the 10th element is k, hence k is printed.\n");

//2.1 & 2.2
  int x1=0;
  int y1=0;
  printf("\nx&&y = %d\n", x1&&y1);

//2.3
  int x2=1;
  int y2=1;
  printf("\n AND   | x=0  | x=1  \n");
  printf("======================\n");
  printf(" y=0   |  %d   |  %d   \n", x1&&y1, x2&&y1);
  printf(" y=1   |  %d   |  %d   \n", x1&&y2, x2&&y2);

//2.4
  printf("\n OR    | x=0  | x=1  \n");
  printf("======================\n");
  printf(" y=0   |  %d   |  %d   \n", x1||y1, x2||y1);
  printf(" y=1   |  %d   |  %d   \n", x1||y2, x2||y2);

//2.5
  printf("\n XOR   | x=0  | x=1  \n");
  printf("======================\n");
  printf(" y=0   |  %d   |  %d   \n", x1^y1, x2^y1);
  printf(" y=1   |  %d   |  %d   \n", x1^y2, x2^y2);
  
  return(0);
}
