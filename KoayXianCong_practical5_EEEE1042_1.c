#include <stdio.h>
#include <stdlib.h>

#define N 20


int main () {

  FILE *f;
  char M[]="MSB.txt";
  char L[]="LSB.txt";
  int i,j;
  int MSB, LSB;

  if ((f=fopen(M,"w"))!=NULL) //open MSB file to write
    {
      
      for (i=0; i<N; i++) //loop the code until N numbers
        {
          MSB = 1+(int) (10.0*rand()/(RAND_MAX+1.0)); //MSB formula
          fprintf(f, "%d\n", MSB); //print result into MSB.txt
        }
        
        fclose(f);
    }

  else
    {
      printf("Unable to open %s for writing", M);
    }

  if ((f=fopen(L,"w"))!=NULL) //open LSB file to write
    {
      
      for (i=0; i<N; i++) //loop the code until N numbers
        {
          LSB = (rand()%10+1); //LSB formula
          fprintf(f, "%d\n", LSB); //print result into LSB.txt
        }
        
        fclose(f);
    }

  else
    {
      printf("Unable to open %s for writing", L);
    }

  return 0;

}
