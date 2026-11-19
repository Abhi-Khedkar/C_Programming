#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkVowel
//  Description   : Checks whether the given string contains at least one vowel
//  Input         : Character Pointer (String)
//  Output        : BOOL (TRUE if vowel exists, FALSE otherwise)
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 19/11/2026
//
////////////////////////////////////////////////////////////////////////////////

BOOL ChkVowel(char *str)
{
    BOOL bFlag = FALSE;

    // Filter to handle NULL pointer
    if(NULL == str)
    {
        return FALSE;
    }

    // Traverse string until a vowel is encountered
    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') ||
           (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
        {
            bFlag = TRUE;
            break;
        }
        str++;
    }

    return bFlag;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : main
//  Description   : Entry point function to check for vowels in input string
//  Input         : None
//  Output        : Integer (Exit Status)
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 19/11/2026
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[50] = {'\0'};
    BOOL bRet = FALSE;

    printf("Enter string : \n");
    scanf("%[^\n]s", arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("Contains Vowel\n");
    }
    else
    {
        printf("There is no Vowel\n");
    }

    return EXIT_SUCCESS;
}