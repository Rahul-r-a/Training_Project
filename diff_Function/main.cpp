#include <iostream>

using namespace std;
void function(void);
void function1(int);
string function2(void);
int function3(int);
int main()
{
int salary;
cout <<  "Enter the salary : " << endl;
cin >> salary;
cout << endl;
    cout << "Hello world says : " << flush;
    function();
    cout << endl;
    function1(24);
    cout << endl;
    function2();
    cout << endl;
    function3(salary);
    return 0;
}
void function(void)
{
cout << "Hi Rahul" << endl;
}

void function1(int a)
{
cout << "Your age is : " << a << endl;
}

string function2(void)
{
string text = "You are from Kozhikode";
cout << text << endl;
return text;
}
int function3(int a)
{
cout << "Your Salary is : " << a << endl;
return a;
}
