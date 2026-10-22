#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Print given number of * on screen (using decrement)
//  Input         : Integer 
//  Output        : None
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 22/10/2026
//
/////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    while( iNo > 0)
    {
        printf(" * ");
        iNo--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}