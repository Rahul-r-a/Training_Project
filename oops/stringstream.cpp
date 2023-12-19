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
