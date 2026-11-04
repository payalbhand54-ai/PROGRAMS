/*
iRow = 4
iCol = 4

$   *   *   *

*   $   *   *

*   *   $   *

*   *   *   $


*/

#include<stdio.h>
#include<stdlib.h>


void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    if(iRow != iCol)
    {
        printf("invalid input\n");
        return;
    }

    for(i = 1; i <= iRow; i++)
    {
 
        for(j = 1; j <= iCol; j++)
        {
           if(i == j)  // Digonal
           {
            printf("$\t");
           }
           else
           {
            printf("*\t");
           }
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