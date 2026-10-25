#include<stdio.h>
#include<stdlib.h>

int CountDigit(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
   
   while(iNo != 0)
   {
        iDigit = iNo % 10;
        iCount++;
        iNo = iNo /10;
   }
   return iCount ;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = CountDigit(iValue);

    printf("Number of digits : %d\n",iRet);

    return EXIT_SUCCESS;
}