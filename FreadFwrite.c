/*
* Code to read and write into file.
* Run command: gcc FreadFwrite.c && ./a.out
* Output: Done!
*/

#include <stdio.h>

int main() {
    FILE *from, *to;
    int n;
    char line[1000];
    if ((from=fopen("from","r"))!=NULL) {
        if ((to=fopen("to","w"))!=NULL) {
            while((n=fread(line, sizeof(char), 1, from))>0) fwrite(line, sizeof(char), 1, to); 
            //! 1 in fread/fwrite means number of elements, in while loop hence it kept adding
            
            printf("Done!\n");
            fclose(to);
        }
        else printf ("Unable to open to-file for writiting");
        fclose(from);
    }
    else printf("Unable to open from-file for writing");
}