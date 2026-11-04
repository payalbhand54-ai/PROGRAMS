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

float AverageDigit(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    int iCount = 0;
    float fAvg = 0.0f; 

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    iSum = SumDigit(iNo);
    iCount = CountDigit(iNo);

    fAvg = (float)iSum / (float)iCount; 
    return fAvg;
    
}
int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    fRet = AverageDigit(iValue);

    printf("Average of digits : %.2f\n",fRet);

    return EXIT_SUCCESS;
}