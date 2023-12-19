#include <iostream>
#include<sstream>
using namespace std;

class Person
{
    private :
             string name;
             int age;
    public :
            Person();
           // ~Person();
            Person(string name, int age);
            string tostring();
};
int main()
{
    cout << "Starting the programme" << endl;
    cout << "***********************" << endl;
    Person person;
    Person person2("Arun",23);
    cout << person.tostring() << " Memory address of first object: " << &person << endl;
    cout << person2.tostring() << " Memmory address of second object : " << &person2 << endl;
    cout << "Ending the programme" << endl;
    cout << "********************" << endl;
    return 0;
}

Person::Person()
{
    name = "Rahul";
    age = 23; 
}
 string Person::tostring()
 {
     stringstream ss;
     ss << "Name : ";
     ss << name;
     ss << " ; Age : ";
     ss << age;
     string info = ss.str();
     return info;
 }
 Person::Person(string name, int age)
 {
     this->name = name;
     this->age = age;
     cout << "Memory address pointer pointing to is : " << this << endl;
 }
