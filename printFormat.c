/*
* Code to print different formats
* Run command: gcc printFormat.c && ./a.out
* Output: '     123'
*         '00000123'
*         '   6.667'
*         '6.667   '
*         'abc     '
*/

#include <stdio.h>

int main (int argc, char **argv) {
    printf("'%8d'\n",123); 
    printf("'%08d'\n",123); 
    printf("'%8.3f'\n",20.0/3.0);
    printf("'%-8.3f'\n",20.0/3.0);
    printf("'%-8s'\n","abc"); 
}