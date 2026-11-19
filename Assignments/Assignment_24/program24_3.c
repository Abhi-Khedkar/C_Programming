#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FirstChar
//  Description   : Returns the 0-based index of the first occurrence of a character
//  Input         : Character Pointer (String), Character
//  Output        : Integer (First index or -1 if not found)
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 19/11/2026
//
////////////////////////////////////////////////////////////////////////////////

int FirstChar(char *str, char ch)
{
    int iCnt = 0;
    int iPos = -1;

    // Filter to handle NULL pointer
    if(NULL == str)
    {
        return -1;
    }

    // Traverse string to find first matching index
    while(*str != '\0')
    {
        if(*str == ch)
        {
            iPos = iCnt;
            break;
        }
        iCnt++;
        str++;
    }

    return iPos;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : main
//  Description   : Entry point function to display first index of a character
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
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^\n]s", arr);

    printf("Enter the character : \n");
    scanf(" %c", &cValue);

    iRet = FirstChar(arr, cValue);

    printf("Character location is : %d\n", iRet);

    return EXIT_SUCCESS;
}