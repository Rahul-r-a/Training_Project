#include <iostream>

using namespace std;
struct person // here person is a datatype in which we can use
{
string name;
int age;
string desig;
float salary ;
};
int main()
{
person p1,p2;
p1.name = "Rahul A";
p1.age = 24;
p1.desig = "Associate Engineer";
p1.salary = 500000;

p2.name = "Arun A";
p2.age = 24;
p2.desig = "Doctor";
p2.salary = 5000000;

    cout << "Name : " << p1.name << endl;
    cout << "Age : " << p1.age << endl;
    cout << "Designation : " << p1.desig << endl;
    cout << "Salary : " << p1.salary << endl;

    cout << endl << "Second Person" << endl << "************" << endl;

    cout << endl << "Name : " << p2.name << endl;
    cout << "Age : " << p2.age << endl;
    cout << "Designation : " << p2.desig << endl;
    cout << "Salary : " << p2.salary << endl;

    return 0;
}
