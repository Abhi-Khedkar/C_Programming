#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Prints sequence up to 'Z' for uppercase or down to 'a' for lowercase
//  Input         : Character
//  Output        : None
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 19/11/2026
//
////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    char cCnt = '\0';

    if((ch >= 'A') && (ch <= 'Z'))
    {
        for(cCnt = ch; cCnt <= 'Z'; cCnt++)
        {
            printf("%c\t", cCnt);
        }
        printf("\n");
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        for(cCnt = ch; cCnt >= 'a'; cCnt--)
        {
            printf("%c\t", cCnt);
        }
        printf("\n");
    }
    else
    {
        return;
    }
}

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : main
//  Description   : Entry point function to display character range based on case
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