#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Multiply
//  Description   : Accepts three numbers and returns their multiplication.
//  Input         : Integer, Integer, Integer
//  Output        : Integer
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 04/11/2026
//
////////////////////////////////////////////////////////////////////////////////

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMult = 1;

    // If all three numbers are zero, then Multiplication will be zero, so return 0
    if((iNo1 == 0) && (iNo2 == 0) && (iNo3 == 0))
    {
        return 0;
    }

    if(iNo1 != 0)
    {
        iMult = iMult * iNo1;
    }
    if(iNo2 != 0)
    {
        iMult = iMult * iNo2;
    }
    if(iNo3 != 0)
    {
        iMult = iMult * iNo3;
    }

    return iMult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Please enter three numbers : ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}