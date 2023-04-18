/**
 * @file q4.c
 * @author apurv kumar
 * @brief  Write a program in C to count the total number of vowels or consonants in a string.
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
    printf("Enter a sentence : \n");
    char s[100];
    scanf("%[^\n]%*c", s);
    int vowel = 0;
    int consonants = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            vowel++;
        }
        else if (isalpha(s[i]))
        {
            consonants++;
        }
    }
    printf("vowels : %d\nconsonants : %d\n", vowel, consonants);
    return 0;
}