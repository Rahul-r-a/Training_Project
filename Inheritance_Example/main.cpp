
#include <iostream>

using namespace std;
class rectangle
{
    public :
            int length=0, breadth=0;
            void show()
            {
                cout << "Length is : " << length << endl;
                cout << "Beadth is : " << breadth << endl;
            }
            void area()
            {
                cout << "Area is : " << length*breadth << endl;
            }
};
class cuboid:public rectangle          //Inherited rectangle publically to cuboid
{
    public :
            int height=0;
            void display()
            {
                cout << "Height is : " << height << endl;
            }
            void volume()
            {
                cout << "Volume of cuboid is : " << length*breadth*height << endl;
            }
};
int main()
{
    cuboid c;
    c.length=10;                   //able to access length and breadth because they are public variables
    c.breadth=5;                   // or else we have to use getters and setters
    c.height=3;
    c.display();
    c.show();
     c.area();
    c.volume();

    return 0;
}
