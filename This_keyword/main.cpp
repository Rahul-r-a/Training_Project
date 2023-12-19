#include <iostream>

using namespace std;
class person
{
private :
         int age;
         string name;
public :
         person()
         {
         name = "Rahul A";
         age = 24;
         }
         person(string name, int age)
         {
        this->name = name;
         this->age = age;
         }
         void speak()
         {
         cout << "My name is : " << name << endl << "My age is : " << age << endl;
         }
};
int main()
{
person p1;
person p2("Arun",24);
p1.speak();
p2.speak();
    return 0;
}
