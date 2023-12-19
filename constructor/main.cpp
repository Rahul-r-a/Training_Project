//Create a class and implement all the constructor ( default, parametrized & Copy ). Implement what ever way you like and share in community.
#include <iostream>

using namespace std;
class person
{
private:
string name;
int age;
public:
person();
person(string Name, int Age);
person(person&p2);               //csynatx of opying constructur ie giving the second object to object three
void getdata();
};
int main()
{
    person p1;                   //object1 of class created
    person p2("Arun",24);        //object2 of class created
    person p3(p1);               // object 3 created by copy constructor
    p1.getdata();
    p2.getdata();
   // p2("Akshay",27);
    p3.getdata();
    return 0;

}
person::person()
{
name = "Rahul A";
age = 24;
}
person::person(string Name, int Age)
{
name=Name;
age = Age;
}
void person::getdata()
{
cout << "Name is : " << name << endl;
cout << "Age is : " << age << endl;
}
person::person(person&p1)
{
name = p1.name;                 //copying name from object 2
age = p1.age;                    //copying age from object 2
}
