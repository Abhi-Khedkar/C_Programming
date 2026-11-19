#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayASCII
//  Description   : Displays ASCII table with symbol, decimal, hex, and octal (0-255)
//  Input         : None
//  Output        : None
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 19/11/2026
//
////////////////////////////////////////////////////////////////////////////////

void DisplayASCII()
{
    int iCnt = 0;

    printf("--------------------------------------------------\n");
    printf("Symbol\t\tDecimal\t\tHex\t\tOctal\n");
    printf("--------------------------------------------------\n");

    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        // Print '--' for non-printable control characters so table formatting stays aligned
        if((iCnt < 32) || (iCnt == 127))
        {
            printf("--\t\t%d\t\t0x%X\t\t0%o\n", iCnt, iCnt, iCnt);
        }
        else
        {
            printf("%c\t\t%d\t\t0x%X\t\t0%o\n", iCnt, iCnt, iCnt, iCnt);
        }
    }
}

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : main
//  Description   : Entry point function to display complete ASCII table
//  Input         : None
//  Output        : Integer (Exit Status)
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 19/11/2026
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    DisplayASCII();

    return EXIT_SUCCESS;
}