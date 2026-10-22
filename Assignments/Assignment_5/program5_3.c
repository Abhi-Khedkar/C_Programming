#include <stdio.h>
#include <stdlib.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayGrade
//  Description   : Calculate and display grade based on marks
//  Input         : Float
//  Output        : None
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 22/10/2026
//
/////////////////////////////////////////////////////////////////////////

void DisplayGrade(float fMarks)
{
    if (fMarks < 0.0f || fMarks > 100.0f)
    {
        printf("Invalid Marks\n");
    }
    else if (fMarks >= 90.0f)
    {
        printf("Grade A\n");
    }
    else if (fMarks >= 75.0f)
    {
        printf("Grade B\n");
    }
    else if (fMarks >= 60.0f)
    {
        printf("Grade C\n");
    }
    else if (fMarks >= 40.0f)
    {
        printf("Grade D\n");
    }
    else
    {
        printf("Fail\n");
    }
}

int main()
{
    float fMarks = 0.0f;
    
    printf("Enter marks: ");
    scanf("%f", &fMarks);
    
    DisplayGrade(fMarks);
    
    return EXIT_SUCCESS;
}