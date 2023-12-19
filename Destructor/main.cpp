#include <iostream>

using namespace std;
class test
{
private :
        string name;
        int *age;
public :
test()
{
cout << "class is created" << endl;

}
        test(int num)
        {
        age = new int();                 //new memory allocated for variable
        *age = num;
        name = "Rahul";
        }
        void speak()
        {
        cout << "My name is : " << name << endl;
        }
        ~test()
        {
        delete age;                             //deleted memmory allocated for variable
        cout << "Class is destroyed" << endl;
        }
};
int main()
{
    test a(23);
                        //CLass is created
    a.speak();
    return 0;                     // calss is destroyed at the end of the programme
}
