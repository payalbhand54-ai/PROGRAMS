#include<stdio.h>
#include<stdlib.h>


////////////////////////////////////////////
//Function Name:Addition
//Input: Integer,Integer
//Output:integer
//Description:performs addition
//Date:04/10/2026
//Author:payal machhindra bhand
////////////////////////////////////////////


int Addition(
              int iNo1,  // First input
              int iNo2   // Second input
            )         
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
   if(scanf("%d",&iValue1) !=1)
   {
      fprintf(stderr,"Unable to proceed as input is invalid\n");

      return EXIT_FAILURE;
   }

   printf("Enter second number:\n");
   if(scanf("%d",&iValue2) !=1)
   {
      fprintf(stderr,"Unable to proceed as input is invalid\n");

      return EXIT_FAILURE;
   }
 
   iResult = Addition(iValue1, iValue2);

   printf("Addition is: %d\n",iResult);

    return EXIT_SUCCESS;
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
