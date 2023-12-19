#include <iostream>

using namespace std;

int main()
{
int var1;
float var2=9.5;
var1=var2;
    cout << var1 << endl; // automatically the computer converts the float to integer value 9
    cout << var2 << endl;

    int var3;
    float var4=9.5;
    var3=static_cast<int>(var4);   //explicit conversion
    cout << var3 << endl;
    cout << var4 << endl;
    return 0;
}
