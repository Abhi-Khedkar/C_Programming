#include <stdio.h>
#include <stdlib.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckEvenOdd
//  Description   : Check whether a number is even or odd
//  Input         : Integer
//  Output        : None
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 22/10/2026
//
/////////////////////////////////////////////////////////////////////////

void CheckEvenOdd(int iValue)
{
    if (iValue % 2 == 0)
    {
        printf("Even Number\n");
    }
    else
    {
        printf("Odd Number\n");
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter a number: ");
    scanf("%d", &iValue);
    
    CheckEvenOdd(iValue);
    
    return EXIT_SUCCESS;
}