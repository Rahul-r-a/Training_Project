/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class Person
{
    private:
            string name;
    public:
           Person();
           string toString();
           void setName(string newName);
           string getName(string name2);

           //~Person();
};

int main()
{
    Person person;
    person.setName("georgina");
    cout << "person name by setting 1 is : " << person.toString() << endl;
    cout << "Name of person with get method: " << person.getName("christopher") << endl;

    

    return 0;
}

Person::Person() 
{
        name = "George";

}

string Person::toString() 
{
        return name;
}

void Person::setName(string newName) {
        name = newName;
}

string Person::getName(string name2) {
        name = name2;
        return name;
}

