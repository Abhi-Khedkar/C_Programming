#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Displays ASCII value of a character in decimal, octal, and hex
//  Input         : Character
//  Output        : None
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 19/11/2026
//
////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    printf("Decimal\t\t: %d\n", ch);
    printf("Octal\t\t: 0%o\n", ch);
    printf("Hexadecimal\t: 0X%X\n", ch);
}

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : main
//  Description   : Entry point function to accept character and print ASCII formats
//  Input         : None
//  Output        : Integer (Exit Status)
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 19/11/2026
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter the character : \n");
    scanf(" %c", &cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}