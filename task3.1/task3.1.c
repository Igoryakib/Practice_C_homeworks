#define _CRT_SECURE_NO_WARNINGS // functions strncat, strncpy doesn't work in Visual Studio without this crutch
#include <stdio.h>
#include <string.h>
#define MAXLINE 10


void main(void)
{

    // The demo showing strncpy fuction in case of insufficent destination buf size. Got character array withot '\0' and garbage in buf
    char const string1[] = "Hello world";
    char string2[MAXLINE];
    printf("%s \n", strncpy(string2, string1, 10));

    for (int i = 0; string2[i] != '\0'; i++) {
        printf("%d \n", i);
    }


    // The demo showing strncat fuction in case of insufficent destination buf size. Got error: Stack around the variable 'string3' was corrupted.
    char const string3[MAXLINE] = "";
    printf("%s \n", strncat(string3, string1, 10));

    for (int i = 0; string3[i] != '\0'; i++) {
        printf("%d \n", i);
    }
}
