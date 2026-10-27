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

float AverageDigits(int iTotal, int iFrequency)
{
    float fAns = 0.0f;

    fAns = (float)iTotal / (float)iFrequency;

    return fAns;
}

int main()
{
    int iValue = 0, iSum = 0, iCount = 0;
    float fAvg = 0.0f;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iSum = SumDigits(iValue);
    iCount = CountDigits(iValue);

    fAvg = AverageDigits(iSum,iCount);

    printf("Number of Digit : %d\n",iCount);
    printf("Sumation of Digit : %d\n",iSum);
    printf("Average of Digit : %.2f\n",fAvg);  // %.2f print only 0.00 digits

    return EXIT_SUCCESS;
}