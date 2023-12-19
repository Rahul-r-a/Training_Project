/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class cat {
    private :
             bool happy; ///if bool variable not iniiated then it will be garbage ie resukt maybe false
    public :
             void speak();
             cat();
};
int main()
{
    cout << " starting the programme" << endl;
    
    cat bob;
    bob.speak();
    
    cout << " ending the programme" << endl;
    return 0;
}

cat::cat()                           //no need for datatype since constructor wont return anything
{
    cout << "cat created" <<endl;
    happy = true;
}
void cat::speak()
{
    if(happy)
    {
        cout << "meaow" <<endl;
    }
    else
    {
        cout << "Sssss..." << endl;
    }
}
