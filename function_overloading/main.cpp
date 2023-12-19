#include <iostream>

using namespace std;
void add(int,int,float);
int main()
{
    cout << "Hello Rahul Your answer for the function add is : " << flush;
    add(2,3,9.9);
    return 0;
}
inline void add(int a, int b, float c)      //Reduces the time taken
{
cout << a+b+c << endl;
}
