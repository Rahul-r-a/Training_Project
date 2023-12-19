#include <iostream>

using namespace std;
class base
{
    public:
            base()
            {
                cout << "Base class is created" << endl;
            }
            void msge()
            {
                cout << "Base class message" << endl;
            }
};
class derived : public base
{
    public:
    derived()
    {
        cout << "Derived class is created" << endl;
    }
    void msge()
    {
  //  base::msge();                                     //for getting base class msge function also
        cout << "Derived class message" << endl;
    }
};
int main()
{
    derived d1;
    d1.msge();              //Due to overriding only the derived class function will be called

    return 0;
}
