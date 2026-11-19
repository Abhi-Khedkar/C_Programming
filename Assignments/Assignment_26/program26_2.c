#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Toggles case of an alphabet character or prints other characters as-is
//  Input         : Character
//  Output        : None
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 19/11/2026
//
////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        printf("%c\n", ch + 32);
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        printf("%c\n", ch - 32);
    }
    else
    {
        printf("%c\n", ch);
    }
}

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : main
//  Description   : Entry point function to accept character and display toggled output
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