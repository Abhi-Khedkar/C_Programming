#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : NonFact
//  Description   : Accepts number from user and displays all its non factors.
//  Input         : Integer
//  Output        : None
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 04/11/2026
//
////////////////////////////////////////////////////////////////////////////////

void NonFact(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    NonFact(iValue);

    return EXIT_SUCCESS;
}