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

int SumDigit(int iNo)
{
    int iDigit = 0;
    int iAdd = 0;
   
   while(iNo != 0)
   {
        iDigit = iNo % 10;

        iAdd = iAdd + iDigit; 
        
        iNo = iNo /10;
   }
   return iAdd ;
}

float AverageDigits(int iTotal, int iFrequency)
{
    float fAns = 0.0f;

    fAns = (float)iTotal / (float)iFrequency;

    return fAns;
}


int main()
{
    int iValue = 0, iSum = 0, iCount = 0;
    float fAvg = 0.0f;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iSum = SumDigit(iValue);
    iCount = CountDigit(iValue);

    fAvg = AverageDigits(iSum, iCount);

    printf("Number of Digits :%d\n",iCount);
    printf("Summation of digits :%d\n",iSum);
    printf("Average of digits : %.2f\n",fAvg);

    return EXIT_SUCCESS;
}