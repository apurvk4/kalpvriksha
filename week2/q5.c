/**
 * @file q5.c
 * @author apurv kumar
 * @brief Write a program in C to find the maximum number of characters in a string.
 * @version 0.1
 * @date 2023-04-18
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>
#include <limits.h>
// #include
int main()
{
    printf("Enter a string : ");
    char s[100];
    scanf("%[^\n]%*c", s);
    int map[512] = {0};
    for (int i = 0; s[i] != '\0'; i++)
    {
        map[s[i]]++;
    }
    int maxval = 0;
    for (int i = 0; i < 512; i++)
    {
        if (map[i] > map[maxval])
        {
            maxval = i;
        }
    }
    char ch = maxval;
    printf("maximum occuring character is : %c\n", ch);
    return 0;
}