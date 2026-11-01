#include<stdio.h>
#include<stdlib.h>

void Display(char *str)
{
    printf("%s\n",str);
}

int main()
{
    char Arr[100];

    printf("Enter string :\n");
    scanf("%[^'\n']s\n",Arr);

    Display(Arr);

    return EXIT_SUCCESS;
}

