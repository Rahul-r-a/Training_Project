#include <iostream>

using namespace std;
class A
{
private :
         int var1;
public :
        A(int x =0)
        {
        var1=x;
        }
        friend void function();
};
class B
{
private :
         int var2;
public :
        B(int y =0)
        {
        var2=y;
        }
        friend void function();
};
void function()                     //friend function for accessing all the member variables in the class
{
A a1(10);
B b1(20);
int x,y,z;
x = a1.var1 + b1.var2;
y = a1.var1 * b1.var2;
z = a1.var1 - b1.var2;
cout << "Sum is : " << x << endl;
cout << "Product is : " << y << endl;
cout << "Differance is : " << z << endl;
}
int main()
{
//A a1;
//B b1;
    function();
    return 0;
}
