// $ % & * #

#include<stdio.h>
#include<stdlib.h>

void CountFrequencyX(char *str)
{
        int iCountSmall = 0 , iCountCapital = 0, iCountDigit = 0;

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
            
            str++;
        }

        printf("number capital :%d\n",iCountCapital);
        printf("number Samll :%d\n",iCountSmall);
        printf("number Digit :%d\n",iCountDigit);

}

int main()
{
    char Arr[100] = {'\0'};

    printf("Enter string :\n");
    scanf("%[^'\n']s\n",Arr);

    CountFrequencyX(Arr);


    return EXIT_SUCCESS;
}

