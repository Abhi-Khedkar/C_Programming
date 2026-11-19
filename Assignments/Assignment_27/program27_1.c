#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountCapital
//  Description   : Counts total uppercase alphabet characters in a string
//  Input         : Character Pointer (String)
//  Output        : Integer (Count of capital letters)
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 19/11/2026
//
////////////////////////////////////////////////////////////////////////////////

int CountCapital(char *str)
{
    int iCnt = 0;

    // Filter to handle NULL pointer
    if(NULL == str)
    {
        return -1;
    }

    // Traverse string and count characters between 'A' and 'Z'
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
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
//  Description   : Entry point function to display count of capital characters
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

    iRet = CountCapital(arr);

    printf("Number of capital characters : %d\n", iRet);

    return EXIT_SUCCESS;
}