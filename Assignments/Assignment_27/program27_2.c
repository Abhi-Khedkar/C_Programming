#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountSmall
//  Description   : Counts total lowercase alphabet characters in a string
//  Input         : Character Pointer (String)
//  Output        : Integer (Count of small letters)
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 19/11/2026
//
////////////////////////////////////////////////////////////////////////////////

int CountSmall(char *str)
{
    int iCnt = 0;

    // Filter to handle NULL pointer
    if(NULL == str)
    {
        return -1;
    }

    // Traverse string and count characters between 'a' and 'z'
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
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
//  Description   : Entry point function to display count of small characters
//  Input         : None
//  Output        : Integer (Exit Status)
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 19/11/2026
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^\n]s", arr);

    iRet = CountSmall(arr);

    printf("Number of small characters : %d\n", iRet);

    return EXIT_SUCCESS;
}