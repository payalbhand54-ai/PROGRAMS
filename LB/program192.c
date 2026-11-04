/* 
input : 4
output : A  B   C   D   
*/

#include<stdio.h>
#include<stdlib.h>


int main()
{
    int iCnt = 0;

    for(iCnt = 65; iCnt <= 90; iCnt++)
    {
        printf("%d\n",iCnt); // issue
    }

    return EXIT_SUCCESS;
}