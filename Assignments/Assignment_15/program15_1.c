#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : main
//  Description   : Accepts full name from user and prints that name.
//  Input         : None
//  Output        : Integer
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 04/11/2026
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cName[30];

    printf("Please enter full name : \n");
    scanf("%[^'\n']s", cName);

    printf("Your name is %s\n", cName);

    return EXIT_SUCCESS;
}