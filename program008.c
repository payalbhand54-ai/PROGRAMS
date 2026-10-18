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
//         User is going enter going any two integer
//         And we have to perform addition
//
/////////////////////////////////////////////


/////////////////////////////////////////////
// step 2:Write the algorithm
/*
START 
    Accept first number as no1
    Accept second number as no2
    Create a varible as ans to store the result 
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
//step 4:Write the program
//
////////////////////////////////////////////


#include<stdio.h>


////////////////////////////////////////////
//Function Name:Addition
//Input: Integer,Integer
//Output:integer
//Description:performs addition
//Date:04/10/2026
//Author:payal machhindra bhand
////////////////////////////////////////////


int Addition(int iNo1, int iNo2)
{
   int  iAns=0;
   iAns=iNo1+iNo2;   // business logic 
   return iAns;
   
}


///////////////////////////////////////
//
//entry point application
//
////////////////////////////////////////


   int main(){

    int iValue1=0, iValue2=0, iResult=0;

   printf("Enter first number:\n");
   scanf("%d",&iValue1);

   printf("Enter second number:\n");
   scanf("%d", &iValue2);
 
   iResult = Addition(iValue1, iValue2);

   printf("Addition is: %d\n",iResult);

    return 0;
}


/////////////////////////////////
//
//step 5 : Test the program
// tested test cases
//
// input1     input2     output
//--------------------------------
//  10          11         21
//  11          0          11
//  0           11         11
//  20          -9         11
//------------------------------
//
////////////////////////////////
