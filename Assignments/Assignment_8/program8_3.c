#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Factorial
//  Description   : Calculate factorial of given number
//  Input         : Integer
//  Output        : Integer
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 02/11/2026
//
//////////////////////////////////////////////////////////////////////////////////

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    // Updater for negative input
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d\n", iRet);

    return 0;
}