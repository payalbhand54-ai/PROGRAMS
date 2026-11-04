#include<stdio.h>
#include<stdlib.h>

int main()
{

    char sName[30];
    int iAge = 0;
    float fMarks =0.0f;

    printf("Enter yor name :\n");
    scanf("%[^'\n']s",sName);  // ]Enter remains in input buffer

    printf("Enetr your age :\n");
    scanf("%d",&iAge);

    printf("enter your marks :\n");
    scanf("%f",&fMarks);

    printf("wlecome %s\n",sName);
    printf("Your age is :\n ",iAge);
    printf("Your marks :\n",fMarks);
    
    return EXIT_SUCCESS;
}