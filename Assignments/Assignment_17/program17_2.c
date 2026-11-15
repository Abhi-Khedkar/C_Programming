#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Accepts number of rows and columns from user and displays
//                  even numbers in odd rows and odd numbers in even rows.
//  Input         : Integer, Integer
//  Output        : None
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 15/11/2026
//
////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iNo = 0;

    // Updater for negative input
    if(iRow < 0)
    {
        iRow = -iRow;
    }
    if(iCol < 0)
    {
        iCol = -iCol;
    }

    iRow = iRow + 1, iCol = iCol + 1;

    for(i = 1; i <= iRow; i++)
    {
        // Start with 2 for odd rows and 1 for even rows
        if((i % 2) != 0)
        {
            iNo = 2;
        }
        else
        {
            iNo = 1;
        }

        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t", iNo);
            iNo = iNo + 2;
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}