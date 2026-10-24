#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void CheckPrime(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    
    if(iSum == 1)
    {
        printf("It is Prime number");
    }
    else
    {
        printf("It is not a Prime number");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    CheckPrime(iValue);

    return EXIT_SUCCESS;
}