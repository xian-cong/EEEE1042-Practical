/*
* Code to showcase getc & putc functions.
* Run command: gcc GetcPutc.c && ./a.out
* Output: Done!
*/

#include <stdio.h>

int main() {
    FILE *from, *to;
    char c;
    if ((from = fopen("from", "r"))!=NULL) {
        if ((to = fopen("to", "w"))!=NULL) {
            while ((c=getc(from))!=EOF) putc(c, to);
            fclose(to);
            printf("Done!\n");
        }
        else printf("Unable to open 'to' file for writing.\n");
        fclose(from);
    }
    else printf("Unable to open 'from' file for reading.\n");
}