#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    float a=0, b=0, num=0;
    cout << " enter two numbers to divide " << endl;
    cin >> a >> b;
    cout << "enter the precision for divide" << flush;
    cin >> num;
    cout << setprecision(num) << fixed << a/b << endl;
    
    return 0;
}
