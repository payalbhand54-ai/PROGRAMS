#include<iostream>
using namespace std;

template <class T>
class Arithmetic
{

    public:
        T No1;
        T No2;

        Arithmetic(T A, T B);
        T Addition();
        T Substraction();

};
template <class T>
Arithmetic <T> :: Arithmetic (T A, T B)   
{
    No1 = A;
    No2 = B;
}

template <class T>
T Arithmetic <T> :: Addition()   
{
    T Ans;
    Ans = No1 + No2;
    return Ans;
}

template <class T>
T Arithmetic <T> :: Substraction()   
{
    T Ans;
    Ans = No1 - No2;
    return Ans;
}

int main()
{
    
    Arithmetic <int> *aobj = new Arithmetic <int> (11,10); //allocate

    cout<<aobj->Addition()<<endl; //use

    delete aobj;  // deallocate

    return EXIT_SUCCESS;
}