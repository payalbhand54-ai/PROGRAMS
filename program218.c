/*
iRow = 4
iCol = 4

A   A   A   A

A   A   A   A

A   A   A   A

A   A   A   A


*/



#include<stdio.h>
#include<stdlib.h>


void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    char ch = '\0';

    for(i = 1; i <= iRow; i++)
    {
        ch = 'A';

        for(j = 1; j <= iCol; j++)
        {
           printf("%c\t",ch);
        }
        printf("\n\n");
    }

}

int main()
{

    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Number of rows: \n");
    scanf("%d",&iValue1);

    printf("Enter Number of column: \n");
    scanf("%d",&iValue2);

    Pattern(iValue1 , iValue2);

    return EXIT_SUCCESS;
}