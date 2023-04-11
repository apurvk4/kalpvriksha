/*
Write a program in C to input a string and print it.
*/

#include <stdio.h>

int main()
{
    printf("Enter a string : ");
    char s[100];
    scanf("%[^\n]%*c", s);
    printf("Entered String is : %s \n", s);
    return 0;
}