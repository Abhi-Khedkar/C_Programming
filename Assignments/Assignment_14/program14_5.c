#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FactDiff
//  Description   : Accepts number from user and returns difference between
//                  summation of all its factors and non factors.
//  Input         : Integer
//  Output        : Integer
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 04/11/2026
//
////////////////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iFactSum = 0;
    int iNonFactSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFactSum = iFactSum + iCnt;
        }
        else
        {
            iNonFactSum = iNonFactSum + iCnt;
        }
    }

    return (iFactSum - iNonFactSum);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}