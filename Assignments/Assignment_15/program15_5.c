#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Percentage
//  Description   : Accepts total marks and obtained marks from user
//                  and calculates percentage.
//  Input         : Integer, Integer
//  Output        : Float
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 04/11/2026
//
////////////////////////////////////////////////////////////////////////////////

float Percentage(int iTotal, int iObtained)
{
    float fAns = 0.0f;

    if((iTotal <= 0) || (iObtained < 0) || (iObtained > iTotal))
    {
        printf("Invalid marks entered\n");
        return 0.0f;
    }

    fAns = ((float)iObtained / (float)iTotal) * 100.0f;

    return fAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total marks : ");
    scanf("%d", &iValue1);

    printf("Please enter obtained marks : ");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Percentage is %.1f%%\n", fRet);

    return EXIT_SUCCESS;
}