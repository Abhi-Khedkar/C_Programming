#include<stdio.h>

/////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Display numbers from 1 to 5
//  Input         : None
//  Output        : None
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 22/10/2026
//
/////////////////////////////////////////////////////////////

int Display()
{
    int i = 0;
    int i = 5;

    while( i <= 5 )
    {
        printf("%d ",i);
        i++;
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