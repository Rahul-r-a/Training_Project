//printing pattern
#include <iostream>

using namespace std;

int main()
{
int num=0, i=0, j=0, k=0;
    cout << "Enter the number of lines star should be printed : " << flush;
    cin >> num;
    for(i=0;i<num;i++)
    {
    for(j=num-i;j>0;j--)
    {
    cout << " " << flush;
    }
    for(k=0;k<i+1;k++)
    {
    cout << " * " << flush;
    }
    cout << endl;
   }

    return 0;
}
