#include<stdio.h>
#include<stdlib.h>

void DisplayEvenOddDigits(int iNo)
{
    int iDigit = 0;
   
   while(iNo != 0)
   {
        iDigit = iNo % 10;

        if(iDigit % 2 != 0)
        {
            printf("Odd : %d\n", iDigit);
        }
        else
        {
            printf("Even : %d\n", iDigit);
        }
        
        iNo = iNo /10;
   }
}

int main()
{
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    DisplayEvenOddDigits(iValue);

    return EXIT_SUCCESS;
}