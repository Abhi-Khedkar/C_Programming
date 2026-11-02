#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Accept number from user and display pattern (* followed by #)
//  Input         : Integer
//  Output        : None
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 02/11/2026
//
//////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    // Updater for negative input
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Print '*' iNo times
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }

    // Print '#' iNo times
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t");
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}