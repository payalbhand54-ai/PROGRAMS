#include<iostream>
using namespace std;

template <class T>

class Arithmetic
{

    public:
        T No1;
        T No2;

        Arithmetic(T A, T B) 
        {
            No1 = A;
            No2 = B;
        }

        T Addition()
        {
            T Ans;
            Ans = No1 + No2;
            return Ans;
        }

        T Substraction()
        {
            T Ans;
            Ans = No1 - No2;
            return Ans;
        }

};

int main()
{
    /*
    Arithmetic aobj1(10.44f,11.56f);
    Arithmetic aobj2(20.45f,21.56f);


    cout<<aobj1.Addition()<<"\n";
    cout<<aobj2.Addition()<<"\n";

    cout<<aobj1.Substraction()<<"\n";
    cout<<aobj2.Substraction()<<"\n";
    */

    return EXIT_SUCCESS;
}