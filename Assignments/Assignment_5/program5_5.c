#include <stdio.h>
#include <stdlib.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckCharacterType
//  Description   : Check if character is uppercase, lowercase, digit or special
//  Input         : Character
//  Output        : None
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 22/10/2026
//
/////////////////////////////////////////////////////////////////////////

void CheckCharacterType(char cValue)
{
    if (cValue >= 'A' && cValue <= 'Z')
    {
        printf("Uppercase Alphabet\n");
    }
    else if (cValue >= 'a' && cValue <= 'z')
    {
        printf("Lowercase Alphabet\n");
    }
    else if (cValue >= '0' && cValue <= '9')
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special Character\n");
    }
}

int main()
{
    char cValue = '\0';
    
    printf("Enter a character: ");
    scanf(" %c", &cValue); // Note: Added a space before %c to clear any newline characters from buffer
    
    CheckCharacterType(cValue);
    
    return EXIT_SUCCESS;
}