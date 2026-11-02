#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FhtoCs
//  Description   : Convert temperature from Fahrenheit to Celsius
//  Input         : Float
//  Output        : Double
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 02/11/2026
//
//////////////////////////////////////////////////////////////////////////////////

double FhtoCs(float fTemp)
{
    double dCelsius = 0.0;

    // Use floating-point division (5.0 / 9.0) to prevent integer division resulting in 0
    dCelsius = ((double)fTemp - 32.0) * (5.0 / 9.0);

    return dCelsius;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit : ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius is %lf\n", dRet);

    return 0;
}