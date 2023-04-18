/**
 * @file q2.c
 * @author apurv kumar
 * @brief Write a program in C to count the total number of alphabets, digits and special characters in a string.
 * @version 0.1
 * @date 2023-04-18
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    printf("Enter a sentence  : \n");
    char s[100];
    scanf("%[^\n]%*c", s);
    int alpha = 0;
    int digit = 0;
    int special = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (isalpha(s[i]) != 0)
        {
            alpha++;
        }
        else if (isdigit(s[i]) != 0)
        {
            digit++;
        }
        else
        {
            special++;
        }
    }
    printf("digits : %d\nalphabets : %d\nspecial characters : %d \n", digit, alpha, special);
    return 0;
}