#include<stdio.h>
#include<stdlib.h>

int CountDigits(int iNo)
{
    int iCount = 0;
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iCount++;      
        iNo = iNo / 10;
    }

    return iCount;
}

int SumDigits(int iNo)
{
    int iSum = 0;
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;      
        iNo = iNo / 10;
    }

    return iSum;
}

float AverageDigits(int iNo)
{
    int iSum = 0, iDigit = 0, iCount = 0;
    float fAvg = 0.0f;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iSum = SumDigits(iNo);
    iCount = CountDigits(iNo);

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

    printf("Average of Digit : %.2f",fRet);  // %.2f print only 0.00 digits

    return EXIT_SUCCESS;
}