#include <iostream>

using namespace std;

int main()
{
int num=0, mul=0, i=1;
    cout << "Enter the number to find the multiplication table : " << flush;
    cin >> num;
    cout << "Enter how much multiples should be find : " << flush;
    cin >> mul;
    do
    {
    cout << num << "*" << i << " = " << num*i << endl;
    i=i+1;
    }while(i<=10);
    return 0;
}
