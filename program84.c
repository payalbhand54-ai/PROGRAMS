#include<stdio.h>
#include<stdlib.h>


void CheckDivisible(int iNo)
{
    if((iNo % 5) == 0)
    {
        printf("Number divisible by 5\n");
    }
    else
    {
        printf("Number not divisible by 5\n");

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