#include<stdio.h>
#include<stdlib.h>

void CountFrequencyX(char *str)
{
    int iCountSmall = 0, iCountCapital = 0, iCountDigits = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCountSmall++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            iCountCapital++;
        }
        else   // Issue
        {
            iCountDigits++;
        }
        str++;
    }

    printf("Number of Capital letters : %d\n",iCountCapital);
    printf("Number of Small letters : %d\n",iCountSmall);
    printf("Number of Digits : %d\n",iCountDigits);
}

int main()
{
    char Arr[100] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    CountFrequencyX(Arr);

    return EXIT_SUCCESS;
}