#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayDigit
//  Description   : Displays only numeric digit characters present in a string
//  Input         : Character Pointer (String)
//  Output        : None
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 19/11/2026
//
////////////////////////////////////////////////////////////////////////////////

void DisplayDigit(char *str)
{
    // Filter to handle NULL pointer
    if(NULL == str)
    {
        return;
    }

    // Traverse the string until the null terminator is reached
    while(*str != '\0')
    {
        // Check if the current character is a digit ('0' to '9')
        if((*str >= '0') && (*str <= '9'))
        {
            printf("%c", *str);
        }
        str++;
    }
    printf("\n");
}

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : main
//  Description   : Entry point function to accept string and print extracted digits
//  Input         : None
//  Output        : Integer (Exit Status)
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 19/11/2026
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^\n]s", arr);

    DisplayDigit(arr);

    return EXIT_SUCCESS;
}