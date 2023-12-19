#include <iostream>

using namespace std;
class Animal
{
    private : 
             string name;
    public : 
             //Animal();
             void setname(string name);
             void speak();
};

int main()
{
    cout<<"starting the programme......" << endl;
    Animal animal1;
    Animal animal2;
    animal1.setname("rob");
    animal2.setname("riven");
    animal2 = animal1;
    animal1.speak();
    animal2.speak();
    cout << endl;
    cout << sizeof(Animal)<< endl;

    return 0;
}
void Animal::setname(string name)
{
    this->name = name;
}
 void Animal::speak()
 {
     cout << "My name is : " << name << endl;
 }
