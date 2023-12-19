#include <iostream>

using namespace std;
struct cam
{
int front;
int rear;
};

struct phone
{
string name;
string processor;
float price;
cam camera;
};

int main()
{
phone redmi;
redmi.name="Note 7s";
redmi.price=11000;
redmi.camera.front=13;
redmi.camera.rear=48;
redmi.processor="Glheli 9.5";
cout << "Phone details " << "*****************\n" << endl;
    cout << "Phone model : " << redmi.name << endl;
    cout << "Processor : " << redmi.processor << endl;
    cout << "Camera front : " << redmi.camera.front << endl;
    cout << "Camera rear : " << redmi.camera.rear << endl;
    cout << "Price : " << redmi.price << endl;
    return 0;
}
