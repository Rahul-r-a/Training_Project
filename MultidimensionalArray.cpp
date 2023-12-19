/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int i=0, j=0;
    string arr[2][3] = { {"rahul","arun","akshay"},{"suresh","deepa"}};
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cout << arr[i][j] <<" " <<flush;
        }
        cout <<endl;
    }
    return 0;
}
