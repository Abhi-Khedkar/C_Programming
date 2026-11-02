#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DollarToINR
//  Description   : Convert USD to Indian Rupees (1 USD = 70 INR)
//  Input         : Integer
//  Output        : Integer
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 02/11/2026
//
//////////////////////////////////////////////////////////////////////////////////

int DollarToINR(int iNo)
{
    int iINR = 0;

    // Updater for negative input if needed
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iINR = iNo * 70;

    return iINR;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD : ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d\n", iRet);

    return 0;
}