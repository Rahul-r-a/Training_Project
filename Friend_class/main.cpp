#include <iostream>

using namespace std;
class A
{
private :
         int var1;
public :
                A(int x)
                {
                var1=x;
                }
                friend class B;
};
class B
{
private :
         int var2;
public :
        B(int y)
        {
        var2=y;
        }
        int sum()
        {
        int sum =0;
        A a1(10);

        sum = a1.var1 + var2;
        return sum;
        }
};
int main()
{
    B b1(9);
    cout << "Sum of variables in two classes is : " << b1.sum() << endl;
    return 0;
}
