#include<stdio.h>

#define SQFEET_TO_SQMETER 0.0929

//////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : SquareMeter
//  Description   : Convert area from square feet to square meter
//  Input         : Integer
//  Output        : Double
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 02/11/2026
//
//////////////////////////////////////////////////////////////////////////////////

double SquareMeter(int iValue)
{
    double dMeter = 0.0;

    // Updater for negative input
    if(iValue < 0)
    {
        iValue = -iValue;
    }

    dMeter = (double)iValue * SQFEET_TO_SQMETER;

    return dMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet : ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is %lf\n", dRet);

    return 0;
}