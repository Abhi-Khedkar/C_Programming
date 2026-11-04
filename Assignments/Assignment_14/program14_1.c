#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : MultFact
//  Description   : Accepts number from user and
//                  returns multiplication of its factors.
//  Input         : Integer
//  Output        : Integer
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 04/11/2026
//
////////////////////////////////////////////////////////////////////////////////

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iMult = iMult * iCnt;
        }
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}