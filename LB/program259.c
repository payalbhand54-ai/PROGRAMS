#include<stdio.h>
#include<stdlib.h>

int CountDigitX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            iCount ++;
        }
        str++;
    }
    return iCount;

}

int main()
{
    char Arr[100] = {'\0'};
    int iRet = 0;

    printf("Enter string :\n");
    scanf("%[^'\n']s\n",Arr);

    iRet = CountDigitX(Arr);

    printf("Frequency of Digit is :%d\n",iRet);

    return EXIT_SUCCESS;
}

