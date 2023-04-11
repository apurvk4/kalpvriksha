/*
Write a program in C to count the total number of words in a string.
*/
#include <stdio.h>
#include <string.h>
int main()
{
    printf("enter a sentence \n");
    char s[100];
    scanf("%[^\n]%*c", s);
    char *delm = " ";
    char *token = strtok(s, delm);
    int count = 0;
    while (token != NULL)
    {
        count++;
        token = strtok(NULL, delm);
    }
    printf("Total number of words in the string is : %d\n", count);
    return 0;
}