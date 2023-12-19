#include <iostream>

using namespace std;
int factorial(int);
int main()
{
int num=0;
do
{
    cout << "Enter the number to check the factorial : " << flush;
    cin >> num;
    cout << factorial(num) << endl;
    }while(num !=0);
    return 0;
}
int factorial(int a)
{
if(a-1>0)
return a*factorial(a-1);
}
