#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkSpecial
//  Description   : Checks whether character is one of (!, @, #, $, %, ^, &, *)
//  Input         : Character
//  Output        : BOOL (TRUE if special symbol, FALSE otherwise)
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 19/11/2026
//
////////////////////////////////////////////////////////////////////////////////

BOOL ChkSpecial(char ch)
{
    if((ch == '!') || (ch == '@') || (ch == '#') || (ch == '$') ||
       (ch == '%') || (ch == '^') || (ch == '&') || (ch == '*'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : main
//  Description   : Entry point function to check if character is a special symbol
//  Input         : None
//  Output        : Integer (Exit Status)
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 19/11/2026
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character : \n");
    scanf(" %c", &cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is special Character\n");
    }
    else
    {
        printf("It is not a special Character\n");
    }

    return EXIT_SUCCESS;
}