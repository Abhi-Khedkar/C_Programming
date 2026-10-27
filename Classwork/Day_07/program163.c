#include<stdio.h>
#include<stdlib.h>

void DisplayEvenDigits(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iNo % 2) == 0)
        {
            printf("%d\n",iDigit);
        }
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayEvenDigits(iValue);

    return EXIT_SUCCESS;
}