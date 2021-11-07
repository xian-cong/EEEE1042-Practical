#include<stdio.h>

//4.1
int main(int argc, char **argv) {
  //4.2
  FILE *f; //file pointer
  //4.3
  char filename[]="myOutput.txt"; //name of the file to open/close
  if ((f=fopen(filename,"w"))!=NULL) {
    fprintf(f, "%s\n", argv[1]);
    fprintf(f, "%s\n", argv[2]);
    fprintf(f, "%s\n", argv[3]);
    
    fclose(f); //close the file pointer
  }
  else {
    printf("Unable to open %s for writing\n", filename);
       }
  
//Q5: What output do you get from the cat command, explain what has happened.
//Answer to Q5
  printf("\n**************\nAnswer to Q5\n***************\n");
  printf("'my three inputs' had been written into myOutput.txt file and cat list the contents of the file to the screen. \n"); 


  return(0);
}
