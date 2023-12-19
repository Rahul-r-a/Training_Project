#include <iostream>

using namespace std;
template <class T>                                            //Template created for sum of any datatype
T sum(T x, T y)
{
return x+y;
}
int main()
{


    cout << "Sum integer : " << sum<int>(3,4) << endl;          //sum of integer arguments
    cout << "Sum float : " << sum<float>(3.4,4.5) << endl;          //sum of float arguments
    cout << "Sum double : " << sum<double>(3.45,4.55) << endl;          //sum of double arguments
    cout << "String concat : " << sum<string>("Rahul A","Arun A") << endl;          //sum of integer arguments

    return 0;
}
