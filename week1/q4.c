/*
Write a program in C to print individual characters of a string in reverse order.
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
    while (i >= 0)
    {
        printf("%c ", s[i]);
        i--;
    }
    printf("\n");
    return 0;
}