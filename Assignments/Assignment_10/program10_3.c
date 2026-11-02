#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : KMtoMeter
//  Description   : Convert distance from kilometre to meter
//  Input         : Integer
//  Output        : Integer
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 02/11/2026
//
//////////////////////////////////////////////////////////////////////////////////

int KMtoMeter(int iNo)
{
    int iMeter = 0;

    // Updater for negative input
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iMeter = iNo * 1000;

    return iMeter;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance : ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meter is %d\n", iRet);

    return 0;
}