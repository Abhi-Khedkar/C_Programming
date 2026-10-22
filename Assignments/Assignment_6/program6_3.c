#include <stdio.h>
#include <stdlib.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : CalculateDiscount
//  Description   : Calculate payable amount after applying discount
//  Input         : Float
//  Output        : None
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 22/10/2026
//
/////////////////////////////////////////////////////////////////////////

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if (fAmount < 0.0f)
    {
        printf("Invalid Amount\n");
        return;
    }
    
    if (fAmount < 1000.0f)
    {
        fDiscount = 0.0f; // 0% discount
    }
    else if (fAmount >= 1000.0f && fAmount < 5000.0f)
    {
        fDiscount = fAmount * 0.10f; // 10% discount
    }
    else
    {
        fDiscount = fAmount * 0.20f; // 20% discount
    }

    fFinalAmount = fAmount - fDiscount;
    printf("Payable Amount = %.2f\n", fFinalAmount);
}

int main()
{
    float fAmount = 0.0f;
    
    printf("Enter purchase amount: ");
    scanf("%f", &fAmount);
    
    CalculateDiscount(fAmount);
    
    return EXIT_SUCCESS;
}