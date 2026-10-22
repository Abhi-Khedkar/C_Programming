#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayConvert
//  Description   : Convert case of the given character
//  Input         : Character
//  Output        : None
//  Author        : Abhishek Khedkar
//  Date          : 22/10/2026
//
/////////////////////////////////////////////////////////////////////////

void DisplayConvert(char CValue)
{
    if(CValue >= 'a' && CValue <= 'z')
    {
        printf("%c\n", CValue - 32);  //32 is the difference between ASCII values of lowercase and uppercase letters
    }
    else if(CValue >= 'A' && CValue <= 'Z')
    {
        printf("%c\n", CValue + 32);  //32 is the difference between ASCII values of uppercase and lowercase letters
    }
    else
    {
        printf("%c\n", CValue);
    }
}

int main()
{
    char cValue = '\0';
    
    printf("Enter character\n");
    scanf("%c", &cValue);
    
    DisplayConvert(cValue);
    
    return 0;
}