#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayEvenFactor
//  Description   : Print even factors of a given number
//  Input         : Integer
//  Output        : None
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 22/10/2026
//
/////////////////////////////////////////////////////////////////////////

void DisplayEvenFactor(int iNo)
{
    int i = 0;
    
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    
    for(i = 1; i <= (iNo / 2); i++)
    {
        if((iNo % i == 0) && (i % 2 == 0))
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d", &iValue);
    
    DisplayEvenFactor(iValue);
    
    return 0;
}