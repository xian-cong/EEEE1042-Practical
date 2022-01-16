/*
* Code to showcase fgets & fputs functions.
* Run command: gcc FgetsFputs.c && ./a.out
* Output: Done!
*/

#include <stdio.h>

int main() {
    FILE *from, *to;
    char line[10];
    if ((from = fopen("from", "r"))!=NULL) {
        if ((to = fopen("to", "w"))!=NULL) {
            while ((fgets(line, 10, from))!=NULL) fputs(line, to);
            fclose(to);
            printf("Done!\n");
        }
        else printf("Unable to open 'to' file for writing.\n");
        fclose(from);
    }
    else printf("Unable to open 'from' file for reading.\n");
}