#include <stdio.h>
#include <stdlib.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckAdmission
//  Description   : Check admission eligibility based on marks and age
//  Input         : Float, Integer
//  Output        : None
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 22/10/2026
//
/////////////////////////////////////////////////////////////////////////

void CheckAdmission(float fMarks, int iAge)
{
    // Check for invalid inputs first
    if (iAge < 0 || fMarks < 0.0f || fMarks > 100.0f)
    {
        printf("Invalid Input\n");
    }
    // Check eligibility conditions
    else if (fMarks >= 60.0f && iAge >= 17)
    {
        printf("Eligible for Admission\n");
    }
    else
    {
        printf("Not Eligible\n");
    }
}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;
    
    printf("Enter marks and age: ");
    scanf("%f %d", &fMarks, &iAge);
    
    CheckAdmission(fMarks, iAge);
    
    return EXIT_SUCCESS;
}