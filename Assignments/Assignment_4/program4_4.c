#include <stdio.h>
#include <stdlib.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckVotingEligibility
//  Description   : Check if a person is eligible to vote based on age
//  Input         : Integer
//  Output        : None
//  Author        : Abhishek Mahesh Khedkar
//  Date          : 22/10/2026
//
/////////////////////////////////////////////////////////////////////////

void CheckVotingEligibility(int iAge)
{
    if (iAge < 0)
    {
        printf("Invalid Age\n");
    }
    else if (iAge >= 18)
    {
        printf("Eligible for Voting\n");
    }
    else
    {
        printf("Not Eligible for Voting\n");
    }
}

int main()
{
    int iAge = 0;
    
    printf("Enter your age: ");
    scanf("%d", &iAge);
    
    CheckVotingEligibility(iAge);
    
    return EXIT_SUCCESS;
}