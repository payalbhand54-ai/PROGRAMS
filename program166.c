#include<stdio.h>
#include<stdlib.h>

int SumDigit(int iNo)
{
    int iDigit = 0;
    int iAddition = 0;
   
   while(iNo != 0)
   {
        iDigit = iNo % 10;

        iAddition = iAddition + iDigit; 
        
        iNo = iNo /10;
   }
   return iAddition ;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = SumDigit(iValue);

    printf("Summation of digit : %d\n",iRet);

    return EXIT_SUCCESS;
}