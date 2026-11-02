#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Number
//  Description   : Categorize number as Small (<50), Medium (50-100), or Large (>100)
//  Input         : Integer
//  Output        : None
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 02/11/2026
//
//////////////////////////////////////////////////////////////////////////////////

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small\n");
    }
    else if((iNo >= 50) && (iNo <= 100))
    {
        printf("Medium\n");
    }
    else
    {
        printf("Large\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Number(iValue);

    return 0;
}