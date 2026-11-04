#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPallindrom(int iNo)
{

    int iDigit = 0;
    int iRev = 0;
    int iTem = 0;

    iTem = iNo;
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = ((iRev * 10) + iDigit);

        iNo = iNo /10 ;
    }
    if(iRev == iTem) // issue solved
        {
            return true;
        }
        else
        {
            return false;
        }
    
}

int main()
{
    int iValue = 0;
    bool bRet = false;
    

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    bRet = CheckPallindrom(iValue);

    if(bRet == true)
        {
            printf("It is pallindrom");
        }
        else
        {
            printf("It is not pallindrom");
        }

    

    return EXIT_SUCCESS;
}