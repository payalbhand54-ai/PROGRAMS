#include<stdio.h>
#include<stdlib.h>

float AverageDigit(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    int iCount = 0;
    float fAverage = 0.0f; 
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iCount++;
        iNo = iNo / 10;
        
    }
    fAverage = ((float)iSum / (float)iCount);
    return fAverage;
    
}
int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    fRet = AverageDigit(iValue);

    printf("Average of digits : %f\n",fRet);

    return EXIT_SUCCESS;
}