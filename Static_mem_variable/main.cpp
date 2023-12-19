#include<iostream>
using namespace std;
class alpha
{
    private :
             int a;
             int b;
    public :
            alpha()
            {
                a=5;
                b=5;
                stat++;               //incrementing static member variable after each object

            }
            static int stat;
};
int alpha::stat=0;                    //Initialized static member variable to zero
int main()
{
    alpha a1;
    alpha a2;
    alpha a3;
    cout << a1.stat << endl;       //accessing static member variable with object
    cout << a2.stat << endl;
    cout << alpha::stat << endl;   // accessing static member variable with class name
    return 0;
}
