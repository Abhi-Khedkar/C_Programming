#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Reverse
//  Description   : Displays a string in reverse order without modifying original array
//  Input         : Character Pointer (String)
//  Output        : None
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 19/11/2026
//
////////////////////////////////////////////////////////////////////////////////

void Reverse(char *str)
{
    char *pEnd = NULL;

    // Filter to handle NULL pointer
    if(NULL == str)
    {
        return;
    }

    pEnd = str;

    // Move pEnd to the last character before null terminator
    while(*pEnd != '\0')
    {
        pEnd++;
    }
    pEnd--;

    // Traverse backward from last character to starting address
    while(pEnd >= str)
    {
        printf("%c", *pEnd);
        pEnd--;
    }
    printf("\n");
}

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : main
//  Description   : Entry point function to accept string and print it in reverse
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

    Reverse(arr);

    return EXIT_SUCCESS;
}