#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Display first number in second number of times
//  Input         : Integer, Integer 
//  Output        : None
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 22/10/2026
//
//////////////////////////////////////////////////////////////////

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    if (iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }

    for(iCnt = 0; iCnt < iFrequency; iCnt++)
    {
        printf("%d\t",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    printf("Enter frequency : ");
    scanf("%d",&iCount);

    Display(iValue, iCount);

    return 0;
}