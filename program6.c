/*
  step 1: Understand the program statement
  step 2:Write the algrithm
  step 3:Decide the programming language
  step 4:Write the program
  step 5:Test the program

*/
/////////////////////////////////////////////
//
// Step 1: Understand the program statement
//         User is going enter going any two integer
//         And we have to perform addition
//
/////////////////////////////////////////////

/////////////////////////////////////////////
// step 2:Write the algrithm
/*
START 
    Accept first number as no1
    Accept second number as no2
    Create a varible as ans to store the result 
    Perform the addition and store into Ans 
    Display the result from Ans
*/
/////////////////////////////////////////////

/////////////////////////////////////////////
// 
// step 3:Decide the programming language
//         We select the C programming
//
/////////////////////////////////////////////

////////////////////////////////////////////
//
//step 4:Write the program
//
////////////////////////////////////////////

#include<stdio.h>

int Addition(int iNo1, int iNo2)
{
  int iAns = 0;
   iAns = iNo1 + iNo2;
   return iAns;
}
   


   int main(){
    int iValue1, iValue2, iResult;

   printf("Enter first number:\n");
   scanf("%d",&iValue1);

   printf("Enter second number:\n");
   scanf("%d",&iValue2);

   iResult=iValue1+iValue2;  // Busniess logic
   printf("Addition is: %d\n",iResult);

    return 0;
}

