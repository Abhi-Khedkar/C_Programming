//    Output  :   A to Z with ASCII values in decimal, octal and hexadecimal

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iCnt = 0;

    for(iCnt = 'A'; iCnt <= 'Z'; iCnt++)
    {
        printf("%d\t%o\t%x\t%c\n",iCnt,iCnt,iCnt,iCnt);
    }

    return EXIT_SUCCESS;
}