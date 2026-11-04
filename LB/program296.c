#include<stdio.h>
#include<stdlib.h>

int main()
{
    int No = 14;
    int Ans = 0;

    Ans = No >> 3; // No / 2^3 (loss data) --> 1

    printf("%d\n",Ans);

    return EXIT_SUCCESS;
}