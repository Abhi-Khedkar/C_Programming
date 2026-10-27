// Input : 6457   -> 22   -> 5.5
// Input : 45     -> 9    -> 4.5

#include<stdio.h>
#include<stdlib.h>

float AverageDigits(int iNo)
{
    int iSum = 0, iDigit = 0, iCount = 0;
    float fAvg = 0.0f;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iCount++;
        iNo = iNo / 10;
    }

    //  Temprory TypeCsting
    fAvg = (float)iSum / (float)iCount;

    return fAvg;
}

int main()
{
    int iValue = 0;

    float fRet = 0.0f;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    fRet = AverageDigits(iValue);

    printf("Number of Digit : %f",fRet);

    return EXIT_SUCCESS;
}