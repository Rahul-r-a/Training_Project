#include <iostream>

using namespace std;

int main()
{
    int a=0, b=0,c=0, bin[32], i=0, j=0;
    //long int c=0;
    for(i=0;i<32;i++)
    {
	    bin[i]=0;
    }
    i=0;
    cout << "enter the number : " << flush;
    cin >> a;
    cout << " enter the position : "<<flush;
    cin >> b;
    
    c = a|(15<<b);
    cout << c << endl;
    while(c>0)
    {
       bin[i] = c%2;
       c /= 2;
       i++;
    }
    cout << "the binary representation of number is :";
    for(i=31;i>0;i--)
    {
        cout << bin[i];
    }
    return 0;
}
