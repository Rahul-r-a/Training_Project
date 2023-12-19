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
   int value =8;
   const int * const ptr = &value;
  
   cout << *ptr <<endl;
   
   int num=11;
   ptr = &num;
  *ptr=12;
   cout <<*ptr << endl;
   //cout << value;

    return 0;
}