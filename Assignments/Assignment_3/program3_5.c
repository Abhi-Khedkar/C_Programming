#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkVowel
//  Description   : Check whether that character is vowel or not
//  Input         : Character
//  Output        : Boolean (TRUE / FALSE)
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 22/10/2026
//
/////////////////////////////////////////////////////////////////////////

BOOL ChkVowel(char cValue)
{
    if(cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u' || 
       cValue == 'A' || cValue == 'E' || cValue == 'I' || cValue == 'O' || cValue == 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;
    
    printf("Enter character\n");
    scanf("%c", &cValue);
    
    bRet = ChkVowel(cValue);
    
    if (bRet == TRUE)
    {
        printf("It is Vowel\n");
    }
    else
    {
        printf("It is not Vowel\n");
    }
    
    return 0;
}