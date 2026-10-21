#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

/////////////////////////////////////////////////////////////
//
//  Function Name : Check
//  Description   : Check if a number is divisible by 5
//  Input         : Integer
//  Output        : Boolean
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 22/10/2026
//
/////////////////////////////////////////////////////////////

BOOL Check( int iNo)
{
    if(( iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE ;
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
    BOOL bRet = FALSE;

    printf("Enter number");
    scanf("%d" ,&iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }

    return 0;
}