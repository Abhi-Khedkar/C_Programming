#include <stdio.h>
#include <stdlib.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckTriangle
//  Description   : Check whether three sides can form a valid triangle
//  Input         : Integer, Integer, Integer
//  Output        : None
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 22/10/2026
//
/////////////////////////////////////////////////////////////////////////

void CheckTriangle(int iSide1, int iSide2, int iSide3)
{
    // Check if any side is zero or negative
    if (iSide1 <= 0 || iSide2 <= 0 || iSide3 <= 0)
    {
        printf("Invalid Triangle\n");
        return;
    }

    // Sum of any two sides must be greater than the third side
    if ((iSide1 + iSide2 > iSide3) && 
        (iSide2 + iSide3 > iSide1) && 
        (iSide1 + iSide3 > iSide2))
    {
        printf("Valid Triangle\n");
    }
    else
    {
        printf("Invalid Triangle\n");
    }
}

int main()
{
    int iSide1 = 0, iSide2 = 0, iSide3 = 0;
    
    printf("Enter three sides: ");
    scanf("%d %d %d", &iSide1, &iSide2, &iSide3);
    
    CheckTriangle(iSide1, iSide2, iSide3);
    
    return EXIT_SUCCESS;
}