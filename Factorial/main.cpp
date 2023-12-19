#include <iostream>

using namespace std;

int main()
{
int num=0, fact=1;
    cout << "Enter the number tofind the factorial : " << flush;
    cin >> num;
    //i=num-1;
    while(num!=0)
    {
    fact=fact*num;
    num--;
    }
    cout << "Factorial of number " << num << " is : " << fact << endl;
    return 0;
}
