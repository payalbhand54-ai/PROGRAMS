#include<stdio.h>
#include<stdlib.h>

int CountSspaceX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
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

    iRet = CountSspaceX(Arr);

    printf("Frequency of White space is :%d\n",iRet);

    return EXIT_SUCCESS;
}

