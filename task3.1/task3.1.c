#define _CRT_SECURE_NO_WARNINGS // functions strncat, strncpy doesn't work in Visual Studio without this crutch
#include <stdio.h>
#include <string.h>
#define MAXLINE 25

void main(void)
{

    // The demo showing strncpy fuction in case of insufficent destination buf size. 
    char const string1[] = "Hello world Hello world";
    char string2[MAXLINE];
    string2[MAXLINE - 1] = '\0';

    printf("%s", strncpy(string2, string1, 10));

    for (int i = 0; string2[i] != '\0'; i++) {
        printf("%d \n", i);
    }
    // Got character array without '\0' and garbage in buf. So 'for' loop stop executed on '/0', which i put above in last position in array, instead of place where the copied string ends. 

    // The demo showing strncat fuction in case of insufficent destination buf size. Got error: Stack around the variable 'string3' was corrupted.
    char const string3[MAXLINE - 10] = {0};
    printf("%s \n", strncat(string3, string1, 12));

    for (int i = 0; string3[i] != '\0'; i++) {
        printf("%d \n", i);
    }
}
