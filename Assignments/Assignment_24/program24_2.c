#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountChar
//  Description   : Counts the frequency of a specific character in a string
//  Input         : Character Pointer (String), Character
//  Output        : Integer (Frequency count)
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 19/11/2026
//
////////////////////////////////////////////////////////////////////////////////

int CountChar(char *str, char ch)
{
    int iCnt = 0;

    // Filter to handle NULL pointer
    if(NULL == str)
    {
        return -1;
    }

    // Traverse entire string and count matching occurrences
    while(*str != '\0')
    {
        if(*str == ch)
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
//  Description   : Entry point function to accept string and character and display frequency
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

    iRet = CountChar(arr, cValue);

    printf("Character frequency is : %d\n", iRet);

    return EXIT_SUCCESS;
}