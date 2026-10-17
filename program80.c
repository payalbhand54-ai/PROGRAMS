#include<stdio.h>
#include<stdlib.h>

int Summation(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
       iSum = iSum + iCnt;
        
    }
     return iSum;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the frequency : \n");
    scanf("%d",&iValue);

    iRet = Summation(iValue);

    printf("summation is : %d\n",iRet);

    return EXIT_SUCCESS;
}