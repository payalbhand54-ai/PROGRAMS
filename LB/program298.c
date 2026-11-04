#include<stdio.h>
#include<stdlib.h>

int main()
{
    unsigned int No = 14;
    unsigned int Ans = 0;

    Ans = ~No; 

    printf("%u\n",Ans); //4294967281

    return EXIT_SUCCESS;
}