#include<iostream>
using namespace std;

class Arithematic
{

    public:
        double No1;
        double No2;

        Arithematic(double A, double B) 
        {
            No1 = A;
            No2 = B;
        }

        double Addition()
        {
            double Ans;
            Ans = No1 + No2;
            return Ans;
        }

        double Substraction()
        {
            double Ans;
            Ans = No1 - No2;
            return Ans;
        }

};

int main()
{
    Arithematic *aobj = new Arithematic(11,10); // Dynamic 

    cout<<aobj->Addition()<<endl;

    return EXIT_SUCCESS;
}