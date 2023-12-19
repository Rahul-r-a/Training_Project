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
    int *ptr, i=0;
    ptr = new int;
    *ptr = 10;
    cout << *ptr << " " << ptr <<  endl;
    delete ptr;
    ptr = new int[10];
    for(i=0;i<10;i++)
    {
    cin >> ptr[i];
    cout << ptr[i];
    }
    return 0;
}