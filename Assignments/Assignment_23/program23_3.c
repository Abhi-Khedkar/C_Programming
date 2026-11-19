#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : strtogglex
//  Description   : Toggles the case of each alphabet character in a string
//  Input         : Character Pointer (String)
//  Output        : None
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 19/11/2026
//
////////////////////////////////////////////////////////////////////////////////

void strtogglex(char *str)
{
    // Filter to handle NULL pointer
    if(NULL == str)
    {
        return;
    }

    // Traverse the string until the null terminator is reached
    while(*str != '\0')
    {
        // Convert uppercase character to lowercase
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        // Convert lowercase character to uppercase
        else if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
}

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : main
//  Description   : Entry point function to accept string and display toggled output
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

    strtogglex(arr);

    printf("Modified string is : %s\n", arr);

    return EXIT_SUCCESS;
}