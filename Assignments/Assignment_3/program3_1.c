#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : PrintEven
//  Description   : Print that number of even numbers on screen
//  Input         : Integer 
//  Output        : None
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 22/10/2026
//
/////////////////////////////////////////////////////////////////

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }

    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d ", iCnt * 2); 
    }
    printf("\n");
}

int main()
{
    int iValue =0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}