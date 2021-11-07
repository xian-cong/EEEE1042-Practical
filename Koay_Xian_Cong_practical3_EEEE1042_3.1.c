#include<stdio.h>

//3.2
void printBinary(int x) {
  char c[9];
  c[8]='\0';
  int y=x;
  c[7]=((x&1)==1 ? '1' : '0');
  x=x>>1;
  c[6]=((x&1)==1 ? '1' : '0');
  x=x>>1;
  c[5]=((x&1)==1 ? '1' : '0');
  x=x>>1;
  c[4]=((x&1)==1 ? '1' : '0');
  x=x>>1;
  c[3]=((x&1)==1 ? '1' : '0');
  x=x>>1;
  c[2]=((x&1)==1 ? '1' : '0');
  x=x>>1;
  c[1]=((x&1)==1 ? '1' : '0');
  x=x>>1;
  c[0]=((x&1)==1 ? '1' : '0');
  x=x>>1;
  printf("%3d: %s\n",y,c);
}

//3.1
int main(int argc, char **argv) {
  int x=9;
  printBinary(x);


  return(0);
}
