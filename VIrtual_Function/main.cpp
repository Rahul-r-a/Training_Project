#include <iostream>

using namespace std;
class bun
{
public :
        virtual void give()           // virtual function created to get functions in derived at run time;
        {
        cout << "bun" << endl;
        }
};
class boy:public bun               //derived class 1
{
public :
        void give()
        {
        cout << "Brown bun" << endl;
        }
};
class girl:public bun               //derived class 2
{
public :
         void give()
         {
         cout << "Pink bun" << endl;
         }
};
int main()
{
    bun *ptr;
    boy b1;
    ptr = &b1;
    ptr->give();
    girl g1;
    ptr = &g1;
    ptr->give();
    return 0;
}
