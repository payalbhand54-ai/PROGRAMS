/*
  step 1:Understand the program statement
  step 2:Write the algorithm
  step 3:Decide the programming language
  step 4:Write the program
  step 5:Test the program

*/


/////////////////////////////////////////////
// 
// Step 1: Understand the program statement 
//         User is going to enter any three integers
//         And we have to perform addition
// 
/////////////////////////////////////////////


/////////////////////////////////////////////
// step 2:Write the algorithm
/*
START
    Accept first number as no1
    Accept second number as no2
    Accept third number as no3
    Create a variable as ans to store the result
    Perform the addition and store into Ans
    Display the result from Ans
STOP
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
// step 4:Write the program
// 
////////////////////////////////////////////


#include<stdio.h>


////////////////////////////////////////////
//Function Name:Addition
//Input: Integer,Integer,Integer
//Output:integer
//Description:performs addition of three numbers
//Date:05/10/2026
//Author:payal machhindra bhand
////////////////////////////////////////////


int Addition(int iNo1, int iNo2, int iNo3)
{
   int iAns=0;

   iAns=iNo1+iNo2+iNo3;   // business logic

   return iAns;
}


///////////////////////////////////////
// 
//entry point application
// 
////////////////////////////////////////


int main()
{
    int iValue1=0, iValue2=0, iValue3=0, iResult=0;

    printf("Enter first number:\n");
    scanf("%d",&iValue1);

    printf("Enter second number:\n");
    scanf("%d",&iValue2);

    printf("Enter third number:\n");
    scanf("%d",&iValue3);

    iResult = Addition(iValue1, iValue2, iValue3);

    printf("Addition is: %d\n",iResult);

    return 0;
}


/////////////////////////////////
// 
//step 5 : Test the program
// tested test cases
// 
// input1     input2     input3     output
//-----------------------------------------
//  10          11          12         33
//  11           0           5         16
//   0          11           9         20
//  20          -9           4         15
//-----------------------------------------
// 
/////////////////////////////////