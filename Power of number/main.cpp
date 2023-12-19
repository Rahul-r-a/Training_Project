#include <iostream>
#include<math.h>               // header for pow function
using namespace std;

int main()
{
int num=0, exp=0, result=0;
    cout << "Enter the number : " << flush;
    cin >> num;
    cout << "Enter the power : " << flush;
    cin >> exp;
    result = pow(num,exp);
    cout << result;
    return 0;
}
