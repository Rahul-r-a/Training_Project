#include <iostream>

using namespace std;

int main()
{
int num=0, numbrk=0, numcnt=0;
    cout << "Enter the limit to print numbers : " << flush;
    cin >> num;
    cout << "Enter the number to break the loop" << flush;
    cin >> numbrk;
    cout << "Enter the number to skip the iteration : " << flush;
    cin >> numcnt;
    for(int i=0;i<=num;i++)
    {
    if(i==numbrk)
    {
    break;
    }
    else if(i==numcnt)
    {
    continue;
    }
    else
    {
    cout << "Printed : " << i << endl;
    }
    }
    return 0;
}
