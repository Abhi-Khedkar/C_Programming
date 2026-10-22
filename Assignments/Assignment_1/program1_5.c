#include<stdio.h>

/////////////////////////////////////////////////////////////
//
//  Function Name : Accept
//  Description   : Accept a number and display asterisks
//  Input         : Integer
//  Output        : None
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 22/10/2026
//
/////////////////////////////////////////////////////////////

void Accept(int iNo)
{
    int iCnt = 0;

    for( iCnt = 1 ; iCnt <= iNo ; iCnt++ )
    {
        printf("*");
    }
}

/////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
/////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);
    
    return 0;
} 