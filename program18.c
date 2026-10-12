#include<stdio.h>
#include<stdlib.h>


void CheckEven(int iNO)  
{
    if((iNO % 2) == 0)
    {
        printf("It is even number\n");

    }
    else
    {
        printf("It is odd\n");

    }
}
int main()
{
    int iValue = 0 ;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    CheckEven(iValue);

    
    return EXIT_SUCCESS;
}