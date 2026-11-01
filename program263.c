// $ % & * #

#include<stdio.h>
#include<stdlib.h>

void CountFrequencyX(char *str)
{
        int iCountSmall = 0 , iCountCapital, iCountDigit = 0, iCountSpecial;

        while(*str != '\0')
        {
            if(*str >= 'a' && *str <= 'z')
            {
                iCountSmall++;
            }
            else if(*str >= 'A' && *str <= 'Z')
            {
                iCountCapital++;
            }
            else if(*str >= '0' && *str <= '9')
            {
                iCountDigit++;
            }
            else
            {
                iCountSpecial++;
            }
            
            str++;
        }

        printf("number of capital :%d\n",iCountCapital);
        printf("number of Samll :%d\n",iCountSmall);
        printf("number of Digit :%d\n",iCountDigit);
        printf("number of special :%d\n",iCountSpecial);

}

int main()
{
    char Arr[100] = {'\0'};

    printf("Enter string :\n");
    scanf("%[^'\n']s\n",Arr);

    CountFrequencyX(Arr);


    return EXIT_SUCCESS;
}

