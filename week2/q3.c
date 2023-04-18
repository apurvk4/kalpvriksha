/**
 * @file q3.c
 * @author apurv kumar
 * @brief  Write a program in C to copy one string to another string
 * @version 0.1
 * @date 2023-04-18
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>
#include <stdlib.h>
char *strcopy(char *s, int len)
{
    int l = 0;
    if (len == 0)
    {
        l++;
    }
    else if (s[len - 1] != '\0')
    {
        l++;
    }
    char *temp = (char *)malloc(sizeof(char) * (len + l));
    int i = 0;
    for (; i < len; i++)
    {
        temp[i] = s[i];
    }
    if (l > 0)
    {
        temp[i] = '\0';
    }
    return temp;
}
int main()
{
    printf("Enter a sentence : \n");
    char s[100];
    scanf("%[^\n]%*c", s);
    int l = 0;
    while (s[l] != '\0' && l < 100)
    {
        l++;
    }
    char *res = strcopy(s, l);
    printf("copied string is : \n");
    printf("%s\n", res);
    return 0;
}