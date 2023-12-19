
#include <iostream>

using namespace std;
class rectangle
{
    public :
            int length=0, breadth=0;
            rectangle()
            {
                cout << "Default base constructor created" << endl;
                length=1;breadth=1;
            }
            rectangle(int l, int b)
            {
                length=l;                 //parameterised constructor
                breadth=b;
            }
            void speak()
            {
                cout << "Length=" << length << endl << "Breadth=" << breadth << endl;
            }
};
class cuboid:public rectangle          //Inherited rectangle publically to cuboid and this derived class is not empty
{
    public :
            cuboid()
            {
               cout << "Default derived constructor created" << endl;
            }
            cuboid(int Length, int Breadth)
            {
                length=Length;
                breadth=Breadth;
            }
};
int main()
{
    cuboid c;            //default base constructor will be called first and then default derived constructor will be called
    cuboid c1(5,6);     //here first default base constructor will be called and then derived parameterised constructor will be called
    c1.speak();
    return 0;
}
