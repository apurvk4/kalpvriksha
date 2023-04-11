/*
Write a program in C to separate individual characters from a string.
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
        char ch = s[i];
        printf("%c ", ch);
        i++;
    }
    printf("\n");
    return 0;
}