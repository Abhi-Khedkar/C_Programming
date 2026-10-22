#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Print "Hello" if number is less than 10, otherwise "Demo"
//  Input         : Integer 
//  Output        : None
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 22/10/2026
//
/////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number  : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}