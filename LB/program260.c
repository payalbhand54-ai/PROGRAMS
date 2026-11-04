// $ % & * #

#include<stdio.h>
#include<stdlib.h>

int CountSpecialX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str == '$') || (*str == '%') || (*str == '*') || (*str == '&') || (*str == '#'))
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

    iRet = CountSpecialX(Arr);

    printf("Frequency of Special letters :%d\n",iRet);

    return EXIT_SUCCESS;
}

