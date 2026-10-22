#include<stdio.h>

////////////////////////////////////////////////////
//
//  Function Name : DisplayFactor
//  Description   : Print factors of that number
//  Input         : Integer
//  Output        : None
//  Author        : Abhishek Khedkar
//  Date          : 22/10/2026
//
////////////////////////////////////////////////////

void DisplayFactor(int iNo)
{
    int i = 0;
    
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
   
    for(i = 1; i <= (iNo / 2); i++)
    {
        if(iNo % i == 0)
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
    
    DisplayFactor(iValue);
    
    return 0;
}