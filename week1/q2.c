/*
Write a program in C to find the length of a string without using library functions
*/

#include <stdio.h>

int main()
{
    printf("enter a string : ");
    char s[100];
    scanf("%[^\n]%*c", s);
    int i = 0;
    while (i < 100 && s[i] != '\0')
    {
        i++;
    }
    printf("Size of string is : %d\n", i);
    return 0;
}