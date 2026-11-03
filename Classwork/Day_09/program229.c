#include<stdio.h>
#include<stdlib.h>

int main()
{
    char Arr[100] = {'G','a','n','e','s','h','\0','P','u','n','e'};

    printf("%s\n",Arr);

    printf("Size of : %d\n",sizeof(Arr));
    
    return EXIT_SUCCESS;
}