
#include <iostream>

using namespace std;
class rectangle
{
    public :
            int length=0, breadth=0;
            rectangle()
            {
                cout << "Default constructor" << endl;
                length=1;breadth=1;
            }
            rectangle(int l, int b)
            {
                length=l;
                breadth=b;
            }
            void speak()
            {
                cout << "Length=" << length << endl << "Breadth=" << breadth << endl;
            }
};
class cuboid:public rectangle          //Inherited rectangle publically to cuboid
{
  //empty;
};
int main()
{
    cuboid c;
    c.speak();            //default constructor will be called since derived class is empty
    cuboid c1(3,4);       // will show error since parameterized constructor wont be called for inheritance
    c1.speak();

    return 0;
}
