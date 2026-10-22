#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];
    int iAge = 0;
    float fMarks = 0.0f;

    printf("Enter your Name : \n");
    scanf("%[^'\n']s",sName);  // Enter remains in input buffer

    fflush(stdin);

    printf("Enter your Age : \n");
    scanf("%d",&iAge);

    printf("Enter your Marks : \n");
    scanf("%d",&fMarks);

    printf("Welcome %s\n",sName);
    printf("Your Age is : %d\n",iAge);
    printf("Your Marks : %f\n",fMarks);

    return EXIT_SUCCESS;
}