// 48967
/*
    Number of all Digit
*/

#include<stdio.h>
#include<stdlib.h>

int CountDigits(int iNo)
{
    int iCount = 0;
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        iCount++;
        
        iNo = iNo / 10;
    }

    return iCount;
}

int main()
{
    int iValue = 0;

    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);

    printf("Number of Digit : %d",iRet);

    return EXIT_SUCCESS;
}