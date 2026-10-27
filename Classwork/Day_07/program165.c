// 48967
/*
    Odd : 7
    Even : 6
    Odd : 9
    Even : 8
    Even : 4
*/

#include<stdio.h>
#include<stdlib.h>

void DisplayOddDigits(int iNo)
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
            printf("Even : %d\n",iDigit);
        }
        else
        {
            printf("Odd : %d\n",iDigit);
        }
        
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayOddDigits(iValue);

    return EXIT_SUCCESS;
}