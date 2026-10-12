#include<stdio.h>
#include<stdlib.h>

int main()
{

    char sName[30];

    printf("Enter yor name :\n");
    scanf("%[^'\n']s",sName);  //%s accept string //special scanf 

    printf("wlecome %s\n",sName);
    
    return EXIT_SUCCESS;
}