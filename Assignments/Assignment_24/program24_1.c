#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkChar
//  Description   : Checks whether a given character is present in the string
//  Input         : Character Pointer (String), Character
//  Output        : BOOL (TRUE if found, FALSE otherwise)
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 19/11/2026
//
////////////////////////////////////////////////////////////////////////////////

BOOL ChkChar(char *str, char ch)
{
    BOOL bFlag = FALSE;

    // Filter to handle NULL pointer
    if(NULL == str)
    {
        return FALSE;
    }

    // Traverse string to search for target character
    while(*str != '\0')
    {
        if(*str == ch)
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
//  Description   : Entry point function to accept string and character to search
//  Input         : None
//  Output        : Integer (Exit Status)
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 19/11/2026
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[50] = {'\0'};
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter string : \n");
    scanf("%[^\n]s", arr);

    printf("Enter the character : \n");
    scanf(" %c", &cValue);

    bRet = ChkChar(arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character not found\n");
    }

    return EXIT_SUCCESS;
}