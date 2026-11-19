#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : StrRevX
//  Description   : Reverses a string in place using two pointers
//  Input         : Character Pointer (String)
//  Output        : None
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 19/11/2026
//
////////////////////////////////////////////////////////////////////////////////

void StrRevX(char *str)
{
    char *pStart = NULL;
    char *pEnd = NULL;
    char cTemp = '\0';

    // Filter to handle NULL pointer
    if(NULL == str)
    {
        return;
    }

    pStart = str;
    pEnd = str;

    // Move pEnd to the last valid character before null terminator
    while(*pEnd != '\0')
    {
        pEnd++;
    }
    pEnd--;

    // Swap characters from both ends moving toward the center
    while(pStart < pEnd)
    {
        cTemp = *pStart;
        *pStart = *pEnd;
        *pEnd = cTemp;

        pStart++;
        pEnd--;
    }
}

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : main
//  Description   : Entry point function to accept string and display reversed string
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

    StrRevX(arr);

    printf("Modified string is : %s\n", arr);

    return EXIT_SUCCESS;
}