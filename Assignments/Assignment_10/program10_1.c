#include<stdio.h>

#define PI 3.14

//////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CircleArea
//  Description   : Calculate area of circle from radius
//  Input         : Float
//  Output        : Double
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 02/11/2026
//
//////////////////////////////////////////////////////////////////////////////////

double CircleArea(float fRadius)
{
    double dArea = 0.0;

    dArea = PI * fRadius * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter radius : ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is %lf\n", dRet);

    return 0;
}