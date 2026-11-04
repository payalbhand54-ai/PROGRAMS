#include<iostream>
using namespace std;

float Addition(float iNo1 , float iNo2)
{
    float iAns = 0.0f;

    iAns = iNo1 + iNo2;

    return iAns;
}

int main()
{
    float iValue1 = 0.0f, iValue2 = 0.0f;
    float iRet = 0.0f;

    cout<<"Enter first number :\n";
    cin>>iValue1;

    cout<<"Enter second number :\n";
    cin>>iValue2;

    iRet = Addition(iValue1 , iValue2);

    cout<<"Addition is :"<<iRet<<"\n";

    return EXIT_SUCCESS;
}