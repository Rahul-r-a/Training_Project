#include <iostream>

using namespace std;

int main()
{
  int var1=10, var2=20, var3=30;
  float total=0;
  total = var2++ - var3-- + var1;   // first values will be assigned due to post increment => output will be 0 and not 2
  cout << total << endl;
    return 0;
}
