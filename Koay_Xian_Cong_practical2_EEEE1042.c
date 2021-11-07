#include <stdio.h>

int main(int argc, char **argv) {
//1.1
  int a=1;
  int b=2;
  float c=1;
  float d=2;
  double e=1;
  double f=2;

  printf("sum of int(a+b) = %d\n", a+b);
  printf("sum of float(c+d) = %f\n", c+d);
  printf("sum of double(e+f) = %f\n", e+f);

//1.2
  printf("\nsum of int and float(a+c) = %d\n", a+c);
  printf("sum of float and int(a+c) = %f\n", a+c);
// Q1: What is the result when you add together a signed and an unsigned int?
// Answer to Q1
  printf("\n**************\nAnswer to Q1\n***************\n");
  printf("Sum of int and float shows correct without error when it's printed as float but shows a warning when it's printed as int. \n"); 

//1.3
  int g=-5; //signed by default
  printf("\ng = %u\n", g);
  int h=4;
  printf("h = %u\n", h);
// Q2: Are you able to print signed as unsigned and vice versa? Why do you get this result?
// Answer to Q2
  printf("\n**************\nAnswer to Q2\n***************\n");
  printf("Yes, both signed and unsiged are printable, but unsigned shows a weird value because unsigned int cannot print negative value. \n"); 

//1.4
  printf("\nsum of signed and unsigned(g+h) = %d\n", g+h);
  printf("sum of signed and unsigned(g+h) = %u\n", g+h);
//Q3: What is the result? Why do you get this result?
// Answer to Q3
  printf("\n**************\nAnswer to Q3\n***************\n");
  printf("Yes, both signed and unsiged are printable but answer for unsigned is not correct because unsigned int cannot take value from negative. \n"); 

//1.5
  double i=3.14159265;
  printf("\nprint double as int = %d\n", i);
//Q4: What do you get and why?
// Answer to Q4
  printf("\n**************\nAnswer to Q4\n***************\n");
  printf("Emacs compiler gives a warning that %%d is a double not an int and the answer printed is in large negative value. This is because %%d prints an integer while an integer cannot has decimal \n"); 

//2.1
  char j;
  j = 'A';
  printf("\nj as char = %c\n", j);
  printf("j as int = %d\n", j);
//Q5: What do you get? Explain what you are observing.
// Answer to Q5
  printf("\n**************\nAnswer to Q5\n***************\n");
  printf("Emacs compiler gives A which is the character I assigned when using %%c while emacs prints 65 which is the ASCII code for 'A' when using %%d.\n"); 

//2.2
  printf("\nj+1 = %c\n", j+1);
  printf("j+10 = %c\n", j+10);
  printf("j+1000 = %c\n", j+1000);
//Q6: What do you get in each case? Why?
// Answer to Q6
  printf("\n**************\nAnswer to Q6\n***************\n");
  printf("When 1 is added to j, emacs compiler prints B when using %%c which is 66 in %%d as 66 is 'B' in ASCII;75 is 'K' in ASCII;1065 is ')' in ASCII.\n"); 

//2.3
  char string[]="Hello World";
  printf("\nstring = %s\n", string);

//2.4
  string[6]++;
  printf("\nstring[6]+1 = %s\n", string);
//Q7: What do you get and why?
// Answer to Q7
  printf("\n**************\nAnswer to Q7\n***************\n");
  printf("Hello Xorld is printed because the 6th bit in the string is added 1 in which the next element of W is equals to X.\n"); 

//2.5
  string[5] = 0;
  printf("\nstring[5]=0  = %s\n", string);
//Q8: What do you get and why?
// Answer to Q8
  printf("\n**************\nAnswer to Q8\n***************\n");
  printf("Hello is printed because it stops printing when it reaches a null character(\\0), because %%s expected the string to be null terminated.\n"); 

//3.1
  double F, C;
  F = 0;
  C = (F-32)*5/9;
  printf("\nF     C\n");
  printf("%-3.0f %4.2f\n",F, C);
  F = 20;
  C = (F-32)*5/9;
  printf("%-3.0f %4.2f\n",F, C);
  F = 40;
  C = (F-32)*5/9;
  printf("%-3.0f %4.2f\n",F, C);
  F = 60;
  C = (F-32)*5/9;
  printf("%-3.0f %4.2f\n",F, C);
  F = 80;
  C = (F-32)*5/9;
  printf("%-3.0f %4.2f\n",F, C);
  F = 100;
  C = (F-32)*5/9;
  printf("%-3.0f %4.2f\n",F, C);

  F = 0;
  C = 5/9*(F-32);
  printf("\nF     C\n");
  printf("%-3.0f%4.2f\n",F, C);
  F = 20;
  C = 5/9*(F-32);
  printf("%-3.0f%4.2f\n",F, C);
  F = 40;
  C = 5/9*(F-32);
  printf("%-3.0f %4.2f\n",F, C);
  F = 60;
  C = 5/9*(F-32);
  printf("%-3.0f %4.2f\n",F, C);
  F = 80;
  C = 5/9*(F-32);
  printf("%-3.0f %4.2f\n",F, C);
  F = 100;
  C = 5/9*(F-32);
  printf("%-3.0f %4.2f\n",F, C);

  F = 0;
  C = 5.0/9.0*(F-32);
  printf("\nF     C\n");
  printf("%-3.0f %4.2f\n",F, C);
  F = 20;
  C = 5.0/9.0*(F-32);
  printf("%-3.0f %4.2f\n",F, C);
  F = 40;
  C = 5.0/9.0*(F-32);
  printf("%-3.0f %4.2f\n",F, C);
  F = 60;
  C = 5.0/9.0*(F-32);
  printf("%-3.0f %4.2f\n",F, C);
  F = 80;
  C = 5.0/9.0*(F-32);
  printf("%-3.0f %4.2f\n",F, C);
  F = 100;
  C = 5.0/9.0*(F-32);
  printf("%-3.0f %4.2f\n",F, C);
//Q9: Explain the difference in outputs you observe between the formulas used in box 5 and box 6.
// Answer to Q9
  printf("\n**************\nAnswer to Q9\n***************\n");
  printf("In the first scenario, a floating point number is assigned as an integer, while the second equation remains float as floating point numbers\n"); 

//3.2
  int X=10;
  int Y=25;
  printf("\nx==y = %d\n", (X==Y));
  printf("x<y = %d\n", (X<Y));
  printf("x>y = %d\n", (X>Y));
//Q10: What numeric value does your computer use to represent TRUE and FALSE?
// Answer to Q10
  printf("\n**************\nAnswer to Q10\n***************\n");
  printf("TRUE=1, FALSE=0\n");
 
//3.3
  int x=0;
  int y=0;
  printf("\nx&&y = %d\n", (x&&y));
  printf("x||y = %d", (x||y));
//Q11: Explain your observations on what these two operators do and explain how they behave.
// Answer to Q11
  printf("\n**************\nAnswer to Q11\n***************\n");
  printf("When number !=0, compiler prints TRUE, hence if both x and y are 0, && behaves as logical AND while || behaves as logical OR and prints them FALSE. If one of the integer is TRUE while another is FALSE, || prints TRUE while && prints FALSE\n");

//3.4
  int v=6;
  int w=8;
  printf("\nv&w = %d\n", (v&w));
  printf("v|w = %d\n", (v|w));
//Q12: What do you observe? Record your understanding of how these two bit-wise operators behave here.
// Answer to Q12
  printf("\n**************\nAnswer to Q12\n***************\n");
  printf("Bitwise Operation works with binary. & behaves as AND for binary while | behaves as OR for binary. For Example: decimal 6 in binary is 110 while decimal 8 in binary is 1000\n");
  printf("0110\n");
  printf("1000\n");
  printf("0000 for AND, hence %d\n", (v&w));
  printf("1110 for OR where 1110(binary)=14(decimal), hence %d\n",(v|w));
  
//3.5
  int V=43;
  printf("\nV<<1 = %d", (V<<1));
  printf("\nV<<2 = %d", (V<<2));
  printf("\nV>>1 = %d", (V>>1));
  printf("\nV>>2 = %d", (V>>2));
  printf("\nV>>3 = %d", (V>>3));
//Q13: What do you observe? Record your understanding of how these two bit-wise operators behave here.
// Answer to Q13
  printf("\n**************\nAnswer to Q13\n***************\n");
  printf("Binary of 43 is 101011\n");
  printf("00000101011\n");
  printf("00001010110, shift to left once = 86(decimal)\n");
  printf("00010101100, shift to left twice = 172(decimal)\n");
  printf("00000010101, shift to right once = 21(decimal)\n");
  printf("00000001010, shift to right twice = 10(decimal)\n");
  printf("00000000101, shift to right thrice = 5(decimal)\n");
  
  return(0);
}
