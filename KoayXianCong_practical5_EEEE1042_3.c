#include <stdio.h>
#include <string.h>

void strMani(char *outStr, char *str1, char *str2, int index) {
    strcpy(outStr, str1); //copy str1 to blank str3 (outputStr)
    strcpy(&outStr[index],str2); // copy str2 to str3(outputStr previously) with length index (i)
    strcpy(&outStr[2*index+1], &str1[index]); //copy str1 to str3(outputStr previously) with length 2*index+1
}

int main() {
    char str1[] = "0123456789", str2[] = "ABCDEFGHIJ", str3[100];
    
    int i;
    //create loop to increase the length of str
    for (i=0; i<strlen(str2); i++) {
        strMani(str3, str1, str2, i); 
        printf("%s\n", str3);
    }
    
}