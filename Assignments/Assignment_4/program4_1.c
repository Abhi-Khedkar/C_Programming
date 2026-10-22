#include <stdio.h>
#include <stdlib.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckNumber
//  Description   : Check whether a number is positive, negative, or zero
//  Input         : Integer
//  Output        : None
//  Author        : Abhishek Khedkar
//  Date          : 22/10/2026
//
/////////////////////////////////////////////////////////////////////////

void CheckNumber(int iValue)
{
    if (iValue > 0)
    {
        printf("Positive Number\n");
    }
    else if (iValue < 0)
    {
        printf("Negative Number\n");
    }
    else
    {
        printf("Zero\n");
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter a number: ");
    scanf("%d", &iValue);
    
    CheckNumber(iValue);
    
    return EXIT_SUCCESS;
}