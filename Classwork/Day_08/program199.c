//    Output  :   A to Z with ASCII values in decimal, octal and hexadecimal

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char ch = '\0';

    for(ch = 'A'; ch <= 'Z'; ch++)
    {
        printf("%d\t%o\t%x\t%c\n",ch,ch,ch,ch);
    }

    return EXIT_SUCCESS;
}