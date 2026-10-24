#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;

    for(iCnt = 2; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            return false;  // not write return in loop
        }
    }
    
    return true;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet)
    {
        printf("It is a Prime number");
    }
    else
    {
        printf("It is not a Prime number");
    }

    return EXIT_SUCCESS;
}