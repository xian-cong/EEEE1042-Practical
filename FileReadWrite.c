/*
* Code to read and write into file.
* Run command: gcc FileReadWrite.c && ./a.out
* Output: abc
*         123
*         hello
*         nihao
*/

#include <stdio.h>

int main() {
    {
        FILE *f; 
        char filename[]="a.txt";
        char content[20]; 
        if ((f=fopen(filename,"r"))!=NULL) {
            while(fscanf(f, "%s", content)!=EOF) {
                printf("%s\n",content);
            }
            fclose(f); 
        } else {printf("Unable to open %s for reading\n",filename);}
    }

    {
        FILE *f; 
        char filename[]="b.txt";
        if ((f=fopen(filename,"w"))!=NULL) {
            fprintf(f, "Hello");
            fclose(f); 
        } 
        else {printf("Unable to open %s for reading\n",filename);}
    }

}