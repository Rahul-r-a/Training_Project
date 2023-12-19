/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<sstream>
using namespace std;
int main()
{
    stringstream print;
    string name = "Rahul";
    string lastname = "Areekote";
    int age = 23;
    string position = "E&AS";
    print << "Name : " << flush;
    print << name << " ";
    print << lastname << "\n";
    print << "age : ";
    print << age << "\n";
    print << "Position : ";
    print << position;
    
    string info = print.str();
    cout << "\n";
    cout << info << endl;;

    return 0;
}