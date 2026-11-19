#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : struprx
//  Description   : Converts all lowercase characters in a string to uppercase
//  Input         : Character Pointer (String)
//  Output        : None
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 19/11/2026
//
////////////////////////////////////////////////////////////////////////////////

void struprx(char *str)
{
    // Filter to handle NULL pointer
    if(NULL == str)
    {
        return;
    }

    // Traverse the string until the null terminator is reached
    while(*str != '\0')
    {
        // Check if the current character is lowercase ('a' to 'z')
        if((*str >= 'a') && (*str <= 'z'))
        {
            // Convert lowercase to uppercase using ASCII difference (32)
            *str = *str - 32;
        }
        str++;
    }
}

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : main
//  Description   : Entry point function to accept string and display uppercase output
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

    struprx(arr);

    printf("Modified string is : %s\n", arr);

    return EXIT_SUCCESS;
}