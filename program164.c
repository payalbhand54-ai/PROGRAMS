#include<stdio.h>
#include<stdlib.h>

void DisplayOddDigits(int iNo)
{
    int iDigit = 0;
   
   while(iNo != 0)
   {
        iDigit = iNo % 10;
        if(iDigit % 2 != 0)
        {
            printf("%d\n", iDigit);
        }
        iNo = iNo /10;
   }
}

int main()
{
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    DisplayOddDigits(iValue);

    return EXIT_SUCCESS;
}