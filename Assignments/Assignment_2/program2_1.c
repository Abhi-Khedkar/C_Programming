#include<stdio.h>

/////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Print given number of * on screen
//  Input         : Integer 
//  Output        : None
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 22/10/2026
//
/////////////////////////////////////////////////////////////

void Display(int iNo)  
{
    int iCnt = 0;  
   
    while( iCnt < iNo )
    {
        printf(" * ");
        iCnt++;
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