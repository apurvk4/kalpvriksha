/**
 * @file q1.c
 * @author apurvkumar
 * @brief Write a program in C to compare two strings without using string library functions
 * @version 0.1
 * @date 2023-04-18
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>
#include <stdbool.h>
int main()
{
    printf("enter a string : ");
    char s[100];
    scanf("%[^\n]%*c", s);
    char s1[100];
    printf("enter a string : ");
    scanf("%[^\n]%*c", s1);
    int i = 0;
    int j = 0;
    bool res = true;
    while (s[i] != '\0' && s1[j] != '\0')
    {
        if (s[i] != s1[j])
        {
            res = false;
            break;
        }
        i++;
        j++;
    }
    if (res && i == j)
    {
        printf("strings are equal \n");
    }
    else
    {
        printf("strings are not equal \n");
    }
    return 0;
}