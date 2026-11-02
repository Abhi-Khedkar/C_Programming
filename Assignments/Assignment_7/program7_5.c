#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : MultipleDisplay
//  Description   : Accept N and print first 5 multiples of N
//  Input         : Integer
//  Output        : None
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 02/11/2026
//
//////////////////////////////////////////////////////////////////////////////////

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\t", (iNo * iCnt));
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return 0;
}