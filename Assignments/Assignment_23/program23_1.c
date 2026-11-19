#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : strlwrx
//  Description   : Converts all uppercase characters in a string to lowercase
//  Input         : Character Pointer (String)
//  Output        : None
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 19/11/2026
//
////////////////////////////////////////////////////////////////////////////////

void strlwrx(char *str)
{
    // Filter to handle NULL pointer
    if(NULL == str)
    {
        return;
    }

    // Traverse the string until the null terminator is reached
    while(*str != '\0')
    {
        // Check if the current character is uppercase ('A' to 'Z')
        if((*str >= 'A') && (*str <= 'Z'))
        {
            // Convert uppercase to lowercase using ASCII difference (32)
            *str = *str + 32;
        }
        str++;
    }
}

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : main
//  Description   : Entry point function to accept string and display lowercase output
//  Input         : None
//  Output        : Integer (Exit Status)
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 19/11/2026
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[20] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^\n]s", arr);

    strlwrx(arr);

    printf("Modified string is : %s\n", arr);

    return EXIT_SUCCESS;
}