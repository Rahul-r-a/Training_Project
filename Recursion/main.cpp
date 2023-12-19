#include <iostream>

using namespace std;
void fun(int);

int main()
{
int x=3;
    fun(x);        //output will be 1 2 3
    return 0;
}
void fun(int n)
{
if(n>0)
{
fun(n-1);
cout << n << " ";
}
}
