/**********************************************************
 * 15.  
Write a program to check whether the given
character is vowel or consonant.
**********************************************************/

#include <stdio.h>
#include <ctype.h>

void main()
{
    char a, b;

    printf("Enter the English Alphabet:");
AGAIN:
    scanf("%c", &a);

    if (isalpha(a) != 0)
    {
        b = tolower(a);

        switch (b)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a VOWEL", a);
            break;

        default:
            printf("%c is a CONSONENT", a);
        }
    }

    else
    {
        printf("Your input is INVALID!!!!\n\nEnter the valid English Alphabet:");
        goto AGAIN;
    }
}