/*
* Code to perform different spring furncitons in spring library.
* Run command: gcc StringLibrary.c && ./a.out
* Output: strcpy:
*         Before: s1 = Hello
*         After: s1 = Bye
*         
*         strcat:
*         Before: s1 = Hello
*         After: s1 = HelloBye
*         
*         strlen:
*         Length: s1 = 5
*         
*         strcmp:
*         Before: 0
*         After: -29
*         
*         strchr:
*         llo
*         
*         strstr:
*         ello
*         
*/

#include <stdio.h>
#include <string.h>

void StrCpy(char *s1, char *s2) {  //! Copy and replace
    printf("strcpy:\n");
    printf("Before: s1 = %s\n", s1);
    strcpy(s1,s2);
    printf("After: s1 = %s\n", s1);
    printf("\n");
}

void StrCat(char *s1, char *s2) { //! Concatenate string
    printf("strcat:\n");
    printf("Before: s1 = %s\n", s1);
    strcat(s1,s2);
    printf("After: s1 = %s\n", s1);
    printf("\n");
}

void StrLen(char *s1) { //! Calculate length
    printf("strlen:\n");
    printf("Length: s1 = %ld\n", strlen(s1));
    printf("\n");
}

void StrCmp(char *s1, char *s2) { //! Compare & return 0 if s1=s2 | +1 if s2>s1 | -1 if s2<s1
    printf("strcmp:\n");
    printf("Before: %d\n", strcmp(s1,s2));
    strcat(s1,s2);
    printf("After: %d\n", strcmp(s1,s2));
    printf("\n");
}

void StrChr(char *s1, char c) { //! Return 1st occurence of char c
    printf("strchr:\n");
    printf("%s\n", strchr(s1,c));
    printf("\n");
}

void StrStr(char *s1, char *s2) { //! Return first occurence of string
    printf("strstr:\n");
    printf("%s\n", strstr(s1,s2));
    printf("\n");
}

int main() { //! Scoping is used to for redefinition

    {
        char s1[] = "Hello";
        char s2[] = "Bye";
        StrCpy(s1,s2);
    }

    {
        char s1[10] = "Hello"; //! Array size is VERY IMPORTANT during strCat
        char s2[] = "Bye";
        StrCat(s1,s2);
    }

    {
        char s1[] = "Hello";
        StrLen(s1);
    }

    {
        char s1[] = "Hello";
        char s2[] = "Hello";
        StrCmp(s1,s2);
    }

    {
        char s1[] = "Hello";
        char c = 'l';
        StrChr(s1,c);
    }

    {
        char s1[] = "Hello";
        char s2[] = "el";
        StrStr(s1,s2);
    }

}