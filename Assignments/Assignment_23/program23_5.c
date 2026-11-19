#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountWhite
//  Description   : Counts the total number of white space characters in a string
//  Input         : Character Pointer (String)
//  Output        : Integer (Count of white spaces)
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 19/11/2026
//
////////////////////////////////////////////////////////////////////////////////

int CountWhite(char *str)
{
    int iCnt = 0;

    // Filter to handle NULL pointer
    if(NULL == str)
    {
        return -1;
    }

    // Traverse the string until the null terminator is reached
    while(*str != '\0')
    {
        // Increment counter if current character is a space (' ')
        if(*str == ' ')
        {
            iCnt++;
        }
        str++;
    }

    return iCnt;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : main
//  Description   : Entry point function to accept string and display whitespace count
//  Input         : None
//  Output        : Integer (Exit Status)
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 19/11/2026
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[100] = {'\0'};
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^\n]s", arr);

    iRet = CountWhite(arr);

    printf("Number of white spaces : %d\n", iRet);

    return EXIT_SUCCESS;
}