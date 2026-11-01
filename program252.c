#include<stdio.h>
#include<stdlib.h>

int CountX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'b') || (*str == 'c') || (*str == 'd'))
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

    iRet = CountX(Arr);

    printf("Frequency is :%d\n",iRet);

    return EXIT_SUCCESS;
}

