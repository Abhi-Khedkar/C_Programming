#include<stdio.h>

/////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Accept number from user and print 
//                  that number of $ and * on screen
//  Input         : Integer
//  Output        : None
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 02/11/2026
//
/////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0;

    // Updater for negative input
    if(iNo < 0)
    {
        iNo = -iNo;
    }
   
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t*\t");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}