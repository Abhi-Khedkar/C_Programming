// 121  -> 121
// 12321  -> 12321

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPallindrome(int iNo)
{
    int iDigit = 0, iRev = 0, iTemp = 0;

    iTemp = iNo;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }

    if(iRev == iTemp)  //  ISSUE Solved
    {
        return true;
    }
    else
    {
        return false;
    }

    return iRev;
}

int main()
{
    int iValue = 0;
    bool bRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckPallindrome(iValue);

    if(bRet == true)
    {
        printf("number is a Pallindrome");
    }
    else
    {
        printf("number is not a Pallindrome");
    }

    return EXIT_SUCCESS;
}