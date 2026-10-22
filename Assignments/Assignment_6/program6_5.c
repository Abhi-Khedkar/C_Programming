#include <stdio.h>
#include <stdlib.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : CalculateBonus
//  Description   : Calculate employee bonus based on salary and service years
//  Input         : Float, Integer
//  Output        : None
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 22/10/2026
//
/////////////////////////////////////////////////////////////////////////

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    // Validate inputs
    if (fSalary <= 0.0f || iYears < 0)
    {
        printf("Invalid Input\n");
        return;
    }

    // Calculate bonus based on completed years of service
    if (iYears > 10)
    {
        fBonus = fSalary * 0.15f;
    }
    else if (iYears >= 5 && iYears <= 10)
    {
        fBonus = fSalary * 0.10f;
    }
    else
    {
        fBonus = fSalary * 0.05f;
    }

    printf("Bonus = %.2f\n", fBonus);
}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;
    
    printf("Enter salary and years of service: ");
    scanf("%f %d", &fSalary, &iYears);
    
    CalculateBonus(fSalary, iYears);
    
    return EXIT_SUCCESS;
}