#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Difference
//  Description   : Returns difference between small and capital character frequencies
//  Input         : Character Pointer (String)
//  Output        : Integer (Small count - Capital count)
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 19/11/2026
//
////////////////////////////////////////////////////////////////////////////////

int Difference(char *str)
{
    int iSmallCnt = 0;
    int iCapCnt = 0;

    // Filter to handle NULL pointer
    if(NULL == str)
    {
        return -1;
    }

    // Count small and capital characters in a single pass
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iSmallCnt++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCapCnt++;
        }
        str++;
    }

    return (iSmallCnt - iCapCnt);
}

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : main
//  Description   : Entry point function to display small vs capital count difference
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

    iRet = Difference(arr);

    printf("Difference is : %d\n", iRet);

    return EXIT_SUCCESS;
}