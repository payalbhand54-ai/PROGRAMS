#include<iostream>
using namespace std;

class Arithmetic
{

    public:
        float No1;
        float No2;

        Arithmetic(float A, float B) 
        {
            No1 = A;
            No2 = B;
        }

        float Addition()
        {
            float Ans;
            Ans = No1 + No2;
            return Ans;
        }

};

int main()
{
    Arithmetic aobj1(10.44f,11.56f);
    Arithmetic aobj2(20.45f,21.56f);


    cout<<aobj1.Addition()<<"\n";
    cout<<aobj2.Addition()<<"\n";

    return EXIT_SUCCESS;
}