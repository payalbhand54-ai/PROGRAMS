#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int strlenX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        iCount ++;
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

    iRet = strlen(Arr);

    printf("String length is :%d\n",iRet);

    return EXIT_SUCCESS;
}

