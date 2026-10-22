#include<stdio.h>

/////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Display numbers from 5 to 1
//  Input         : None
//  Output        : None
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 22/10/2026
//
/////////////////////////////////////////////////////////////

int Display()
{
    int i = 0;
    i = 5;

    while( i >= 1 )
    {
        printf("%d ",i);
        i--;
    }
}

/////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
/////////////////////////////////////////////////////////////

int main()
{
    Display();
    return 0;
}