#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    if(((iNo % 3) == 0))
    {
        if(((iNo % 5) == 0))     // Nested if
        {
        printf("Number is divisible by both \n");
        }
        else
        {
        printf("Number is divisible by 3 \n");
        }
    }
    else
    {
        printf("Number is not divisible \n");
    }
}

int main()
{

    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}