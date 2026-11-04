#include<stdio.h>
#include<stdlib.h>

int CountSmallX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 97) && (*str <= 122))
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

    iRet = CountSmallX(Arr);

    printf("Frequency of small letters is :%d\n",iRet);

    return EXIT_SUCCESS;
}

