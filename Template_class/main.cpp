#include <iostream>

using namespace std;
template<class T>
class sum
{
private :
        T x;
        T y;
public :
         sum(T arg1, T arg2)
        {
        x=arg1;
        y=arg2;
        }
        T result()
        {
        return x+y;
        }
};
int main()
{
    sum<int>obj1(1,2);
    sum<float>obj2(3.4,4.5);
    sum<string>obj3("Rahul","Rohms");
    cout << "Sum of int : " << obj1.result() << endl;
    cout << "Sum of float : " << obj2.result() << endl;
    cout << "Concat : " << obj3.result() << endl;
    return 0;
}
